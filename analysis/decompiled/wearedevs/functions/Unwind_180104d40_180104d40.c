/* Unwind@180104d40 @ 180104d40 */

void Unwind_180104d40(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x38) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x48),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10));
  }
  FUN_180067d30(*(longlong *)(param_2 + 0x40) + 0x18);
  return;
}


