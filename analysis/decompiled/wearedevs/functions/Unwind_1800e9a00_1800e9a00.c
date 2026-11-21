/* Unwind@1800e9a00 @ 1800e9a00 */

void Unwind_1800e9a00(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x5f8) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5e0),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x5f8) + 0x10));
  }
  *(undefined8 *)(param_2 + 0x500) = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x4f8) = *(undefined8 *)(param_2 + 0x5e8);
  return;
}


