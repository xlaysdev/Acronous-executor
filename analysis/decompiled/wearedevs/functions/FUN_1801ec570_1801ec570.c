/* FUN_1801ec570 @ 1801ec570 */

undefined8 FUN_1801ec570(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    FUN_180201860(param_1,lVar1,param_3);
    lVar1 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
  param_1[2] = lVar1 + param_3;
  return 0;
}


