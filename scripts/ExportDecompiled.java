// Ghidra headless post-script: export function pseudocode for static review.
import ghidra.app.decompiler.DecompInterface;
import ghidra.app.decompiler.DecompileOptions;
import ghidra.app.decompiler.DecompileResults;
import ghidra.program.model.listing.Function;
import ghidra.util.task.ConsoleTaskMonitor;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Iterator;

public class ExportDecompiled extends ghidra.app.script.GhidraScript {
    @Override
    public void run() throws Exception {
        String outputDir = getScriptArgs().length > 0
            ? getScriptArgs()[0] : "reports";
        File dir = new File(outputDir);
        if (!dir.exists() && !dir.mkdirs()) {
            throw new IOException("Cannot create report directory: " + dir);
        }

        File output = new File(dir, "decompiled.c");
        DecompInterface decompiler = new DecompInterface();
        decompiler.setOptions(new DecompileOptions());
        decompiler.openProgram(currentProgram);

        int total = 0;
        int completed = 0;
        try (BufferedWriter writer = new BufferedWriter(new FileWriter(output))) {
            writer.write("/* Ghidra decompiler output. Static analysis only. */\n");
            writer.write("/* Program: " + currentProgram.getName() + " */\n\n");

            Iterator<Function> functions =
                currentProgram.getFunctionManager().getFunctions(true).iterator();

            while (functions.hasNext() && !monitor.isCancelled()) {
                Function function = functions.next();
                total++;
                writer.write("\n/* ====================================================== */\n");
                writer.write("/* " + function.getName() + " @ " +
                    function.getEntryPoint() + " */\n");
                DecompileResults result =
                    decompiler.decompileFunction(function, 60, monitor);
                if (result != null && result.decompileCompleted() &&
                    result.getDecompiledFunction() != null) {
                    writer.write(result.getDecompiledFunction().getC());
                    writer.write("\n");
                    completed++;
                } else {
                    writer.write("/* Decompilation failed: " +
                        (result == null ? "no result" : result.getErrorMessage()) +
                        " */\n");
                }
            }
        } finally {
            decompiler.dispose();
        }

        println("Exported pseudocode for " + completed + " of " + total +
            " functions to " + output.getAbsolutePath());
    }
}
