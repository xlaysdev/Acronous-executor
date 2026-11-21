/* FUN_1801cc7f0 @ 1801cc7f0 */

void FUN_1801cc7f0(undefined8 *param_1,longlong param_2,char param_3,longlong param_4,int param_5)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  byte bVar9;
  ulonglong uVar10;
  bool bVar11;
  double dVar12;
  undefined1 auVar13 [16];
  undefined8 local_30 [3];
  
  uVar2 = *(ulonglong *)(param_2 + 0x20);
  lVar3 = *(longlong *)(param_2 + 0x28);
  uVar10 = lVar3 + 1;
  *(ulonglong *)(param_2 + 0x28) = uVar10;
  cVar5 = '\x01';
  if (uVar10 < uVar2) {
    cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar10);
    cVar5 = '\x01';
    cVar4 = '\x01';
    if (cVar1 != '+') {
      if (cVar1 != '-') goto LAB_1801cc830;
      cVar4 = '\0';
    }
    cVar5 = cVar4;
    uVar10 = lVar3 + 2;
    *(ulonglong *)(param_2 + 0x28) = uVar10;
  }
LAB_1801cc830:
  if (uVar2 <= uVar10) {
    local_30[0] = 5;
LAB_1801cc9d8:
    uVar7 = FUN_1801ffc40(param_2,local_30);
    param_1[1] = uVar7;
    *param_1 = 1;
    return;
  }
  cVar1 = *(char *)(*(longlong *)(param_2 + 0x18) + uVar10);
  *(ulonglong *)(param_2 + 0x28) = uVar10 + 1;
  bVar9 = cVar1 - 0x30;
  if (9 < bVar9) {
    local_30[0] = 0xd;
    goto LAB_1801cc9d8;
  }
  uVar8 = (uint)bVar9;
  if (uVar10 + 1 < uVar2) {
    uVar10 = uVar10 + 2;
    do {
      bVar9 = *(char *)(*(longlong *)(param_2 + 0x18) + -1 + uVar10) - 0x30;
      if (9 < bVar9) break;
      *(ulonglong *)(param_2 + 0x28) = uVar10;
      if ((0xccccccb < (int)uVar8) && ((uVar8 != 0xccccccc || (7 < bVar9)))) {
        FUN_1801ffb90(param_1,param_2,param_3,param_4 == 0,cVar5);
        return;
      }
      uVar8 = (uint)bVar9 + uVar8 * 10;
      bVar11 = uVar10 != uVar2;
      uVar10 = uVar10 + 1;
    } while (bVar11);
  }
  if (cVar5 == '\0') {
    uVar6 = (-1 < (int)(param_5 - uVar8)) + 0x7fffffff;
    bVar11 = SBORROW4(param_5,uVar8);
    uVar8 = -uVar8;
  }
  else {
    uVar6 = ((int)(param_5 + uVar8) >> 0x1f) + 0x80000000;
    bVar11 = SCARRY4(param_5,uVar8);
  }
  uVar8 = param_5 + uVar8;
  if (bVar11) {
    uVar8 = uVar6;
  }
  auVar13._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar13._0_8_ = param_4;
  auVar13._12_4_ = 0x45300000;
  dVar12 = (auVar13._8_8_ - 1.9342813113834067e+25) +
           ((double)CONCAT44(0x43300000,(int)param_4) - 4503599627370496.0);
  uVar6 = -uVar8;
  if ((int)-uVar8 < 0) {
    uVar6 = uVar8;
  }
  while (0x134 < uVar6) {
    if ((dVar12 == 0.0) && (!NAN(dVar12))) goto joined_r0x0001801cc9cb;
    if (-1 < (int)uVar8) goto LAB_1801cc9f8;
    dVar12 = dVar12 / 1e+308;
    uVar8 = uVar8 + 0x134;
    uVar6 = -uVar8;
    if ((int)-uVar8 < 0) {
      uVar6 = uVar8;
    }
  }
  if ((int)uVar8 < 0) {
    dVar12 = dVar12 / *(double *)(&DAT_180289228 + (ulonglong)uVar6 * 8);
  }
  else {
    dVar12 = dVar12 * *(double *)(&DAT_180289228 + (ulonglong)uVar6 * 8);
    if (ABS(dVar12) == INFINITY) {
LAB_1801cc9f8:
      local_30[0] = 0xe;
      uVar7 = FUN_1801ffc40(param_2,local_30);
      param_1[1] = uVar7;
      uVar7 = 1;
      goto LAB_1801cc9b9;
    }
  }
joined_r0x0001801cc9cb:
  if (param_3 == '\0') {
    dVar12 = -dVar12;
  }
  param_1[1] = dVar12;
  uVar7 = 0;
LAB_1801cc9b9:
  *param_1 = uVar7;
  return;
}


