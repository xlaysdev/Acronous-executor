/* FUN_1801ee0e0 @ 1801ee0e0 */

void FUN_1801ee0e0(uint param_1,longlong param_2,ulonglong param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  uVar4 = param_3;
  uVar3 = param_1;
  if (999 < param_1) {
    lVar7 = param_2 + -1;
    lVar2 = 0;
    uVar4 = (ulonglong)param_1;
    do {
      uVar1 = (param_3 + lVar2) - 4;
      if (param_3 <= uVar1) goto LAB_1801ee26c;
      uVar6 = (uint)uVar4;
      uVar4 = uVar4 / 10000;
      uVar3 = (uint)uVar4;
      iVar8 = uVar6 + uVar3 * -10000;
      uVar9 = (uint)(iVar8 * 0x147b) >> 0x13;
      *(undefined *)(lVar7 + -3 + param_3) = (&DAT_180293549)[(ulonglong)uVar9 * 2];
      uVar1 = (param_3 + lVar2) - 3;
      if (param_3 <= uVar1) goto LAB_1801ee26c;
      *(undefined *)(lVar7 + -2 + param_3) = (&DAT_18029354a)[(ulonglong)uVar9 * 2];
      uVar1 = (param_3 + lVar2) - 2;
      if (param_3 <= uVar1) goto LAB_1801ee26c;
      uVar5 = (ulonglong)(iVar8 + uVar9 * -100 & 0xffff);
      *(undefined *)(lVar7 + -1 + param_3) = (&DAT_180293549)[uVar5 * 2];
      uVar1 = (param_3 + lVar2) - 1;
      if (param_3 <= uVar1) goto LAB_1801ee26c;
      *(undefined *)(lVar7 + param_3) = (&DAT_18029354a)[uVar5 * 2];
      lVar2 = lVar2 + -4;
      lVar7 = lVar7 + -4;
    } while (9999999 < uVar6);
    uVar4 = lVar2 + param_3;
  }
  if (9 < uVar3) {
    uVar1 = uVar4 - 2;
    if (param_3 <= uVar1) goto LAB_1801ee26c;
    uVar6 = (uVar3 & 0xffff) / 100;
    uVar5 = (ulonglong)(uVar3 + uVar6 * -100 & 0xffff);
    *(undefined *)(param_2 + -2 + uVar4) = (&DAT_180293549)[uVar5 * 2];
    uVar4 = uVar4 - 1;
    if (param_3 <= uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar4,param_3,&DAT_180293630);
    }
    *(undefined *)(param_2 + uVar4) = (&DAT_18029354a)[uVar5 * 2];
    uVar4 = uVar1;
    uVar3 = uVar6;
  }
  if ((param_1 == 0) || (uVar3 != 0)) {
    uVar1 = uVar4 - 1;
    if (param_3 <= uVar1) {
LAB_1801ee26c:
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar1,param_3,&DAT_180293630);
    }
    *(undefined *)(param_2 + uVar1) = (&DAT_18029354a)[(ulonglong)(uVar3 & 0xf) * 2];
  }
  return;
}


