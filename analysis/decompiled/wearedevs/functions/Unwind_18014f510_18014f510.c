/* Unwind@18014f510 @ 18014f510 */

void Unwind_18014f510(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  
  bVar1 = *(byte *)(param_2 + 0x49e);
  uVar2 = *(undefined1 *)(param_2 + 0x4a0);
  uVar3 = *(undefined1 *)(param_2 + 0x4a1);
  uVar4 = *(undefined1 *)(param_2 + 0x4a2);
  uVar5 = *(undefined1 *)(param_2 + 0x4a3);
  if (*(char *)(param_2 + 0x49f) == '\0') {
    *(undefined1 *)(param_2 + 0x48b) = uVar5;
    *(undefined1 *)(param_2 + 0x48a) = uVar4;
    *(undefined1 *)(param_2 + 0x489) = uVar3;
    *(undefined1 *)(param_2 + 0x488) = uVar2;
    *(byte *)(param_2 + 0x487) = bVar1 & 1;
    return;
  }
  FUN_18000b470(*(undefined8 *)(param_2 + 0x3a0));
  *(undefined1 *)(param_2 + 0x48b) = uVar5;
  *(undefined1 *)(param_2 + 0x48a) = uVar4;
  *(undefined1 *)(param_2 + 0x489) = uVar3;
  *(undefined1 *)(param_2 + 0x488) = uVar2;
  *(byte *)(param_2 + 0x487) = bVar1 & 1;
  return;
}


