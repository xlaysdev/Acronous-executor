/* Unwind@1800749d0 @ 1800749d0 */

void Unwind_1800749d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x210);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x247) = 1;
    FUN_18003ce90(param_2 + 0x210);
  }
  *(undefined1 *)(param_2 + 0x247) = 1;
  return;
}


