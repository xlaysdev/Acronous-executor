/* Unwind@1801c5550 @ 1801c5550 */

void Unwind_1801c5550(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 0x28);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(lVar1 + 0x28);
  }
  return;
}


