/* Unwind@1801e4e20 @ 1801e4e20 */

void Unwind_1801e4e20(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x28),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  if (*(longlong *)(param_2 + 0x38) != 0) {
    plVar2 = *(longlong **)(param_2 + 0x38);
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801e38e0(param_2 + 0x20);
    }
  }
  return;
}


