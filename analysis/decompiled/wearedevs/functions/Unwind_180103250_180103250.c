/* Unwind@180103250 @ 180103250 */

void Unwind_180103250(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x1b0),0x20,8);
  uVar1 = (*(undefined8 **)(param_2 + 0x1a8))[1];
  *(undefined8 *)(param_2 + 0xf0) = **(undefined8 **)(param_2 + 0x1a8);
  *(undefined8 *)(param_2 + 0xf8) = uVar1;
  *(undefined1 *)(param_2 + 0x1bf) = 1;
  return;
}


