/* FUN_1801ee2a0 @ 1801ee2a0 */

void FUN_1801ee2a0(ulonglong param_1,longlong param_2,ulonglong param_3)

{
  bool bVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  
  uVar5 = param_1;
  uVar8 = param_3;
  if (999 < param_1) {
    lVar6 = param_2 + -1;
    lVar7 = 0;
    uVar8 = param_1;
    do {
      uVar5 = (param_3 + lVar7) - 4;
      if (param_3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar5,param_3,&DAT_180293630);
      }
      uVar5 = uVar8 / 10000;
      iVar4 = (int)uVar8 + (int)uVar5 * -10000;
      uVar9 = (uint)(iVar4 * 0x147b) >> 0x13;
      *(undefined *)(lVar6 + -3 + param_3) = (&DAT_180293549)[(ulonglong)uVar9 * 2];
      uVar2 = (param_3 + lVar7) - 3;
      if (param_3 <= uVar2) goto LAB_1801ee438;
      *(undefined *)(lVar6 + -2 + param_3) = (&DAT_18029354a)[(ulonglong)uVar9 * 2];
      uVar2 = (param_3 + lVar7) - 2;
      if (param_3 <= uVar2) goto LAB_1801ee438;
      uVar3 = (ulonglong)(iVar4 + uVar9 * -100 & 0xffff);
      *(undefined *)(lVar6 + -1 + param_3) = (&DAT_180293549)[uVar3 * 2];
      uVar2 = (param_3 + lVar7) - 1;
      if (param_3 <= uVar2) goto LAB_1801ee438;
      *(undefined *)(lVar6 + param_3) = (&DAT_18029354a)[uVar3 * 2];
      lVar7 = lVar7 + -4;
      lVar6 = lVar6 + -4;
      bVar1 = 9999999 < uVar8;
      uVar8 = uVar5;
    } while (bVar1);
    uVar8 = lVar7 + param_3;
  }
  if (9 < uVar5) {
    uVar2 = uVar8 - 2;
    if (param_3 <= uVar2) goto LAB_1801ee438;
    iVar4 = (int)uVar5;
    uVar9 = ((uint)(uVar5 >> 2) & 0xffff) * 0x147b >> 0x11;
    uVar5 = (ulonglong)uVar9;
    uVar3 = (ulonglong)(iVar4 + uVar9 * -100 & 0xffff);
    *(undefined *)(param_2 + -2 + uVar8) = (&DAT_180293549)[uVar3 * 2];
    uVar8 = uVar8 - 1;
    if (param_3 <= uVar8) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar8,param_3,&DAT_180293630);
    }
    *(undefined *)(param_2 + uVar8) = (&DAT_18029354a)[uVar3 * 2];
    uVar8 = uVar2;
  }
  if ((param_1 == 0) || (uVar5 != 0)) {
    uVar2 = uVar8 - 1;
    if (param_3 <= uVar2) {
LAB_1801ee438:
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar2,param_3,&DAT_180293630);
    }
    *(undefined *)(param_2 + uVar2) = (&DAT_18029354a)[(ulonglong)((uint)uVar5 & 0xf) * 2];
  }
  return;
}


