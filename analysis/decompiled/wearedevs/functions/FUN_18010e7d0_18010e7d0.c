/* FUN_18010e7d0 @ 18010e7d0 */

undefined8 * FUN_18010e7d0(undefined8 *param_1,undefined8 *param_2,ulonglong param_3,char *param_4)

{
  undefined8 *puVar1;
  undefined4 *puVar2;
  short sVar3;
  short *psVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  longlong lVar8;
  short *psVar9;
  longlong lVar10;
  short *psVar11;
  char cVar12;
  longlong lVar13;
  longlong local_a0;
  longlong local_98;
  longlong local_90;
  undefined8 uStack_88;
  undefined4 uStack_80;
  undefined2 uStack_7c;
  undefined2 local_7a;
  undefined2 uStack_78;
  undefined4 uStack_76;
  undefined8 uStack_72;
  longlong local_68;
  longlong local_60;
  short *local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((param_3 & 1) == 0) {
    if (*param_4 == '\0') goto LAB_18010e8df;
    local_58 = (short *)*param_2;
    psVar11 = (short *)param_2[1];
    local_60 = param_2[2];
    psVar4 = (short *)param_2[3];
    psVar9 = local_58;
    if (psVar11 != psVar4) {
      do {
        uVar5 = *(undefined8 *)(psVar11 + 1);
        uVar6 = *(undefined8 *)(psVar11 + 5);
        uVar7 = *(undefined8 *)(psVar11 + 0xc);
        uStack_78 = (undefined2)((ulonglong)*(undefined8 *)(psVar11 + 8) >> 0x10);
        uStack_76 = (undefined4)((ulonglong)*(undefined8 *)(psVar11 + 8) >> 0x20);
        local_7a = (undefined2)((ulonglong)uVar6 >> 0x30);
        if (*psVar11 != 0) {
          *psVar9 = *psVar11;
          *(undefined8 *)(psVar9 + 1) = uVar5;
          *(undefined8 *)(psVar9 + 5) = uVar6;
          *(ulonglong *)(psVar9 + 8) = CONCAT44(uStack_76,CONCAT22(uStack_78,local_7a));
          *(undefined8 *)(psVar9 + 0xc) = uVar7;
          psVar9 = psVar9 + 0x10;
        }
        psVar11 = psVar11 + 0x10;
      } while (psVar11 != psVar4);
    }
  }
  else {
    if (*param_4 != '\0') {
LAB_18010e8df:
      psVar11 = (short *)param_2[1];
      psVar4 = (short *)param_2[3];
      if (psVar4 == psVar11) {
        cVar12 = '\0';
      }
      else {
        cVar12 = (char)*psVar11;
      }
      uVar5 = *param_2;
      local_68 = param_2[2];
      local_60 = 0;
      local_58 = (short *)&DAT_00000004;
      local_50 = 0;
      local_a0 = 0;
      local_98 = 4;
      local_90 = 0;
      if (psVar4 == psVar11) {
        lVar13 = 0;
      }
      else {
        lVar10 = 4;
        lVar13 = 0;
        do {
          while( true ) {
            lVar8 = local_50;
            sVar3 = *psVar11;
            uStack_88 = *(undefined8 *)(psVar11 + 1);
            uStack_80 = *(undefined4 *)(psVar11 + 5);
            uStack_76 = *(undefined4 *)(psVar11 + 10);
            uStack_72 = *(undefined8 *)(psVar11 + 0xc);
            uStack_78 = (undefined2)((uint)*(undefined4 *)(psVar11 + 8) >> 0x10);
            uStack_7c = (undefined2)*(undefined4 *)(psVar11 + 7);
            local_7a = (undefined2)((uint)*(undefined4 *)(psVar11 + 7) >> 0x10);
            if ((sVar3 == 0) == (bool)cVar12) break;
            if (local_50 == local_60) {
              FUN_1801f9010(&local_60);
            }
            local_58[lVar8 * 0x10] = sVar3;
            *(undefined8 *)(local_58 + lVar8 * 0x10 + 1) = uStack_88;
            *(ulonglong *)(local_58 + lVar8 * 0x10 + 1 + 4) =
                 CONCAT26(local_7a,CONCAT24(uStack_7c,uStack_80));
            psVar9 = local_58 + lVar8 * 0x10 + 8;
            *(uint *)psVar9 = CONCAT22(uStack_78,local_7a);
            *(undefined4 *)(psVar9 + 2) = uStack_76;
            *(undefined4 *)(psVar9 + 4) = (undefined4)uStack_72;
            *(undefined4 *)(psVar9 + 6) = uStack_72._4_4_;
            local_50 = lVar8 + 1;
            psVar11 = psVar11 + 0x10;
            if (psVar11 == psVar4) goto LAB_18010ea1f;
          }
          if (lVar13 == local_a0) {
            FUN_1801f9010(&local_a0);
            lVar10 = local_98;
          }
          lVar8 = lVar13 * 0x20;
          *(short *)(lVar10 + lVar8) = sVar3;
          puVar1 = (undefined8 *)(lVar10 + 2 + lVar8);
          *puVar1 = uStack_88;
          puVar1[1] = CONCAT26(local_7a,CONCAT24(uStack_7c,uStack_80));
          puVar2 = (undefined4 *)(lVar10 + 0x10 + lVar8);
          *puVar2 = CONCAT22(uStack_78,local_7a);
          puVar2[1] = uStack_76;
          puVar2[2] = (undefined4)uStack_72;
          puVar2[3] = uStack_72._4_4_;
          lVar13 = lVar13 + 1;
          psVar11 = psVar11 + 0x10;
          local_90 = lVar13;
        } while (psVar11 != psVar4);
      }
LAB_18010ea1f:
      if (local_68 != 0) {
        thunk_FUN_1801d3330(uVar5,local_68 << 5,4);
      }
      psVar9 = local_58 + local_50 * 0x10;
      lVar13 = lVar13 * 0x20 + local_98;
      goto LAB_18010ea61;
    }
    local_58 = (short *)*param_2;
    psVar11 = (short *)param_2[1];
    local_60 = param_2[2];
    psVar4 = (short *)param_2[3];
    psVar9 = local_58;
    if (psVar11 != psVar4) {
      do {
        uVar5 = *(undefined8 *)(psVar11 + 1);
        uVar6 = *(undefined8 *)(psVar11 + 5);
        uVar7 = *(undefined8 *)(psVar11 + 0xc);
        uStack_78 = (undefined2)((ulonglong)*(undefined8 *)(psVar11 + 8) >> 0x10);
        uStack_76 = (undefined4)((ulonglong)*(undefined8 *)(psVar11 + 8) >> 0x20);
        local_7a = (undefined2)((ulonglong)uVar6 >> 0x30);
        if (*psVar11 == 0) {
          *psVar9 = 0;
          *(undefined8 *)(psVar9 + 1) = uVar5;
          *(undefined8 *)(psVar9 + 5) = uVar6;
          *(ulonglong *)(psVar9 + 8) = CONCAT44(uStack_76,CONCAT22(uStack_78,local_7a));
          *(undefined8 *)(psVar9 + 0xc) = uVar7;
          psVar9 = psVar9 + 0x10;
        }
        psVar11 = psVar11 + 0x10;
      } while (psVar11 != psVar4);
    }
  }
  local_98 = 4;
  local_a0 = 0;
  lVar13 = 4;
LAB_18010ea61:
  *param_1 = local_58;
  param_1[1] = local_58;
  param_1[2] = local_60;
  param_1[3] = psVar9;
  param_1[4] = local_98;
  param_1[5] = local_98;
  param_1[6] = local_a0;
  param_1[7] = lVar13;
  return param_1;
}


