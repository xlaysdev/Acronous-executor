/* Unwind@1801285a0 @ 1801285a0 */

void Unwind_1801285a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  plVar1 = *(longlong **)(param_2 + 0x70);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    *(undefined1 *)(param_2 + 0x7f) = 1;
    FUN_18003cd00(param_2 + 0x38);
  }
  *(undefined1 *)(param_2 + 0x7f) = 1;
  return;
}


