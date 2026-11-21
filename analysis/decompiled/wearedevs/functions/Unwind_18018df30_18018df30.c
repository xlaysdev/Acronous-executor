/* Unwind@18018df30 @ 18018df30 */

void Unwind_18018df30(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x40);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180187b30(param_2 + 0x68);
  }
  return;
}


