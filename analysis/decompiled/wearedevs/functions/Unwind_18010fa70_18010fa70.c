/* Unwind@18010fa70 @ 18010fa70 */

void Unwind_18010fa70(undefined8 param_1,longlong param_2)

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
  
  uVar2 = *(undefined4 *)(param_2 + 0x58);
  uVar3 = *(undefined4 *)(param_2 + 0x5c);
  uVar4 = *(undefined4 *)(param_2 + 0x60);
  uVar5 = *(undefined4 *)(param_2 + 100);
  uVar6 = *(undefined4 *)(param_2 + 0x68);
  uVar7 = *(undefined4 *)(param_2 + 0x6c);
  uVar8 = *(undefined4 *)(param_2 + 0x70);
  uVar9 = *(undefined4 *)(param_2 + 0x74);
  uVar10 = *(undefined4 *)(param_2 + 0x7c);
  uVar11 = *(undefined4 *)(param_2 + 0x80);
  uVar12 = *(undefined4 *)(param_2 + 0x84);
  puVar1 = *(undefined4 **)(param_2 + 0xa0);
  puVar1[8] = *(undefined4 *)(param_2 + 0x78);
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
  FUN_1801783b0(param_2 + 0x88);
  *(undefined1 *)(param_2 + 0xb6) = 0;
  return;
}


