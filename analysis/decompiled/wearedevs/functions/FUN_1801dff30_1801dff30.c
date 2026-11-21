/* FUN_1801dff30 @ 1801dff30 */

void FUN_1801dff30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if ((param_2[2] & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(param_2[3],param_2[2],1);
  }
  param_2[4] = param_3[2];
  uVar1 = param_3[1];
  param_2[2] = *param_3;
  param_2[3] = uVar1;
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar5;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


