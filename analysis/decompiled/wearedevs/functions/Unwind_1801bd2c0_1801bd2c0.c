/* Unwind@1801bd2c0 @ 1801bd2c0 */

void Unwind_1801bd2c0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  
  if (**(longlong **)(param_2 + 0x830) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x838) + 0x50),
                        **(longlong **)(param_2 + 0x830) << 5,8);
  }
  lVar1 = *(longlong *)(param_2 + 0x838);
  *(undefined8 *)(lVar1 + 0x48) = 0;
  *(undefined8 *)(lVar1 + 0x50) = 8;
  *(undefined8 *)(lVar1 + 0x58) = 0;
  return;
}


