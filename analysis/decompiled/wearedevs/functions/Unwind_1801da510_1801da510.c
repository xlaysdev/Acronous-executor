/* Unwind@1801da510 @ 1801da510 */

void Unwind_1801da510(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x30e);
  if (*(longlong *)(param_2 + 0x2f0) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x2f8),*(longlong *)(param_2 + 0x2f0),1);
  }
  *(byte *)(param_2 + 0x30f) = bVar1 & 1;
  return;
}


