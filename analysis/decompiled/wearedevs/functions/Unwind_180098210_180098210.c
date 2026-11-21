/* Unwind@180098210 @ 180098210 */

void Unwind_180098210(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x30) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x38),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 0x10));
  }
  plVar2 = *(longlong **)(*(longlong *)(param_2 + 0x40) + 0x260);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_18003cc40(*(longlong *)(param_2 + 0x40) + 0x260);
  }
  return;
}


