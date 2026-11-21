/* Unwind@180082850 @ 180082850 */

void Unwind_180082850(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x7cb);
  if ((10 < *(byte *)(param_2 + 0x788)) && (*(longlong *)(param_2 + 0x798) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x790),*(longlong *)(param_2 + 0x798),1);
  }
  *(byte *)(param_2 + 0x7cc) = bVar1 & 1;
  return;
}


