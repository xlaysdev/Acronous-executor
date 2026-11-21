/* FUN_1800290b0 @ 1800290b0 */

undefined8 *
FUN_1800290b0(undefined8 *param_1,ulonglong param_2,char param_3,longlong param_4,longlong param_5)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  undefined8 uVar4;
  longlong lVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = -param_4 & (param_4 + param_5) - 1U;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2;
  uVar3 = SUB168(auVar1 * auVar2,0);
  if (0x8000000000000000U - param_4 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    param_1[1] = 0;
LAB_180029100:
    uVar4 = 1;
  }
  else {
    if (uVar3 == 0) {
      param_1[1] = 0;
      param_1[2] = param_4;
    }
    else {
      FUN_180027490();
      if (param_3 == '\0') {
        lVar5 = thunk_FUN_1801d32d0(uVar3,param_4);
      }
      else {
        lVar5 = thunk_FUN_1801d3550();
      }
      if (lVar5 == 0) {
        param_1[1] = param_4;
        param_1[2] = uVar3;
        goto LAB_180029100;
      }
      param_1[1] = param_2;
      param_1[2] = lVar5;
    }
    uVar4 = 0;
  }
  *param_1 = uVar4;
  return param_1;
}


