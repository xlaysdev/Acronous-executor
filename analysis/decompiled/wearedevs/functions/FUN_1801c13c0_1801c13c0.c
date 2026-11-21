/* FUN_1801c13c0 @ 1801c13c0 */

void FUN_1801c13c0(undefined8 *param_1,ulonglong param_2,ulonglong param_3,undefined4 param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ulonglong uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  longlong lVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  
  if (param_3 == 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = &DAT_180287300;
    param_1[1] = 0;
    return;
  }
  if (param_3 < 0xf) {
    uVar8 = 4;
    if (3 < param_3) {
      uVar8 = (ulonglong)((uint)param_3 & 8) + 8;
    }
LAB_1801c1459:
    auVar1._8_8_ = 0;
    auVar1._0_8_ = param_2;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar8;
    param_2 = SUB168(auVar1 * auVar2,8);
    uVar3 = SUB168(auVar1 * auVar2,0);
    if ((param_2 == 0) && (uVar3 < 0xfffffffffffffff1)) {
      uVar4 = uVar3 + 0xf & 0xfffffffffffffff0;
      uVar3 = uVar8 + 0x10;
      uVar7 = uVar4 + uVar3;
      param_2 = CONCAT71(0x7fffffffffffff,0x7ffffffffffffff0 < uVar7 || CARRY8(uVar4,uVar3));
      if (0x7ffffffffffffff0 >= uVar7 && !CARRY8(uVar4,uVar3)) {
        if (uVar7 == 0) {
          lVar6 = 0x10;
LAB_1801c14e8:
          uVar7 = uVar8 - 1;
          uVar8 = (uVar8 & 0xfffffffffffffff8) - (uVar8 >> 3);
          if (uVar7 < 8) {
            uVar8 = uVar7;
          }
          memset((void *)(lVar6 + uVar4),(int)CONCAT71((int7)(param_2 >> 8),0xff),uVar3);
          *param_1 = (void *)(lVar6 + uVar4);
          param_1[1] = uVar7;
          param_1[2] = uVar8;
          param_1[3] = 0;
          return;
        }
        FUN_180027490();
        param_2 = 0;
        lVar6 = thunk_FUN_1801d32d0(uVar7,0x10);
        if (lVar6 != 0) goto LAB_1801c14e8;
        param_2 = 0x10;
        uVar5 = FUN_1801ec3f0(param_4,0x10,uVar7);
        goto LAB_1801c1498;
      }
    }
  }
  else if (param_3 >> 0x3d == 0) {
    uVar8 = (param_3 * 8) / 7 - 1;
    lVar6 = 0x3f;
    if (uVar8 != 0) {
      for (; uVar8 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar8 = (0xffffffffffffffffU >> (~(byte)lVar6 & 0x3f)) + 1;
    goto LAB_1801c1459;
  }
  uVar5 = FUN_1801ec3c0(param_4);
LAB_1801c1498:
  param_1[1] = uVar5;
  param_1[2] = param_2;
  *param_1 = 0;
  return;
}


