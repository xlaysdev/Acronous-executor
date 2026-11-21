/* FUN_180200d80 @ 180200d80 */

void FUN_180200d80(undefined8 *param_1,longlong param_2,undefined8 param_3,ulonglong param_4,
                  longlong param_5,longlong param_6)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = -param_5 & (param_5 + param_6) - 1U;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_4;
  uVar3 = SUB168(auVar1 * auVar2,0);
  uVar5 = 1;
  if (0x8000000000000000U - param_5 < uVar3 || SUB168(auVar1 * auVar2,8) != 0) {
    lVar4 = 8;
    uVar3 = 0;
    goto LAB_180200e31;
  }
  if (param_2 == 0) {
    if (uVar3 != 0) {
      FUN_180027490();
      lVar4 = thunk_FUN_1801d32d0(uVar3,param_5);
      goto joined_r0x000180200e15;
    }
    lVar4 = param_5;
  }
  else {
    lVar4 = thunk_FUN_1801d3370(param_3,param_6 * param_2,param_5,uVar3);
joined_r0x000180200e15:
    if (lVar4 == 0) {
      param_1[1] = param_5;
      lVar4 = 0x10;
      goto LAB_180200e31;
    }
  }
  param_1[1] = lVar4;
  lVar4 = 0x10;
  uVar5 = 0;
LAB_180200e31:
  *(ulonglong *)((longlong)param_1 + lVar4) = uVar3;
  *param_1 = uVar5;
  return;
}


