/* Unwind@18017b740 @ 18017b740 */

void Unwind_18017b740(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x460);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x46b) = 1;
    FUN_180163ab0(param_2 + 0x2f0);
  }
  *(undefined1 *)(param_2 + 0x46b) = 1;
  return;
}


