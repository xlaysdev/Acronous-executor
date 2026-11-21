/* Unwind@180071940 @ 180071940 */

void Unwind_180071940(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x1b8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x1c7) = 1;
    FUN_18003cc40(param_2 + 0x68);
  }
  *(undefined1 *)(param_2 + 0x1c7) = 1;
  return;
}


