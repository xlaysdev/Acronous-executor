/* Unwind@1800c3030 @ 1800c3030 */

void Unwind_1800c3030(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  FUN_1800b9bd0(param_2 + 0x160);
  if (*(longlong *)(param_2 + 0x240) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x240);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003cc40(param_2 + 0x1a0);
    }
  }
  if ((*(ulonglong *)(param_2 + 0x228) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x210),*(longlong *)(param_2 + 0x228) * 2,2);
  }
  *(undefined8 *)(param_2 + 0x1f8) = *(undefined8 *)(param_2 + 0x1b0);
  *(undefined1 *)(param_2 + 0x24b) = 0;
  return;
}


