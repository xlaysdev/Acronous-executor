/* FUN_18003a570 @ 18003a570 */

void FUN_18003a570(LPVOID param_1,longlong param_2)

{
  longlong *plVar1;
  HANDLE hHeap;
  ulonglong uVar2;
  
  if (param_1 != (LPVOID)0xffffffffffffffff) {
    LOCK();
    plVar1 = (longlong *)((longlong)param_1 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      uVar2 = 8;
      if (8 < *(ulonglong *)(param_2 + 0x10)) {
        uVar2 = *(ulonglong *)(param_2 + 0x10);
      }
      if ((-uVar2 & *(longlong *)(param_2 + 8) + uVar2 + 0xf) != 0) {
        if (0x10 < uVar2) {
          param_1 = *(LPVOID *)((longlong)param_1 + -8);
        }
        hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001801d335c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        HeapFree(hHeap,0,param_1);
        return;
      }
    }
  }
  return;
}


