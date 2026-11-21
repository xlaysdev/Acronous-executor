/* Unwind@1801032e0 @ 1801032e0 */

void Unwind_1801032e0(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(param_2 + 0x1b0);
  puVar1[10] = *(undefined8 *)(param_2 + 0x1a0);
  uVar2 = *(undefined8 *)(param_2 + 0x198);
  puVar1[8] = *(undefined8 *)(param_2 + 400);
  puVar1[9] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  uVar3 = *(undefined8 *)(param_2 + 0x158);
  uVar4 = *(undefined8 *)(param_2 + 0x160);
  uVar5 = *(undefined8 *)(param_2 + 0x168);
  uVar6 = *(undefined8 *)(param_2 + 0x170);
  uVar7 = *(undefined8 *)(param_2 + 0x178);
  uVar8 = *(undefined8 *)(param_2 + 0x188);
  puVar1[6] = *(undefined8 *)(param_2 + 0x180);
  puVar1[7] = uVar8;
  puVar1[4] = uVar6;
  puVar1[5] = uVar7;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  *(undefined1 *)(param_2 + 0x1bf) = 0;
  return;
}


