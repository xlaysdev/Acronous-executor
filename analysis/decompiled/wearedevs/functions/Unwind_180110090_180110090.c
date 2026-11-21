/* Unwind@180110090 @ 180110090 */

void Unwind_180110090(undefined8 param_1,longlong param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  uVar2 = *(undefined8 *)(param_2 + 0x78);
  uVar3 = *(undefined8 *)(param_2 + 0x80);
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  uVar5 = *(undefined4 *)(param_2 + 0x8c);
  uVar6 = *(undefined4 *)(param_2 + 0x90);
  uVar7 = *(undefined4 *)(param_2 + 0x94);
  uVar8 = *(undefined4 *)(param_2 + 0x9c);
  uVar9 = *(undefined4 *)(param_2 + 0xa0);
  uVar10 = *(undefined4 *)(param_2 + 0xa4);
  puVar1 = *(undefined8 **)(param_2 + 0xc0);
  *(undefined4 *)(puVar1 + 4) = *(undefined4 *)(param_2 + 0x98);
  *(undefined4 *)((longlong)puVar1 + 0x24) = uVar8;
  *(undefined4 *)(puVar1 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar1 + 0x2c) = uVar10;
  *(undefined4 *)(puVar1 + 2) = uVar4;
  *(undefined4 *)((longlong)puVar1 + 0x14) = uVar5;
  *(undefined4 *)(puVar1 + 3) = uVar6;
  *(undefined4 *)((longlong)puVar1 + 0x1c) = uVar7;
  *puVar1 = uVar2;
  puVar1[1] = uVar3;
  FUN_1801783b0(param_2 + 0xa8);
  *(undefined1 *)(param_2 + 0xcf) = 0;
  return;
}


