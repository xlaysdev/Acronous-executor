/* FUN_1801150b0 @ 1801150b0 */

ulonglong *
FUN_1801150b0(ulonglong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  char local_30 [8];
  ulonglong local_28;
  ulonglong uStack_20;
  ulonglong local_18;
  ulonglong uStack_10;
  
  uVar1 = FUN_180110f50(param_3,param_4);
  FUN_1801ae6b0(local_30,uVar1,param_4);
  if (local_30[0] == '\0') {
    param_1[3] = local_18;
    param_1[4] = uStack_10;
    param_1[1] = local_28;
    param_1[2] = uStack_20;
  }
  *param_1 = (ulonglong)(local_30[0] == '\0');
  return param_1;
}


