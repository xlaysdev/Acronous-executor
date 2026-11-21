/* Unwind@1800ea350 @ 1800ea350 */

void Unwind_1800ea350(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x5d0) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x5d8),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x5d0) + 0x10));
  }
  *(undefined8 *)(param_2 + 0x5c0) = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x5b8) = *(undefined8 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_2 + 0x5b0) = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_2 + 0x5a8) = *(undefined8 *)(param_2 + 0x5e8);
  return;
}


