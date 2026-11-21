/* Unwind@1800c2720 @ 1800c2720 */

void Unwind_1800c2720(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1800ba0a0(param_2 + 0x30);
  if (*(longlong *)(param_2 + 0x460) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x460);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 0x3b0);
    }
  }
  if ((*(ulonglong *)(param_2 + 0x448) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x428),*(longlong *)(param_2 + 0x448) * 2,2);
  }
  *(undefined8 *)(param_2 + 0x410) = *(undefined8 *)(param_2 + 0x3c0);
  *(undefined1 *)(param_2 + 0x46b) = 0;
  return;
}


