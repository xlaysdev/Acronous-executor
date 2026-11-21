/* FUN_1801be230 @ 1801be230 */

void FUN_1801be230(longlong param_1,undefined8 param_2,undefined4 param_3)

{
  undefined1 auVar1 [16];
  uint uVar2;
  int iVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong unaff_RDI;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  undefined *puVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong *plVar14;
  float extraout_XMM0_Da;
  float extraout_XMM0_Da_00;
  undefined4 unaff_XMM6_Da;
  undefined4 unaff_XMM6_Db;
  undefined4 unaff_XMM6_Dc;
  undefined4 unaff_XMM6_Dd;
  longlong local_b8;
  longlong local_b0;
  longlong local_a8;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  longlong local_80;
  longlong local_78;
  undefined *local_70;
  longlong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  plVar14 = (longlong *)(param_1 + 0x88);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    local_b8 = 0;
    puVar11 = (undefined *)0x0;
    iVar3 = PdhOpenQueryA(0,0,&local_b8);
    lVar7 = local_b8;
    if (iVar3 == 0) {
      local_80 = param_1;
      plVar5 = (longlong *)FUN_18009ec50(0);
      if (plVar5 == (longlong *)0x0) {
LAB_1801be6e7:
                    /* WARNING: Subroutine does not return */
        FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180287200);
      }
      unaff_XMM6_Da = (undefined4)*plVar5;
      unaff_XMM6_Db = *(undefined4 *)((longlong)plVar5 + 4);
      unaff_XMM6_Dc = (undefined4)plVar5[1];
      unaff_XMM6_Dd = *(undefined4 *)((longlong)plVar5 + 0xc);
      *plVar5 = *plVar5 + 1;
      puVar11 = &DAT_180286710;
      lVar6 = *plVar14;
      unaff_RDI = lVar7;
    }
    else {
      lVar6 = *plVar14;
      local_80 = param_1;
    }
    if (lVar6 == 0) {
LAB_1801be51f:
      param_1 = local_80;
    }
    else {
      local_98 = unaff_XMM6_Da;
      uStack_94 = unaff_XMM6_Db;
      uStack_90 = unaff_XMM6_Dc;
      uStack_8c = unaff_XMM6_Dd;
      local_78 = unaff_RDI;
      local_70 = puVar11;
      local_68 = plVar14;
      FUN_1801b6d50(plVar14);
      param_1 = local_80;
      unaff_XMM6_Dd = uStack_8c;
      unaff_XMM6_Dc = uStack_90;
      unaff_XMM6_Db = uStack_94;
      unaff_XMM6_Da = local_98;
      lVar7 = *(longlong *)(local_80 + 0x90);
      if (lVar7 == 0) goto LAB_1801be525;
      lVar6 = *(longlong *)(local_80 + 0xa0);
      if (lVar6 != 0) {
        pauVar12 = (undefined1 (*) [16])*local_68;
        auVar1 = *pauVar12;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        pauVar13 = pauVar12 + 1;
        do {
          if ((short)uVar10 == 0) {
            do {
              auVar1 = *pauVar13;
              pauVar12 = pauVar12 + -0x20;
              pauVar13 = pauVar13 + 1;
              uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
            } while (uVar10 == 0xffff);
            uVar10 = ~uVar10;
          }
          iVar3 = 0;
          for (uVar2 = uVar10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            iVar3 = iVar3 + 1;
          }
          lVar8 = *(longlong *)((longlong)pauVar12 + (-0x20 - (ulonglong)(uint)(iVar3 << 5)));
          if (lVar8 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)
                                 ((longlong)pauVar12 + (-0x18 - (ulonglong)(uint)(iVar3 << 5))),
                                lVar8,1);
          }
          lVar6 = lVar6 + -1;
          uVar10 = uVar10 - 1 & uVar10;
        } while (lVar6 != 0);
      }
LAB_1801be4e9:
      plVar14 = local_68;
      puVar11 = local_70;
      unaff_RDI = local_78;
      lVar6 = lVar7 * 0x21 + 0x31;
      if (lVar6 != 0) {
        thunk_FUN_1801d3330(*local_68 + lVar7 * -0x20 + -0x20,lVar6,0x10);
      }
    }
  }
  else {
    if (!SBORROW8(0,*(longlong *)(param_1 + 0x18))) goto LAB_1801be58c;
    local_b8 = 0;
    local_9c = 0;
    puVar11 = (undefined *)0x0;
    PdhEnumObjectsA(0,0,0,&local_9c,100,1);
    iVar3 = PdhOpenQueryA(0,0,&local_b8);
    lVar7 = local_b8;
    if (iVar3 == 0) {
      local_80 = param_1;
      plVar5 = (longlong *)FUN_18009ec50(0);
      if (plVar5 == (longlong *)0x0) goto LAB_1801be6e7;
      unaff_XMM6_Da = (undefined4)*plVar5;
      unaff_XMM6_Db = *(undefined4 *)((longlong)plVar5 + 4);
      unaff_XMM6_Dc = (undefined4)plVar5[1];
      unaff_XMM6_Dd = *(undefined4 *)((longlong)plVar5 + 0xc);
      *plVar5 = *plVar5 + 1;
      puVar11 = &DAT_180286710;
      lVar6 = *plVar14;
      unaff_RDI = lVar7;
    }
    else {
      lVar6 = *plVar14;
      local_80 = param_1;
    }
    if (lVar6 == 0) goto LAB_1801be51f;
    local_98 = unaff_XMM6_Da;
    uStack_94 = unaff_XMM6_Db;
    uStack_90 = unaff_XMM6_Dc;
    uStack_8c = unaff_XMM6_Dd;
    local_78 = unaff_RDI;
    local_70 = puVar11;
    local_68 = plVar14;
    FUN_1801b6d50(plVar14);
    param_1 = local_80;
    unaff_XMM6_Dd = uStack_8c;
    unaff_XMM6_Dc = uStack_90;
    unaff_XMM6_Db = uStack_94;
    unaff_XMM6_Da = local_98;
    lVar7 = *(longlong *)(local_80 + 0x90);
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(local_80 + 0xa0);
      if (lVar6 != 0) {
        pauVar12 = (undefined1 (*) [16])*local_68;
        auVar1 = *pauVar12;
        uVar10 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        pauVar13 = pauVar12 + 1;
        do {
          if ((short)uVar10 == 0) {
            do {
              auVar1 = *pauVar13;
              pauVar12 = pauVar12 + -0x20;
              pauVar13 = pauVar13 + 1;
              uVar10 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                      (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                      (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                      (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                      (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                      (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                      (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                      (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                      (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                      (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                      (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                      (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                      (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                      (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                      (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                     (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
            } while (uVar10 == 0xffff);
            uVar10 = ~uVar10;
          }
          iVar3 = 0;
          for (uVar2 = uVar10; (uVar2 & 1) == 0; uVar2 = uVar2 >> 1 | 0x80000000) {
            iVar3 = iVar3 + 1;
          }
          lVar8 = *(longlong *)((longlong)pauVar12 + (-0x20 - (ulonglong)(uint)(iVar3 << 5)));
          if (lVar8 != 0) {
            thunk_FUN_1801d3330(*(undefined8 *)
                                 ((longlong)pauVar12 + (-0x18 - (ulonglong)(uint)(iVar3 << 5))),
                                lVar8,1);
          }
          lVar6 = lVar6 + -1;
          uVar10 = uVar10 - 1 & uVar10;
        } while (lVar6 != 0);
      }
      goto LAB_1801be4e9;
    }
LAB_1801be525:
    unaff_RDI = local_78;
    param_1 = local_80;
    puVar11 = local_70;
    plVar14 = local_68;
    unaff_XMM6_Da = local_98;
    unaff_XMM6_Db = uStack_94;
    unaff_XMM6_Dc = uStack_90;
    unaff_XMM6_Dd = uStack_8c;
  }
  *(undefined **)(param_1 + 0x88) = puVar11;
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xa8) = unaff_XMM6_Da;
  *(undefined4 *)(param_1 + 0xac) = unaff_XMM6_Db;
  *(undefined4 *)(param_1 + 0xb0) = unaff_XMM6_Dc;
  *(undefined4 *)(param_1 + 0xb4) = unaff_XMM6_Dd;
  *(longlong *)(param_1 + 0xb8) = unaff_RDI;
  *(undefined8 *)(param_1 + 0xc0) = 0;
  FUN_1801be8a0(param_1);
  if (*(longlong *)(param_1 + 0x88) == 0) {
    return;
  }
LAB_1801be58c:
  PdhCollectQueryData(*(undefined8 *)(param_1 + 0xb8));
  if (!SBORROW8(0,*(longlong *)(param_1 + 0x18))) {
    uVar4 = FUN_1801b7f30(plVar14,param_1 + 0x18);
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("global_key_idle disappeared",0x1b,
                    &PTR_s_C__Users_burne__cargo_registry_s_180286ca0);
    }
    *(float *)(param_1 + 0x30) = 100.0 - extraout_XMM0_Da;
  }
  FUN_1801b6e40(param_1,param_3);
  if (*(longlong *)(param_1 + 0x10) != 0) {
    lVar7 = *(longlong *)(param_1 + 0x10) * 0x70;
    plVar5 = (longlong *)(*(longlong *)(param_1 + 8) + 0x48);
    do {
      if (!SBORROW8(0,*plVar5)) {
        uVar4 = FUN_1801b7f30(plVar14,plVar5);
        if ((uVar4 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("key_used disappeared",0x14,
                        &PTR_s_C__Users_burne__cargo_registry_s_180286cd0);
        }
        *(float *)(plVar5 + 3) = 100.0 - extraout_XMM0_Da_00;
      }
      plVar5 = plVar5 + 0xe;
      lVar7 = lVar7 + -0x70;
    } while (lVar7 != 0);
  }
  if ((char)param_3 != '\0') {
    lVar7 = *(longlong *)(param_1 + 0x10);
    FUN_1801b7ac0(&local_b8,lVar7);
    if (lVar7 != 0) {
      lVar6 = *(longlong *)(param_1 + 8);
      lVar8 = 0;
      lVar9 = 0;
      do {
        if (local_a8 * 8 == lVar8) break;
        *(undefined8 *)(lVar6 + 0x68 + lVar9) = *(undefined8 *)(local_b0 + lVar8);
        lVar9 = lVar9 + 0x70;
        lVar8 = lVar8 + 8;
      } while (lVar7 * 0x70 != lVar9);
    }
    if (local_b8 != 0) {
      thunk_FUN_1801d3330(local_b0,local_b8 << 3,8);
    }
  }
  return;
}


