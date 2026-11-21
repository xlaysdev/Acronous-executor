/* Unwind@180175770 @ 180175770 */

void Unwind_180175770(undefined8 param_1,ulonglong param_2)

{
  longlong *plVar1;
  
  param_2 = param_2 & 0xffffffffffffff80;
  if (*(char *)(param_2 + 0x57) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x70);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801639b0(param_2 + 0x70);
    }
  }
  return;
}


