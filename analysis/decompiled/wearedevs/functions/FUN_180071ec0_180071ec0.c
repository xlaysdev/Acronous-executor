/* FUN_180071ec0 @ 180071ec0 */

longlong * FUN_180071ec0(longlong *param_1,longlong *param_2,char *param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined6 uVar12;
  undefined7 uVar13;
  undefined2 uVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  undefined2 uVar17;
  char cVar18;
  char cVar19;
  char cVar20;
  uint uVar21;
  longlong lVar22;
  char *pcVar23;
  longlong *plVar24;
  longlong *plVar25;
  longlong *plVar26;
  char cVar27;
  char cVar28;
  longlong *plVar29;
  bool bVar30;
  char local_1d0;
  undefined1 local_1cf;
  undefined4 *local_1c8;
  undefined1 local_1c0 [32];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined8 uStack_188;
  longlong *local_180;
  longlong *local_178;
  undefined1 local_170;
  undefined8 local_16f;
  undefined8 uStack_167;
  undefined8 local_15f;
  undefined8 uStack_157;
  char local_14f;
  undefined4 local_14e;
  undefined2 local_14a;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 *local_128;
  longlong *local_120;
  undefined4 local_118;
  undefined2 uStack_114;
  undefined1 uStack_112;
  undefined1 uStack_111;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 uStack_100;
  char local_f8;
  char cStack_f7;
  undefined1 uStack_f6;
  undefined1 uStack_f5;
  undefined2 uStack_f4;
  undefined1 uStack_f2;
  undefined1 uStack_f1;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined1 uStack_e4;
  undefined2 uStack_e3;
  undefined1 uStack_e1;
  char cStack_e0;
  char cStack_df;
  undefined2 uStack_de;
  undefined1 uStack_dc;
  undefined1 uStack_db;
  undefined2 uStack_da;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  char local_c7;
  undefined2 local_c2;
  undefined4 local_bc;
  longlong *local_b8;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined1 uStack_94;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_78;
  char cStack_77;
  undefined4 uStack_76;
  undefined2 uStack_72;
  longlong *local_70;
  char *local_68;
  undefined4 local_5c;
  undefined2 local_58;
  char local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar24 = (longlong *)*param_2;
  local_68 = param_3;
  if (plVar24 == (longlong *)0x0) {
    plVar29 = (longlong *)*param_4;
    plVar26 = (longlong *)param_4[1];
    cVar28 = *(char *)(param_4 + 2);
    local_138 = *(undefined8 *)((longlong)param_4 + 0x21);
    uStack_130 = *(undefined8 *)((longlong)param_4 + 0x29);
    local_148 = *(undefined8 *)((longlong)param_4 + 0x11);
    uStack_140 = *(undefined8 *)((longlong)param_4 + 0x19);
    cVar27 = *(char *)((longlong)param_4 + 0x31);
    local_5c = *(undefined4 *)((longlong)param_4 + 0x32);
    local_58 = *(undefined2 *)((longlong)param_4 + 0x36);
    local_70 = (longlong *)0x0;
    plVar25 = param_1;
LAB_1800724d7:
    local_98._1_3_ = (undefined3)local_148;
    local_98 = CONCAT31(local_98._1_3_,cVar28);
    uStack_94 = (undefined1)((ulonglong)local_148 >> 0x18);
    uStack_93 = (undefined2)((ulonglong)local_148 >> 0x20);
    uStack_91 = (undefined1)((ulonglong)local_148 >> 0x30);
    uStack_90._0_1_ = (undefined1)((ulonglong)local_148 >> 0x38);
    uStack_90._1_3_ = (undefined3)uStack_140;
    uStack_8c = (undefined4)((ulonglong)uStack_140 >> 0x18);
    local_88._0_1_ = (undefined1)((ulonglong)uStack_140 >> 0x38);
    local_88._1_3_ = (undefined3)local_138;
    uStack_84 = (undefined4)((ulonglong)local_138 >> 0x18);
    uStack_80._0_1_ = (undefined1)((ulonglong)local_138 >> 0x38);
    uStack_80._1_3_ = (undefined3)uStack_130;
    uStack_7c = (undefined4)((ulonglong)uStack_130 >> 0x18);
    local_78 = (undefined1)((ulonglong)uStack_130 >> 0x38);
    uStack_76 = local_5c;
    uStack_72 = local_58;
    cVar20 = *local_68;
    local_a8 = plVar29;
    uStack_a0 = plVar26;
    cStack_77 = cVar27;
    cVar19 = (char)local_58;
    if (cVar20 != '\0') {
      if (cVar20 == '\x02') {
        puVar3 = *(undefined8 **)(local_68 + 8);
        FUN_180027490();
        plVar24 = (longlong *)thunk_FUN_1801d32d0(0x20,8);
        if (plVar24 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x20);
        }
        local_120 = plVar24;
        cVar19 = (**(code **)*puVar3)(&local_f8,puVar3 + 3,puVar3[1],puVar3[2]);
        *(undefined4 *)(local_120 + 2) = local_e8;
        *(uint *)((longlong)local_120 + 0x14) = CONCAT13(uStack_e1,CONCAT21(uStack_e3,uStack_e4));
        *(uint *)(local_120 + 3) = CONCAT22(uStack_de,CONCAT11(cStack_df,cStack_e0));
        *(uint *)((longlong)local_120 + 0x1c) = CONCAT22(uStack_da,CONCAT11(uStack_db,uStack_dc));
        *(uint *)local_120 = CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(cStack_f7,local_f8)));
        *(uint *)((longlong)local_120 + 4) = CONCAT13(uStack_f1,CONCAT12(uStack_f2,uStack_f4));
        *(undefined4 *)(local_120 + 1) = uStack_f0;
        *(undefined4 *)((longlong)local_120 + 0xc) = uStack_ec;
        plVar25 = local_120;
      }
      else {
        cVar19 = local_68[1];
      }
    }
    cStack_f7 = cVar19;
    uStack_f0 = SUB84(plVar25,0);
    uStack_ec = (undefined4)((ulonglong)plVar25 >> 0x20);
    local_f8 = cVar20;
    (*(code *)**(undefined8 **)(local_68 + 0x10))
              (&local_e8,local_68 + 0x28,*(undefined8 *)(local_68 + 0x18),
               *(undefined8 *)(local_68 + 0x20));
    param_1[6] = (longlong)plVar29;
    param_1[7] = (longlong)plVar26;
    *(char *)(param_1 + 8) = cVar28;
    *(undefined8 *)((longlong)param_1 + 0x41) = local_148;
    *(undefined8 *)((longlong)param_1 + 0x49) = uStack_140;
    *(undefined8 *)((longlong)param_1 + 0x51) = local_138;
    *(undefined8 *)((longlong)param_1 + 0x59) = uStack_130;
    *(char *)((longlong)param_1 + 0x61) = cVar27;
    *(undefined4 *)((longlong)param_1 + 0x62) = local_5c;
    *(undefined2 *)((longlong)param_1 + 0x66) = local_58;
    *(char *)(param_1 + 0xe) = '\0';
    *(uint *)param_1 = CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(cStack_f7,local_f8)));
    *(uint *)((longlong)param_1 + 4) = CONCAT13(uStack_f1,CONCAT12(uStack_f2,uStack_f4));
    *(undefined4 *)(param_1 + 1) = uStack_f0;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_ec;
    *(undefined4 *)(param_1 + 2) = local_e8;
    *(uint *)((longlong)param_1 + 0x14) = CONCAT13(uStack_e1,CONCAT21(uStack_e3,uStack_e4));
    *(uint *)(param_1 + 3) = CONCAT22(uStack_de,CONCAT11(cStack_df,cStack_e0));
    *(uint *)((longlong)param_1 + 0x1c) = CONCAT22(uStack_da,CONCAT11(uStack_db,uStack_dc));
    *(undefined4 *)(param_1 + 4) = local_d8;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_d4;
    *(undefined4 *)(param_1 + 5) = uStack_d0;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_cc;
    param_1[0xd] = (longlong)local_70;
    FUN_180079680(local_68);
    return param_1;
  }
  uVar5 = *(undefined4 *)param_4;
  uVar6 = *(undefined4 *)((longlong)param_4 + 4);
  plVar29 = (longlong *)*param_4;
  uVar7 = *(undefined4 *)(param_4 + 1);
  uVar8 = *(undefined4 *)((longlong)param_4 + 0xc);
  plVar26 = (longlong *)param_4[1];
  local_98 = *(undefined4 *)(param_4 + 2);
  uVar9 = *(undefined4 *)((longlong)param_4 + 0x14);
  uStack_90 = *(undefined4 *)(param_4 + 3);
  uStack_8c = *(undefined4 *)((longlong)param_4 + 0x1c);
  local_88 = *(undefined4 *)(param_4 + 4);
  uStack_84 = *(undefined4 *)((longlong)param_4 + 0x24);
  uStack_80 = *(undefined4 *)(param_4 + 5);
  uStack_7c = *(undefined4 *)((longlong)param_4 + 0x2c);
  uStack_94 = (undefined1)uVar9;
  uStack_93 = (undefined2)((uint)uVar9 >> 8);
  uStack_91 = (undefined1)((uint)uVar9 >> 0x18);
  uVar2 = param_4[6];
  local_78 = (undefined1)uVar2;
  cStack_77 = (char)((ulonglong)uVar2 >> 8);
  uStack_76 = (undefined4)((ulonglong)uVar2 >> 0x10);
  uStack_72 = (undefined2)((ulonglong)uVar2 >> 0x30);
  cVar28 = (char)local_98;
  if ((char)local_98 != '\x02') {
    local_118 = *(undefined4 *)((longlong)param_4 + 0x11);
    uStack_f4 = (undefined2)((uint)*(undefined4 *)((longlong)param_4 + 0x14) >> 8);
    uStack_f2 = (undefined1)((uint)*(undefined4 *)((longlong)param_4 + 0x14) >> 0x18);
    local_f8 = (char)local_118;
    cStack_f7 = (char)((uint)local_118 >> 8);
    uStack_f6 = (undefined1)((uint)local_118 >> 0x10);
    uStack_f5 = (undefined1)((uint)local_118 >> 0x18);
    uVar2 = param_4[3];
    uVar10 = param_4[4];
    uVar5 = *(undefined4 *)((longlong)param_4 + 0x29);
    uVar6 = *(undefined4 *)((longlong)param_4 + 0x2d);
    uStack_e1 = (undefined1)((uint)*(undefined4 *)((longlong)param_4 + 0x25) >> 0x18);
    cStack_e0 = (char)uVar5;
    cStack_df = (char)((uint)uVar5 >> 8);
    uStack_de = (undefined2)((uint)uVar5 >> 0x10);
    uStack_dc = (undefined1)uVar6;
    uStack_db = (undefined1)((uint)uVar6 >> 8);
    uStack_da = (undefined2)((uint)uVar6 >> 0x10);
    uStack_f1 = (undefined1)uVar2;
    uStack_f0 = (undefined4)((ulonglong)uVar2 >> 8);
    uStack_ec._0_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
    uStack_ec._3_1_ = (undefined1)uVar10;
    local_e8 = (undefined4)((ulonglong)uVar10 >> 8);
    uStack_e4 = (undefined1)((ulonglong)uVar10 >> 0x28);
    uStack_e3 = (undefined2)((ulonglong)uVar10 >> 0x30);
    local_50 = *(undefined2 *)((longlong)param_4 + 0x36);
    local_54 = *(undefined4 *)((longlong)param_4 + 0x32);
    uStack_114 = uStack_f4;
    uStack_112 = uStack_f2;
    uStack_10c = CONCAT13(uStack_ec._3_1_,(undefined3)uStack_ec);
    uStack_100 = CONCAT26(uStack_da,CONCAT15(uStack_db,*(undefined5 *)((longlong)param_4 + 0x29)));
    uStack_104 = (undefined4)(CONCAT17(uStack_e1,(int7)((ulonglong)uVar10 >> 8)) >> 0x20);
    cVar27 = cStack_77;
    uStack_111 = uStack_f1;
    uStack_110 = uStack_f0;
    uStack_108 = local_e8;
LAB_1800720ed:
    local_98._1_3_ = (undefined3)local_118;
    local_98 = CONCAT31(local_98._1_3_,cVar28);
    uStack_94 = (undefined1)((uint)local_118 >> 0x18);
    uStack_93 = uStack_114;
    uStack_91 = uStack_112;
    uStack_90 = (undefined4)CONCAT41(uStack_110,uStack_111);
    uStack_8c = (undefined4)
                (CONCAT35((undefined3)uStack_10c,CONCAT41(uStack_110,uStack_111)) >> 0x20);
    local_88._1_3_ = (undefined3)uStack_108;
    local_88 = CONCAT31(local_88._1_3_,uStack_10c._3_1_);
    uStack_84._1_3_ = (undefined3)uStack_104;
    uStack_84 = CONCAT31(uStack_84._1_3_,(char)((uint)uStack_108 >> 0x18));
    uStack_80._1_3_ = (undefined3)uStack_100;
    uStack_80 = CONCAT31(uStack_80._1_3_,(char)((uint)uStack_104 >> 0x18));
    uStack_7c = (undefined4)((ulonglong)uStack_100 >> 0x18);
    local_78 = (undefined1)((ulonglong)uStack_100 >> 0x38);
    uStack_76 = local_54;
    uStack_72 = local_50;
    do {
      lVar22 = plVar24[1];
      while (lVar22 != -1) {
        if (lVar22 < 0) {
          local_f8 = -8;
          cStack_f7 = 0x71;
          uStack_f6 = 0x20;
          uStack_f5 = 0x80;
          uStack_f4 = 1;
          uStack_f2 = 0;
          uStack_f1 = 0;
          uStack_f0 = 0x800a5660;
          uStack_ec = 1;
          local_a8 = plVar29;
          uStack_a0 = plVar26;
          cStack_77 = cVar27;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180207208,&local_f8,&PTR_s_C__Users_burne__rustup_toolchain_180207280);
        }
        plVar25 = (longlong *)(lVar22 + 1);
        LOCK();
        lVar1 = plVar24[1];
        bVar30 = lVar22 == lVar1;
        if (bVar30) {
          plVar24[1] = (longlong)plVar25;
        }
        else {
          lVar22 = lVar1;
        }
        UNLOCK();
        if (bVar30) {
          local_148 = CONCAT17(uStack_111,CONCAT16(uStack_112,CONCAT24(uStack_114,local_118)));
          uStack_140 = CONCAT44(uStack_10c,uStack_110);
          local_138 = CONCAT44(uStack_104,uStack_108);
          uStack_130 = uStack_100;
          local_5c = local_54;
          local_58 = local_50;
          local_70 = plVar24;
          goto LAB_1800724d7;
        }
      }
    } while( true );
  }
  local_180 = plVar29;
  local_178 = plVar26;
  local_120 = param_2;
  local_a8 = plVar29;
  uStack_a0 = plVar26;
  FUN_18010cef0(&local_f8,&uStack_90);
  cVar18 = cStack_77;
  uVar17 = uStack_da;
  cVar27 = cStack_df;
  uVar16 = uStack_e4;
  uVar15 = local_e8;
  uVar14 = uStack_f4;
  cVar19 = cStack_f7;
  cVar20 = local_f8;
  uVar9 = uStack_19c;
  LOCK();
  lVar22 = *plVar29;
  *plVar29 = *plVar29 + 1;
  UNLOCK();
  if (*plVar29 != 0 && SCARRY8(lVar22,1) == *plVar29 < 0) {
    LOCK();
    plVar26[0x39] = plVar26[0x39] + 1;
    UNLOCK();
    LOCK();
    lVar22 = *plVar26;
    *plVar26 = *plVar26 + 1;
    UNLOCK();
    if (*plVar26 != 0 && SCARRY8(lVar22,1) == *plVar26 < 0) {
      uVar11 = CONCAT13(uStack_f5,CONCAT12(uStack_f6,CONCAT11(cStack_f7,local_f8)));
      uVar12 = CONCAT24(uStack_f4,uVar11);
      uVar2 = CONCAT17(uStack_f1,CONCAT16(uStack_f2,uVar12));
      uVar13 = CONCAT16(uStack_e1,CONCAT24(uStack_e3,CONCAT13(uStack_e4,local_e8._1_3_)));
      uStack_188 = CONCAT17(cStack_e0,uVar13);
      uStack_19c = CONCAT13(local_f8,(undefined3)uStack_19c);
      uStack_198 = (undefined4)((uint6)uVar12 >> 8);
      uStack_194._0_3_ = (undefined3)((ulonglong)uVar2 >> 0x28);
      uStack_194._3_1_ = (undefined1)uStack_f0;
      local_190 = (undefined4)(CONCAT44(uStack_ec,uStack_f0) >> 8);
      uStack_18c = CONCAT13((undefined1)local_e8,(int3)((uint)uStack_ec >> 8));
      local_b0 = CONCAT13(uStack_db,CONCAT12(uStack_dc,uStack_de));
      local_ac = uStack_da;
      uStack_108 = CONCAT13((undefined1)uStack_84,local_88._1_3_);
      uStack_104 = CONCAT13((undefined1)uStack_80,uStack_84._1_3_);
      uStack_111 = (undefined1)uStack_90;
      uStack_110 = (undefined4)(CONCAT44(uStack_8c,uStack_90) >> 8);
      uStack_10c._3_1_ = (undefined1)local_88;
      uStack_10c = CONCAT13(uStack_10c._3_1_,(int3)((uint)uStack_8c >> 8));
      uStack_100 = CONCAT44(CONCAT13(local_78,uStack_7c._1_3_),
                            CONCAT13((undefined1)uStack_7c,uStack_80._1_3_));
      local_54 = uStack_76;
      local_50 = uStack_72;
      if (cStack_df != '\x02') {
        local_170 = 2;
        local_16f = CONCAT17(uStack_111,CONCAT16(uStack_112,CONCAT24(uStack_114,local_118)));
        uStack_167 = CONCAT44(uStack_10c,uStack_110);
        local_15f = CONCAT44(uStack_104,uStack_108);
        uStack_157 = uStack_100;
        local_14f = cStack_77;
        local_14e = uStack_76;
        local_14a = uStack_72;
        local_f8 = (char)uVar5;
        cStack_f7 = (char)((uint)uVar5 >> 8);
        uStack_f6 = (undefined1)((uint)uVar5 >> 0x10);
        uStack_f5 = (undefined1)((uint)uVar5 >> 0x18);
        uStack_f4 = (undefined2)uVar6;
        uStack_f2 = (undefined1)((uint)uVar6 >> 0x10);
        uStack_f1 = (undefined1)((uint)uVar6 >> 0x18);
        local_e8._1_3_ = (undefined3)local_1a0;
        local_e8 = CONCAT31(local_e8._1_3_,2);
        uStack_e4 = (undefined1)((uint)local_1a0 >> 0x18);
        uStack_e3 = (undefined2)uVar9;
        uStack_e1 = (undefined1)((uint)uVar9 >> 0x10);
        cStack_e0 = cVar20;
        cStack_df = cVar19;
        uStack_de = (undefined2)((uint)uVar11 >> 0x10);
        uStack_dc = (undefined1)uVar14;
        uStack_db = (undefined1)((ushort)uVar14 >> 8);
        uStack_da = (undefined2)((ulonglong)uVar2 >> 0x30);
        local_d8 = uStack_f0;
        uStack_d4 = uStack_ec;
        uStack_d0 = uVar15;
        uStack_cc = CONCAT31((int3)((uint7)uVar13 >> 0x20),uVar16);
        local_c7 = cVar27;
        local_c2 = uVar17;
        local_b8 = plVar24 + 2;
        LOCK();
        bVar30 = (char)plVar24[2] == '\0';
        if (bVar30) {
          *(char *)(plVar24 + 2) = '\x01';
        }
        UNLOCK();
        local_180 = plVar29;
        local_178 = plVar26;
        uStack_f0 = uVar7;
        uStack_ec = uVar8;
        if (!bVar30) {
          local_4a = 1;
          local_4b = 1;
          FUN_180200390();
        }
        if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
          local_1c8 = (undefined4 *)0x0;
        }
        else {
          local_4a = 1;
          local_4b = 1;
          uVar21 = FUN_180200a50();
          local_1c8 = (undefined4 *)((ulonglong)uVar21 ^ 1);
        }
        local_55 = cVar28;
        if (*(char *)((longlong)plVar24 + 0x11) != '\0') {
          local_a8 = local_b8;
          uStack_a0 = (longlong *)CONCAT71(uStack_a0._1_7_,(char)local_1c8);
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0(&DAT_18020ce58,0x2b,&local_a8,&PTR_FUN_18020ce38,
                        &PTR_s_C__Users_burne__cargo_registry_s_18020ca30);
        }
        cVar28 = *local_68;
        local_bc = SUB84(local_1c8,0);
        pcVar23 = local_68;
        if (cVar28 != '\0') {
          if (cVar28 == '\x01') {
            pcVar23 = (char *)(ulonglong)(byte)local_68[1];
          }
          else {
            puVar3 = *(undefined8 **)(local_68 + 8);
            local_70 = plVar24;
            FUN_180027490();
            local_128 = (undefined4 *)thunk_FUN_1801d32d0(0x20,8);
            if (local_128 == (undefined4 *)0x0) {
              local_49 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_180201705(8,0x20);
            }
            pcVar23 = (char *)(**(code **)*puVar3)(&local_a8,puVar3 + 3,puVar3[1],puVar3[2]);
            *(ulonglong *)(local_128 + 4) =
                 CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT14(uStack_94,local_98)));
            *(ulonglong *)(local_128 + 6) = CONCAT44(uStack_8c,uStack_90);
            *local_128 = (undefined4)local_a8;
            local_128[1] = local_a8._4_4_;
            local_128[2] = (undefined4)uStack_a0;
            local_128[3] = uStack_a0._4_4_;
            local_1c8 = local_128;
            plVar24 = local_70;
          }
        }
        local_1cf = SUB81(pcVar23,0);
        local_1d0 = cVar28;
        (*(code *)**(undefined8 **)(local_68 + 0x10))
                  (local_1c0,local_68 + 0x28,*(undefined8 *)(local_68 + 0x18),
                   *(undefined8 *)(local_68 + 0x20));
        local_98._1_3_ = (undefined3)local_118;
        local_98 = CONCAT31(local_98._1_3_,2);
        uStack_94 = (undefined1)((uint)local_118 >> 0x18);
        uStack_90._1_3_ = (undefined3)uStack_110;
        uStack_90 = CONCAT31(uStack_90._1_3_,uStack_111);
        uStack_8c._1_3_ = (undefined3)uStack_10c;
        uStack_8c = CONCAT31(uStack_8c._1_3_,(char)((uint)uStack_110 >> 0x18));
        local_88._1_3_ = (undefined3)uStack_108;
        local_88 = CONCAT31(local_88._1_3_,(char)((uint)uStack_10c >> 0x18));
        uStack_84._1_3_ = (undefined3)uStack_104;
        uStack_84 = CONCAT31(uStack_84._1_3_,(char)((uint)uStack_108 >> 0x18));
        uStack_80._1_3_ = (undefined3)uStack_100;
        uStack_80 = CONCAT31(uStack_80._1_3_,(char)((uint)uStack_104 >> 0x18));
        uStack_7c = (undefined4)((ulonglong)uStack_100 >> 0x18);
        local_78 = (undefined1)((ulonglong)uStack_100 >> 0x38);
        uStack_76 = local_54;
        uStack_72 = local_50;
        local_49 = 0;
        local_a8 = plVar29;
        uStack_a0 = plVar26;
        cStack_77 = cVar18;
        FUN_180073450(plVar24 + 3,&local_1d0,&local_a8,local_120);
        cVar28 = local_55;
        local_49 = 0;
        FUN_1800a2a50(plVar24 + 5,local_68);
        local_49 = 0;
        FUN_1800a2740(&local_a8,plVar24 + 0x11,local_68);
        if (!SBORROW8(0,(longlong)local_a8)) {
          local_70 = local_a8;
          FUN_18007f440(&local_a8);
          if (local_70 != (longlong *)0x0) {
            thunk_FUN_1801d3330(uStack_a0,(longlong)local_70 << 3,8);
          }
        }
        pcVar23 = local_68;
        lVar22 = *(longlong *)(local_68 + 0x30);
        if (1 < lVar22 + 1U) {
          LOCK();
          plVar25 = (longlong *)(lVar22 + 8);
          *plVar25 = *plVar25 + -1;
          UNLOCK();
          if (*plVar25 == 0) {
            thunk_FUN_1801d3330(lVar22,0xe8,8);
          }
        }
        pcVar23[0x30] = '\0';
        pcVar23[0x31] = '\0';
        pcVar23[0x32] = '\0';
        pcVar23[0x33] = '\0';
        pcVar23[0x34] = '\0';
        pcVar23[0x35] = '\0';
        pcVar23[0x36] = '\0';
        pcVar23[0x37] = '\0';
        local_138 = CONCAT44(uStack_18c,local_190);
        uStack_130 = uStack_188;
        local_148 = CONCAT44(uStack_19c,local_1a0);
        uStack_140 = CONCAT44(uStack_194,uStack_198);
        local_5c = local_b0;
        local_58 = local_ac;
        if (((char)local_bc == '\0') &&
           ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
          local_4a = 0;
          local_4b = 0;
          cVar20 = FUN_180200a50();
          if (cVar20 == '\0') {
            *(undefined1 *)((longlong)plVar24 + 0x11) = 1;
          }
        }
        LOCK();
        lVar22 = *local_b8;
        *(char *)local_b8 = '\0';
        UNLOCK();
        plVar25 = local_b8;
        if ((char)lVar22 == '\x02') {
          local_4a = 0;
          local_4b = 0;
          WakeByAddressSingle();
        }
        local_70 = (longlong *)0x0;
        goto LAB_1800724d7;
      }
      cVar27 = cStack_77;
      goto LAB_1800720ed;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)invalidInstructionException();
  (*pcVar4)();
}


