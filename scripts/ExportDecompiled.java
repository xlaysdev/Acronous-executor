// Ghidra headless post-script: export aggregate and per-function pseudocode for static review.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.HashSet;
import java.util.Iterator;
import java.util.Set;

public class ExportDecompiled extends ghidra.app.script.GhidraScript {
    private static final Set<String> EXPORT_NAMES = new HashSet<String>();
    static {
        EXPORT_NAMES.add("DllMain");
        EXPORT_NAMES.add("initialize");
        EXPORT_NAMES.add("attach");
        EXPORT_NAMES.add("execute");
        EXPORT_NAMES.add("isAttached");
    }

    private String safeName(String value) {
        String cleaned = value.replaceAll("[^A-Za-z0-9_.-]", "_");
        return cleaned.length() == 0 ? "unnamed" : cleaned;
    }

    private void writeFunction(File target, String header, String code) throws IOException {
        try (BufferedWriter out = new BufferedWriter(new FileWriter(target))) {
            out.write(header);
            out.write("\n");
            out.write(code);
            out.write("\n");
        }
    }

    @Override
    public void run() throws Exception {
        String outputDir = getScriptArgs().length > 0 ? getScriptArgs()[0] : "reports";
        File root = new File(outputDir);
        File functionsDir = new File(root, "functions");
        File exportsDir = new File(root, "exports");
        if (!functionsDir.exists() && !functionsDir.mkdirs())
            throw new IOException("Cannot create functions directory: " + functionsDir);
        if (!exportsDir.exists() && !exportsDir.mkdirs())
            throw new IOException("Cannot create exports directory: " + exportsDir);

        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        if (!decompiler.openProgram(currentProgram))
            throw new IOException("Ghidra decompiler could not open program");

        int total = 0, completed = 0, failed = 0, exported = 0;
        try (BufferedWriter aggregate = new BufferedWriter(new FileWriter(new File(root, "decompiled.c")))) {
            aggregate.write("/* Ghidra decompiler output. Static analysis only. */\n");
            aggregate.write("/* Program: " + currentProgram.getName() + " */\n");
            aggregate.write("/* Per-function files are in functions/; named exports are in exports/. */\n");

            Iterator<Function> iterator = currentProgram.getFunctionManager().getFunctions(true).iterator();
            while (iterator.hasNext() && !monitor.isCancelled()) {
                Function function = iterator.next();
                total++;
                String name = safeName(function.getName());
                String address = function.getEntryPoint().toString().replace(':', '_');
                String filename = name + "_" + address + ".c";
                String header = "/* " + function.getName() + " @ " + function.getEntryPoint() + " */";
                DecompileResults result = decompiler.decompileFunction(function, 60, monitor);

                aggregate.write("\n/* ====================================================== */\n");
                aggregate.write(header + "\n");
                if (result != null && result.decompileCompleted() && result.getDecompiledFunction() != null) {
                    String code = result.getDecompiledFunction().getC();
                    aggregate.write(code);
                    aggregate.write("\n");
                    writeFunction(new File(functionsDir, filename), header, code);
                    if (EXPORT_NAMES.contains(function.getName())) {
                        writeFunction(new File(exportsDir, name + ".c"), header, code);
                        exported++;
                    }
                    completed++;
                } else {
                    String error = result == null ? "no result" : result.getErrorMessage();
                    aggregate.write("/* Decompilation failed: " + error + " */\n");
                    failed++;
                }
            }
        } finally {
            decompiler.dispose();
        }

        try (BufferedWriter summary = new BufferedWriter(new FileWriter(new File(root, "decompilation-summary.txt")))) {
            summary.write("Program: " + currentProgram.getName() + "\n");
            summary.write("Functions encountered: " + total + "\n");
            summary.write("Successfully decompiled: " + completed + "\n");
            summary.write("Failed: " + failed + "\n");
            summary.write("Named exports written: " + exported + "\n");
        }

        println("Exported " + completed + " of " + total + " functions; " + failed +
            " failed; " + exported + " named exports. Output: " + root.getAbsolutePath());
    }
}
