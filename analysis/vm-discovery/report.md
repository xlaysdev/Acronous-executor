# WeAreDevs DLL — static reverse-engineering findings

**Input:** wearedevs.dll  
**SHA-256:** ce5cd77590d8813e1cc1063b4a51dc4388e09e88fffc857cbf50aab7226f3f3e  
**Architecture:** PE32+ AMD64  
**Analysis:** Ghidra-generated pseudocode; no DLL execution.

## Executive conclusion

The analyzed DLL is best characterized, based on the evidence inspected so far, as a Rust-compiled WeAreDevs API wrapper/bridge. The available exports do not establish that it embeds a Luau VM. In particular, no positively identified Luau state, parser/compiler, bytecode loader, prototype, closure, or VM-dispatch implementation has been found in the reviewed exports and helper functions.

The strongest current hypothesis is that execute(char*) forwards a UTF-8 script buffer into an internal output/transport abstraction. The destination and protocol remain unresolved. A dynamically resolved function path exists, but the exact imported module/export names behind it have not yet been decoded.

Absence of Lua-named symbols is not proof of absence: the binary is stripped/optimized and most functions have generic addresses. A positive VM identification requires structural evidence, not just string searches.

## Confirmed facts

- Ghidra reported 9,815 functions encountered, 9,753 successfully decompiled, 62 failures, and 5 named exports.
- DllMain logs "WeAreDevs API wrapper loaded!".
- isAttached references a Roblox window title and the process name RobloxPlayerBeta.exe; it calls FindWindowA, IsWindowVisible, and performs a region/module-style scan using an indirect callback.
- The PE import inventory previously extracted includes process-inspection APIs such as OpenProcess, ReadProcessMemory, VirtualQueryEx, and NtQueryInformationProcess, plus FindWindowA, IsWindowVisible, and GetProcAddress.
- execute checks for a non-null C string, obtains its length, constructs an internal string/buffer, and passes its pointer/length to FUN_180036130.
- FUN_1801f2ab0 is consistent with a UTF-8 validity scanner. FUN_1801ed660 allocates/copies a byte string and routes invalid UTF-8 through an error path. These are string/runtime utilities, not evidence of a Luau parser.
- FUN_180036130 uses a global state at DAT_1802fb000 / DAT_1802fb008. In the normal-looking branch it copies bytes from that global object and invokes a function pointer stored in the same state. In the error/fallback branch it calls FUN_1800293e0, which resolves a named function with GetProcAddress.
- The error text around FUN_180036130 is consistent with a Rust I/O error ("failed to write whole buffer"). This supports an output/stream abstraction, but does not identify whether the underlying destination is a pipe, file, socket, or another host-provided callback.
- attach enters FUN_180035f40, then a group of Rust runtime/thread-local/reentrant-lock/formatting functions. The reviewed pseudocode does not itself show a direct OpenProcess or WriteProcessMemory call.
- initialize initializes internal Rust objects and handles a Result::unwrap() failure path. It does not expose a recognizable Lua/Luau initialization sequence in the decompilation reviewed.

## Export-by-export interpretation

### DllMain
Only emits the wrapper-loaded diagnostic when process attach reason is passed, then returns success.

### initialize
Calls FUN_180172ee0, checks a Rust-style result discriminator, copies several fields into a local object, then calls FUN_1800344b0 and FUN_180029bb0. The exact initialized subsystem is not identified yet.

### attach
Calls FUN_180035f40 to obtain a result-like object, then passes it and a callback (LAB_18002a120) into FUN_1801d72f0. The latter uses thread-local state, a reentrant lock, and formatting/dispatch helpers. Treating this as proof of injection or VM attachment would be unjustified.

### execute
Copies the supplied C string into an internal representation and forwards pointer/length to FUN_180036130. The function does not visibly compile or interpret Luau bytecode in its own body.

### isAttached
Looks for a Roblox window/process condition and performs a memory-region/module scan. A positive result is returned through FUN_180035e50, which consults the same global state used by execute. This links attachment detection to the wrapper's global transport/runtime state, but the exact meaning of the state is still unknown.

## Important helper interpretations

| Function | Evidence-based interpretation |
|---|---|
| FUN_1801f2ab0 | UTF-8 validation/scanning logic |
| FUN_1801ed660 | Allocate/copy a string-like buffer; validate encoding |
| FUN_1801ed500 | Clone/copy a byte buffer from a Rust-style vector/string layout |
| FUN_180036130 | Write/dispatch a supplied byte buffer through a global callback/stream-like state |
| FUN_1800293e0 | Resolve a function name using GetProcAddress |
| FUN_180035f40 | Acquire/construct a global-state result, with dynamically resolved API fallback |
| FUN_180035e50 | Query the global-state/stream-like object used by execute |
| FUN_1801d72f0 and callees | Rust runtime/thread-local/reentrant-lock and formatting/dispatch machinery |

## Luau VM discovery status

Not identified yet. The reviewed material does not contain a confirmed:
- lua_State-like state layout,
- Luau bytecode chunk signature/parser,
- opcode dispatch loop,
- prototype/closure/upvalue structures,
- constant-table or GC implementation,
- Luau compiler/parser entry point,
- recognizable Luau VM API surface.

The strings and symbols searched to date did not return a reliable Lua/Luau hit. This is a negative search result, not a definitive exclusion.

## Highest-value next static-analysis work

1. Export the complete PE import table with ordinals and DLL names, and map every imported API to its IAT slot and code references.
2. Extract all ASCII and UTF-16 strings with file offsets/RVAs, then map cross-references to strings such as WRD.dll, process names, error messages, and dynamically resolved API names.
3. Resolve the bytes at DAT_180206980, DAT_18020698a, DAT_180206995, DAT_18020699b, and DAT_1802069be; these feed the dynamic GetProcAddress path.
4. Trace all readers/writers of DAT_1802fb000, DAT_1802fb008, and DAT_1802fb010 to identify the transport object's producer, consumer, and lifecycle.
5. Build a call graph around the five exports and the process APIs. Prioritize functions that call OpenProcess, ReadProcessMemory, VirtualQueryEx, and NtQueryInformationProcess.
6. Search for VM structure signatures and opcode-dispatch patterns across the full function set. If the VM is external, identify the boundary and the protocol rather than assuming the wrapper contains it.

## Limitations

Ghidra pseudocode is an approximation. Function names, local types, object layouts, and control flow may be imperfect. This report intentionally separates observed behavior from hypotheses. No runtime behavior has been validated by executing the DLL.
