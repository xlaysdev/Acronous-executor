/* Unwind@1800838e0 @ 1800838e0 */

void Unwind_1800838e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x928);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x93d) = 1;
    FUN_18003dbb0(param_2 + 0x200);
  }
  *(undefined1 *)(param_2 + 0x93d) = 1;
  return;
}


