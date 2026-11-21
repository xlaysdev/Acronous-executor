/* Unwind@180049780 @ 180049780 */

void Unwind_180049780(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0xdb0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(char *)(param_2 + 0xdaf) = (char)*(undefined4 *)(param_2 + 0xd94);
    *(undefined1 *)(param_2 + 0xdae) = 0;
    FUN_18003cc40(param_2 + 0x3e0);
  }
  *(char *)(param_2 + 0xdaf) = (char)*(undefined4 *)(param_2 + 0xd94);
  *(undefined1 *)(param_2 + 0xdae) = 0;
  return;
}


