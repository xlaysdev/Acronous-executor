/* Unwind@1800ba320 @ 1800ba320 */

void Unwind_1800ba320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x28);
  if ((*(ulonglong *)(lVar1 + 0x98) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar1 + 0xa0),*(ulonglong *)(lVar1 + 0x98) * 2,2);
  }
  plVar2 = *(longlong **)(lVar1 + 0xf8);
  if (plVar2 != (longlong *)0x0) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003cc40(lVar1 + 0xf8);
    }
  }
  return;
}


