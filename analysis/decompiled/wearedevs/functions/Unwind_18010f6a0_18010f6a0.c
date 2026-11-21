/* Unwind@18010f6a0 @ 18010f6a0 */

void Unwind_18010f6a0(undefined8 param_1,longlong param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
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
  undefined4 uVar13;
  
  puVar1 = *(undefined4 **)(param_2 + 0x30);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  uVar7 = puVar1[4];
  uVar8 = puVar1[5];
  uVar9 = puVar1[6];
  uVar10 = puVar1[7];
  uVar11 = puVar1[9];
  uVar12 = puVar1[10];
  uVar13 = puVar1[0xb];
  puVar2 = *(undefined4 **)(param_2 + 0x28);
  puVar2[8] = puVar1[8];
  puVar2[9] = uVar11;
  puVar2[10] = uVar12;
  puVar2[0xb] = uVar13;
  puVar2[4] = uVar7;
  puVar2[5] = uVar8;
  puVar2[6] = uVar9;
  puVar2[7] = uVar10;
  *puVar2 = uVar3;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  FUN_1801783b0(param_2 + 0x20);
  *(undefined1 *)(param_2 + 0x3f) = 0;
  return;
}


