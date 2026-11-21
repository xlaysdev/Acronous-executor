/* Unwind@180041f70 @ 180041f70 */

void Unwind_180041f70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(*(longlong *)(param_2 + 0x30) + 0x198);
  if (plVar1 != (longlong *)0x0) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cf20(*(longlong *)(param_2 + 0x30) + 0x198);
    }
  }
  return;
}


