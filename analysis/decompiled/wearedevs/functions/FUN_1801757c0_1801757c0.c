/* FUN_1801757c0 @ 1801757c0 */

void FUN_1801757c0(longlong param_1,ulonglong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  char *pcVar3;
  byte bVar4;
  char cVar5;
  longlong lVar6;
  ushort uVar7;
  short sVar8;
  uint uVar9;
  uint uVar10;
  undefined *puVar11;
  byte bVar12;
  char cVar13;
  char cVar14;
  ulonglong uVar15;
  int iVar16;
  ulonglong *puVar17;
  ulonglong *puVar18;
  undefined1 uVar19;
  ulonglong uVar20;
  uint uVar21;
  ushort uVar22;
  ulonglong uVar23;
  longlong lVar24;
  bool bVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  ulonglong *local_f8;
  longlong *plStack_f0;
  HANDLE local_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  longlong local_c0;
  ulonglong *local_b8;
  ulonglong *local_b0;
  ulonglong *local_a8;
  longlong *plStack_a0;
  HANDLE local_98;
  ulonglong *local_88;
  longlong *plStack_80;
  HANDLE local_78;
  ulonglong *local_68;
  ulonglong *local_60;
  undefined1 local_56;
  undefined1 local_55;
  uint local_54;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar18 = param_2;
  local_b8 = param_2;
  if (*(longlong *)(param_1 + 0xb8) != 0) {
    puVar18 = *(ulonglong **)(param_1 + 0xc0);
    (*(code *)puVar18[5])
              ((puVar18[2] - 1 & 0xfffffffffffffff0) + *(longlong *)(param_1 + 0xb8) + 0x10);
  }
  local_60 = (ulonglong *)(param_1 + 0x30);
  LOCK();
  bVar25 = *(char *)(param_1 + 0x30) == '\0';
  if (bVar25) {
    *(char *)(param_1 + 0x30) = '\x01';
  }
  UNLOCK();
  if (!bVar25) {
    FUN_180200390(local_60);
  }
  puVar11 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
  }
  else {
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
  }
  local_88 = (ulonglong *)0x0;
  lVar1 = param_1 + 0xf8;
  lVar6 = *(longlong *)(param_1 + 0x50);
  puVar17 = local_60;
  while( true ) {
    while (local_60 = puVar17, lVar6 != 0) {
      lVar24 = *(longlong *)(param_1 + 0x48);
      uVar20 = *(ulonglong *)(param_1 + 0x38);
      if (lVar24 + 1U < uVar20) {
        uVar20 = 0;
      }
      puVar18 = (ulonglong *)((lVar24 - uVar20) + 1);
      *(ulonglong **)(param_1 + 0x48) = puVar18;
      *(longlong *)(param_1 + 0x50) = lVar6 + -1;
      puVar17 = *(ulonglong **)(*(longlong *)(param_1 + 0x40) + lVar24 * 0x10);
      plStack_a0._1_7_ = (undefined7)((ulonglong)plStack_a0 >> 8);
      plStack_a0 = (longlong *)
                   CONCAT71(plStack_a0._1_7_,
                            *(undefined1 *)(*(longlong *)(param_1 + 0x40) + 8 + lVar24 * 0x10));
      LOCK();
      *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -1;
      UNLOCK();
      local_a8 = puVar17;
      if (((local_54 & 1) == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
        local_4d = 1;
        cVar14 = FUN_180200a50();
        if (cVar14 == '\0') {
          *(undefined1 *)(param_1 + 0x31) = 1;
        }
      }
      LOCK();
      uVar20 = *local_60;
      *(char *)local_60 = '\0';
      UNLOCK();
      if ((char)uVar20 == '\x02') {
        local_4d = 1;
        WakeByAddressSingle(local_60);
      }
      local_55 = 1;
      local_68 = puVar17;
      (**(code **)puVar17[2])(puVar17);
      LOCK();
      uVar20 = *local_68;
      *local_68 = *local_68 - 0x40;
      UNLOCK();
      if (uVar20 < 0x40) {
        local_55 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar20 & 0xffffffffffffffc0) == 0x40) {
        local_55 = 0;
        (**(code **)(local_68[2] + 0x10))();
      }
      LOCK();
      bVar25 = (char)*local_60 == '\0';
      if (bVar25) {
        *(char *)local_60 = '\x01';
      }
      UNLOCK();
      if (!bVar25) {
        local_4d = 0;
        FUN_180200390(local_60);
      }
      if ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) == 0) {
        local_54 = 0;
      }
      else {
        local_4d = 0;
        local_54 = FUN_180200a50();
        local_54 = local_54 ^ 1;
      }
      puVar17 = local_60;
      lVar6 = *(longlong *)(param_1 + 0x50);
    }
    LOCK();
    *(longlong *)(param_1 + 0xe8) = *(longlong *)(param_1 + 0xe8) + 1;
    UNLOCK();
    cVar14 = *(char *)(param_1 + 0xb4);
    if (cVar14 != '\0') break;
    bVar12 = FUN_1801dc3b0(lVar1,puVar17,*(undefined8 *)(param_1 + 0x10),
                           *(undefined4 *)(param_1 + 0x18));
    if (*(char *)(param_1 + 0x31) != '\0') {
LAB_180175ec4:
      local_a8 = local_60;
      plStack_a0 = (longlong *)CONCAT71(plStack_a0._1_7_,(char)local_54);
      local_98 = (HANDLE)(CONCAT71(local_98._1_7_,bVar12) ^ 1);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_a8,&PTR_FUN_180262d18,
                    &PTR_s_C__Users_burne__cargo_registry_s_180262e10);
    }
    iVar16 = *(int *)(param_1 + 0xb0);
    puVar18 = puVar17;
    if (iVar16 == 0) {
      bVar4 = *(byte *)(param_1 + 0xb4);
      if ((bVar12 | bVar4) != 1) {
LAB_180175a66:
        local_49 = (undefined1)local_54;
        local_4a = 1;
        local_4b = 1;
        uVar15 = FUN_180180360(param_1 + 0x78,&local_b8);
        puVar17 = local_88;
        lVar6 = *(longlong *)(param_1 + 0x58);
        uVar20 = *(ulonglong *)(param_1 + 0x60);
        bVar12 = (byte)(uVar15 >> 0x39);
        auVar26 = ZEXT216(CONCAT11(bVar12,bVar12));
        auVar26 = pshuflw(auVar26,auVar26,0);
        puVar18 = (ulonglong *)0x0;
        lVar24 = 0;
        goto LAB_180175aaf;
      }
      while( true ) {
        if ((bVar4 & 1) != 0) {
          cVar14 = '\x01';
          goto LAB_180175b20;
        }
        puVar18 = local_60;
        bVar12 = FUN_1801dc3b0(lVar1,local_60,*(undefined8 *)(param_1 + 0x10),
                               *(undefined4 *)(param_1 + 0x18));
        if (*(char *)(param_1 + 0x31) != '\0') goto LAB_180175ec4;
        iVar16 = *(int *)(param_1 + 0xb0);
        if (iVar16 != 0) break;
        bVar4 = *(byte *)(param_1 + 0xb4);
        if (bVar12 == 0 && bVar4 == 0) goto LAB_180175a66;
      }
    }
    *(int *)(param_1 + 0xb0) = iVar16 + -1;
    if (*(char *)(param_1 + 0xb4) == '\x01') break;
    lVar6 = *(longlong *)(param_1 + 0x50);
    puVar17 = local_60;
  }
LAB_180175b20:
  while (*(longlong *)(param_1 + 0x50) != 0) {
    lVar6 = *(longlong *)(param_1 + 0x48);
    uVar20 = *(ulonglong *)(param_1 + 0x38);
    if (lVar6 + 1U < uVar20) {
      uVar20 = 0;
    }
    puVar18 = (ulonglong *)((lVar6 - uVar20) + 1);
    *(ulonglong **)(param_1 + 0x48) = puVar18;
    *(longlong *)(param_1 + 0x50) = *(longlong *)(param_1 + 0x50) + -1;
    local_a8 = *(ulonglong **)(*(longlong *)(param_1 + 0x40) + lVar6 * 0x10);
    cVar5 = *(char *)(*(longlong *)(param_1 + 0x40) + 8 + lVar6 * 0x10);
    plStack_a0 = (longlong *)CONCAT71(plStack_a0._1_7_,cVar5);
    LOCK();
    *(longlong *)(param_1 + 0xf0) = *(longlong *)(param_1 + 0xf0) + -1;
    UNLOCK();
    local_68 = local_a8;
    if (((local_54 & 1) == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
      local_4c = 1;
      cVar13 = FUN_180200a50();
      if (cVar13 == '\0') {
        *(undefined1 *)(param_1 + 0x31) = 1;
      }
    }
    LOCK();
    uVar20 = *local_60;
    *(char *)local_60 = '\0';
    UNLOCK();
    if ((char)uVar20 == '\x02') {
      local_4c = 1;
      WakeByAddressSingle(local_60);
    }
    if (cVar5 == '\0') {
      local_56 = 1;
      (**(code **)local_68[2])();
      LOCK();
      uVar20 = *local_68;
      *local_68 = *local_68 - 0x40;
      UNLOCK();
      if (uVar20 < 0x40) {
        local_56 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      if ((uVar20 & 0xffffffffffffffc0) == 0x40) {
        local_56 = 0;
        (**(code **)(local_68[2] + 0x10))();
      }
    }
    else {
      LOCK();
      uVar20 = *local_68;
      *local_68 = *local_68 - 0x40;
      UNLOCK();
      if (uVar20 < 0x40) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: prev.ref_count() >= 1",0x27,
                      &PTR_s_C__Users_burne__cargo_registry_s_180263618);
      }
      local_4c = 0;
      (**(code **)(local_68[2] + 0x30))();
    }
    LOCK();
    bVar25 = (char)*local_60 == '\0';
    if (bVar25) {
      *(char *)local_60 = '\x01';
    }
    UNLOCK();
    if (!bVar25) {
      local_4c = 0;
      FUN_180200390(local_60);
    }
    if ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) == 0) {
      local_54 = 0;
    }
    else {
      local_4c = 0;
      local_54 = FUN_180200a50();
      local_54 = local_54 ^ 1;
    }
  }
  LOCK();
  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + -1;
  UNLOCK();
  if (cVar14 == '\0') goto LAB_180175dc6;
LAB_180175da9:
  LOCK();
  plVar2 = (longlong *)(param_1 + 0xe8);
  local_c0 = *plVar2;
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (local_c0 == 0) {
    local_49 = (undefined1)local_54;
    local_4a = 1;
    local_4b = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201c9f(1,&local_c0,&DAT_180262e28,"`num_idle_threads` underflowed on thread exit",0x5b,
                  &PTR_s_C__Users_burne__cargo_registry_s_180262e60);
  }
LAB_180175dc6:
  uVar21 = local_54;
  uVar19 = (undefined1)local_54;
  if ((*(char *)(param_1 + 0xb4) != '\0') && (*(longlong *)(param_1 + 0xe0) == 0)) {
    local_4a = 1;
    local_4b = 1;
    local_49 = uVar19;
    FUN_1801df5c0(lVar1);
  }
  if (((uVar21 & 1) == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
    local_49 = 0;
    local_4a = 1;
    local_4b = 0;
    cVar14 = FUN_180200a50();
    if (cVar14 == '\0') {
      *(undefined1 *)(param_1 + 0x31) = 1;
    }
  }
  LOCK();
  uVar20 = *local_60;
  *(char *)local_60 = '\0';
  UNLOCK();
  if ((char)uVar20 == '\x02') {
    local_4a = 1;
    local_4b = 0;
    local_49 = uVar19;
    WakeByAddressSingle(local_60);
  }
  if (*(longlong *)(param_1 + 200) != 0) {
    puVar18 = (ulonglong *)
              (*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x10) - 1U & 0xfffffffffffffff0);
    local_4a = 1;
    local_4b = 0;
    local_49 = uVar19;
    (**(code **)(*(longlong *)(param_1 + 0xd0) + 0x28))
              ((char *)((longlong)puVar18 + *(longlong *)(param_1 + 200) + 0x10));
  }
  if (local_88 != (ulonglong *)0x0) {
    local_e8 = local_78;
    local_f8 = local_88;
    plStack_f0 = plStack_80;
    local_4a = 0;
    local_4b = 0;
    local_49 = uVar19;
    local_68 = (ulonglong *)FUN_18017d4b0(&local_f8);
    if (local_68 != (ulonglong *)0x0) {
      local_b0 = puVar18;
      local_54 = uVar21;
      if ((code *)*puVar18 != (code *)0x0) {
        (*(code *)*puVar18)(local_68);
      }
      if (local_b0[1] != 0) {
        thunk_FUN_1801d3330(local_68,local_b0[1],local_b0[2]);
      }
    }
  }
  return;
LAB_180175aaf:
  uVar15 = uVar15 & uVar20;
  pcVar3 = (char *)(lVar6 + uVar15);
  auVar29[0] = -(*pcVar3 == auVar26[0]);
  auVar29[1] = -(pcVar3[1] == auVar26[1]);
  auVar29[2] = -(pcVar3[2] == auVar26[2]);
  auVar29[3] = -(pcVar3[3] == auVar26[3]);
  auVar29[4] = -(pcVar3[4] == auVar26[4]);
  auVar29[5] = -(pcVar3[5] == auVar26[5]);
  auVar29[6] = -(pcVar3[6] == auVar26[6]);
  auVar29[7] = -(pcVar3[7] == auVar26[7]);
  auVar29[8] = -(pcVar3[8] == auVar26[0]);
  auVar29[9] = -(pcVar3[9] == auVar26[1]);
  auVar29[10] = -(pcVar3[10] == auVar26[2]);
  auVar29[0xb] = -(pcVar3[0xb] == auVar26[3]);
  auVar29[0xc] = -(pcVar3[0xc] == auVar26[4]);
  auVar29[0xd] = -(pcVar3[0xd] == auVar26[5]);
  auVar29[0xe] = -(pcVar3[0xe] == auVar26[6]);
  auVar29[0xf] = -(pcVar3[0xf] == auVar26[7]);
  uVar22 = (ushort)(SUB161(auVar29 >> 7,0) & 1) | (ushort)(SUB161(auVar29 >> 0xf,0) & 1) << 1 |
           (ushort)(SUB161(auVar29 >> 0x17,0) & 1) << 2 |
           (ushort)(SUB161(auVar29 >> 0x1f,0) & 1) << 3 |
           (ushort)(SUB161(auVar29 >> 0x27,0) & 1) << 4 |
           (ushort)(SUB161(auVar29 >> 0x2f,0) & 1) << 5 |
           (ushort)(SUB161(auVar29 >> 0x37,0) & 1) << 6 |
           (ushort)(SUB161(auVar29 >> 0x3f,0) & 1) << 7 |
           (ushort)(SUB161(auVar29 >> 0x47,0) & 1) << 8 |
           (ushort)(SUB161(auVar29 >> 0x4f,0) & 1) << 9 |
           (ushort)(SUB161(auVar29 >> 0x57,0) & 1) << 10 |
           (ushort)(SUB161(auVar29 >> 0x5f,0) & 1) << 0xb |
           (ushort)(SUB161(auVar29 >> 0x67,0) & 1) << 0xc |
           (ushort)(SUB161(auVar29 >> 0x6f,0) & 1) << 0xd |
           (ushort)(SUB161(auVar29 >> 0x77,0) & 1) << 0xe | (ushort)(auVar29[0xf] >> 7) << 0xf;
  uVar21 = (uint)uVar22;
joined_r0x000180175ac7:
  if (uVar22 != 0) {
    uVar9 = 0;
    for (uVar10 = uVar21; (uVar10 & 1) == 0; uVar10 = uVar10 >> 1 | 0x80000000) {
      uVar9 = uVar9 + 1;
    }
    uVar23 = uVar9 + uVar15 & uVar20;
    if (param_2 != *(ulonglong **)(lVar6 + -0x20 + uVar23 * -0x20)) goto code_r0x000180175aeb;
    lVar24 = uVar23 * -0x20 + lVar6;
    uVar20 = uVar23 - 0x10 & uVar20;
    pcVar3 = (char *)(lVar6 + uVar20);
    auVar26[0] = -(*pcVar3 == -1);
    auVar26[1] = -(pcVar3[1] == -1);
    auVar26[2] = -(pcVar3[2] == -1);
    auVar26[3] = -(pcVar3[3] == -1);
    auVar26[4] = -(pcVar3[4] == -1);
    auVar26[5] = -(pcVar3[5] == -1);
    auVar26[6] = -(pcVar3[6] == -1);
    auVar26[7] = -(pcVar3[7] == -1);
    auVar26[8] = -(pcVar3[8] == -1);
    auVar26[9] = -(pcVar3[9] == -1);
    auVar26[10] = -(pcVar3[10] == -1);
    auVar26[0xb] = -(pcVar3[0xb] == -1);
    auVar26[0xc] = -(pcVar3[0xc] == -1);
    auVar26[0xd] = -(pcVar3[0xd] == -1);
    auVar26[0xe] = -(pcVar3[0xe] == -1);
    auVar26[0xf] = -(pcVar3[0xf] == -1);
    uVar7 = (ushort)(SUB161(auVar26 >> 7,0) & 1) | (ushort)(SUB161(auVar26 >> 0xf,0) & 1) << 1 |
            (ushort)(SUB161(auVar26 >> 0x17,0) & 1) << 2 |
            (ushort)(SUB161(auVar26 >> 0x1f,0) & 1) << 3 |
            (ushort)(SUB161(auVar26 >> 0x27,0) & 1) << 4 |
            (ushort)(SUB161(auVar26 >> 0x2f,0) & 1) << 5 |
            (ushort)(SUB161(auVar26 >> 0x37,0) & 1) << 6 |
            (ushort)(SUB161(auVar26 >> 0x3f,0) & 1) << 7 |
            (ushort)(SUB161(auVar26 >> 0x47,0) & 1) << 8 |
            (ushort)(SUB161(auVar26 >> 0x4f,0) & 1) << 9 |
            (ushort)(SUB161(auVar26 >> 0x57,0) & 1) << 10 |
            (ushort)(SUB161(auVar26 >> 0x5f,0) & 1) << 0xb |
            (ushort)(SUB161(auVar26 >> 0x67,0) & 1) << 0xc |
            (ushort)(SUB161(auVar26 >> 0x6f,0) & 1) << 0xd |
            (ushort)(SUB161(auVar26 >> 0x77,0) & 1) << 0xe | (ushort)(auVar26[0xf] >> 7) << 0xf;
    pcVar3 = (char *)(lVar6 + uVar23);
    auVar27[0] = -(*pcVar3 == -1);
    auVar27[1] = -(pcVar3[1] == -1);
    auVar27[2] = -(pcVar3[2] == -1);
    auVar27[3] = -(pcVar3[3] == -1);
    auVar27[4] = -(pcVar3[4] == -1);
    auVar27[5] = -(pcVar3[5] == -1);
    auVar27[6] = -(pcVar3[6] == -1);
    auVar27[7] = -(pcVar3[7] == -1);
    auVar27[8] = -(pcVar3[8] == -1);
    auVar27[9] = -(pcVar3[9] == -1);
    auVar27[10] = -(pcVar3[10] == -1);
    auVar27[0xb] = -(pcVar3[0xb] == -1);
    auVar27[0xc] = -(pcVar3[0xc] == -1);
    auVar27[0xd] = -(pcVar3[0xd] == -1);
    auVar27[0xe] = -(pcVar3[0xe] == -1);
    auVar27[0xf] = -(pcVar3[0xf] == -1);
    uVar22 = 0xf;
    if (uVar7 != 0) {
      for (; uVar7 >> uVar22 == 0; uVar22 = uVar22 - 1) {
      }
    }
    sVar8 = 0;
    for (uVar21 = (ushort)((ushort)(SUB161(auVar27 >> 7,0) & 1) |
                           (ushort)(SUB161(auVar27 >> 0xf,0) & 1) << 1 |
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
                           (ushort)(SUB161(auVar27 >> 0x77,0) & 1) << 0xe |
                          (ushort)(auVar27[0xf] >> 7) << 0xf) | 0x10000; (uVar21 & 1) == 0;
        uVar21 = uVar21 >> 1 | 0x80000000) {
      sVar8 = sVar8 + 1;
    }
    uVar19 = 0x80;
    if ((ushort)(sVar8 + (uVar22 ^ 0xf)) < 0x10) {
      *(longlong *)(param_1 + 0x68) = *(longlong *)(param_1 + 0x68) + 1;
      uVar19 = 0xff;
    }
    *(undefined1 *)(lVar6 + uVar23) = uVar19;
    *(undefined1 *)(lVar6 + 0x10 + uVar20) = uVar19;
    *(longlong *)(param_1 + 0x70) = *(longlong *)(param_1 + 0x70) + -1;
    puVar18 = *(ulonglong **)(lVar24 + -0x18);
    if (puVar18 == (ulonglong *)0x0) {
      puVar18 = (ulonglong *)0x0;
    }
    else {
      local_d8 = *(undefined8 *)(lVar24 + -0x10);
      uStack_d0 = *(undefined8 *)(lVar24 + -8);
    }
    goto LAB_180175d31;
  }
  auVar28[0] = -(*pcVar3 == -1);
  auVar28[1] = -(pcVar3[1] == -1);
  auVar28[2] = -(pcVar3[2] == -1);
  auVar28[3] = -(pcVar3[3] == -1);
  auVar28[4] = -(pcVar3[4] == -1);
  auVar28[5] = -(pcVar3[5] == -1);
  auVar28[6] = -(pcVar3[6] == -1);
  auVar28[7] = -(pcVar3[7] == -1);
  auVar28[8] = -(pcVar3[8] == -1);
  auVar28[9] = -(pcVar3[9] == -1);
  auVar28[10] = -(pcVar3[10] == -1);
  auVar28[0xb] = -(pcVar3[0xb] == -1);
  auVar28[0xc] = -(pcVar3[0xc] == -1);
  auVar28[0xd] = -(pcVar3[0xd] == -1);
  auVar28[0xe] = -(pcVar3[0xe] == -1);
  auVar28[0xf] = -(pcVar3[0xf] == -1);
  if ((((((((((((((((SUB161(auVar28 >> 7,0) & 1) != 0 || (SUB161(auVar28 >> 0xf,0) & 1) != 0) ||
                  (SUB161(auVar28 >> 0x17,0) & 1) != 0) || (SUB161(auVar28 >> 0x1f,0) & 1) != 0) ||
                (SUB161(auVar28 >> 0x27,0) & 1) != 0) || (SUB161(auVar28 >> 0x2f,0) & 1) != 0) ||
              (SUB161(auVar28 >> 0x37,0) & 1) != 0) || (SUB161(auVar28 >> 0x3f,0) & 1) != 0) ||
            (SUB161(auVar28 >> 0x47,0) & 1) != 0) || (SUB161(auVar28 >> 0x4f,0) & 1) != 0) ||
          (SUB161(auVar28 >> 0x57,0) & 1) != 0) || (SUB161(auVar28 >> 0x5f,0) & 1) != 0) ||
        (SUB161(auVar28 >> 0x67,0) & 1) != 0) || (SUB161(auVar28 >> 0x6f,0) & 1) != 0) ||
      (SUB161(auVar28 >> 0x77,0) & 1) != 0) || auVar28[0xf] < '\0') goto LAB_180175d31;
  uVar15 = uVar15 + lVar24 + 0x10;
  lVar24 = lVar24 + 0x10;
  goto LAB_180175aaf;
code_r0x000180175aeb:
  uVar22 = (ushort)(uVar21 - 1) & (ushort)uVar21;
  uVar21 = CONCAT22((short)(uVar21 - 1 >> 0x10),uVar22);
  goto joined_r0x000180175ac7;
LAB_180175d31:
  local_98 = *(HANDLE *)(param_1 + 0xa0);
  local_a8 = *(ulonglong **)(param_1 + 0x90);
  plStack_a0 = *(longlong **)(param_1 + 0x98);
  *(ulonglong **)(param_1 + 0x90) = puVar18;
  *(undefined8 *)(param_1 + 0x98) = local_d8;
  *(undefined8 *)(param_1 + 0xa0) = uStack_d0;
  if (local_88 != (ulonglong *)0x0) {
    CloseHandle(local_78);
    LOCK();
    *puVar17 = *puVar17 - 1;
    UNLOCK();
    if (*puVar17 == 0) {
      FUN_1801e3970(&local_88);
    }
    LOCK();
    *plStack_80 = *plStack_80 + -1;
    UNLOCK();
    if (*plStack_80 == 0) {
      FUN_1801e3850(&plStack_80);
    }
  }
  local_78 = local_98;
  local_88 = local_a8;
  plStack_80 = plStack_a0;
  LOCK();
  *(longlong *)(param_1 + 0xe0) = *(longlong *)(param_1 + 0xe0) + -1;
  UNLOCK();
  goto LAB_180175da9;
}


