/* FUN_1801d3330 @ 1801d3330 */

void FUN_1801d3330(LPVOID param_1,undefined8 param_2,ulonglong param_3)

{
  HANDLE hHeap;
  
  if (0x10 < param_3) {
    param_1 = *(LPVOID *)((longlong)param_1 + -8);
  }
  hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001801d335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  HeapFree(hHeap,0,param_1);
  return;
}


