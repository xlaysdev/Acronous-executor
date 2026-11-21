/* Unwind@1800a4f10 @ 1800a4f10 */

void Unwind_1800a4f10(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x88);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dcd0(param_2 + 0x20);
  }
  plVar1 = *(longlong **)(param_2 + 0x80);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dcd0((undefined8 *)(param_2 + 0x80));
  }
  return;
}


