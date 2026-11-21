/* FUN_1801047f0 @ 1801047f0 */

undefined8 * FUN_1801047f0(undefined8 *param_1,undefined8 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  uVar8 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar8;
  uVar1 = param_3[1];
  uVar2 = param_3[2];
  uVar3 = param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  uVar7 = param_3[7];
  *(undefined4 *)(param_1 + 2) = *param_3;
  *(undefined4 *)((longlong)param_1 + 0x14) = uVar1;
  *(undefined4 *)(param_1 + 3) = uVar2;
  *(undefined4 *)((longlong)param_1 + 0x1c) = uVar3;
  *(undefined4 *)(param_1 + 4) = uVar4;
  *(undefined4 *)((longlong)param_1 + 0x24) = uVar5;
  *(undefined4 *)(param_1 + 5) = uVar6;
  *(undefined4 *)((longlong)param_1 + 0x2c) = uVar7;
  FUN_180067d30(param_2 + 2);
  return param_1;
}


