/* FUN_1801dabe0 @ 1801dabe0 */

void FUN_1801dabe0(undefined8 param_1,undefined8 param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  
  hModule = GetModuleHandleA("kernel32");
  if (hModule == (HMODULE)0x0) {
    PTR_FUN_1802fd5e0 = FUN_1801dac50;
  }
  else {
    pFVar1 = GetProcAddress(hModule,"SetThreadDescription");
    PTR_FUN_1802fd5e0 = FUN_1801dac50;
    if (pFVar1 != (FARPROC)0x0) {
      PTR_FUN_1802fd5e0 = pFVar1;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001801dac3f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_1802fd5e0)(param_1,param_2);
  return;
}


