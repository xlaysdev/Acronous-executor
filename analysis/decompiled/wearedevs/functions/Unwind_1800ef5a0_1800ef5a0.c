/* Unwind@1800ef5a0 @ 1800ef5a0 */

void Unwind_1800ef5a0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if ((*(ulonglong *)(lVar1 + 0x1a0) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0x1a8),*(ulonglong *)(lVar1 + 0x1a0) * 2,2);
  }
  plVar2 = *(longlong **)(lVar1 + 0x200);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0x200);
    }
  }
  return;
}


