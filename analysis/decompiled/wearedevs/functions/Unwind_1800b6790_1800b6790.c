/* Unwind@1800b6790 @ 1800b6790 */

void Unwind_1800b6790(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  lVar1 = *(longlong *)(*(longlong *)(param_2 + 0x2f08) + 8);
  if (lVar1 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2f00),lVar1,
                        *(undefined8 *)(*(longlong *)(param_2 + 0x2f08) + 0x10));
  }
  *(undefined8 *)(param_2 + 0x2e98) = *(undefined8 *)(param_2 + 0x2f58);
  *(undefined8 *)(param_2 + 0x2e90) = *(undefined8 *)(param_2 + 0x2f80);
  *(undefined8 *)(param_2 + 0x2e88) = *(undefined8 *)(param_2 + 0x2f68);
  return;
}


