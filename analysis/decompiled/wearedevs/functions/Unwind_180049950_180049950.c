/* Unwind@180049950 @ 180049950 */

void Unwind_180049950(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xdb0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0xdd7) = 1;
    *(undefined1 *)(param_2 + 0xdd6) = 1;
    *(undefined1 *)(param_2 + 0xdd5) = 1;
    *(undefined1 *)(param_2 + 0xdd4) = 1;
    *(undefined1 *)(param_2 + 0xdd3) = 1;
    FUN_18003cc40(param_2 + 0x620);
  }
  *(undefined1 *)(param_2 + 0xdd7) = 1;
  *(undefined1 *)(param_2 + 0xdd6) = 1;
  *(undefined1 *)(param_2 + 0xdd5) = 1;
  *(undefined1 *)(param_2 + 0xdd4) = 1;
  *(undefined1 *)(param_2 + 0xdd3) = 1;
  return;
}


