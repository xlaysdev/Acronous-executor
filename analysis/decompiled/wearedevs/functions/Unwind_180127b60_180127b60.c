/* Unwind@180127b60 @ 180127b60 */

void Unwind_180127b60(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x50);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x67) = 1;
    FUN_18003cd00(param_2 + 0x38);
  }
  *(undefined1 *)(param_2 + 0x67) = 1;
  return;
}


