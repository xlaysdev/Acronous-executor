/* Unwind@1800dfc20 @ 1800dfc20 */

void Unwind_1800dfc20(undefined8 param_1,longlong param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  
  uVar1 = *(ulonglong *)(*(longlong *)(param_2 + 0x28) + 0xa0);
  if ((uVar1 & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0xa8),uVar1 * 2,2);
  }
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x28) + 0x100);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(*(longlong *)(param_2 + 0x28) + 0x100);
    }
  }
  return;
}


