/* Unwind@180183720 @ 180183720 */

void Unwind_180183720(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x398);
  FUN_180179fd0(param_2 + 0x330);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180162f80(param_2 + 0x3b8);
  }
  *(undefined1 *)(param_2 + 0x472) = 0;
  *(undefined1 *)(param_2 + 0x471) = 0;
  *(undefined1 *)(param_2 + 0x470) = 0;
  return;
}


