/* FUN_1801ff890 @ 1801ff890 */

undefined8 * FUN_1801ff890(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 local_38 [3];
  
  uVar7 = *(ulonglong *)(param_2 + 0x20);
  uVar2 = *(ulonglong *)(param_2 + 0x28);
  uVar4 = 0;
  if (uVar2 < uVar7) {
    uVar4 = (ulonglong)(uint)((int)uVar7 - (int)uVar2);
    uVar8 = 0;
    do {
      cVar1 = *(char *)(uVar2 + *(longlong *)(param_2 + 0x18) + uVar8);
      if (9 < (byte)(cVar1 - 0x30U)) {
        if (cVar1 == '.') {
          FUN_1801cc5c0(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        if ((cVar1 == 'E') || (cVar1 == 'e')) {
          FUN_1801cc7f0(param_1,param_2,param_3,param_4,(int)uVar8);
          return param_1;
        }
        uVar4 = uVar8 & 0xffffffff;
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar2 + 1 + uVar8;
      uVar8 = uVar8 + 1;
    } while (uVar7 - uVar2 != uVar8);
  }
  auVar10._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar10._0_8_ = param_4;
  auVar10._12_4_ = 0x45300000;
  dVar9 = (auVar10._8_8_ - 1.9342813113834067e+25) +
          ((double)CONCAT44(0x43300000,(int)param_4) - 4503599627370496.0);
  uVar3 = (uint)uVar4;
  uVar7 = (ulonglong)-uVar3;
  if ((int)-uVar3 < 0) {
    uVar7 = uVar4;
  }
  uVar6 = (uint)uVar7;
  while (0x134 < uVar6) {
    if ((dVar9 == 0.0) && (!NAN(dVar9))) goto joined_r0x0001801ff9ef;
    if (-1 < (int)uVar4) goto LAB_1801ff9f3;
    dVar9 = dVar9 / 1e+308;
    uVar3 = (int)uVar4 + 0x134;
    uVar4 = (ulonglong)uVar3;
    uVar6 = -uVar3;
    if ((int)-uVar3 < 0) {
      uVar6 = uVar3;
    }
    uVar7 = (ulonglong)uVar6;
  }
  if ((int)uVar3 < 0) {
    dVar9 = dVar9 / *(double *)(&DAT_180289228 + uVar7 * 8);
  }
  else {
    dVar9 = dVar9 * *(double *)(&DAT_180289228 + uVar7 * 8);
    if (ABS(dVar9) == INFINITY) {
LAB_1801ff9f3:
      local_38[0] = 0xe;
      uVar5 = FUN_1801ffc40(param_2,local_38);
      param_1[1] = uVar5;
      uVar5 = 1;
      goto LAB_1801ff9d9;
    }
  }
joined_r0x0001801ff9ef:
  if (param_3 == '\0') {
    dVar9 = -dVar9;
  }
  param_1[1] = dVar9;
  uVar5 = 0;
LAB_1801ff9d9:
  *param_1 = uVar5;
  return param_1;
}


