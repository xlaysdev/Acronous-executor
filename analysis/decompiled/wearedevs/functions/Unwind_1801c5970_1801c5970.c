/* Unwind@1801c5970 @ 1801c5970 */

void Unwind_1801c5970(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong lVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  lVar2 = *(longlong *)(param_2 + 0x40);
  for (lVar4 = *(longlong *)(param_2 + 0x30); lVar4 != lVar1; lVar4 = lVar4 + 1) {
    plVar3 = *(longlong **)(lVar2 + lVar4 * 0x20);
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      FUN_1801c68a0(lVar4 * 0x20 + lVar2);
    }
  }
  return;
}


