/* Unwind@18004a540 @ 18004a540 */

void Unwind_18004a540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x9a0);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      *(char *)(param_2 + 0xda8) = (char)*(undefined4 *)(param_2 + 0xd68);
      *(char *)(param_2 + 0xda7) = (char)*(undefined4 *)(param_2 + 0xdb0);
      *(char *)(param_2 + 0xda6) = (char)*(undefined4 *)(param_2 + 0xd94);
      FUN_18003cc40(param_2 + 0x9a0);
    }
  }
  *(char *)(param_2 + 0xda8) = (char)*(undefined4 *)(param_2 + 0xd68);
  *(char *)(param_2 + 0xda7) = (char)*(undefined4 *)(param_2 + 0xdb0);
  *(char *)(param_2 + 0xda6) = (char)*(undefined4 *)(param_2 + 0xd94);
  return;
}


