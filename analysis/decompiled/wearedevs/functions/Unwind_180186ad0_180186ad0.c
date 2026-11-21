/* Unwind@180186ad0 @ 180186ad0 */

void Unwind_180186ad0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  if (*(longlong *)(param_2 + 0x80) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x78),*(longlong *)(param_2 + 0x80) << 5,4);
  }
  *(undefined8 *)(param_2 + 0x68) = uVar1;
  return;
}


