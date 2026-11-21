/* Unwind@18017d300 @ 18017d300 */

void Unwind_18017d300(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x104) != '\0') {
    FUN_18017db00(param_2 + 0x40);
  }
  plVar1 = *(longlong **)(param_2 + 0xe8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_1801e3850(param_2 + 0xe8);
  }
  return;
}


