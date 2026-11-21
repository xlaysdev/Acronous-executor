/* Unwind@1801c20d0 @ 1801c20d0 */

void Unwind_1801c20d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  lVar2 = *(longlong *)(param_2 + 0x38);
  for (lVar4 = *(longlong *)(param_2 + 0x20); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    plVar3 = *(longlong **)(lVar2 + 0x18 + lVar4 * 0x28);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801c68a0(lVar2 + lVar4 * 0x28 + 0x18);
    }
  }
  return;
}


