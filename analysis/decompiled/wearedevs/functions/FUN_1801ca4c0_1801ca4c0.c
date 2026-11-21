/* FUN_1801ca4c0 @ 1801ca4c0 */

void FUN_1801ca4c0(ulonglong *param_1,byte *param_2)

{
  ushort uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong *puVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  
  if (*(longlong *)(param_2 + 0x40) != 0) {
    *(longlong *)(param_2 + 0x40) = *(longlong *)(param_2 + 0x40) + -1;
    if (*(int *)param_2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288b10);
    }
    if (*(longlong *)(param_2 + 8) == 0) {
      lVar6 = *(longlong *)(param_2 + 0x10);
      uVar8 = *(ulonglong *)(param_2 + 0x18);
      if (uVar8 != 0) {
        uVar12 = uVar8;
        if ((uVar8 & 7) != 0) {
          uVar12 = 0;
          do {
            lVar6 = *(longlong *)(lVar6 + 0x278);
            uVar12 = uVar12 + 1;
          } while ((uVar8 & 7) != uVar12);
          uVar12 = uVar8 - uVar12;
        }
        if (7 < uVar8) {
          do {
            lVar6 = *(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)(*(longlong *)(lVar6 + 0x278) + 0x278) + 0x278) + 0x278
                             ) + 0x278) + 0x278) + 0x278) + 0x278);
            uVar12 = uVar12 - 8;
          } while (uVar12 != 0);
        }
      }
      param_2[0] = 1;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2[4] = 0;
      param_2[5] = 0;
      param_2[6] = 0;
      param_2[7] = 0;
      *(longlong *)(param_2 + 8) = lVar6;
      param_2[0x10] = 0;
      param_2[0x11] = 0;
      param_2[0x12] = 0;
      param_2[0x13] = 0;
      param_2[0x14] = 0;
      param_2[0x15] = 0;
      param_2[0x16] = 0;
      param_2[0x17] = 0;
      param_2[0x18] = 0;
      param_2[0x19] = 0;
      param_2[0x1a] = 0;
      param_2[0x1b] = 0;
      param_2[0x1c] = 0;
      param_2[0x1d] = 0;
      param_2[0x1e] = 0;
      param_2[0x1f] = 0;
    }
    uVar8 = *(ulonglong *)(param_2 + 8);
    uVar12 = *(ulonglong *)(param_2 + 0x10);
    uVar10 = *(ulonglong *)(param_2 + 0x18);
    if (*(ushort *)(uVar8 + 0x272) <= uVar10) {
      do {
        uVar3 = *(ulonglong *)(uVar8 + 0x160);
        if (uVar3 == 0) {
          uVar9 = 0x2d8;
          if (uVar12 == 0) {
            uVar9 = 0x278;
          }
          thunk_FUN_1801d3330(uVar8,uVar9,8);
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288ae0);
        }
        uVar13 = uVar12 + 1;
        uVar1 = *(ushort *)(uVar8 + 0x270);
        uVar10 = (ulonglong)uVar1;
        uVar9 = 0x2d8;
        if (uVar12 == 0) {
          uVar9 = 0x278;
        }
        thunk_FUN_1801d3330(uVar8,uVar9,8);
        uVar12 = uVar13;
        uVar8 = uVar3;
      } while (*(ushort *)(uVar3 + 0x272) <= uVar1);
    }
    lVar6 = uVar10 + 1;
    if (uVar12 == 0) {
      uVar3 = uVar8;
    }
    else {
      puVar7 = (ulonglong *)(uVar8 + lVar6 * 8 + 0x278);
      uVar3 = uVar12;
      uVar13 = uVar12;
      if ((uVar12 & 7) != 0) {
        uVar13 = 0;
        do {
          uVar3 = *puVar7;
          puVar7 = (ulonglong *)(uVar3 + 0x278);
          uVar13 = uVar13 + 1;
        } while ((uVar12 & 7) != uVar13);
        uVar13 = uVar12 - uVar13;
      }
      lVar6 = 0;
      if (7 < uVar12) {
        do {
          lVar6 = 0;
          uVar3 = *(ulonglong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)(*(longlong *)(*puVar7 + 0x278) + 0x278) + 0x278) + 0x278)
                       + 0x278) + 0x278) + 0x278);
          puVar7 = (ulonglong *)(uVar3 + 0x278);
          uVar13 = uVar13 - 8;
        } while (uVar13 != 0);
      }
    }
    *param_1 = uVar8;
    param_1[1] = uVar12;
    param_1[2] = uVar10;
    *(ulonglong *)(param_2 + 8) = uVar3;
    param_2[0x10] = 0;
    param_2[0x11] = 0;
    param_2[0x12] = 0;
    param_2[0x13] = 0;
    param_2[0x14] = 0;
    param_2[0x15] = 0;
    param_2[0x16] = 0;
    param_2[0x17] = 0;
    *(longlong *)(param_2 + 0x18) = lVar6;
    return;
  }
  lVar6 = *(longlong *)(param_2 + 8);
  lVar4 = *(longlong *)(param_2 + 0x10);
  uVar8 = *(ulonglong *)(param_2 + 0x18);
  param_2[0] = 0;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  param_2[7] = 0;
  if ((*param_2 & 1) == 0) goto LAB_1801ca848;
  if (lVar6 == 0) {
    if (uVar8 != 0) {
      if ((uVar8 & 7) == 0) {
        uVar12 = uVar8;
      }
      else {
        uVar12 = 0;
        do {
          lVar4 = *(longlong *)(lVar4 + 0x278);
          uVar12 = uVar12 + 1;
        } while ((uVar8 & 7) != uVar12);
        uVar12 = uVar8 - uVar12;
      }
      if (7 < uVar8) {
        do {
          lVar4 = *(longlong *)
                   (*(longlong *)
                     (*(longlong *)
                       (*(longlong *)
                         (*(longlong *)
                           (*(longlong *)
                             (*(longlong *)(*(longlong *)(lVar4 + 0x278) + 0x278) + 0x278) + 0x278)
                         + 0x278) + 0x278) + 0x278) + 0x278);
          uVar12 = uVar12 - 8;
        } while (uVar12 != 0);
      }
    }
    lVar5 = 0;
    lVar2 = *(longlong *)(lVar4 + 0x160);
    if (*(longlong *)(lVar4 + 0x160) == 0) goto LAB_1801ca823;
LAB_1801ca660:
    do {
      lVar11 = lVar2;
      lVar6 = lVar5 + 1;
      uVar9 = 0x2d8;
      if (lVar5 == 0) {
        uVar9 = 0x278;
      }
      thunk_FUN_1801d3330(lVar4,uVar9,8);
      lVar5 = lVar6;
      lVar4 = lVar11;
      lVar2 = *(longlong *)(lVar11 + 0x160);
    } while (*(longlong *)(lVar11 + 0x160) != 0);
  }
  else {
    lVar5 = lVar4;
    lVar4 = lVar6;
    lVar2 = *(longlong *)(lVar6 + 0x160);
    if (*(longlong *)(lVar6 + 0x160) != 0) goto LAB_1801ca660;
LAB_1801ca823:
    lVar11 = lVar4;
    lVar6 = lVar5;
  }
  uVar9 = 0x2d8;
  if (lVar6 == 0) {
    uVar9 = 0x278;
  }
  thunk_FUN_1801d3330(lVar11,uVar9,8);
LAB_1801ca848:
  *param_1 = 0;
  return;
}


