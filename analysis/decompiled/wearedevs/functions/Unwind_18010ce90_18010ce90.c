/* Unwind@18010ce90 @ 18010ce90 */

void Unwind_18010ce90(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x70) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x68),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x70) + 0x10));
  }
  plVar2 = *(longlong **)(param_2 + 0x58);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801029b0(param_2 + 0x58);
  }
  return;
}


