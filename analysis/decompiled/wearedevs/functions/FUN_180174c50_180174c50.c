/* FUN_180174c50 @ 180174c50 */

void FUN_180174c50(longlong *param_1,undefined1 (*param_2) [16])

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  longlong *plVar8;
  longlong **pplVar9;
  longlong lVar10;
  longlong **pplVar11;
  undefined1 (*pauVar12) [16];
  undefined1 (*pauVar13) [16];
  longlong lVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  bool bVar17;
  longlong *local_138;
  longlong *local_130;
  HANDLE pvStack_128;
  longlong local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined1 (*local_f8) [16];
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  longlong **local_c0;
  undefined1 (*local_b8) [16];
  undefined1 (*local_b0) [16];
  undefined1 (*local_a8) [16];
  undefined1 *local_a0;
  undefined2 local_98;
  longlong local_90;
  longlong *local_88;
  longlong *plStack_80;
  HANDLE local_78;
  char *local_68;
  uint local_5c;
  undefined1 (*local_58) [16];
  longlong **local_50;
  undefined1 local_45;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar14 = *param_1;
  pcVar1 = (char *)(lVar14 + 0x40);
  LOCK();
  bVar17 = *(char *)(lVar14 + 0x40) == '\0';
  if (bVar17) {
    *(char *)(lVar14 + 0x40) = '\x01';
  }
  UNLOCK();
  if (!bVar17) {
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_5c = 0;
    uVar3 = *(undefined1 *)(lVar14 + 0x41);
    cVar7 = *(char *)(lVar14 + 0xc4);
  }
  else {
    local_5c = FUN_180200a50();
    local_5c = local_5c ^ 1;
    uVar3 = *(undefined1 *)(lVar14 + 0x41);
    cVar7 = *(char *)(lVar14 + 0xc4);
  }
  if (cVar7 == '\0') {
    *(undefined1 *)(lVar14 + 0xc4) = 1;
    local_50 = (longlong **)(lVar14 + 0x98);
    plVar8 = *(longlong **)(lVar14 + 0x98);
    pauVar12 = param_2;
    local_68 = pcVar1;
    if (plVar8 != (longlong *)0x0) {
      LOCK();
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
        FUN_180162d10(local_50);
      }
    }
    *local_50 = (longlong *)0x0;
    local_41 = 1;
    FUN_1801df5b0(*param_1 + 0x108);
    local_78 = *(HANDLE *)(lVar14 + 0xb0);
    local_88 = *(longlong **)(lVar14 + 0xa0);
    plStack_80 = *(longlong **)(lVar14 + 0xa8);
    *(undefined8 *)(lVar14 + 0xa0) = 0;
    local_44 = 1;
    local_45 = 1;
    plVar8 = (longlong *)FUN_1801dd4b0();
    if ((char)plVar8[2] == '\x01') {
      lVar10 = *plVar8;
      pauVar12 = (undefined1 (*) [16])plVar8[1];
    }
    else {
      local_44 = 1;
      local_45 = 1;
      lVar10 = FUN_1801dca90();
      *plVar8 = lVar10;
      plVar8[1] = (longlong)pauVar12;
      *(undefined1 *)(plVar8 + 2) = 1;
    }
    *plVar8 = lVar10 + 1;
    local_f8 = *(undefined1 (**) [16])(lVar14 + 0x68);
    lStack_f0 = *(longlong *)(lVar14 + 0x70);
    local_e8 = *(undefined4 *)(lVar14 + 0x78);
    uStack_e4 = *(undefined4 *)(lVar14 + 0x7c);
    uStack_e0 = *(undefined4 *)(lVar14 + 0x80);
    uStack_dc = *(undefined4 *)(lVar14 + 0x84);
    local_d8 = *(undefined4 *)(lVar14 + 0x88);
    uStack_d4 = *(undefined4 *)(lVar14 + 0x8c);
    uStack_d0 = *(undefined4 *)(lVar14 + 0x90);
    uStack_cc = *(undefined4 *)(lVar14 + 0x94);
    *(undefined **)(lVar14 + 0x68) = &DAT_180262d70;
    *(undefined8 *)(lVar14 + 0x70) = 0;
    *(undefined8 *)(lVar14 + 0x78) = 0;
    *(undefined8 *)(lVar14 + 0x80) = 0;
    *(longlong *)(lVar14 + 0x88) = lVar10;
    *(undefined1 (**) [16])(lVar14 + 0x90) = pauVar12;
    if (((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
      local_42 = 1;
      local_43 = 1;
      cVar7 = FUN_180200a50();
      if (cVar7 == '\0') {
        *(undefined1 *)(lVar14 + 0x41) = 1;
      }
    }
    LOCK();
    cVar7 = *local_68;
    *local_68 = '\0';
    UNLOCK();
    if (cVar7 == '\x02') {
      local_42 = 1;
      local_43 = 1;
      WakeByAddressSingle(local_68);
    }
    pplVar11 = (longlong **)(param_1 + 1);
    local_42 = 1;
    local_43 = 1;
    cVar7 = FUN_18017bc10();
    if (cVar7 == '\0') {
      local_44 = 1;
      local_45 = 0;
      FUN_180186000(&local_f8);
      plVar8 = local_88;
      if (local_88 != (longlong *)0x0) {
        CloseHandle(local_78);
        LOCK();
        *plVar8 = *plVar8 + -1;
        UNLOCK();
        if (*plVar8 == 0) {
          FUN_1801e3970(&local_88);
        }
        LOCK();
        *plStack_80 = *plStack_80 + -1;
        UNLOCK();
        if (*plStack_80 == 0) {
          local_41 = 0;
          FUN_1801e3850(&plStack_80);
        }
      }
    }
    else {
      if (local_88 != (longlong *)0x0) {
        local_138 = local_88;
        local_130 = plStack_80;
        pvStack_128 = local_78;
        local_42 = 0;
        local_43 = 1;
        pplVar11 = &local_138;
        pplVar9 = (longlong **)FUN_18017d4b0();
        if (pplVar9 != (longlong **)0x0) {
          local_58 = param_2;
          local_50 = pplVar9;
          if (*(code **)*param_2 != (code *)0x0) {
            (**(code **)*param_2)(pplVar9);
          }
          param_2 = *(undefined1 (**) [16])(*local_58 + 8);
          pplVar11 = local_50;
          if (param_2 != (undefined1 (*) [16])0x0) {
            thunk_FUN_1801d3330();
          }
        }
      }
      lVar14 = CONCAT44(uStack_dc,uStack_e0);
      auVar2 = *local_f8;
      if (lStack_f0 == 0) {
        local_c8 = 0;
      }
      else {
        pplVar11 = (longlong **)(lStack_f0 * 0x21 + 0x31);
        param_2 = local_f8 + lStack_f0 * -2 + -2;
        local_c8 = 0x10;
      }
      pauVar12 = local_f8 + 1;
      uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                               (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                              (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
      local_a0 = *local_f8 + lStack_f0 + 1;
      local_b0 = local_f8;
      local_98 = (undefined2)uVar16;
      pauVar15 = local_f8;
      local_c0 = pplVar11;
      local_b8 = param_2;
      local_a8 = pauVar12;
      local_90 = lVar14;
      while (bVar17 = lVar14 != 0, lVar14 = lVar14 + -1, bVar17) {
        if ((short)uVar16 == 0) {
          do {
            auVar2 = *pauVar12;
            pauVar15 = pauVar15 + -0x20;
            pauVar12 = pauVar12 + 1;
            uVar16 = (uint)(ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) |
                                    (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
                                    (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
                                    (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
                                    (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
                                    (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
                                    (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
                                    (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
                                    (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
                                    (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
                                    (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
                                    (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
                                    (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
                                    (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
                                    (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe |
                                   (ushort)(byte)(auVar2[0xf] >> 7) << 0xf);
          } while (uVar16 == 0xffff);
          uVar16 = ~uVar16;
          local_b0 = pauVar15;
          local_a8 = pauVar12;
        }
        iVar4 = 0;
        for (uVar5 = uVar16; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          iVar4 = iVar4 + 1;
        }
        uVar16 = uVar16 - 1 & uVar16;
        local_98 = (undefined2)uVar16;
        pauVar13 = (undefined1 (*) [16])((longlong)pauVar15 - (ulonglong)(uint)(iVar4 << 5));
        local_108 = *(undefined8 *)pauVar13[-1];
        uStack_100 = *(undefined8 *)(pauVar13[-1] + 8);
        local_90 = lVar14;
        if (*(longlong *)(pauVar13[-2] + 8) == 0) break;
        local_120 = *(longlong *)(pauVar13[-2] + 8);
        local_118 = local_108;
        uStack_110 = uStack_100;
        pplVar11 = (longlong **)FUN_18017d4b0(&local_120);
        if (pplVar11 != (longlong **)0x0) {
          local_58 = pauVar13;
          local_50 = pplVar11;
          if (*(code **)*pauVar13 != (code *)0x0) {
            (**(code **)*pauVar13)(pplVar11);
          }
          if (*(longlong *)(*local_58 + 8) != 0) {
            thunk_FUN_1801d3330(local_50,*(longlong *)(*local_58 + 8),*(undefined8 *)local_58[1]);
          }
        }
      }
      local_42 = 0;
      local_43 = 0;
      FUN_180186190(&local_c8);
    }
  }
  else {
    if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
       (cVar7 = FUN_180200a50(uVar3), cVar7 == '\0')) {
      *(undefined1 *)(lVar14 + 0x41) = 1;
    }
    LOCK();
    cVar7 = *pcVar1;
    *pcVar1 = '\0';
    UNLOCK();
    if (cVar7 == '\x02') {
      WakeByAddressSingle(pcVar1);
      return;
    }
  }
  return;
}


