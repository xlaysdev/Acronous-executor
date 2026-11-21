/* Unwind@1801247d0 @ 1801247d0 */

void Unwind_1801247d0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0xa8);
  uVar2 = puVar1[0xb];
  *(undefined8 *)(param_2 + 0x70) = puVar1[10];
  *(undefined8 *)(param_2 + 0x78) = uVar2;
  uVar2 = puVar1[9];
  *(undefined8 *)(param_2 + 0x60) = puVar1[8];
  *(undefined8 *)(param_2 + 0x68) = uVar2;
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  uVar6 = puVar1[4];
  uVar7 = puVar1[5];
  uVar8 = puVar1[7];
  *(undefined8 *)(param_2 + 0x50) = puVar1[6];
  *(undefined8 *)(param_2 + 0x58) = uVar8;
  *(undefined8 *)(param_2 + 0x40) = uVar6;
  *(undefined8 *)(param_2 + 0x48) = uVar7;
  *(undefined8 *)(param_2 + 0x30) = uVar4;
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  *(undefined8 *)(param_2 + 0x20) = uVar2;
  *(undefined8 *)(param_2 + 0x28) = uVar3;
  *(undefined1 *)(param_2 + 0xb5) = 1;
  return;
}


