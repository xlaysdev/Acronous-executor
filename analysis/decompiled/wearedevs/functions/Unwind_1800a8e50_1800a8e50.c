/* Unwind@1800a8e50 @ 1800a8e50 */

void Unwind_1800a8e50(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x4fd);
  if ((*(byte *)(param_2 + 0x4fe) & 1) == 0) {
    *(byte *)(param_2 + 0x4fa) = bVar1 & 1;
    return;
  }
  FUN_18000b7c0(param_2 + 0xf0);
  *(byte *)(param_2 + 0x4fa) = bVar1 & 1;
  return;
}


