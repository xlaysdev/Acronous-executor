/* FUN_1801de170 @ 1801de170 */

undefined8 *
FUN_1801de170(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  FUN_1801ec9d0(&local_50);
  uVar2 = local_40;
  uVar1 = uStack_48;
  lVar3 = FUN_1801de6b0(uStack_48,local_40);
  if (lVar3 != 0) {
    lVar3 = FUN_1801de400(uVar1,uVar2);
    if (lVar3 != 0) {
      FUN_1801d8040(&local_50);
    }
  }
  FUN_1801de7d0(&local_50,param_4,param_5);
  param_1[2] = local_40;
  param_1[3] = uStack_38;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return param_1;
}


