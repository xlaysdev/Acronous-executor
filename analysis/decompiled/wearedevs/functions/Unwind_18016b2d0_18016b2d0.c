/* Unwind@18016b2d0 @ 18016b2d0 */

void Unwind_18016b2d0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0xde);
  uVar2 = *(undefined8 *)(param_2 + 0xd0);
  if (*(char *)(param_2 + 0xdf) == '\0') {
    *(undefined8 *)(param_2 + 0xb8) = uVar2;
    *(byte *)(param_2 + 0xdd) = bVar1 & 1;
    return;
  }
  FUN_180167e60(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0xb8) = uVar2;
  *(byte *)(param_2 + 0xdd) = bVar1 & 1;
  return;
}


