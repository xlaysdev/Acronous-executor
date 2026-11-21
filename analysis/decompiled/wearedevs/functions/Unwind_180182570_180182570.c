/* Unwind@180182570 @ 180182570 */

void Unwind_180182570(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  lVar2 = *(longlong *)(param_2 + 0x50);
  for (lVar4 = *(longlong *)(param_2 + 0x58); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    plVar3 = *(longlong **)(lVar2 + lVar4 * 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801639b0(lVar2 + lVar4 * 8);
    }
  }
  return;
}


