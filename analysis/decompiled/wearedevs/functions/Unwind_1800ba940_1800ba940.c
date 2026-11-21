/* Unwind@1800ba940 @ 1800ba940 */

void Unwind_1800ba940(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x30);
  plVar2 = *(longlong **)(lVar1 + 8);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180187b30(lVar1 + 8);
  }
  return;
}


