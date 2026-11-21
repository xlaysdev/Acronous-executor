/* FUN_1801245b0 @ 1801245b0 */

void FUN_1801245b0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 4) != '\x03') {
    FUN_180123a90(param_1);
  }
  param_1[4] = param_2[4];
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}


