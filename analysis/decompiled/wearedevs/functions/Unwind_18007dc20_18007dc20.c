/* Unwind@18007dc20 @ 18007dc20 */

void Unwind_18007dc20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x680);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(char *)(param_2 + 0x6ab) = (char)*(undefined8 *)(param_2 + 0x678);
    *(char *)(param_2 + 0x6aa) = (char)*(undefined8 *)(param_2 + 0x698);
    *(undefined1 *)(param_2 + 0x6a9) = 0;
    FUN_18003cda0(param_2 + 0x680);
  }
  *(char *)(param_2 + 0x6ab) = (char)*(undefined8 *)(param_2 + 0x678);
  *(char *)(param_2 + 0x6aa) = (char)*(undefined8 *)(param_2 + 0x698);
  *(undefined1 *)(param_2 + 0x6a9) = 0;
  return;
}


