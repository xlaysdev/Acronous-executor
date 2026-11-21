/* thunk_FUN_1801d3370 @ 180038f70 */

void * thunk_FUN_1801d3370(void *param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4)

{
  LPVOID lpMem;
  HANDLE pvVar1;
  void *pvVar2;
  ulonglong uVar3;
  longlong lVar4;
  
  if (param_3 < 0x11) {
    pvVar1 = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001801d33aa. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    pvVar2 = HeapReAlloc(pvVar1,0,param_1,param_4);
    return pvVar2;
  }
  pvVar2 = (void *)0x0;
  uVar3 = FUN_1801dc500(param_1,0,param_3 + param_4);
  if (uVar3 != 0) {
    lVar4 = param_3 - (param_3 - 1 & uVar3);
    pvVar2 = (void *)(uVar3 + lVar4);
    *(ulonglong *)((uVar3 - 8) + lVar4) = uVar3;
    if (param_4 < param_2) {
      param_2 = param_4;
    }
    memcpy(pvVar2,param_1,param_2);
    lpMem = *(LPVOID *)((longlong)param_1 + -8);
    pvVar1 = GetProcessHeap();
    HeapFree(pvVar1,0,lpMem);
  }
  return pvVar2;
}


