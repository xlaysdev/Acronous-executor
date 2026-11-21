/* Unwind@1800df040 @ 1800df040 */

void Unwind_1800df040(undefined8 param_1,longlong param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  puVar2 = *(undefined8 **)(param_2 + 0x1a8);
  *puVar2 = 3;
  uVar5 = *(undefined8 *)(param_2 + 0x188);
  puVar3 = *(undefined8 **)(param_2 + 0x118);
  puVar3[0xc] = *(undefined8 *)(param_2 + 0x180);
  puVar3[0xd] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x178);
  puVar3[10] = *(undefined8 *)(param_2 + 0x170);
  puVar3[0xb] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x168);
  puVar3[8] = *(undefined8 *)(param_2 + 0x160);
  puVar3[9] = uVar5;
  uVar5 = *(undefined8 *)(param_2 + 0x120);
  uVar6 = *(undefined8 *)(param_2 + 0x128);
  uVar7 = *(undefined8 *)(param_2 + 0x130);
  uVar8 = *(undefined8 *)(param_2 + 0x138);
  uVar9 = *(undefined8 *)(param_2 + 0x140);
  uVar10 = *(undefined8 *)(param_2 + 0x148);
  uVar11 = *(undefined8 *)(param_2 + 0x158);
  puVar3[6] = *(undefined8 *)(param_2 + 0x150);
  puVar3[7] = uVar11;
  puVar3[4] = uVar9;
  puVar3[5] = uVar10;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  *puVar3 = uVar5;
  puVar3[1] = uVar6;
  *(char *)(puVar2 + 0xf) = (char)*(undefined4 *)(param_2 + 0x1a4);
  uVar1 = *(undefined4 *)(param_2 + 0x191);
  puVar4 = *(undefined4 **)(param_2 + 0x110);
  *(undefined4 *)((longlong)puVar4 + 3) = *(undefined4 *)(param_2 + 0x194);
  *puVar4 = uVar1;
  return;
}


