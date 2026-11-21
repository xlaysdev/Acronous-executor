/* FUN_180037560 @ 180037560 */

void FUN_180037560(undefined8 *param_1,longlong param_2,char param_3,double param_4)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  ulonglong uVar4;
  uint uVar5;
  ulonglong uVar6;
  undefined8 uVar7;
  byte bVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  char local_60 [8];
  double local_58;
  undefined8 local_50;
  double local_48;
  
  uVar11 = *(ulonglong *)(param_2 + 0x20);
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 < uVar11) {
    cVar2 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar4);
    if (cVar2 != '.') {
      if ((cVar2 == 'E') || (cVar2 == 'e')) {
        FUN_180037a10(&local_50,param_2,param_3,param_4,0);
        if ((char)local_50 != '\0') {
          param_1[1] = local_48;
          *param_1 = 3;
          return;
        }
        uVar7 = 0;
        goto LAB_180037842;
      }
      goto LAB_1800375c8;
    }
    uVar1 = uVar4 + 1;
    *(ulonglong *)(param_2 + 0x28) = uVar1;
    if (uVar11 <= uVar1) {
LAB_18003770d:
      local_50 = 5;
LAB_180037810:
      local_58 = (double)FUN_1801f6b20(param_2);
LAB_1800377ea:
      param_1[1] = local_58;
      *param_1 = 3;
      return;
    }
    uVar5 = ((int)uVar4 - (int)uVar11) + 1;
    uVar6 = (ulonglong)uVar5;
    lVar9 = 0;
    do {
      bVar3 = *(byte *)(*(longlong *)(param_2 + 0x18) + uVar1 + lVar9);
      bVar8 = bVar3 - 0x30;
      if (9 < bVar8) {
        if ((int)lVar9 == 0) {
          local_50 = 0xd;
          goto LAB_180037810;
        }
        if ((bVar3 | 0x20) != 0x65) {
          uVar6 = -lVar9 & 0xffffffff;
          goto LAB_18003771d;
        }
        FUN_180037a10(local_60,param_2,param_3,param_4,(int)-lVar9);
LAB_1800376f6:
        if (local_60[0] != '\0') goto LAB_1800377ea;
        goto LAB_18003783b;
      }
      if ((0x1999999999999998 < (ulonglong)param_4) &&
         ((param_4 != 2.353437368264535e-185 || (5 < bVar8)))) {
        FUN_1801ffa20(local_60,param_2,param_3,param_4,-(int)lVar9);
        goto LAB_1800376f6;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar4 + 2 + lVar9;
      param_4 = (double)((ulonglong)bVar8 + (longlong)param_4 * 10);
      lVar9 = lVar9 + 1;
    } while (~uVar4 + uVar11 != lVar9);
    if (uVar5 == 0) goto LAB_18003770d;
LAB_18003771d:
    auVar13._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar13._0_8_ = param_4;
    auVar13._12_4_ = 0x45300000;
    local_58 = (auVar13._8_8_ - 1.9342813113834067e+25) +
               ((double)CONCAT44(0x43300000,SUB84(param_4,0)) - 4503599627370496.0);
    uVar5 = (uint)uVar6;
    uVar11 = (ulonglong)-uVar5;
    if ((int)-uVar5 < 0) {
      uVar11 = uVar6;
    }
    uVar10 = (uint)uVar11;
    while (0x134 < uVar10) {
      if ((local_58 == 0.0) && (!NAN(local_58))) goto joined_r0x000180037803;
      if (-1 < (int)uVar6) goto LAB_180037858;
      local_58 = local_58 / 1e+308;
      uVar5 = (int)uVar6 + 0x134;
      uVar6 = (ulonglong)uVar5;
      uVar10 = -uVar5;
      if ((int)-uVar5 < 0) {
        uVar10 = uVar5;
      }
      uVar11 = (ulonglong)uVar10;
    }
    if ((int)uVar5 < 0) {
      local_58 = local_58 / *(double *)(PTR_DAT_1802fd570 + uVar11 * 8);
    }
    else {
      local_58 = local_58 * *(double *)(PTR_DAT_1802fd570 + uVar11 * 8);
      if (ABS(local_58) == INFINITY) {
LAB_180037858:
        local_50 = 0xe;
        local_58 = (double)FUN_1801f6b90(param_2);
        goto LAB_1800377ea;
      }
    }
joined_r0x000180037803:
    if (param_3 == '\0') {
      local_58 = -local_58;
    }
LAB_18003783b:
    local_48 = local_58;
  }
  else {
LAB_1800375c8:
    uVar7 = 1;
    if (param_3 != '\0') {
      local_48 = param_4;
      goto LAB_180037842;
    }
    local_48 = (double)-(longlong)param_4;
    if ((longlong)local_48 < 0) {
      uVar7 = 2;
      goto LAB_180037842;
    }
    auVar12._8_4_ = (int)((ulonglong)param_4 >> 0x20);
    auVar12._0_8_ = param_4;
    auVar12._12_4_ = 0x45300000;
    local_48 = (double)((ulonglong)
                        ((auVar12._8_8_ - 1.9342813113834067e+25) +
                        ((double)CONCAT44(0x43300000,SUB84(param_4,0)) - 4503599627370496.0)) |
                       0x8000000000000000);
  }
  uVar7 = 0;
LAB_180037842:
  *param_1 = uVar7;
  param_1[1] = local_48;
  return;
}


