// Ghidra headless post-script: export strings, imports, and xrefs for selected globals.
import ghidra.program.model.listing.Data;
import ghidra.program.model.listing.Function;
import ghidra.program.model.symbol.ExternalLocation;
import ghidra.program.model.symbol.Reference;
import ghidra.program.model.address.Address;
import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.util.Iterator;

public class ExportMetadata extends ghidra.app.script.GhidraScript {
    private void line(BufferedWriter out, String value) throws Exception {
        out.write(value);
        out.newLine();
    }

    @Override
    public void run() throws Exception {
        String outputDir = getScriptArgs().length > 0 ? getScriptArgs()[0] : "reports";
        File root = new File(outputDir);
        if (!root.exists() && !root.mkdirs()) throw new Exception("Cannot create " + root);

        try (BufferedWriter out = new BufferedWriter(new FileWriter(new File(root, "metadata-strings.txt")))) {
            Iterator<Data> it = currentProgram.getListing().getDefinedData(true).iterator();
            while (it.hasNext() && !monitor.isCancelled()) {
                Data d = it.next();
                String type = d.getDataType().getName().toLowerCase();
                if (type.contains("string") || type.contains("unicode") || type.contains("char")) {
                    Object value = d.getValue();
                    if (value != null) line(out, d.getAddress() + "\t" + d.getDataType().getName() + "\t" + value.toString().replace("\n", "\\n").replace("\r", "\\r"));
                }
            }
        }

        try (BufferedWriter out = new BufferedWriter(new FileWriter(new File(root, "metadata-imports.txt")))) {
            Iterator<ExternalLocation> it = currentProgram.getExternalManager().getExternalLocations();
            while (it.hasNext()) {
                ExternalLocation loc = it.next();
                line(out, loc.getAddress() + "\t" + loc.getLibraryName() + "\t" + loc.getLabel());
            }
        }

        String[] targets = {"1802fb000", "1802fb008", "1802fb010", "180206980", "18020698a", "180206995", "18020699b", "1802069be"};
        try (BufferedWriter out = new BufferedWriter(new FileWriter(new File(root, "metadata-xrefs.txt")))) {
            for (String target : targets) {
                Address address = currentProgram.getAddressFactory().getDefaultAddressSpace().getAddress(target);
                line(out, "TARGET " + address);
                for (Reference ref : currentProgram.getReferenceManager().getReferencesTo(address)) {
                    Function fn = currentProgram.getFunctionManager().getFunctionContaining(ref.getFromAddress());
                    line(out, "  " + ref.getFromAddress() + "\t" + ref.getReferenceType() + "\t" + (fn == null ? "<no function>" : fn.getName() + " @ " + fn.getEntryPoint()));
                }
            }
        }
        println("Exported strings, imports, and selected global xrefs to " + root.getAbsolutePath());
    }
}
