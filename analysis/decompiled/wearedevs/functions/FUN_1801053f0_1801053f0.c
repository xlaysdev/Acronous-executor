/* FUN_1801053f0 @ 1801053f0 */

longlong FUN_1801053f0(undefined8 *param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  longlong local_20;
  
  FUN_1801d7a30(&local_38,*param_2,param_2[1]);
  if (SBORROW8(0,local_38)) {
LAB_18010543f:
    FUN_1801d7a30(&local_38,param_2[2],param_2[3]);
    lVar1 = -local_38;
    if (!SBORROW8(0,local_38)) {
      if (local_38 == -0x7fffffffffffffff) goto LAB_180105463;
      if (local_38 != 0) {
        lVar1 = thunk_FUN_1801d3330(local_30,local_38,1);
      }
    }
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    if (local_38 != -0x7fffffffffffffff) {
      if (local_38 != 0) {
        thunk_FUN_1801d3330(local_30,local_38,1);
      }
      goto LAB_18010543f;
    }
LAB_180105463:
    param_1[2] = local_20;
    *param_1 = local_30;
    param_1[1] = uStack_28;
    lVar1 = local_20;
  }
  return lVar1;
}


