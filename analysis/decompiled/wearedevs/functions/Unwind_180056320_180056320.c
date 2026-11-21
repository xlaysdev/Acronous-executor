/* Unwind@180056320 @ 180056320 */

void Unwind_180056320(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x118);
  *(undefined8 *)(lVar1 + 0x1a0) = *(undefined8 *)(param_2 + 0x68);
  uVar2 = *(undefined4 *)(param_2 + 0xd4);
  uVar3 = *(undefined4 *)(param_2 + 0xd8);
  uVar4 = *(undefined4 *)(param_2 + 0xdc);
  *(undefined4 *)(lVar1 + 0x1a8) = *(undefined4 *)(param_2 + 0xd0);
  *(undefined4 *)(lVar1 + 0x1ac) = uVar2;
  *(undefined4 *)(lVar1 + 0x1b0) = uVar3;
  *(undefined4 *)(lVar1 + 0x1b4) = uVar4;
  *(undefined8 *)(lVar1 + 0x1b8) = *(undefined8 *)(param_2 + 0xe0);
  if (*(char *)(param_2 + 0x120) != '\0') {
    FUN_1800515a0(param_2 + 0x70);
  }
  return;
}


