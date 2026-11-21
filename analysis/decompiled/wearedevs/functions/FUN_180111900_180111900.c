/* FUN_180111900 @ 180111900 */

void FUN_180111900(LPVOID param_1)

{
  HANDLE hHeap;
  
  if (param_1 == (LPVOID)0x0) {
    return;
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x000180111920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}


