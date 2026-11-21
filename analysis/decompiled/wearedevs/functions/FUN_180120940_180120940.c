/* FUN_180120940 @ 180120940 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_180120940(ulonglong *param_1,ulonglong *param_2,undefined **param_3)

{
  byte bVar1;
  ulonglong uVar2;
  byte *pbVar3;
  longlong *plVar4;
  uint uVar5;
  uint uVar6;
  undefined5 uVar7;
  undefined4 uVar8;
  char cVar9;
  undefined *_Src;
  longlong lVar10;
  longlong lVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ulonglong *puVar16;
  undefined **ppuVar17;
  ulonglong uVar18;
  longlong lVar19;
  uint uVar20;
  ushort uVar21;
  ulonglong uVar22;
  void *unaff_R12;
  size_t unaff_R15;
  undefined *_Size;
  char *pcVar23;
  bool bVar24;
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined **local_1f8;
  ulonglong *local_1f0;
  undefined **local_1e8;
  ulonglong local_1e0;
  longlong local_1d8;
  undefined **ppuStack_1d0;
  undefined **local_1c8;
  ulonglong *local_1c0;
  longlong local_1b8;
  undefined **ppuStack_1b0;
  undefined **local_1a8;
  undefined **local_198;
  ulonglong *local_190;
  undefined **local_188;
  undefined1 local_180;
  undefined4 uStack_17f;
  undefined2 uStack_17b;
  undefined1 uStack_179;
  undefined8 local_178;
  ulonglong *local_170;
  undefined **local_168;
  ulonglong local_160;
  undefined **local_158;
  undefined **local_150;
  undefined2 local_148;
  char local_146;
  undefined4 local_145;
  undefined1 local_141;
  undefined4 local_114;
  undefined4 local_cc;
  undefined **local_b8;
  undefined2 local_b0;
  ulonglong local_a8;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined **local_98;
  ulonglong *puStack_90;
  undefined **local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined **local_68;
  ulonglong uStack_60;
  undefined1 uStack_58;
  char local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = param_2[2];
  bVar1 = *(byte *)(uVar2 + 0xb8);
  puVar16 = param_2;
  local_1c0 = param_1;
  if (9 < bVar1) {
    if (bVar1 == 10) {
      uVar7 = CONCAT14(local_178._7_1_,*(undefined4 *)(uVar2 + 0xbc));
      local_178 = (undefined **)CONCAT44((int)((uint5)uVar7 >> 8),*(undefined4 *)(uVar2 + 0xb9));
      unaff_R12 = *(void **)(uVar2 + 0xc0);
      unaff_R15 = *(size_t *)(uVar2 + 200);
    }
    else {
      unaff_R15 = *(size_t *)(uVar2 + 200);
      if ((longlong)unaff_R15 < 0) {
        uVar14 = 0;
LAB_180120c03:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar14,unaff_R15);
      }
      puVar16 = *(ulonglong **)(uVar2 + 0xc0);
      if (unaff_R15 == 0) {
        unaff_R12 = (void *)0x1;
      }
      else {
        FUN_180027490();
        unaff_R12 = (void *)thunk_FUN_1801d32d0(unaff_R15,1);
        uVar14 = 1;
        if (unaff_R12 == (void *)0x0) goto LAB_180120c03;
      }
      memcpy(unaff_R12,puVar16,unaff_R15);
    }
  }
  uVar8 = (undefined4)local_178;
  uVar7 = CONCAT14(local_78._7_1_,local_178._3_4_);
  local_78 = (undefined **)CONCAT44((int)((uint5)uVar7 >> 8),uVar8);
  pbVar3 = (byte *)param_2[3];
  if (((*pbVar3 != 0xc) && (10 < *pbVar3)) &&
     (puVar16 = *(ulonglong **)(pbVar3 + 0x10), puVar16 != (ulonglong *)0x0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(pbVar3 + 8),puVar16,1);
  }
  *pbVar3 = bVar1;
  uVar8 = (undefined4)local_78;
  *(undefined4 *)(pbVar3 + 1) = uVar8;
  *(undefined4 *)(pbVar3 + 4) = local_78._3_4_;
  *(void **)(pbVar3 + 8) = unaff_R12;
  *(size_t *)(pbVar3 + 0x10) = unaff_R15;
  uVar18 = *param_2;
  if (uVar18 == 2) {
    local_68 = (undefined **)0x0;
    uStack_60 = 0;
    local_78 = (undefined **)0x0;
    uStack_70 = (code *)0x45;
    FUN_18012a990(&local_178,uVar2,&local_78);
    if ((char)local_158 != '\x02') {
      (*(code *)local_178[4])(local_160,local_170,local_168);
    }
LAB_180120a2f:
    local_178 = (undefined **)0x8000000000000001;
    local_170 = (ulonglong *)0x0;
    local_160 = local_160 & 0xffffffffffffff00;
  }
  else {
    uVar22 = param_2[1];
    cVar9 = *(char *)(uVar2 + 0xd8);
    local_a8 = FUN_18011ac50(uVar2);
    if (cVar9 == '\x02') {
      local_68 = (undefined **)0x0;
      uStack_60 = 0;
      local_78 = (undefined **)0x0;
      uStack_70 = (code *)0x45;
      FUN_180129000(&local_178,uVar2,&local_78);
      if (local_146 == '\x03') {
        ppuVar12 = &PTR_s_C__Users_burne__cargo_registry_s_180241598;
LAB_180121531:
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_98,&DAT_180240ee0,ppuVar12);
      }
      local_b8 = local_150;
      local_b0 = local_148;
      local_a0 = local_145;
      local_9c = local_141;
      if (local_146 == '\x02') {
        local_1f8 = local_178;
        local_1f0 = local_170;
        local_1e8 = local_168;
        if (local_178[5] <= local_168) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(local_168,local_178[5],&PTR_s_C__Users_burne__cargo_registry_s_180242e08);
        }
        local_160 = (longlong)local_168 * 0x68;
        bVar24 = (local_178[4][local_160] & 1) == 0;
        if (!bVar24) {
          local_160 = *(ulonglong *)(local_178[4] + local_160 + 0x10);
        }
        local_158 = local_178;
        local_150 = local_168;
        local_178 = (undefined **)0x0;
        local_168 = (undefined **)(ulonglong)!bVar24;
        cVar9 = FUN_180119d90(&local_178);
        if (cVar9 == '\0') {
          FUN_18011a140(&local_1f8);
        }
LAB_180120c71:
        local_98 = (undefined **)0x8000000000000000;
        uStack_80 = uStack_80 & 0xffffffffffffff00;
        local_68 = (undefined **)0x0;
        uStack_60 = 0;
        local_78 = (undefined **)0x0;
        uStack_70 = (code *)&DAT_00000044;
        local_49 = 1;
        puVar16 = &local_78;
        FUN_18012aef0(&local_1b8,uVar2,puVar16);
        ppuVar12 = local_1a8;
        if ((int)local_1b8 == 1) {
          if (local_1a8[5] <= ppuStack_1b0) {
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(ppuStack_1b0,local_1a8[5],
                          &PTR_s_C__Users_burne__cargo_registry_s_180242e08);
          }
          puVar15 = local_1a8[4];
          bVar24 = (puVar15[(longlong)ppuStack_1b0 * 0x68] & 1) == 0;
          if (!bVar24) {
            puVar15 = *(undefined **)(puVar15 + (longlong)ppuStack_1b0 * 0x68 + 0x10);
          }
          local_78 = (undefined **)(ulonglong)!bVar24;
          puVar16 = &local_1e0;
          ppuVar17 = (undefined **)0x0;
          ppuVar13 = ppuStack_1b0;
        }
        else {
          ppuVar17 = (undefined **)0x2;
          ppuVar13 = (undefined **)0xffffffffffffffff;
          puVar15 = (undefined *)0x2;
        }
        *puVar16 = (ulonglong)puVar15;
        local_168 = local_78;
        local_160 = local_1e0;
        local_158 = ppuVar12;
        local_114 = 0x110000;
        local_cc = 0x110000;
        local_49 = 1;
        local_178 = ppuVar17;
        local_150 = ppuVar13;
        FUN_180126150(&local_1d8,&local_178);
        if (local_1c8 == (undefined **)0x0) {
          if (local_1d8 != 0) {
            thunk_FUN_1801d3330(ppuStack_1d0,local_1d8 << 5,8);
          }
          goto LAB_180120e6b;
        }
        local_68 = local_88;
        uStack_60 = uStack_80;
        local_78 = local_98;
        uStack_70 = (code *)puStack_90;
        local_1a8 = local_1c8;
        local_1b8 = local_1d8;
        ppuStack_1b0 = ppuStack_1d0;
        local_49 = 0;
        FUN_180119590(&local_198,&local_78,&local_1b8);
      }
      else {
        local_4a = local_146;
        if ((local_a8 & 1) == 0) {
          if ((uVar18 & 1) == 0) {
            bVar24 = true;
          }
          else {
            if ((7 < *(byte *)(uVar2 + 0xb8)) ||
               ((0xa2U >> (*(byte *)(uVar2 + 0xb8) & 0x1f) & 1) == 0)) {
              local_78 = &PTR_LAB_180241468;
              uStack_70 = (code *)0x1802415b0;
              local_68 = (undefined **)0x7;
              uStack_60 = 0;
              uStack_58 = 0;
              lVar11 = FUN_18012bba0(&local_178,&local_78);
              if (lVar11 == 0) {
                ppuVar12 = &PTR_s_C__Users_burne__cargo_registry_s_1802415b8;
                goto LAB_180121531;
              }
              goto LAB_180120c71;
            }
            bVar24 = false;
            puVar16 = (ulonglong *)0x0;
          }
        }
        else {
          bVar24 = false;
        }
        if (local_170 != (ulonglong *)0x0) {
          (*(code *)local_170[4])();
        }
        if (bVar24) {
          if ((uVar18 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0("internal error: entered unreachable code: BodyLength::Unknown would set chunked"
                          ,0x9f,&PTR_s_C__Users_burne__cargo_registry_s_180241620);
          }
          goto LAB_180120e31;
        }
        local_98 = (undefined **)0x8000000000000001;
        uStack_80 = uStack_80 & 0xffffffffffffff00;
        local_146 = local_4a;
        puStack_90 = puVar16;
LAB_180120e6b:
        local_188 = local_88;
        local_180 = (undefined1)uStack_80;
        uStack_17f = uStack_80._1_4_;
        uStack_17b = uStack_80._5_2_;
        uStack_179 = uStack_80._7_1_;
        local_198 = local_98;
        local_190 = puStack_90;
      }
      uStack_80 = CONCAT17(uStack_179,CONCAT25(uStack_17b,CONCAT41(uStack_17f,local_180)));
      puStack_90 = local_190;
      local_88 = local_188;
      local_98 = local_198;
      if (local_146 == '\x02' && local_a8 == 1) {
        local_68 = (undefined **)0x0;
        uStack_60 = 0;
        local_78 = (undefined **)0x0;
        uStack_70 = (code *)&DAT_00000018;
        FUN_18012a990(&local_178,uVar2,&local_78);
        if ((char)local_158 != '\x02') {
          (*(code *)local_178[4])(local_160,local_170,local_168);
        }
      }
      local_168 = local_88;
      local_160 = uStack_80;
      local_178 = local_98;
      local_170 = puStack_90;
    }
    else {
      local_68 = (undefined **)0x0;
      uStack_60 = 0;
      local_78 = (undefined **)0x0;
      uStack_70 = (code *)0x45;
      FUN_18012a990(&local_178,uVar2,&local_78);
      if ((char)local_158 != '\x02') {
        (*(code *)local_178[4])(local_160,local_170,local_168);
      }
      if ((local_a8 & 1) == 0) {
        if ((uVar18 & 1) != 0) goto LAB_180120a2f;
LAB_180120e31:
        FUN_18011bdd0(&local_178,uVar2,uVar22);
      }
      else {
        local_178 = (undefined **)0x8000000000000001;
        local_160 = local_160 & 0xffffffffffffff00;
        local_170 = puVar16;
      }
    }
  }
  uVar18 = (*(longlong *)(uVar2 + 0x40) + *(longlong *)(uVar2 + 0x28)) * 0x1e + 0x1e;
  puVar15 = param_3[2];
  if ((ulonglong)((longlong)*param_3 - (longlong)puVar15) < uVar18) {
    FUN_1801f6a80(param_3,puVar15,uVar18,1,1);
  }
  _Size = (undefined *)0x7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(uVar2 + 0xb8)) {
  case 0:
    _Src = &DAT_180241848;
    break;
  case 1:
    _Src = &DAT_18024184f;
    _Size = (undefined *)0x3;
    break;
  case 2:
    _Src = &DAT_180241852;
    _Size = (undefined *)0x4;
    break;
  case 3:
    _Src = &DAT_180241856;
    _Size = (undefined *)0x3;
    break;
  case 4:
    _Src = &DAT_180241859;
    _Size = (undefined *)0x6;
    break;
  case 5:
    _Src = &DAT_18024185f;
    _Size = (undefined *)0x4;
    break;
  case 6:
    _Src = &DAT_180241863;
    goto LAB_180121053;
  case 7:
    _Src = &DAT_180241868;
    break;
  case 8:
    _Src = &DAT_18024186f;
    goto LAB_180121053;
  case 9:
    _Src = &DAT_180241874;
LAB_180121053:
    _Size = (undefined *)0x5;
    break;
  case 10:
    _Src = (undefined *)FUN_1801ada30(uVar2 + 0xb9);
    _Size = puVar15;
    break;
  case 0xb:
    _Src = *(undefined **)(uVar2 + 0xc0);
    _Size = *(undefined **)(uVar2 + 200);
  }
  puVar15 = param_3[2];
  if (*param_3 + -(longlong)puVar15 < _Size) {
    FUN_1801f6a80(param_3,puVar15,_Size,1,1);
    puVar15 = param_3[2];
  }
  memcpy(param_3[1] + (longlong)puVar15,_Src,(size_t)_Size);
  puVar15 = puVar15 + (longlong)_Size;
  param_3[2] = puVar15;
  if (*param_3 == puVar15) {
    FUN_1801f6a80(param_3,puVar15,1,1,1);
    puVar15 = param_3[2];
  }
  local_78 = (undefined **)(uVar2 + 0x60);
  param_3[1][(longlong)puVar15] = 0x20;
  param_3[2] = puVar15 + 1;
  uStack_70 = FUN_1801ac560;
  local_98 = param_3;
  FUN_1801ef150(&local_98,&DAT_180241740,&DAT_180241879);
  cVar9 = *(char *)(uVar2 + 0xd8);
  if (cVar9 == '\x01') {
    puVar15 = param_3[2];
    uVar14 = 0x302e312f50545448;
    if (7 < (ulonglong)((longlong)*param_3 - (longlong)puVar15)) goto LAB_180121196;
    FUN_1801f6a80(param_3,puVar15,8,1,1);
  }
  else if (cVar9 == '\x02') {
    puVar15 = param_3[2];
    uVar14 = 0x312e312f50545448;
    if (7 < (ulonglong)((longlong)*param_3 - (longlong)puVar15)) goto LAB_180121196;
    FUN_1801f6a80(param_3,puVar15,8,1,1);
  }
  else {
    if (cVar9 != '\x03') {
      local_98 = (undefined **)CONCAT71(local_98._1_7_,cVar9);
      uStack_70 = FUN_1801ae140;
      local_78 = (undefined **)&local_98;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18024187d,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_1802418a0);
    }
    puVar15 = param_3[2];
    uVar14 = 0x312e312f50545448;
    if (7 < (ulonglong)((longlong)*param_3 - (longlong)puVar15)) goto LAB_180121196;
    FUN_1801f6a80(param_3,puVar15,8,1,1);
  }
  puVar15 = param_3[2];
LAB_180121196:
  *(undefined8 *)(param_3[1] + (longlong)puVar15) = uVar14;
  puVar15 = puVar15 + 8;
  param_3[2] = puVar15;
  if ((ulonglong)((longlong)*param_3 - (longlong)puVar15) < 2) {
    FUN_1801f6a80(param_3,puVar15,2,1,1);
    puVar15 = param_3[2];
  }
  *(undefined2 *)(param_3[1] + (longlong)puVar15) = 0xa0d;
  param_3[2] = puVar15 + 2;
  plVar4 = *(longlong **)(uVar2 + 0xd0);
  if ((plVar4 != (longlong *)0x0) && (plVar4[3] != 0)) {
    lVar10 = *plVar4;
    lVar11 = lVar10 + -0x20;
    uVar18 = 0x4aef2b61a7c3b130;
    lVar19 = 0;
    while( true ) {
      uVar18 = uVar18 & plVar4[1];
      auVar25 = *(undefined1 (*) [16])(lVar10 + uVar18);
      auVar27[0] = -(auVar25[0] == DAT_180240ec0);
      auVar27[1] = -(auVar25[1] == DAT_180240ec0._1_1_);
      auVar27[2] = -(auVar25[2] == DAT_180240ec0._2_1_);
      auVar27[3] = -(auVar25[3] == DAT_180240ec0._3_1_);
      auVar27[4] = -(auVar25[4] == DAT_180240ec0._4_1_);
      auVar27[5] = -(auVar25[5] == DAT_180240ec0._5_1_);
      auVar27[6] = -(auVar25[6] == DAT_180240ec0._6_1_);
      auVar27[7] = -(auVar25[7] == DAT_180240ec0._7_1_);
      auVar27[8] = -(auVar25[8] == DAT_180240ec0._8_1_);
      auVar27[9] = -(auVar25[9] == DAT_180240ec0._9_1_);
      auVar27[10] = -(auVar25[10] == DAT_180240ec0._10_1_);
      auVar27[0xb] = -(auVar25[0xb] == DAT_180240ec0._11_1_);
      auVar27[0xc] = -(auVar25[0xc] == DAT_180240ec0._12_1_);
      auVar27[0xd] = -(auVar25[0xd] == DAT_180240ec0._13_1_);
      auVar27[0xe] = -(auVar25[0xe] == DAT_180240ec0._14_1_);
      auVar27[0xf] = -(auVar25[0xf] == DAT_180240ec0._15_1_);
      uVar21 = (ushort)(SUB161(auVar27 >> 7,0) & 1) | (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar27 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar27 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar27 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar27 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar27 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar27 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar27 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar27 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar27 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar27 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar27 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar27 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe | (ushort)(auVar27[0xf] >> 7) << 0xf;
      uVar20 = (uint)uVar21;
      while (uVar21 != 0) {
        uVar5 = 0;
        for (uVar6 = uVar20; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
          uVar5 = uVar5 + 1;
        }
        uVar22 = uVar5 + uVar18 & plVar4[1];
        pcVar23 = (char *)(lVar11 + uVar22 * -0x20);
        auVar28[0] = -(*pcVar23 == DAT_180240ed0);
        auVar28[1] = -(pcVar23[1] == DAT_180240ed0._1_1_);
        auVar28[2] = -(pcVar23[2] == DAT_180240ed0._2_1_);
        auVar28[3] = -(pcVar23[3] == DAT_180240ed0._3_1_);
        auVar28[4] = -(pcVar23[4] == DAT_180240ed0._4_1_);
        auVar28[5] = -(pcVar23[5] == DAT_180240ed0._5_1_);
        auVar28[6] = -(pcVar23[6] == DAT_180240ed0._6_1_);
        auVar28[7] = -(pcVar23[7] == DAT_180240ed0._7_1_);
        auVar28[8] = -(pcVar23[8] == DAT_180240ed0._8_1_);
        auVar28[9] = -(pcVar23[9] == DAT_180240ed0._9_1_);
        auVar28[10] = -(pcVar23[10] == DAT_180240ed0._10_1_);
        auVar28[0xb] = -(pcVar23[0xb] == DAT_180240ed0._11_1_);
        auVar28[0xc] = -(pcVar23[0xc] == DAT_180240ed0._12_1_);
        auVar28[0xd] = -(pcVar23[0xd] == DAT_180240ed0._13_1_);
        auVar28[0xe] = -(pcVar23[0xe] == DAT_180240ed0._14_1_);
        auVar28[0xf] = -(pcVar23[0xf] == DAT_180240ed0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar28 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar28 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar28 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar28 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar28 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar28 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar28 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar28 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar28 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar28 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar28 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar28 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar28 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar28 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar28 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar28[0xf] >> 7) << 0xf) == 0xffff) {
          lVar19 = uVar22 * -0x20;
          lVar10 = (**(code **)(*(longlong *)(lVar10 + -8 + lVar19) + 0x28))
                             (*(undefined8 *)(lVar10 + -0x10 + lVar19));
          (**(code **)(lVar11 + 0x18))(&local_78,lVar10);
          auVar25[0] = -((char)local_78 == -0x36);
          auVar25[1] = -(local_78._1_1_ == ':');
          auVar25[2] = -(local_78._2_1_ == -0x4d);
          auVar25[3] = -(local_78._3_1_ == ')');
          auVar25[4] = -(local_78._4_1_ == '\x7f');
          auVar25[5] = -(local_78._5_1_ == 'Y');
          auVar25[6] = -(local_78._6_1_ == -0x66);
          auVar25[7] = -(local_78._7_1_ == -0x29);
          auVar25[8] = -((char)uStack_70 == '0');
          auVar25[9] = -(uStack_70._1_1_ == -0x4f);
          auVar25[10] = -(uStack_70._2_1_ == -0x3d);
          auVar25[0xb] = -(uStack_70._3_1_ == -0x59);
          auVar25[0xc] = -(uStack_70._4_1_ == 'a');
          auVar25[0xd] = -(uStack_70._5_1_ == '+');
          auVar25[0xe] = -(uStack_70._6_1_ == -0x11);
          auVar25[0xf] = -(uStack_70._7_1_ == 'J');
          if ((ushort)((ushort)(SUB161(auVar25 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar25 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar25 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar25 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar25 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar25 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar25 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar25 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar25 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar25 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar25 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar25 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar25 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar25 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar25 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar25[0xf] >> 7) << 0xf) != 0xffff) goto LAB_1801212e1;
          cVar9 = (char)param_2[4];
          if (lVar10 == 0) goto joined_r0x0001801212d2;
          FUN_1801f9400(uVar2,lVar10,param_3);
          goto LAB_1801212f3;
        }
        uVar21 = (ushort)(uVar20 - 1) & (ushort)uVar20;
        uVar20 = CONCAT22((short)(uVar20 - 1 >> 0x10),uVar21);
      }
      auVar26[0] = -(auVar25[0] == -1);
      auVar26[1] = -(auVar25[1] == -1);
      auVar26[2] = -(auVar25[2] == -1);
      auVar26[3] = -(auVar25[3] == -1);
      auVar26[4] = -(auVar25[4] == -1);
      auVar26[5] = -(auVar25[5] == -1);
      auVar26[6] = -(auVar25[6] == -1);
      auVar26[7] = -(auVar25[7] == -1);
      auVar26[8] = -(auVar25[8] == -1);
      auVar26[9] = -(auVar25[9] == -1);
      auVar26[10] = -(auVar25[10] == -1);
      auVar26[0xb] = -(auVar25[0xb] == -1);
      auVar26[0xc] = -(auVar25[0xc] == -1);
      auVar26[0xd] = -(auVar25[0xd] == -1);
      auVar26[0xe] = -(auVar25[0xe] == -1);
      auVar26[0xf] = -(auVar25[0xf] == -1);
      if ((((((((((((((((SUB161(auVar26 >> 7,0) & 1) != 0 || (SUB161(auVar26 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar26 >> 0x17,0) & 1) != 0) || (SUB161(auVar26 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar26 >> 0x27,0) & 1) != 0) || (SUB161(auVar26 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar26 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar26 >> 0x3f,0) & 1) != 0) || (SUB161(auVar26 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar26 >> 0x4f,0) & 1) != 0) || (SUB161(auVar26 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar26 >> 0x5f,0) & 1) != 0) || (SUB161(auVar26 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar26 >> 0x6f,0) & 1) != 0) || (SUB161(auVar26 >> 0x77,0) & 1) != 0) ||
          auVar26[0xf] < '\0') break;
      uVar18 = uVar18 + lVar19 + 0x10;
      lVar19 = lVar19 + 0x10;
    }
  }
LAB_1801212e1:
  cVar9 = (char)param_2[4];
joined_r0x0001801212d2:
  if (cVar9 == '\0') {
                    /* WARNING: Read-only address (ram,0x000180240ec0) is written */
                    /* WARNING: Read-only address (ram,0x000180240ed0) is written */
    FUN_18011ba20(uVar2,param_3);
  }
  else {
                    /* WARNING: Read-only address (ram,0x000180240ec0) is written */
                    /* WARNING: Read-only address (ram,0x000180240ed0) is written */
    FUN_18011c400(uVar2,param_3);
  }
LAB_1801212f3:
  puVar15 = param_3[2];
  if ((ulonglong)((longlong)*param_3 - (longlong)puVar15) < 2) {
    FUN_1801f6a80(param_3,puVar15,2,1,1);
    puVar15 = param_3[2];
  }
  *(undefined2 *)(param_3[1] + (longlong)puVar15) = 0xa0d;
  param_3[2] = puVar15 + 2;
  FUN_18012a720(uVar2);
  local_1c0[2] = (ulonglong)local_168;
  local_1c0[3] = local_160;
  *local_1c0 = (ulonglong)local_178;
  local_1c0[1] = (ulonglong)local_170;
  return;
}


