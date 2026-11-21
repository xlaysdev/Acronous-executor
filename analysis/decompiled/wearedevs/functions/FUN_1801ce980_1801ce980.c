/* FUN_1801ce980 @ 1801ce980 */

/* WARNING: Instruction at (ram,0x0001801ceeb0) overlaps instruction at (ram,0x0001801ceeae)
    */
/* WARNING: Control flow encountered bad instruction data */
/* WARNING: This function may have set the stack pointer */

longlong FUN_1801ce980(byte *param_1,uint *param_2)

{
  byte *pbVar1;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  code *pcVar6;
  bool bVar7;
  uint uVar8;
  ulonglong uVar9;
  char *pcVar10;
  longlong lVar11;
  longlong lVar12;
  byte bVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  uint *puVar16;
  ulonglong *puVar17;
  undefined8 unaff_RBX;
  ulonglong uVar18;
  undefined8 uVar19;
  ulonglong uVar20;
  longlong in_R11;
  longlong lVar21;
  ulonglong uVar22;
  
  puVar16 = &switchD_1801ce9b1::switchdataD_180289f54;
  uVar9 = (ulonglong)(int)(&switchD_1801ce9b1::switchdataD_180289f54)[*param_1];
  pcVar10 = (char *)((longlong)&switchD_1801ce9b1::switchdataD_180289f54 + uVar9);
  bVar13 = (byte)param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    uVar15 = *(undefined8 *)param_2;
    pcVar10 = "null";
    uVar19 = 4;
    break;
  case 1:
    uVar15 = *(undefined8 *)param_2;
    if (param_1[1] == 0) {
      pcVar10 = "false";
      uVar19 = 5;
    }
    else {
      pcVar10 = "true";
      uVar19 = 4;
    }
    break;
  case 2:
    lVar12 = FUN_1801cab00(param_1 + 8,param_2);
    return lVar12;
  case 3:
    lVar11 = FUN_1801ce850(param_2,&switchD_1801ce9b1::switchdataD_180289f54,
                           *(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    goto LAB_1801ced7b;
  case 4:
    lVar12 = FUN_1801ce2e0(param_2,param_1 + 8);
    return lVar12;
  case 5:
    lVar12 = *(longlong *)(param_1 + 0x18);
    uVar15 = *(undefined8 *)param_2;
    lVar21 = *(longlong *)(param_2 + 6);
    *(longlong *)(param_2 + 6) = lVar21 + 1;
    *(undefined1 *)(param_2 + 8) = 0;
    lVar11 = FUN_1801cbac0(uVar15,"{");
    if (lVar11 != 0) goto LAB_1801cede8;
    if (lVar12 == 0) {
      *(longlong *)(param_2 + 6) = lVar21;
    }
    else {
      uVar9 = *(ulonglong *)(param_1 + 8);
      if (uVar9 != 0) {
        uVar20 = *(ulonglong *)(param_1 + 0x10);
        bVar7 = true;
        uVar18 = 0;
        do {
          if (uVar18 == 0) {
            if (uVar20 == 0) {
              uVar18 = uVar9;
            }
            else {
              uVar14 = uVar20;
              if ((uVar20 & 7) != 0) {
                uVar18 = 0;
                do {
                  uVar9 = *(ulonglong *)(uVar9 + 0x278);
                  uVar18 = uVar18 + 1;
                } while ((uVar20 & 7) != uVar18);
                uVar14 = uVar20 - uVar18;
              }
              uVar18 = uVar9;
              if (7 < uVar20) {
                do {
                  uVar9 = *(ulonglong *)
                           (*(longlong *)
                             (*(longlong *)
                               (*(longlong *)
                                 (*(longlong *)
                                   (*(longlong *)
                                     (*(longlong *)(*(longlong *)(uVar9 + 0x278) + 0x278) + 0x278) +
                                   0x278) + 0x278) + 0x278) + 0x278) + 0x278);
                  uVar14 = uVar14 - 8;
                  uVar18 = uVar9;
                } while (uVar14 != 0);
              }
            }
            uVar9 = 0;
            uVar14 = 0;
            if (*(short *)(uVar18 + 0x272) != 0) goto LAB_1801ceab6;
LAB_1801ceb70:
            do {
              uVar22 = *(ulonglong *)(uVar18 + 0x160);
              if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180288af8);
              }
              uVar9 = uVar9 + 1;
              puVar2 = (ushort *)(uVar18 + 0x270);
              uVar14 = (ulonglong)*puVar2;
              uVar18 = uVar22;
            } while (*(ushort *)(uVar22 + 0x272) <= *puVar2);
          }
          else {
            uVar14 = uVar20;
            if (*(ushort *)(uVar18 + 0x272) <= uVar20) goto LAB_1801ceb70;
LAB_1801ceab6:
            uVar22 = uVar18;
          }
          uVar20 = uVar14 + 1;
          uVar18 = uVar22;
          if (uVar9 != 0) {
            puVar17 = (ulonglong *)(uVar22 + uVar20 * 8 + 0x278);
            uVar20 = uVar9;
            if ((uVar9 & 7) != 0) {
              uVar20 = 0;
              do {
                uVar18 = *puVar17;
                puVar17 = (ulonglong *)(uVar18 + 0x278);
                uVar20 = uVar20 + 1;
              } while ((uVar9 & 7) != uVar20);
              uVar20 = uVar9 - uVar20;
            }
            if (7 < uVar9) {
              do {
                uVar18 = *(ulonglong *)
                          (*(longlong *)
                            (*(longlong *)
                              (*(longlong *)
                                (*(longlong *)
                                  (*(longlong *)(*(longlong *)(*puVar17 + 0x278) + 0x278) + 0x278) +
                                0x278) + 0x278) + 0x278) + 0x278);
                puVar17 = (ulonglong *)(uVar18 + 0x278);
                uVar20 = uVar20 - 8;
              } while (uVar20 != 0);
            }
            uVar20 = 0;
          }
          uVar15 = *(undefined8 *)param_2;
          if (bVar7) {
            uVar19 = 1;
            pcVar10 = "\n";
          }
          else {
            uVar19 = 2;
            pcVar10 = ",\n";
          }
          lVar11 = FUN_1801cbac0(uVar15,pcVar10,uVar19);
          if (lVar11 != 0) goto LAB_1801cede8;
          lVar12 = lVar12 + -1;
          uVar19 = *(undefined8 *)(param_2 + 2);
          uVar5 = *(undefined8 *)(param_2 + 4);
          lVar21 = *(longlong *)(param_2 + 6) + 1;
          while (lVar21 = lVar21 + -1, lVar21 != 0) {
            lVar11 = FUN_1801cbac0(uVar15,uVar19,uVar5);
            if (lVar11 != 0) goto LAB_1801cede8;
          }
          lVar11 = FUN_1801ce850(param_2);
          if ((lVar11 != 0) || (lVar11 = FUN_1801cbac0(uVar15,": "), lVar11 != 0))
          goto LAB_1801cede8;
          lVar21 = FUN_1801ce980(uVar22 + uVar14 * 0x20,param_2);
          if (lVar21 != 0) {
            return lVar21;
          }
          *(undefined1 *)(param_2 + 8) = 1;
          bVar7 = false;
          uVar9 = 0;
        } while (lVar12 != 0);
        uVar15 = *(undefined8 *)param_2;
        lVar12 = *(longlong *)(param_2 + 6);
        *(longlong *)(param_2 + 6) = lVar12 + -1;
        lVar11 = FUN_1801cbac0(uVar15,"\n",1);
        if (lVar11 == 0) {
          uVar19 = *(undefined8 *)(param_2 + 2);
          uVar5 = *(undefined8 *)(param_2 + 4);
          do {
            lVar12 = lVar12 + -1;
            if (lVar12 == 0) goto LAB_1801ced66;
            lVar11 = FUN_1801cbac0(uVar15,uVar19,uVar5);
          } while (lVar11 == 0);
        }
        goto LAB_1801cede8;
      }
      uVar15 = *(undefined8 *)param_2;
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 6) + -1;
    }
LAB_1801ced66:
    pcVar10 = "}";
    uVar19 = 1;
    break;
  case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  case 7:
    pbVar1 = (byte *)(in_R11 + 0x49 + (longlong)param_1 * 4);
    bVar4 = *pbVar1;
    bVar3 = *pbVar1;
    *pbVar1 = bVar3 + bVar13 + (0xfffffffe7fd760ab < uVar9);
    (&UNK_180289edd)[uVar9] =
         ((&UNK_180289edd)[uVar9] - bVar13) -
         (CARRY1(bVar4,bVar13) || CARRY1(bVar3 + bVar13,0xfffffffe7fd760ab < uVar9));
    pcVar6 = (code *)swi(1);
    lVar12 = (*pcVar6)();
    return lVar12;
  case 8:
    lVar12 = FUN_1801ce5d0(param_2);
    return lVar12;
  case 9:
    puVar16 = param_2;
    goto code_r0x0001801ceead;
  case 10:
    param_1 = param_1 + -1;
    if (param_1 == (byte *)0x0 || (char)((char)((ulonglong)unaff_RBX >> 8) >> 1) == '\0') {
      uVar8 = *param_2;
      puVar16 = (uint *)"null";
      goto LAB_1801cf2da;
    }
code_r0x0001801ceead:
    lVar12 = FUN_1801cab00(param_1,puVar16);
    return lVar12;
  case 0xb:
    *pcVar10 = *pcVar10 + (char)pcVar10;
    pbVar1 = &UNK_180289ee1 + uVar9;
    bVar4 = *pbVar1;
    *pbVar1 = *pbVar1 + bVar13;
    uVar8 = (int)pcVar10 + 0xbb053 + (uint)CARRY1(bVar4,bVar13);
LAB_1801cf2da:
    lVar12 = FUN_1801cbac0(uVar8,puVar16,4);
    if (lVar12 == 0) {
      return 0;
    }
    lVar12 = FUN_1801ff6a0(lVar12);
    return lVar12;
  }
  lVar11 = FUN_1801cbac0(uVar15,pcVar10,uVar19);
LAB_1801ced7b:
  if (lVar11 == 0) {
    return 0;
  }
LAB_1801cede8:
  lVar12 = FUN_1801ff6a0(lVar11);
  return lVar12;
}


