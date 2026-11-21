/* FUN_180136140 @ 180136140 */

undefined8 *
FUN_180136140(undefined8 *param_1,undefined4 param_2,undefined8 *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar8 = FUN_180134c30(param_3,param_2,param_3,param_4,param_3,0xfffffffffffffffe);
  uVar1 = param_3[0xb];
  param_1[10] = param_3[10];
  param_1[0xb] = uVar1;
  uVar1 = param_3[9];
  param_1[8] = param_3[8];
  param_1[9] = uVar1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = param_3[2];
  uVar4 = param_3[3];
  uVar5 = param_3[4];
  uVar6 = param_3[5];
  uVar7 = param_3[7];
  param_1[6] = param_3[6];
  param_1[7] = uVar7;
  param_1[4] = uVar5;
  param_1[5] = uVar6;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined4 *)(param_1 + 0x23) = param_2;
  *(undefined1 *)((longlong)param_1 + 0x115) = 2;
  *(undefined1 *)(param_1 + 0xc) = 0xc;
  param_1[0xf] = 0;
  param_1[0x13] = 0;
  param_1[0x17] = 0;
  param_1[0x1b] = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0;
  param_1[0x20] = uVar8;
  *(undefined1 *)(param_1 + 0x21) = 0;
  *(undefined1 *)((longlong)param_1 + 0x11c) = 5;
  return param_1;
}


