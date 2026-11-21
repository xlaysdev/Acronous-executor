/* Unwind@1800b0010 @ 1800b0010 */

void Unwind_1800b0010(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  *(undefined1 *)(lVar1 + 0x298) = 0;
  plVar2 = *(longlong **)(lVar1 + 0x1a0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(lVar1 + 0x1a0);
  }
  return;
}


