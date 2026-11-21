/* Unwind@180049dc0 @ 180049dc0 */

void Unwind_180049dc0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xd50);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0xdd7) = 0;
    *(undefined1 *)(param_2 + 0xdd6) = 1;
    *(undefined1 *)(param_2 + 0xdd5) = 1;
    *(undefined1 *)(param_2 + 0xdd4) = 1;
    *(undefined1 *)(param_2 + 0xdd3) = 1;
    FUN_18003cc40(param_2 + 0xd50);
  }
  *(undefined1 *)(param_2 + 0xdd7) = 0;
  *(undefined1 *)(param_2 + 0xdd6) = 1;
  *(undefined1 *)(param_2 + 0xdd5) = 1;
  *(undefined1 *)(param_2 + 0xdd4) = 1;
  *(undefined1 *)(param_2 + 0xdd3) = 1;
  return;
}


