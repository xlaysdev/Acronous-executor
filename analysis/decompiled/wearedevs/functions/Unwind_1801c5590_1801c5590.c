/* Unwind@1801c5590 @ 1801c5590 */

void Unwind_1801c5590(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  plVar2 = *(longlong **)(lVar1 + 0x58);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c64c0(lVar1 + 0x58);
  }
  return;
}


