/* Unwind@1800aaf90 @ 1800aaf90 */

void Unwind_1800aaf90(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  char cVar3;
  
  bVar1 = *(byte *)(param_2 + 0xa7);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  cVar3 = FUN_180177f20(uVar2);
  if (cVar3 != '\0') {
    FUN_1801776b0(uVar2);
  }
  *(byte *)(param_2 + 0xa6) = bVar1 & 1;
  return;
}


