/* Unwind@18010b4c0 @ 18010b4c0 */

void Unwind_18010b4c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0xee);
  if (*(longlong *)(param_2 + 0xe0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0xd0),*(longlong *)(param_2 + 0xe0) << 5,4);
  }
  *(byte *)(param_2 + 0xef) = bVar1 & 1;
  return;
}


