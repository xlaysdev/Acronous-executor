# Decompiled output

Generated automatically by the Acronous Executor DLL static-analysis workflow using Ghidra.

- `decompiled.c` is the complete aggregate of Ghidra-generated C-like pseudocode.
- `exports/` contains separate files for recognized exported functions: DllMain, initialize, attach, execute, and isAttached (when Ghidra identifies them by those names).
- `functions/` contains one `.c` file per successfully decompiled function, named with its function name and address.
- `decompilation-summary.txt` records function counts and export-file counts.
- `input-info.txt` records the input file path, SHA-256, and file identification.\n          - `metadata-strings.txt`, `metadata-imports.txt`, and `metadata-xrefs.txt` export defined strings, imported symbols, and cross-references for selected globals.

This is decompiler-generated pseudocode, not the original source. Names, types, and control flow are reverse-engineering interpretations and may be imperfect. Output is for static inspection; the workflow does not execute or modify the analyzed DLL.
