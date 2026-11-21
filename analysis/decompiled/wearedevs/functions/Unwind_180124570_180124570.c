/* Unwind@180124570 @ 180124570 */

void Unwind_180124570(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x30) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(param_2 + 0x20);
    }
  }
  FUN_18003b710(*(undefined8 *)(param_2 + 0x28));
  return;
}


