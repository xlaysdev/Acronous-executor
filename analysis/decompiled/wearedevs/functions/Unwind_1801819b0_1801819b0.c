/* Unwind@1801819b0 @ 1801819b0 */

void Unwind_1801819b0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar2 = *(longlong *)(param_2 + 0x28);
  for (lVar4 = *(longlong *)(param_2 + 0x20); lVar4 != lVar2; lVar4 = lVar4 + 1) {
    lVar1 = *(longlong *)(param_2 + 0x30) + lVar4 * 0x10;
    plVar3 = *(longlong **)(*(longlong *)(param_2 + 0x30) + lVar4 * 0x10);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_180163890(lVar1);
    }
    plVar3 = *(longlong **)(lVar1 + 8);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801638e0(lVar1 + 8);
    }
  }
  return;
}


