/* Unwind@180082db0 @ 180082db0 */

void Unwind_180082db0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x7ca);
  if ((10 < *(byte *)(param_2 + 0x788)) && (*(longlong *)(param_2 + 0x798) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x790),*(longlong *)(param_2 + 0x798),1);
  }
  if ((bVar1 & 1) != 0) {
    FUN_18008f760(param_2 + 0x358);
  }
  return;
}


