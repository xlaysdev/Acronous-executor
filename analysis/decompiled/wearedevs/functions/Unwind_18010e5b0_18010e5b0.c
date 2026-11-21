/* Unwind@18010e5b0 @ 18010e5b0 */

void Unwind_18010e5b0(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xe8),0x20,8);
  *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_2 + 0xff);
  uVar1 = **(undefined4 **)(param_2 + 0xe0);
  *(undefined4 *)(param_2 + 0x2c) = *(undefined4 *)((longlong)*(undefined4 **)(param_2 + 0xe0) + 3);
  *(undefined4 *)(param_2 + 0x29) = uVar1;
  *(undefined8 *)(param_2 + 0x30) = *(undefined8 *)(param_2 + 0xf0);
  FUN_18010dc80(param_2 + 0x28);
  return;
}


