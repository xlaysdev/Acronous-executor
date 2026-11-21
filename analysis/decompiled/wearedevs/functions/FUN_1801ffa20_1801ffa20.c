/* FUN_1801ffa20 @ 1801ffa20 */

undefined8 *
FUN_1801ffa20(undefined8 *param_1,longlong param_2,char param_3,undefined8 param_4,uint param_5)

{
  byte bVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  uint uVar4;
  ulonglong uVar5;
  double dVar6;
  undefined1 auVar7 [16];
  undefined8 local_30 [3];
  
  uVar2 = (ulonglong)param_5;
  uVar5 = *(ulonglong *)(param_2 + 0x28);
  if (uVar5 < *(ulonglong *)(param_2 + 0x20)) {
    do {
      uVar5 = uVar5 + 1;
      bVar1 = *(byte *)(*(longlong *)(param_2 + 0x18) + -1 + uVar5);
      if (9 < (byte)(bVar1 - 0x30)) {
        if ((bVar1 | 0x20) == 0x65) {
          FUN_1801cc7f0(param_1,param_2,param_3,param_4,param_5);
          return param_1;
        }
        break;
      }
      *(ulonglong *)(param_2 + 0x28) = uVar5;
    } while (uVar5 != *(ulonglong *)(param_2 + 0x20));
  }
  auVar7._8_4_ = (int)((ulonglong)param_4 >> 0x20);
  auVar7._0_8_ = param_4;
  auVar7._12_4_ = 0x45300000;
  dVar6 = (auVar7._8_8_ - 1.9342813113834067e+25) +
          ((double)CONCAT44(0x43300000,(int)param_4) - 4503599627370496.0);
  uVar5 = (ulonglong)-param_5;
  if ((int)-param_5 < 0) {
    uVar5 = uVar2;
  }
  uVar4 = (uint)uVar5;
  while (0x134 < uVar4) {
    if ((dVar6 == 0.0) && (!NAN(dVar6))) goto joined_r0x0001801ffb5e;
    if (-1 < (int)uVar2) goto LAB_1801ffb62;
    dVar6 = dVar6 / 1e+308;
    param_5 = (int)uVar2 + 0x134;
    uVar2 = (ulonglong)param_5;
    uVar4 = -param_5;
    if ((int)-param_5 < 0) {
      uVar4 = param_5;
    }
    uVar5 = (ulonglong)uVar4;
  }
  if ((int)param_5 < 0) {
    dVar6 = dVar6 / *(double *)(&DAT_180289228 + uVar5 * 8);
  }
  else {
    dVar6 = dVar6 * *(double *)(&DAT_180289228 + uVar5 * 8);
    if (ABS(dVar6) == INFINITY) {
LAB_1801ffb62:
      local_30[0] = 0xe;
      uVar3 = FUN_1801ffc40(param_2,local_30);
      param_1[1] = uVar3;
      uVar3 = 1;
      goto LAB_1801ffb49;
    }
  }
joined_r0x0001801ffb5e:
  if (param_3 == '\0') {
    dVar6 = -dVar6;
  }
  param_1[1] = dVar6;
  uVar3 = 0;
LAB_1801ffb49:
  *param_1 = uVar3;
  return param_1;
}


