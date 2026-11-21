/* FUN_1801e3970 @ 1801e3970 */

void FUN_1801e3970(undefined8 *param_1)

{
  longlong *plVar1;
  LPVOID lpMem;
  undefined1 *puVar2;
  longlong lVar3;
  HANDLE hHeap;
  
  lpMem = (LPVOID)*param_1;
  puVar2 = *(undefined1 **)((longlong)lpMem + 0x18);
  if (puVar2 != (undefined1 *)0x0) {
    lVar3 = *(longlong *)((longlong)lpMem + 0x20);
    *puVar2 = 0;
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(puVar2,lVar3,1);
    }
  }
  if (lpMem != (LPVOID)0xffffffffffffffff) {
    LOCK();
    plVar1 = (longlong *)((longlong)lpMem + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      hHeap = GetProcessHeap();
                    /* WARNING: Could not recover jumptable at 0x0001801e39bf. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      HeapFree(hHeap,0,lpMem);
      return;
    }
  }
  return;
}


