/* Unwind@18010fac0 @ 18010fac0 */

void Unwind_18010fac0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  
  uVar2 = *(undefined4 *)(param_2 + 0x28);
  uVar3 = *(undefined4 *)(param_2 + 0x2c);
  uVar4 = *(undefined4 *)(param_2 + 0x30);
  uVar5 = *(undefined4 *)(param_2 + 0x34);
  uVar6 = *(undefined4 *)(param_2 + 0x38);
  uVar7 = *(undefined4 *)(param_2 + 0x3c);
  uVar8 = *(undefined4 *)(param_2 + 0x40);
  uVar9 = *(undefined4 *)(param_2 + 0x44);
  uVar10 = *(undefined4 *)(param_2 + 0x4c);
  uVar11 = *(undefined4 *)(param_2 + 0x50);
  uVar12 = *(undefined4 *)(param_2 + 0x54);
  puVar1 = *(undefined4 **)(param_2 + 0xa8);
  puVar1[8] = *(undefined4 *)(param_2 + 0x48);
  puVar1[9] = uVar10;
  puVar1[10] = uVar11;
  puVar1[0xb] = uVar12;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[6] = uVar8;
  puVar1[7] = uVar9;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  FUN_1801783b0(param_2 + 0x90);
  *(undefined1 *)(param_2 + 0xb7) = 0;
  return;
}


