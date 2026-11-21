/* FUN_1800899a0 @ 1800899a0 */

char * FUN_1800899a0(char *param_1,undefined8 *param_2,void *param_3)

{
  char *pcVar1;
  char *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  char *pcVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 uVar13;
  char local_258;
  byte bStack_257;
  undefined1 uStack_256;
  char cStack_255;
  undefined1 uStack_254;
  undefined1 uStack_253;
  undefined2 uStack_252;
  undefined1 uStack_250;
  undefined1 uStack_24f;
  undefined2 uStack_24e;
  undefined1 uStack_24c;
  undefined1 uStack_24b;
  undefined2 uStack_24a;
  undefined1 local_248;
  undefined1 uStack_247;
  undefined2 uStack_246;
  undefined4 uStack_244;
  undefined1 uStack_240;
  undefined1 uStack_23f;
  undefined2 uStack_23e;
  undefined4 uStack_23c;
  undefined1 uStack_238;
  undefined1 uStack_237;
  undefined6 uStack_236;
  char *local_138;
  undefined8 local_130;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  char **local_e0;
  undefined *local_d8;
  undefined4 local_cc;
  char local_c8;
  undefined2 uStack_c7;
  char cStack_c5;
  uint uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  uint local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  char *local_88;
  undefined8 local_80;
  char *local_78;
  void *local_70;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  pcVar5 = (char *)*param_2;
  LOCK();
  cVar10 = *pcVar5;
  if (cVar10 == '\0') {
    *pcVar5 = '\x01';
  }
  UNLOCK();
  local_70 = param_3;
  if (cVar10 != '\0') {
    local_62 = 1;
    FUN_180200390(pcVar5);
  }
  puVar9 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_94 = 0;
    cVar10 = pcVar5[1];
  }
  else {
    local_62 = 1;
    local_94 = FUN_180200a50();
    local_94 = local_94 ^ 1;
    cVar10 = pcVar5[1];
  }
  if (cVar10 != '\0') {
    local_258 = (char)pcVar5;
    bStack_257 = (byte)((ulonglong)pcVar5 >> 8);
    uStack_256 = (undefined1)((ulonglong)pcVar5 >> 0x10);
    cStack_255 = (char)((ulonglong)pcVar5 >> 0x18);
    uStack_254 = (undefined1)((ulonglong)pcVar5 >> 0x20);
    uStack_253 = (undefined1)((ulonglong)pcVar5 >> 0x28);
    uStack_252 = (undefined2)((ulonglong)pcVar5 >> 0x30);
    uStack_250 = (undefined1)local_94;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_258,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc60);
  }
  uVar13 = param_2[1];
  local_98 = *(uint *)((longlong)local_70 + 0x110);
  uVar4 = *(undefined4 *)((longlong)local_70 + 0x114);
  pcVar2 = pcVar5 + 0x1c8;
  local_61 = 1;
  local_78 = pcVar5;
  FUN_180152a20(&local_108,pcVar2,&local_98);
  puVar8 = PTR_PTR_1802fc888;
  puVar7 = PTR_PTR_1802fc880;
  if (CONCAT44(uStack_104,local_108) == 0) {
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      bVar3 = PTR_PTR_1802fc880[0x10];
      uVar11 = (uint)bVar3;
      if (bVar3 - 1 < 2) {
LAB_180089ad8:
        local_61 = 1;
        cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
        if (cVar10 != '\0') {
          lVar6 = *(longlong *)puVar7;
          lVar12 = lVar6 + 0x30;
          local_c8 = '@';
          uStack_c7 = 0x20e1;
          cStack_c5 = -0x80;
          uStack_c4 = 1;
          uStack_c0 = 0xbf;
          uStack_bc = 0;
          local_88 = &local_c8;
          local_80 = "";
          local_258 = '\x01';
          bStack_257 = 0;
          uStack_256 = 0;
          cStack_255 = '\0';
          uStack_254 = 0;
          uStack_253 = 0;
          uStack_252 = 0;
          uStack_250 = SUB81(&local_88,0);
          uStack_24f = (undefined1)((ulonglong)&local_88 >> 8);
          uStack_24e = (undefined2)((ulonglong)&local_88 >> 0x10);
          uStack_24c = (undefined1)((ulonglong)&local_88 >> 0x20);
          uStack_24b = (undefined1)((ulonglong)&local_88 >> 0x28);
          uStack_24a = (undefined2)((ulonglong)&local_88 >> 0x30);
          local_248 = 1;
          uStack_247 = 0;
          uStack_246 = 0;
          uStack_244 = 0;
          uStack_240 = (undefined1)lVar12;
          uStack_23f = (undefined1)((ulonglong)lVar12 >> 8);
          uStack_23e = (undefined2)((ulonglong)lVar12 >> 0x10);
          uStack_23c = (undefined4)((ulonglong)lVar12 >> 0x20);
          local_61 = 1;
          FUN_180160ae0(lVar6,&local_258);
        }
      }
      else if (bVar3 != 0) {
        local_61 = 1;
        uVar11 = FUN_1801faaf0(PTR_PTR_1802fc880);
        if ((char)uVar11 != '\0') goto LAB_180089ad8;
      }
    }
LAB_180089f8a:
    param_1[0] = '\x01';
    param_1[1] = '\x01';
    param_1[4] = '\x01';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(undefined ***)(param_1 + 8) = &PTR_LAB_18020de18;
    param_1[0x10] = '\x01';
    param_1[0x11] = '\0';
    param_1[0x12] = '\0';
    param_1[0x13] = '\0';
    param_1[0x14] = '\0';
    param_1[0x15] = '\0';
    param_1[0x16] = '\0';
    param_1[0x17] = '\0';
    param_1[0x18] = '\0';
    param_1[0x19] = '\0';
    param_1[0x1a] = '\0';
    param_1[0x1b] = '\0';
    param_1[0x1c] = '\0';
    param_1[0x1d] = '\0';
    param_1[0x1e] = '\0';
    param_1[0x1f] = '\0';
    param_1[0x20] = '\0';
    param_1[0x21] = '\0';
    param_1[0x22] = '\0';
    param_1[0x23] = '\0';
    param_1[0x24] = '\0';
    param_1[0x25] = '\0';
    param_1[0x26] = '\0';
    param_1[0x27] = '\0';
  }
  else {
    local_f8 = local_108;
    uStack_f4 = uStack_104;
    uStack_f0 = uStack_100;
    uStack_ec = uStack_fc;
    if (*(uint *)(local_78 + 0x110) < local_98) {
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar3 = PTR_PTR_1802fc888[0x10];
        uVar11 = (uint)bVar3;
        if (bVar3 - 1 < 2) {
LAB_180089e0d:
          local_61 = 1;
          cVar10 = FUN_1801601d0(*(undefined8 *)puVar8,uVar11);
          if (cVar10 != '\0') {
            lVar6 = *(longlong *)puVar8;
            lVar12 = lVar6 + 0x30;
            local_cc = *(undefined4 *)(local_78 + 0x110);
            local_c8 = (char)&local_98;
            uStack_c7 = (undefined2)((ulonglong)&local_98 >> 8);
            cStack_c5 = (char)((ulonglong)&local_98 >> 0x18);
            uStack_c4 = (uint)((ulonglong)&local_98 >> 0x20);
            uStack_c0 = 0x800901b0;
            uStack_bc = 1;
            local_b8 = &local_cc;
            uStack_b0 = FUN_1800901b0;
            local_88 = &DAT_18020e210;
            local_80 = &local_c8;
            local_e0 = &local_88;
            local_d8 = &DAT_18020d788;
            local_258 = '\x01';
            bStack_257 = 0;
            uStack_256 = 0;
            cStack_255 = '\0';
            uStack_254 = 0;
            uStack_253 = 0;
            uStack_252 = 0;
            uStack_250 = SUB81(&local_e0,0);
            uStack_24f = (undefined1)((ulonglong)&local_e0 >> 8);
            uStack_24e = (undefined2)((ulonglong)&local_e0 >> 0x10);
            uStack_24c = (undefined1)((ulonglong)&local_e0 >> 0x20);
            uStack_24b = (undefined1)((ulonglong)&local_e0 >> 0x28);
            uStack_24a = (undefined2)((ulonglong)&local_e0 >> 0x30);
            local_248 = 1;
            uStack_247 = 0;
            uStack_246 = 0;
            uStack_244 = 0;
            uStack_240 = (undefined1)lVar12;
            uStack_23f = (undefined1)((ulonglong)lVar12 >> 8);
            uStack_23e = (undefined2)((ulonglong)lVar12 >> 0x10);
            uStack_23c = (undefined4)((ulonglong)lVar12 >> 0x20);
            local_61 = 1;
            FUN_180160ae0(lVar6,&local_258);
          }
        }
        else if (bVar3 != 0) {
          local_61 = 1;
          uVar11 = FUN_1801faaf0(PTR_PTR_1802fc888);
          if ((char)uVar11 != '\0') goto LAB_180089e0d;
        }
      }
LAB_180089aa2:
      *param_1 = '\x03';
    }
    else {
      local_61 = 1;
      lVar12 = FUN_180152e90(&local_f8);
      local_61 = 1;
      FUN_1801385e0(&local_258,lVar12 + 0x40);
      puVar7 = PTR_PTR_1802fc890;
      if (local_258 == '\x03') {
        if ((bStack_257 & 1) == 0) {
          if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
            bVar3 = PTR_PTR_1802fc890[0x10];
            uVar11 = (uint)bVar3;
            if (bVar3 - 1 < 2) {
LAB_180089f02:
              local_61 = 1;
              cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
              if (cVar10 != '\0') {
                lVar6 = *(longlong *)puVar7;
                lVar12 = lVar6 + 0x30;
                local_c8 = -0x61;
                uStack_c7 = 0x20e1;
                cStack_c5 = -0x80;
                uStack_c4 = 1;
                uStack_c0 = 0xad;
                uStack_bc = 0;
                local_88 = &local_c8;
                local_80 = "";
                local_258 = '\x01';
                bStack_257 = 0;
                uStack_256 = 0;
                cStack_255 = '\0';
                uStack_254 = 0;
                uStack_253 = 0;
                uStack_252 = 0;
                uStack_250 = SUB81(&local_88,0);
                uStack_24f = (undefined1)((ulonglong)&local_88 >> 8);
                uStack_24e = (undefined2)((ulonglong)&local_88 >> 0x10);
                uStack_24c = (undefined1)((ulonglong)&local_88 >> 0x20);
                uStack_24b = (undefined1)((ulonglong)&local_88 >> 0x28);
                uStack_24a = (undefined2)((ulonglong)&local_88 >> 0x30);
                local_248 = 1;
                uStack_247 = 0;
                uStack_246 = 0;
                uStack_244 = 0;
                uStack_240 = (undefined1)lVar12;
                uStack_23f = (undefined1)((ulonglong)lVar12 >> 8);
                uStack_23e = (undefined2)((ulonglong)lVar12 >> 0x10);
                uStack_23c = (undefined4)((ulonglong)lVar12 >> 0x20);
                local_61 = 1;
                FUN_180160ae0(lVar6,&local_258);
              }
            }
            else if (bVar3 != 0) {
              local_61 = 1;
              uVar11 = FUN_1801faaf0(PTR_PTR_1802fc890);
              if ((char)uVar11 != '\0') goto LAB_180089f02;
            }
          }
          goto LAB_180089f8a;
        }
        pcVar5 = local_78 + 0x78;
        local_90 = uStack_f0;
        local_8c = uStack_ec;
        local_61 = 1;
        FUN_180158fa0(&local_258,pcVar5);
        if (local_258 == '\x03') {
          pcVar1 = local_78 + 8;
          local_61 = 1;
          FUN_180159f90(&local_258,pcVar5,uVar4,0,pcVar1);
          if (local_258 == '\x03') {
            if (CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254)) != 0) {
              local_61 = 1;
              FUN_180132460(&local_258,uVar4,*(undefined4 *)(local_78 + 0x184),
                            *(undefined4 *)(local_78 + 0x104));
              local_61 = 1;
              FUN_180152990(&local_e0,pcVar2,uVar4,&local_258);
              local_138 = pcVar5;
              memcpy(&local_258,local_70,0x120);
              local_61 = 0;
              local_130 = uVar13;
              FUN_180084e30(&local_c8,pcVar1,&local_e0,&local_258);
              if (local_c8 == '\x03') {
                if ((uStack_c4 & 1) != 0) {
                  local_61 = 0;
                  lVar12 = FUN_18014fcd0(pcVar2,local_90,local_8c,
                                         &PTR_s_C__Users_burne__cargo_registry_s_18020e1f8);
                  local_b8 = (undefined4 *)CONCAT44(local_b8._4_4_,*(undefined4 *)(lVar12 + 0x128));
                  uVar4 = *(undefined4 *)(lVar12 + 0x118);
                  uStack_c4 = *(uint *)(lVar12 + 0x11c);
                  local_c8 = (char)uVar4;
                  uStack_c7 = (undefined2)((uint)uVar4 >> 8);
                  cStack_c5 = (char)((uint)uVar4 >> 0x18);
                  *(undefined4 *)(lVar12 + 0x118) = 0;
                  uStack_250 = (undefined1)uStack_c0;
                  uStack_24f = (undefined1)((uint)uStack_c0 >> 8);
                  uStack_24e = (undefined2)((uint)uStack_c0 >> 0x10);
                  uStack_24c = (undefined1)uStack_bc;
                  uStack_24b = (undefined1)((uint)uStack_bc >> 8);
                  uStack_24a = (undefined2)((uint)uStack_bc >> 0x10);
                  local_258 = (char)pcVar2;
                  bStack_257 = (byte)((ulonglong)pcVar2 >> 8);
                  uStack_256 = (undefined1)((ulonglong)pcVar2 >> 0x10);
                  cStack_255 = (char)((ulonglong)pcVar2 >> 0x18);
                  uStack_254 = (undefined1)((ulonglong)pcVar2 >> 0x20);
                  uStack_253 = (undefined1)((ulonglong)pcVar2 >> 0x28);
                  uStack_252 = (undefined2)((ulonglong)pcVar2 >> 0x30);
                  local_61 = 0;
                  uStack_c0 = *(undefined4 *)(lVar12 + 0x120);
                  uStack_bc = *(undefined4 *)(lVar12 + 0x124);
                  FUN_1800ec520(&local_c8,&local_258);
                  local_80 = (char *)CONCAT44(local_8c,local_90);
                  local_248 = SUB81(local_b8,0);
                  uStack_247 = (undefined1)((ulonglong)local_b8 >> 8);
                  uStack_246 = (undefined2)((ulonglong)local_b8 >> 0x10);
                  local_258 = local_c8;
                  bStack_257 = (byte)uStack_c7;
                  uStack_256 = (undefined1)((ushort)uStack_c7 >> 8);
                  cStack_255 = cStack_c5;
                  uStack_254 = (undefined1)uStack_c4;
                  uStack_253 = (undefined1)(uStack_c4 >> 8);
                  uStack_252 = (undefined2)(uStack_c4 >> 0x10);
                  uStack_250 = (undefined1)uStack_c0;
                  uStack_24f = (undefined1)((uint)uStack_c0 >> 8);
                  uStack_24e = (undefined2)((uint)uStack_c0 >> 0x10);
                  uStack_24c = (undefined1)uStack_bc;
                  uStack_24b = (undefined1)((uint)uStack_bc >> 8);
                  uStack_24a = (undefined2)((uint)uStack_bc >> 0x10);
                  local_61 = 0;
                  local_88 = pcVar2;
                  lVar12 = FUN_180152f00(&local_88);
                  *(uint *)(lVar12 + 0x128) = CONCAT22(uStack_246,CONCAT11(uStack_247,local_248));
                  *(uint *)(lVar12 + 0x118) =
                       CONCAT13(cStack_255,CONCAT12(uStack_256,CONCAT11(bStack_257,local_258)));
                  *(uint *)(lVar12 + 0x11c) = CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254));
                  *(uint *)(lVar12 + 0x120) = CONCAT22(uStack_24e,CONCAT11(uStack_24f,uStack_250));
                  *(uint *)(lVar12 + 0x124) = CONCAT22(uStack_24a,CONCAT11(uStack_24b,uStack_24c));
                  local_61 = 0;
                  uVar13 = FUN_180152f00(&local_88);
                  local_61 = 0;
                  FUN_180132100(uVar13);
                }
                *param_1 = '\x03';
                pcVar5 = local_78;
              }
              else {
                param_1[3] = cStack_c5;
                *(undefined2 *)(param_1 + 1) = uStack_c7;
                *(undefined8 *)(param_1 + 0x20) = local_a8;
                *(undefined4 *)(param_1 + 0x10) = (undefined4)local_b8;
                *(undefined4 *)(param_1 + 0x14) = local_b8._4_4_;
                *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_b0;
                *(undefined4 *)(param_1 + 0x1c) = uStack_b0._4_4_;
                *param_1 = local_c8;
                *(ulonglong *)(param_1 + 4) = CONCAT44(uStack_c0,uStack_c4);
                *(undefined4 *)(param_1 + 0xc) = uStack_bc;
                pcVar5 = local_78;
              }
              goto joined_r0x00018008a105;
            }
            goto LAB_180089aa2;
          }
          param_1[3] = cStack_255;
          *(ushort *)(param_1 + 1) = CONCAT11(uStack_256,bStack_257);
          *(uint *)(param_1 + 0xc) = CONCAT22(uStack_24a,CONCAT11(uStack_24b,uStack_24c));
          *(uint *)(param_1 + 0x10) = CONCAT22(uStack_246,CONCAT11(uStack_247,local_248));
          *(undefined4 *)(param_1 + 0x14) = uStack_244;
          *(uint *)(param_1 + 0x18) = CONCAT22(uStack_23e,CONCAT11(uStack_23f,uStack_240));
          *(ulonglong *)(param_1 + 0x18) =
               CONCAT44(uStack_23c,CONCAT22(uStack_23e,CONCAT11(uStack_23f,uStack_240)));
          *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_236,CONCAT11(uStack_237,uStack_238));
          *param_1 = local_258;
          *(ulonglong *)(param_1 + 4) =
               CONCAT26(uStack_24e,
                        CONCAT15(uStack_24f,
                                 CONCAT14(uStack_250,
                                          CONCAT22(uStack_252,CONCAT11(uStack_253,uStack_254)))));
        }
        else {
          *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_236,CONCAT11(uStack_237,uStack_238));
          *(ulonglong *)(param_1 + 0x11) =
               CONCAT17(uStack_240,CONCAT43(uStack_244,CONCAT21(uStack_246,uStack_247)));
          *(ulonglong *)(param_1 + 0x19) =
               CONCAT17(uStack_238,CONCAT43(uStack_23c,CONCAT21(uStack_23e,uStack_23f)));
          *(uint *)(param_1 + 1) =
               CONCAT13(uStack_254,CONCAT12(cStack_255,CONCAT11(uStack_256,bStack_257)));
          *(uint *)(param_1 + 5) = CONCAT13(uStack_250,CONCAT21(uStack_252,uStack_253));
          *(uint *)(param_1 + 9) = CONCAT13(uStack_24c,CONCAT21(uStack_24e,uStack_24f));
          *(uint *)(param_1 + 0xd) = CONCAT13(local_248,CONCAT21(uStack_24a,uStack_24b));
          *param_1 = local_258;
        }
      }
      else {
        *(ulonglong *)(param_1 + 0x20) = CONCAT62(uStack_236,CONCAT11(uStack_237,uStack_238));
        *(ulonglong *)(param_1 + 0x12) =
             CONCAT17(uStack_23f,CONCAT16(uStack_240,CONCAT42(uStack_244,uStack_246)));
        *(ulonglong *)(param_1 + 0x1a) =
             CONCAT17(uStack_237,CONCAT16(uStack_238,CONCAT42(uStack_23c,uStack_23e)));
        *(uint *)(param_1 + 2) =
             CONCAT13(uStack_253,CONCAT12(uStack_254,CONCAT11(cStack_255,uStack_256)));
        *(uint *)(param_1 + 6) = CONCAT13(uStack_24f,CONCAT12(uStack_250,uStack_252));
        *(uint *)(param_1 + 10) = CONCAT13(uStack_24b,CONCAT12(uStack_24c,uStack_24e));
        *(uint *)(param_1 + 0xe) = CONCAT13(uStack_247,CONCAT12(local_248,uStack_24a));
        *param_1 = local_258;
        param_1[1] = bStack_257;
      }
    }
  }
  FUN_1800430f0(local_70);
  FUN_1800663c0((longlong)local_70 + 0x60);
  pcVar5 = local_78;
joined_r0x00018008a105:
  local_78 = pcVar5;
  if (((char)local_94 == '\0') && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
    local_62 = 0;
    cVar10 = FUN_180200a50();
    if (cVar10 == '\0') {
      pcVar5[1] = '\x01';
    }
  }
  LOCK();
  cVar10 = *pcVar5;
  *pcVar5 = '\0';
  UNLOCK();
  if (cVar10 == '\x02') {
    local_62 = 0;
    WakeByAddressSingle(pcVar5);
  }
  return param_1;
}


