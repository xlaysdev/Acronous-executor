/* Unwind@1800c2910 @ 1800c2910 */

void Unwind_1800c2910(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x46f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x458);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003d7f0(param_2 + 0x458);
    }
  }
  return;
}


