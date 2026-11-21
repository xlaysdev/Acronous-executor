/* Unwind@18014f400 @ 18014f400 */

void Unwind_18014f400(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  bVar1 = *(byte *)(param_2 + 0x4ab);
  bVar2 = *(byte *)(param_2 + 0x4ac);
  uVar3 = *(undefined1 *)(param_2 + 0x4ad);
  uVar4 = *(undefined1 *)(param_2 + 0x4ae);
  uVar5 = *(undefined1 *)(param_2 + 0x4af);
  uVar6 = *(undefined1 *)(param_2 + 0x4b1);
  if (*(char *)(param_2 + 0x4b0) == '\0') {
    *(undefined1 *)(param_2 + 0x4a3) = uVar6;
    *(undefined1 *)(param_2 + 0x4a2) = uVar5;
    *(undefined1 *)(param_2 + 0x4a1) = uVar4;
    *(undefined1 *)(param_2 + 0x4a0) = uVar3;
    *(byte *)(param_2 + 0x49f) = bVar2 & 1;
    *(byte *)(param_2 + 0x49e) = bVar1 & 1;
    return;
  }
  if (*(int *)(param_2 + 0x48) != 3) {
    FUN_18014c490(param_2 + 0x48);
  }
  *(undefined1 *)(param_2 + 0x4a3) = uVar6;
  *(undefined1 *)(param_2 + 0x4a2) = uVar5;
  *(undefined1 *)(param_2 + 0x4a1) = uVar4;
  *(undefined1 *)(param_2 + 0x4a0) = uVar3;
  *(byte *)(param_2 + 0x49f) = bVar2 & 1;
  *(byte *)(param_2 + 0x49e) = bVar1 & 1;
  return;
}


