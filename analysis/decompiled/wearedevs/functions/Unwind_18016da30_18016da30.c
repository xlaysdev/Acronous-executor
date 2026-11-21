/* Unwind@18016da30 @ 18016da30 */

void Unwind_18016da30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x58);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x67) = 0;
    FUN_1801876c0(param_2 + 0x58);
  }
  *(undefined1 *)(param_2 + 0x67) = 0;
  return;
}


