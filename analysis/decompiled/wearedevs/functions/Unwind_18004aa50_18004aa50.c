/* Unwind@18004aa50 @ 18004aa50 */

void Unwind_18004aa50(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xae8);
  if (plVar1 == (longlong *)0x0) {
    return;
  }
  if ((*(byte *)(param_2 + 0xd8a) & 1) == 0) {
    return;
  }
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003cc40(param_2 + 0xae8);
  }
  return;
}


