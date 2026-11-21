/* Unwind@1801c5460 @ 1801c5460 */

void Unwind_1801c5460(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  FUN_1801c7680(lVar1);
  plVar2 = *(longlong **)(lVar1 + 0x110);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c64c0(lVar1 + 0x110);
  }
  return;
}


