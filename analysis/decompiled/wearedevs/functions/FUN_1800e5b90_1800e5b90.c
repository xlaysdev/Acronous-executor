/* FUN_1800e5b90 @ 1800e5b90 */

undefined8 * FUN_1800e5b90(undefined8 *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  short local_60;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  lVar1 = *param_2;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("cannot poll Select twice",0x18,&PTR_s_C__Users_burne__cargo_registry_s_180215eb8)
    ;
  }
  FUN_1800b1240(&local_60);
  if (local_60 == 4) {
    FUN_1800b1240(&local_60,param_2 + 1,param_3);
    if (local_60 == 4) {
      *param_1 = 2;
    }
    else {
      *param_2 = 0;
      param_1[7] = local_30;
      param_1[8] = uStack_28;
      param_1[5] = local_40;
      param_1[6] = uStack_38;
      param_1[3] = local_50;
      param_1[4] = uStack_48;
      param_1[1] = CONCAT62(uStack_5e,local_60);
      param_1[2] = uStack_58;
      *param_1 = 1;
      param_1[9] = lVar1;
    }
  }
  else {
    lVar1 = param_2[1];
    *param_2 = 0;
    param_1[7] = local_30;
    param_1[8] = uStack_28;
    param_1[5] = local_40;
    param_1[6] = uStack_38;
    param_1[3] = local_50;
    param_1[4] = uStack_48;
    param_1[1] = CONCAT62(uStack_5e,local_60);
    param_1[2] = uStack_58;
    *param_1 = 0;
    param_1[9] = lVar1;
  }
  return param_1;
}


