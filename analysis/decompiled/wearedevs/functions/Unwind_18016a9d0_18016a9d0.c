/* Unwind@18016a9d0 @ 18016a9d0 */

void Unwind_18016a9d0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  
  bVar1 = *(byte *)(param_2 + 0xcd);
  uVar2 = *(undefined8 *)(param_2 + 0xb0);
  if (*(char *)(param_2 + 0xce) == '\0') {
    *(undefined8 *)(param_2 + 0xb8) = uVar2;
    *(byte *)(param_2 + 0xcf) = bVar1 & 1;
    return;
  }
  FUN_180167e60(param_2 + 0x38);
  *(undefined8 *)(param_2 + 0xb8) = uVar2;
  *(byte *)(param_2 + 0xcf) = bVar1 & 1;
  return;
}


