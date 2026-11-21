/* FUN_1801cc5c0 @ 1801cc5c0 */

void FUN_1801cc5c0(undefined8 *param_1,longlong param_2,char param_3,ulonglong param_4,uint param_5)

{
  byte bVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong lVar10;
  double dVar11;
  undefined1 auVar12 [16];
  undefined8 local_58 [3];
  
  uVar9 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar5 = uVar2 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar5;
  if (uVar5 < uVar9) {
    iVar3 = (int)uVar2 + 1;
    lVar10 = 0;
    do {
      bVar1 = *(byte *)(uVar5 + *(longlong *)(param_2 + 0x18) + lVar10);
      bVar7 = bVar1 - 0x30;
      if (9 < bVar7) {
        if ((int)lVar10 != 0) {
          uVar5 = (ulonglong)param_5 - lVar10;
          if ((bVar1 | 0x20) == 0x65) {
            FUN_1801cc7f0(param_1,param_2,param_3,param_4,(int)uVar5);
            return;
          }
          goto LAB_1801cc6aa;
        }
        local_58[0] = 0xd;
        goto LAB_1801cc79c;
      }
      if ((0x1999999999999998 < param_4) && ((param_4 != 0x1999999999999999 || (5 < bVar7)))) {
        FUN_1801ffa20(param_1,param_2,param_3,param_4,param_5 - (int)lVar10);
        return;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2 + 2 + lVar10;
      param_4 = param_4 * 10 + (ulonglong)bVar7;
      lVar10 = lVar10 + 1;
    } while (~uVar2 + uVar9 != lVar10);
    if (iVar3 != (int)uVar9) {
      uVar5 = (ulonglong)((iVar3 + param_5) - (int)uVar9);
LAB_1801cc6aa:
      auVar12._8_4_ = (int)(param_4 >> 0x20);
      auVar12._0_8_ = param_4;
      auVar12._12_4_ = 0x45300000;
      dVar11 = (auVar12._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,(int)param_4) - 4503599627370496.0);
      uVar4 = (uint)uVar5;
      uVar9 = (ulonglong)-uVar4;
      if ((int)-uVar4 < 0) {
        uVar9 = uVar5 & 0xffffffff;
      }
      uVar8 = (uint)uVar9;
      while (0x134 < uVar8) {
        if ((dVar11 == 0.0) && (!NAN(dVar11))) goto joined_r0x0001801cc784;
        if (-1 < (int)uVar5) goto LAB_1801cc7bc;
        dVar11 = dVar11 / 1e+308;
        uVar4 = (int)uVar5 + 0x134;
        uVar5 = (ulonglong)uVar4;
        uVar8 = -uVar4;
        if ((int)-uVar4 < 0) {
          uVar8 = uVar4;
        }
        uVar9 = (ulonglong)uVar8;
      }
      if ((int)uVar4 < 0) {
        dVar11 = dVar11 / *(double *)(&DAT_180289228 + uVar9 * 8);
      }
      else {
        dVar11 = dVar11 * *(double *)(&DAT_180289228 + uVar9 * 8);
        if (ABS(dVar11) == INFINITY) {
LAB_1801cc7bc:
          local_58[0] = 0xe;
          uVar6 = FUN_1801ffc40(param_2,local_58);
          param_1[1] = uVar6;
          *param_1 = 1;
          return;
        }
      }
joined_r0x0001801cc784:
      if (param_3 == '\0') {
        dVar11 = -dVar11;
      }
      param_1[1] = dVar11;
      *param_1 = 0;
      return;
    }
  }
  local_58[0] = 5;
LAB_1801cc79c:
  uVar6 = FUN_1801ff7c0(param_2,local_58);
  param_1[1] = uVar6;
  *param_1 = 1;
  return;
}


