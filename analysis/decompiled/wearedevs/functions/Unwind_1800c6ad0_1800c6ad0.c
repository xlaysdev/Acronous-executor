/* Unwind@1800c6ad0 @ 1800c6ad0 */

void Unwind_1800c6ad0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x28) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x30),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x10));
  }
  FUN_1800c7e10(*(longlong *)(param_2 + 0x38) + 0x198);
  return;
}


