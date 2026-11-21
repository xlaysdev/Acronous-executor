/* Unwind@180166c20 @ 180166c20 */

void Unwind_180166c20(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  bVar1 = *(byte *)(param_2 + 0xa6);
  uVar2 = *(undefined8 *)(param_2 + 0x80);
  uVar3 = *(undefined8 *)(param_2 + 0x88);
  if (*(char *)(param_2 + 0xa7) == '\0') {
    *(undefined8 *)(param_2 + 0x58) = uVar3;
    *(undefined8 *)(param_2 + 0x50) = uVar2;
    *(byte *)(param_2 + 0xa1) = bVar1 & 1;
    return;
  }
  FUN_180075a40(*(undefined8 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x70));
  *(undefined8 *)(param_2 + 0x58) = uVar3;
  *(undefined8 *)(param_2 + 0x50) = uVar2;
  *(byte *)(param_2 + 0xa1) = bVar1 & 1;
  return;
}


