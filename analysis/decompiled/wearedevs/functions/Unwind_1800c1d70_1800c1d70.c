/* Unwind@1800c1d70 @ 1800c1d70 */

void Unwind_1800c1d70(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1800b9b40(param_2 + 0x40);
  if (*(longlong *)(param_2 + 0x248) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x248);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 0x1b0);
    }
  }
  if ((*(ulonglong *)(param_2 + 0x230) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x220),*(longlong *)(param_2 + 0x230) * 2,2);
  }
  *(undefined8 *)(param_2 + 0x208) = *(undefined8 *)(param_2 + 0x1c0);
  *(undefined1 *)(param_2 + 0x25b) = 0;
  return;
}


