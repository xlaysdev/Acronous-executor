/* FUN_1801a8d70 @ 1801a8d70 */

uint * FUN_1801a8d70(uint *param_1,uint *param_2,uint *param_3,ulonglong param_4)

{
  uint uVar1;
  uint uVar2;
  
  if (7 < param_4) {
    param_4 = param_4 >> 3;
    param_1 = (uint *)FUN_1801a8d70(param_1,param_1 + param_4 * 4,param_1 + param_4 * 7);
    param_2 = (uint *)FUN_1801a8d70(param_2,param_2 + param_4 * 4,param_2 + param_4 * 7,param_4);
    param_3 = (uint *)FUN_1801a8d70(param_3,param_3 + param_4 * 4,param_3 + param_4 * 7,param_4);
  }
  uVar1 = *param_1 >> 0x18;
  uVar2 = *param_2 >> 0x18;
  if (uVar2 < *param_3 >> 0x18 != uVar1 < uVar2) {
    param_2 = param_3;
  }
  if (uVar1 < *param_3 >> 0x18 != uVar1 < uVar2) {
    param_2 = param_1;
  }
  return param_2;
}


