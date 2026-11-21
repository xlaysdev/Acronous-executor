/* Unwind@1801844c0 @ 1801844c0 */

void Unwind_1801844c0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(char *)(param_2 + 0x65) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x30);
    if (*plVar1 != 0) {
      FUN_18016e850(plVar1);
    }
    FUN_1801679a0(plVar1 + 3);
    plVar2 = (longlong *)plVar1[1];
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_1801638e0(plVar1 + 1);
      }
    }
    thunk_FUN_1801d3330(plVar1,0x78,8);
  }
  return;
}


