/* FUN_1801cee30 @ 1801cee30 */

longlong FUN_1801cee30(undefined1 *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  uint uVar2;
  longlong lVar3;
  ulonglong uVar4;
  uint uVar5;
  longlong *plVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  char *pcVar9;
  longlong unaff_RBX;
  undefined8 uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar7 = *param_2;
    pcVar9 = "null";
    uVar10 = 4;
    break;
  case 1:
    uVar7 = *param_2;
    if (param_1[1] == '\0') {
      pcVar9 = "false";
      uVar10 = 5;
    }
    else {
      pcVar9 = "true";
      uVar10 = 4;
    }
    break;
  case 2:
    lVar11 = FUN_1801cab00(param_1 + 8,param_2);
    return lVar11;
  case 3:
    lVar3 = FUN_1801ce850(param_2,&switchD_1801cee61::switchdataD_180289f6c,
                          *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    goto LAB_1801cf2df;
  case 4:
    lVar11 = FUN_1801ce5d0(param_2,param_1 + 8);
    return lVar11;
  case 5:
    lVar11 = *(longlong *)(param_1 + 0x18);
    uVar7 = *param_2;
    lVar3 = FUN_1801cbac0(uVar7,"{",1);
    if (lVar3 != 0) goto LAB_1801cf2f7;
    if ((lVar11 != 0) && (lVar14 = *(longlong *)(param_1 + 8), lVar14 != 0)) {
      uVar4 = *(ulonglong *)(param_1 + 0x10);
      if (uVar4 != 0) {
        if ((uVar4 & 7) == 0) {
          uVar8 = uVar4;
        }
        else {
          uVar8 = 0;
          do {
            lVar14 = *(longlong *)(lVar14 + 0x278);
            uVar8 = uVar8 + 1;
          } while ((uVar4 & 7) != uVar8);
          uVar8 = uVar4 - uVar8;
        }
        if (7 < uVar4) {
          do {
            lVar14 = *(longlong *)
                      (*(longlong *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)(*(longlong *)(lVar14 + 0x278) + 0x278) + 0x278) +
                              0x278) + 0x278) + 0x278) + 0x278) + 0x278);
            uVar8 = uVar8 - 8;
          } while (uVar8 != 0);
        }
      }
      if (*(short *)(lVar14 + 0x272) == 0) {
        uVar4 = 0;
        lVar3 = lVar14;
        uVar2 = 1;
        do {
          uVar5 = uVar2;
          uVar8 = uVar4;
          lVar14 = *(longlong *)(lVar3 + 0x160);
          if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288af8);
          }
          uVar4 = uVar8 + 1;
          puVar1 = (ushort *)(lVar3 + 0x270);
          uVar13 = (ulonglong)*puVar1;
          lVar3 = lVar14;
          uVar2 = uVar5 + 1;
        } while (*(ushort *)(lVar14 + 0x272) <= *puVar1);
        uVar12 = uVar13 + 1;
        if (uVar4 == 0) {
          unaff_RBX = lVar14;
        }
        else {
          plVar6 = (longlong *)(lVar14 + uVar12 * 8 + 0x278);
          if ((uVar4 & 7) != 0) {
            uVar12 = 0;
            do {
              unaff_RBX = *plVar6;
              plVar6 = (longlong *)(unaff_RBX + 0x278);
              uVar12 = uVar12 + 1;
            } while ((uVar5 & 7) != uVar12);
            uVar4 = uVar4 - uVar12;
          }
          uVar12 = 0;
          if (6 < uVar8) {
            do {
              unaff_RBX = *(longlong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)(*(longlong *)(*plVar6 + 0x278) + 0x278) + 0x278) +
                                 0x278) + 0x278) + 0x278) + 0x278);
              plVar6 = (longlong *)(unaff_RBX + 0x278);
              uVar4 = uVar4 - 8;
            } while (uVar4 != 0);
          }
        }
      }
      else {
        uVar12 = 1;
        uVar13 = 0;
        unaff_RBX = lVar14;
      }
      lVar3 = FUN_1801ce850(param_2);
      if ((lVar3 != 0) || (lVar3 = FUN_1801cbac0(uVar7,":",1), lVar3 != 0)) goto LAB_1801cf2f7;
      lVar3 = FUN_1801cee30(lVar14 + (ulonglong)(uint)((int)uVar13 << 5),param_2);
      if (lVar3 != 0) {
        return lVar3;
      }
      while (lVar11 = lVar11 + -1, lVar11 != 0) {
        if (uVar12 < *(ushort *)(unaff_RBX + 0x272)) {
          uVar13 = uVar12 + 1;
          lVar14 = unaff_RBX;
        }
        else {
          uVar4 = 0;
          uVar2 = 1;
          do {
            uVar5 = uVar2;
            uVar8 = uVar4;
            lVar14 = *(longlong *)(unaff_RBX + 0x160);
            if (lVar14 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288af8);
            }
            uVar4 = uVar8 + 1;
            puVar1 = (ushort *)(unaff_RBX + 0x270);
            uVar12 = (ulonglong)*puVar1;
            unaff_RBX = lVar14;
            uVar2 = uVar5 + 1;
          } while (*(ushort *)(lVar14 + 0x272) <= *puVar1);
          uVar13 = uVar12 + 1;
          if (uVar4 != 0) {
            plVar6 = (longlong *)(lVar14 + uVar13 * 8 + 0x278);
            if ((uVar4 & 7) != 0) {
              uVar13 = 0;
              do {
                unaff_RBX = *plVar6;
                plVar6 = (longlong *)(unaff_RBX + 0x278);
                uVar13 = uVar13 + 1;
              } while ((uVar5 & 7) != uVar13);
              uVar4 = uVar4 - uVar13;
            }
            if (6 < uVar8) {
              do {
                unaff_RBX = *(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(*plVar6 + 0x278) + 0x278) + 0x278)
                                   + 0x278) + 0x278) + 0x278) + 0x278);
                plVar6 = (longlong *)(unaff_RBX + 0x278);
                uVar4 = uVar4 - 8;
              } while (uVar4 != 0);
            }
            uVar13 = 0;
          }
        }
        lVar3 = FUN_1801cbac0(uVar7,",",1);
        if (((lVar3 != 0) || (lVar3 = FUN_1801ce850(param_2), lVar3 != 0)) ||
           (lVar3 = FUN_1801cbac0(uVar7,":",1), lVar3 != 0)) goto LAB_1801cf2f7;
        lVar3 = FUN_1801cee30(lVar14 + uVar12 * 0x20,param_2);
        uVar12 = uVar13;
        if (lVar3 != 0) {
          return lVar3;
        }
      }
    }
    pcVar9 = "}";
    uVar10 = 1;
  }
  lVar3 = FUN_1801cbac0(uVar7,pcVar9,uVar10);
LAB_1801cf2df:
  if (lVar3 == 0) {
    return 0;
  }
LAB_1801cf2f7:
  lVar11 = FUN_1801ff6a0(lVar3);
  return lVar11;
}


