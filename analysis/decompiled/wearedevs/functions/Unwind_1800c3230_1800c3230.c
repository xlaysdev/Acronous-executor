/* Unwind@1800c3230 @ 1800c3230 */

void Unwind_1800c3230(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x24d) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x238);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d7f0(param_2 + 0x238);
    }
  }
  return;
}


