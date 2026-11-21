/* Unwind@1800b6540 @ 1800b6540 */

void Unwind_1800b6540(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x2790);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003de40(param_2 + 0x2790);
    }
  }
  return;
}


