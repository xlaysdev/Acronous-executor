/* FUN_1801e5590 @ 1801e5590 */

undefined8 FUN_1801e5590(longlong *param_1,void *param_2,ulonglong param_3)

{
  longlong lVar1;
  
  param_1 = (longlong *)*param_1;
  lVar1 = param_1[2];
  if ((ulonglong)(*param_1 - lVar1) < param_3) {
    FUN_180200f70(param_1,lVar1,param_3,1,1);
    lVar1 = param_1[2];
  }
  memcpy((void *)(param_1[1] + lVar1),param_2,param_3);
  param_1[2] = lVar1 + param_3;
  return 0;
}


