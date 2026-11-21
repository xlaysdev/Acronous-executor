/* Unwind@180123090 @ 180123090 */

void Unwind_180123090(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x12f) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0xf0);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_18003cc40(param_2 + 0xf0);
      }
    }
    plVar1 = *(longlong **)(param_2 + 0x118);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18013bb80(param_2 + 0x118);
    }
  }
  return;
}


