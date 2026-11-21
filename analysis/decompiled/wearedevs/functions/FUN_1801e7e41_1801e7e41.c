/* FUN_1801e7e41 @ 1801e7e41 */

ulonglong FUN_1801e7e41(longlong *param_1)

{
  longlong *plVar1;
  bool bVar2;
  char cVar3;
  longlong *plVar4;
  longlong lVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong *plVar9;
  char **unaff_RSI;
  undefined7 uVar10;
  char **ppcVar11;
  longlong lVar12;
  longlong unaff_R15;
  char *local_d0;
  longlong local_c8;
  char *local_c0;
  longlong local_b8;
  undefined8 local_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined2 local_90;
  char *local_88;
  byte local_80;
  undefined7 uStack_7f;
  longlong local_70;
  
  lVar12 = *param_1;
  if (lVar12 == 0) {
LAB_1801e80fb:
    if (param_1[4] != 0) {
      cVar3 = FUN_1801edcb0(&DAT_1802923d3,3);
      unaff_RSI = (char **)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      if (cVar3 != '\0') goto LAB_1801e818a;
    }
    uVar7 = FUN_1801e913f(param_1);
    unaff_RSI = (char **)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
    if (((uVar7 & 1) != 0) || ((param_1[4] != 0 && (cVar3 = FUN_1801edcb0(")",1), cVar3 != '\0'))))
    goto LAB_1801e818a;
    if ((*param_1 == 0) ||
       ((uVar7 = param_1[2], (ulonglong)param_1[1] <= uVar7 || (*(char *)(*param_1 + uVar7) != 'u'))
       )) {
      if ((param_1[4] == 0) || (cVar3 = FUN_1801edcb0(&DAT_1802923d6,4), cVar3 == '\0')) {
        uVar7 = FUN_1801e7926(param_1);
        return uVar7;
      }
      goto LAB_1801e818a;
    }
    param_1[2] = uVar7 + 1;
  }
  else {
    plVar9 = (longlong *)param_1[1];
    plVar4 = (longlong *)param_1[2];
    if ((plVar4 < plVar9) && (*(char *)(lVar12 + (longlong)plVar4) == 'U')) {
      plVar4 = (longlong *)((longlong)plVar4 + 1);
      param_1[2] = (longlong)plVar4;
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
    if ((plVar9 <= plVar4) || (*(char *)(lVar12 + (longlong)plVar4) != 'K')) {
      if (bVar2) {
        pcVar8 = (char *)0x0;
LAB_1801e7ece:
        if (param_1[4] != 0) {
          plVar9 = (longlong *)&DAT_00000007;
          cVar3 = FUN_1801edcb0("unsafe ",7);
          unaff_RSI = (char **)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
          if (cVar3 != '\0') goto LAB_1801e818a;
        }
        if (pcVar8 != (char *)0x0) goto LAB_1801e7f35;
      }
      goto LAB_1801e80fb;
    }
    plVar1 = (longlong *)((longlong)plVar4 + 1);
    param_1[2] = (longlong)plVar1;
    if ((plVar1 < plVar9) && (*(char *)(lVar12 + (longlong)plVar1) == 'C')) {
      param_1[2] = (longlong)plVar4 + 2;
      unaff_R15 = 1;
      local_88 = "C";
LAB_1801e7f30:
      pcVar8 = local_88;
      if (bVar2) goto LAB_1801e7ece;
LAB_1801e7f35:
      lVar12 = param_1[4];
      if (lVar12 != 0) {
        plVar9 = (longlong *)&DAT_00000008;
        cVar3 = FUN_1801edcb0("extern \"",8,lVar12);
        unaff_RSI = (char **)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
        if (cVar3 != '\0') goto LAB_1801e818a;
      }
      local_d0 = (char *)0x0;
      local_b0 = 0;
      local_a0 = 0x5f0000005f;
      local_98 = 1;
      local_90 = 1;
      local_c8 = unaff_R15;
      local_c0 = pcVar8;
      local_b8 = unaff_R15;
      local_a8 = unaff_R15;
      lVar5 = FUN_1801eac05();
      if (lVar5 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s__rust_deps_rustc_demangle_0_1_26_1802923b8);
      }
      if ((lVar12 == 0) || (cVar3 = FUN_1801edcb0(lVar5), cVar3 == '\0')) {
        unaff_RSI = &local_d0;
        ppcVar11 = &local_88;
        for (lVar5 = 9; lVar5 != 0; lVar5 = lVar5 + -1) {
          *ppcVar11 = *unaff_RSI;
          unaff_RSI = unaff_RSI + 1;
          ppcVar11 = ppcVar11 + 1;
        }
        lVar6 = FUN_1801eac05(&local_88);
        lVar5 = lVar12;
        if (lVar6 != 0) {
          unaff_RSI = &local_88;
          do {
            if (lVar12 == 0) {
LAB_1801e8034:
              lVar12 = 0;
            }
            else {
              plVar4 = (longlong *)0x1;
              cVar3 = FUN_1801edcb0(&DAT_1802923d2,1,lVar12);
              if (cVar3 != '\0') goto LAB_1801e80f3;
              lVar12 = param_1[4];
              if (lVar12 == 0) {
                lVar5 = 0;
                plVar9 = plVar4;
                goto LAB_1801e8034;
              }
              cVar3 = FUN_1801edcb0(lVar6,plVar9,lVar12);
              lVar5 = lVar12;
              if (cVar3 != '\0') goto LAB_1801e80f3;
            }
            lVar6 = FUN_1801eac05(unaff_RSI);
          } while (lVar6 != 0);
        }
        if ((lVar5 == 0) || (cVar3 = FUN_1801edcb0(&DAT_1802923d0,2,lVar5), cVar3 == '\0'))
        goto LAB_1801e80fb;
      }
LAB_1801e80f3:
      unaff_RSI = (char **)CONCAT71((int7)((ulonglong)unaff_RSI >> 8),1);
      goto LAB_1801e818a;
    }
    unaff_RSI = &local_88;
    plVar9 = param_1;
    FUN_1801e6fcb(unaff_RSI,param_1);
    uVar10 = (undefined7)((ulonglong)unaff_RSI >> 8);
    if (local_88 == (char *)0x0) {
      if (param_1[4] != 0) {
        pcVar8 = "{invalid syntax}";
        if (local_80 != 0) {
          pcVar8 = "{recursion limit reached}";
        }
        cVar3 = FUN_1801edcb0(pcVar8,(ulonglong)local_80 * 9 + 0x10);
        unaff_RSI = (char **)CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_1801e818a;
      }
      *param_1 = 0;
      *(byte *)(param_1 + 1) = local_80;
    }
    else {
      unaff_R15 = CONCAT71(uStack_7f,local_80);
      if ((unaff_R15 != 0) && (local_70 == 0)) goto LAB_1801e7f30;
      if (param_1[4] != 0) {
        cVar3 = FUN_1801edcb0("{invalid syntax}",0x10);
        unaff_RSI = (char **)CONCAT71(uVar10,1);
        if (cVar3 != '\0') goto LAB_1801e818a;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  unaff_RSI = (char **)0x0;
LAB_1801e818a:
  return (ulonglong)unaff_RSI & 0xffffffff;
}


