/* FUN_180056600 @ 180056600 */

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00018005a0a6) overlaps instruction at (ram,0x00018005a0a1)
    */
/* WARNING: Removing unreachable block (ram,0x00018005692e) */
/* WARNING: Removing unreachable block (ram,0x0001800568c4) */
/* WARNING: Switch with 1 destination removed at 0x00018005a058 */

longlong * FUN_180056600(longlong *param_1,undefined **param_2,undefined1 *param_3)

{
  undefined8 *puVar1;
  byte bVar2;
  uint uVar3;
  code *pcVar4;
  char cVar5;
  undefined1 uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  undefined *puVar9;
  undefined **ppuVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  int iVar14;
  undefined *puVar15;
  undefined **ppuVar16;
  undefined **ppuVar17;
  char *pcVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  byte bVar21;
  undefined **unaff_R14;
  undefined **ppuVar22;
  undefined *local_208;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined *local_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  longlong local_1b8;
  longlong local_1a8;
  longlong lStack_1a0;
  longlong local_198;
  longlong lStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong local_178;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined **local_158;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  longlong local_118;
  undefined *local_108;
  undefined *local_100;
  undefined *local_f8;
  undefined *local_f0;
  undefined **local_e8;
  undefined4 local_e0;
  undefined3 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined **ppuStack_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong lStack_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  undefined **local_78;
  undefined *puStack_70;
  undefined **local_68;
  undefined **local_60;
  undefined **local_58;
  undefined **local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  ppuVar13 = param_2 + 0x27;
  if (param_2[0x27] == (undefined *)0x1) {
    if (param_2[0x34] == (undefined *)0x8000000000000002) {
      puVar15 = param_2[4];
      if ((ulonglong)((longlong)param_2[2] - (longlong)puVar15) < 0x19) {
        FUN_1801f6a80(param_2 + 2,puVar15,0x19,1,1);
        puVar15 = param_2[4];
      }
      puVar9 = param_2[3];
      puVar1 = (undefined8 *)(puVar9 + 9 + (longlong)puVar15);
      *puVar1 = 0x746e6f4320303031;
      puVar1[1] = 0xa0d0a0d65756e69;
      puVar1 = (undefined8 *)(puVar9 + (longlong)puVar15);
      *puVar1 = 0x312e312f50545448;
      puVar1[1] = 0x6e6f432030303120;
      param_2[4] = puVar15 + 0x19;
    }
    puVar15 = param_2[0x28];
    puVar9 = (undefined *)0x1;
    if ((undefined *)0x1 < puVar15) {
      puVar9 = puVar15 + -2;
    }
    if ((puVar9 == (undefined *)0x0) || (puVar9 != (undefined *)0x1)) {
      local_100 = param_2[0x29];
      local_f8 = param_2[0x2a];
      local_f0 = param_2[0x2b];
      local_78 = (undefined **)param_2[0x2c];
      puStack_70 = param_2[0x2d];
      local_68 = (undefined **)param_2[0x2e];
      local_158 = (undefined **)param_2[0x31];
      local_168 = *(undefined4 *)(param_2 + 0x2f);
      uStack_164 = *(undefined4 *)((longlong)param_2 + 0x17c);
      uStack_160 = *(undefined4 *)(param_2 + 0x30);
      uStack_15c = *(undefined4 *)((longlong)param_2 + 0x184);
      local_108 = param_2[0x32];
      local_58 = (undefined **)CONCAT71(local_58._1_7_,*(byte *)(param_2 + 0x33));
      uStack_dc = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x19c) >> 8);
      local_e0 = *(undefined4 *)((longlong)param_2 + 0x199);
    }
    else {
      local_58 = (undefined **)CONCAT71(local_58._1_7_,*(byte *)(param_2 + 0x33));
      local_78 = (undefined **)param_2[0x2c];
      puStack_70 = param_2[0x2d];
      if (param_2[0x2e] == (undefined *)0x0) {
        local_68 = (undefined **)0x0;
      }
      else {
        FUN_1801b29c0(&local_d8,param_2 + 0x2e);
        local_68 = local_d8;
        local_168 = (undefined4)uStack_d0;
        uStack_164 = uStack_d0._4_4_;
        uStack_160 = (undefined4)local_c8;
        uStack_15c = local_c8._4_4_;
        local_158 = ppuStack_c0;
      }
      local_108 = param_2[0x32];
      local_100 = param_2[0x29];
      local_f8 = param_2[0x2a];
      puVar15 = (undefined *)(ulonglong)((uint)puVar15 & 1);
      local_f0 = param_2[0x2b];
    }
    local_e8 = param_2;
    local_50 = (undefined **)puVar15;
    if (*ppuVar13 == (undefined *)0x1) {
      uVar3 = *(uint *)(param_2 + 0x28);
joined_r0x0001800569b5:
      if ((uVar3 < 2) && (param_2[0x2e] != (undefined *)0x0)) {
        FUN_1801b2a70(param_2 + 0x2e);
      }
    }
    else if ((int)*ppuVar13 == 2) {
      uVar3 = *(uint *)(param_2 + 0x28);
      goto joined_r0x0001800569b5;
    }
    local_e8[0x27] = (undefined *)0x2;
    local_e8[0x28] = (undefined *)local_50;
    local_e8[0x29] = local_100;
    local_e8[0x2a] = local_f8;
    local_e8[0x2b] = local_f0;
    local_e8[0x2c] = (undefined *)local_78;
    local_e8[0x2d] = puStack_70;
    local_e8[0x2e] = (undefined *)local_68;
    *(undefined4 *)(local_e8 + 0x2f) = local_168;
    *(undefined4 *)((longlong)local_e8 + 0x17c) = uStack_164;
    *(undefined4 *)(local_e8 + 0x30) = uStack_160;
    *(undefined4 *)((longlong)local_e8 + 0x184) = uStack_15c;
    local_e8[0x31] = (undefined *)local_158;
    local_e8[0x32] = local_108;
    *(byte *)(local_e8 + 0x33) = (byte)local_58;
    *(undefined4 *)((longlong)local_e8 + 0x199) = local_e0;
    *(uint *)((longlong)local_e8 + 0x19c) = CONCAT31(uStack_dc,local_e0._3_1_);
    FUN_180056600(param_1,local_e8,param_3);
  }
  else {
    if ((int)param_2[0x27] != 2) {
      uStack_d0 = FUN_18005a040;
      local_d8 = ppuVar13;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020938b,&local_d8,&PTR_s_C__Users_burne__cargo_registry_s_1802093d8);
    }
    puVar9 = param_2[0x28];
    puVar15 = puVar9 + -2;
    if (puVar9 < (undefined *)0x2) {
      puVar15 = (undefined *)0x1;
    }
    local_60 = ppuVar13;
    if (puVar15 == (undefined *)0x0) {
      if (param_2[0x29] == (undefined *)0x0) {
        local_50 = &PTR_LAB_1802091d8;
        local_58 = (undefined **)0x0;
        ppuStack_c0 = (undefined **)0x0;
        local_c8 = (undefined **)0x1;
      }
      else {
        FUN_18006b9a0(&local_d8,param_2,param_3);
        ppuVar12 = ppuStack_c0;
        ppuVar22 = local_c8;
        if ((char)local_d8 != '\0') goto LAB_180056fd5;
        if ((undefined **)uStack_d0 == (undefined **)0x0) {
          puVar15 = (undefined *)0x4;
          local_50 = local_c8;
          ppuStack_c0 = unaff_R14;
          goto LAB_180056d01;
        }
        local_50 = (undefined **)uStack_d0;
        local_58 = local_b8;
        puVar15 = (undefined *)((longlong)param_2[0x29] - (longlong)ppuStack_c0);
        if (param_2[0x29] < ppuStack_c0) {
          puVar15 = (undefined *)0x0;
        }
        else if (ppuStack_c0 == (undefined **)0x0) {
          local_78 = local_c8;
          ppuVar10 = (undefined **)FUN_180039910(0x25);
          goto LAB_180056db9;
        }
        param_2[0x29] = puVar15;
      }
LAB_180056b7e:
      local_188 = CONCAT44(uStack_124,local_128);
      uStack_180 = CONCAT44(uStack_11c,uStack_120);
      local_b8 = (undefined **)CONCAT44(uStack_124,local_128);
      local_d8 = (undefined **)local_148;
      unaff_R14 = ppuStack_c0;
      ppuVar22 = local_c8;
      local_c8 = (undefined **)local_138;
      ppuStack_c0 = (undefined **)lStack_130;
LAB_180056bc3:
      puVar15 = (undefined *)0x1;
      if ((undefined *)0x1 < param_2[0x28]) {
        puVar15 = param_2[0x28] + -2;
      }
      local_1a8 = (longlong)local_d8;
      lStack_1a0 = lStack_140;
      local_198 = (longlong)local_c8;
      lStack_190 = (longlong)ppuStack_c0;
      local_178 = local_118;
      if (puVar15 == (undefined *)0x0) {
        if (param_2[0x29] != (undefined *)0x0) goto LAB_180056c4c;
LAB_180056bf6:
        if (unaff_R14 == (undefined **)0x0) {
          local_78 = (undefined **)0x3;
          goto LAB_180056cc4;
        }
        local_1b8 = local_118;
        uStack_1c0 = CONCAT44(uStack_11c,uStack_120);
        local_1c8 = (longlong)local_b8;
        local_1d8 = (longlong)local_c8;
        uStack_1d0 = (longlong)ppuStack_c0;
        local_1e8 = (longlong)local_d8;
        uStack_1e0 = lStack_140;
        local_78 = (undefined **)0x3;
        puVar15 = (undefined *)0x3;
      }
      else {
        if (puVar15 != (undefined *)0x1) {
          if (*(byte *)(param_2 + 0x29) == 0) goto LAB_180056c4c;
          goto LAB_180056bf6;
        }
        if (*(byte *)(param_2 + 0x33) == 0xc) goto LAB_180056bf6;
LAB_180056c4c:
        if (unaff_R14 != (undefined **)0x0) {
          param_1[0xb] = local_118;
          param_1[9] = (longlong)local_b8;
          param_1[10] = CONCAT44(uStack_11c,uStack_120);
          param_1[7] = (longlong)local_c8;
          param_1[8] = (longlong)ppuStack_c0;
          param_1[5] = (longlong)local_d8;
          param_1[6] = lStack_140;
          *param_1 = 3;
          param_1[1] = (longlong)local_50;
          param_1[2] = (longlong)ppuVar22;
          param_1[3] = (longlong)unaff_R14;
          param_1[4] = (longlong)local_58;
          return param_1;
        }
        local_78 = (undefined **)0x4;
LAB_180056cc4:
        uStack_d0 = (code *)lStack_140;
        uStack_b0 = uStack_120;
        uStack_ac = uStack_11c;
        lStack_a8 = local_118;
        (*(code *)local_50[4])(local_58,ppuVar22,0);
        puVar15 = (undefined *)0x5;
      }
    }
    else {
      if (puVar15 == (undefined *)0x1) {
        iVar14 = 100;
        local_78 = (undefined **)0x64;
        if (((ulonglong)puVar9 & 1) != 0) {
          local_78 = (undefined **)param_2[0x29];
        }
        local_50 = (undefined **)0x4000;
        if (*(byte *)(param_2 + 0x2a) != 0) {
          local_50 = (undefined **)param_2[0x2b];
        }
        ppuVar12 = param_2 + 0x2e;
        local_58 = param_2 + 0x2f;
        uVar7 = (ulonglong)(int)(&switchD_1800566fa::caseD_12)[*(byte *)(param_2 + 0x33)];
        plVar8 = (longlong *)((longlong)&switchD_1800566fa::caseD_12 + uVar7);
        ppuVar22 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(byte *)(param_2 + 0x33)) {
        case 0:
switchD_1800566fa_caseD_0:
          ppuVar13 = param_2;
          FUN_18006b9a0(&local_d8,param_2,param_3,1);
          if ((char)local_d8 == '\0') {
            if ((undefined **)uStack_d0 != (undefined **)0x0) {
              if (ppuStack_c0 == (undefined **)0x0) {
                local_78 = local_b8;
                local_58 = (undefined **)uStack_d0;
                local_50 = local_c8;
                ppuVar13 = (undefined **)
                           FUN_1801d6710(0x25,"unexpected EOF during chunk size line",0x25);
LAB_180056fe1:
                ppuVar12 = local_58;
                ppuVar10 = local_78;
LAB_180056ffc:
                (*(code *)ppuVar12[4])(ppuVar10,local_50,0);
                local_50 = ppuVar13;
                goto LAB_18005745b;
              }
              bVar2 = *(byte *)local_c8;
              (**(code **)((longlong)uStack_d0 + 0x20))();
              if ((byte)(bVar2 - 0x30) < 10) {
                if ((ulonglong)param_2[0x2c] >> 0x3c == 0) {
                  param_2[0x2c] =
                       (undefined *)((ulonglong)(byte)(bVar2 - 0x30) | (longlong)param_2[0x2c] << 4)
                  ;
                  *(byte *)(param_2 + 0x33) = 1;
switchD_1800566fa_caseD_1:
                  do {
                    ppuVar13 = param_2;
                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                    if ((undefined **)uStack_d0 == (undefined **)0x0) goto LAB_180057cc6;
                    if (ppuStack_c0 == (undefined **)0x0) {
                      local_78 = local_b8;
                      local_58 = (undefined **)uStack_d0;
                      local_50 = local_c8;
                      ppuVar13 = (undefined **)
                                 FUN_1801d6710(0x25,"unexpected EOF during chunk size line",0x25);
                      goto LAB_180056fe1;
                    }
                    bVar2 = *(byte *)local_c8;
                    ppuVar13 = local_b8;
                    (**(code **)((longlong)uStack_d0 + 0x20))();
                    if ((byte)(bVar2 - 0x30) < 10) {
                      if ((ulonglong)param_2[0x2c] >> 0x3c != 0) break;
                      param_2[0x2c] =
                           (undefined *)
                           ((ulonglong)(byte)(bVar2 - 0x30) | (longlong)param_2[0x2c] << 4);
                      *(byte *)(param_2 + 0x33) = 1;
                    }
                    else if ((byte)(bVar2 + 0x9f) < 6) {
                      if ((ulonglong)param_2[0x2c] >> 0x3c != 0) goto LAB_1800571f8;
                      param_2[0x2c] =
                           (undefined *)
                           ((ulonglong)(byte)(bVar2 + 0xa9) + (longlong)param_2[0x2c] * 0x10);
                      *(byte *)(param_2 + 0x33) = 1;
                      unaff_R14 = param_2;
                    }
                    else {
                      if (5 < (byte)(bVar2 + 0xbf)) {
                        bVar21 = 2;
                        if (bVar2 < 0x20) {
                          if (bVar2 == 9) goto LAB_180057b2d;
                          if (bVar2 != 0xd) goto LAB_18005721b;
                          *(byte *)(param_2 + 0x33) = 4;
switchD_1800566fa_caseD_4:
                          puVar15 = param_2[0x2c];
                          ppuVar13 = param_2;
                          FUN_18006b9a0(&local_d8,param_2,param_3,1);
                          if ((char)local_d8 != '\0') {
                            cVar5 = '\x02';
                            goto LAB_180056fbf;
                          }
                          if ((undefined **)uStack_d0 == (undefined **)0x0) {
                            cVar5 = '\x01';
                            ppuVar13 = local_c8;
                            goto LAB_180056fbf;
                          }
                          local_68 = (undefined **)uStack_d0;
                          if (ppuStack_c0 == (undefined **)0x0) {
                            local_58 = local_b8;
                            local_50 = local_c8;
                            ppuVar12 = (undefined **)
                                       FUN_1801d6710(0x25,"unexpected EOF during chunk size line",
                                                     0x25);
                            ppuVar13 = local_60;
                            (*(code *)local_68[4])(local_58,local_50,0);
                            local_50 = ppuVar12;
                            goto LAB_180057462;
                          }
                          bVar2 = *(byte *)local_c8;
                          unaff_R14 = (undefined **)(ulonglong)bVar2;
                          (**(code **)((longlong)uStack_d0 + 0x20))();
                          if (bVar2 == 10) {
                            *(byte *)(param_2 + 0x33) = (puVar15 == (undefined *)0x0) * '\x05' + 5;
                            switch(puVar15 == (undefined *)0x0) {
                            case true:
switchD_1800566fa_caseD_a:
                              ppuVar13 = param_2;
                              FUN_18006b9a0(&local_d8,param_2,param_3,1);
                              if ((char)local_d8 == '\0') {
                                if ((undefined **)uStack_d0 == (undefined **)0x0)
                                goto LAB_180057cc6;
                                if (ppuStack_c0 != (undefined **)0x0) {
                                  bVar2 = *(byte *)local_c8;
                                  ppuVar13 = local_b8;
                                  (**(code **)((longlong)uStack_d0 + 0x20))();
                                  if (bVar2 == 0xd) {
                                    bVar21 = 0xb;
                                    if (*ppuVar12 == (undefined *)0x0) goto LAB_180057b2d;
                                    local_d8 = (undefined **)CONCAT71(local_d8._1_7_,0xd);
                                    FUN_1801b2af0(ppuVar12,&local_d8,1);
                                    goto LAB_180057b16;
                                  }
                                  if (*ppuVar12 != (undefined *)0x0) {
                                    local_d8 = (undefined **)CONCAT71(local_d8._1_7_,bVar2);
                                    FUN_1801b2af0(ppuVar12,&local_d8,1);
                                    bVar21 = 8;
                                    goto LAB_180057b16;
                                  }
                                  FUN_180027490();
                                  puVar15 = (undefined *)thunk_FUN_1801d32d0(0x40,1);
                                  if (puVar15 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
                                    FUN_18020171e(1,0x40);
                                  }
                                  uStack_d0 = (code *)0x0;
                                  local_c8 = (undefined **)&DAT_00000040;
                                  ppuStack_c0 = (undefined **)0x1;
                                  local_208 = (undefined *)CONCAT71(local_208._1_7_,bVar2);
                                  local_d8 = (undefined **)puVar15;
                                  FUN_1801b2af0(&local_d8,&local_208,1);
                                  param_2[0x30] = (undefined *)local_c8;
                                  param_2[0x31] = (undefined *)ppuStack_c0;
                                  *(undefined4 *)ppuVar12 = (undefined4)local_d8;
                                  *(undefined4 *)((longlong)param_2 + 0x174) = local_d8._4_4_;
                                  *(undefined4 *)(param_2 + 0x2f) = (undefined4)uStack_d0;
                                  *(undefined4 *)((longlong)param_2 + 0x17c) = uStack_d0._4_4_;
                                  *(byte *)(param_2 + 0x33) = 8;
switchD_1800566fa_caseD_8:
                                  do {
                                    ppuVar13 = param_2;
                                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                                    if ((undefined **)uStack_d0 == (undefined **)0x0)
                                    goto LAB_180057cc6;
                                    if (ppuStack_c0 == (undefined **)0x0) {
                                      local_78 = local_b8;
                                      local_58 = (undefined **)uStack_d0;
                                      local_50 = local_c8;
                                      ppuVar13 = (undefined **)
                                                 FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                      goto LAB_180056fe1;
                                    }
                                    bVar2 = *(byte *)local_c8;
                                    (**(code **)((longlong)uStack_d0 + 0x20))();
                                    if (*ppuVar12 == (undefined *)0x0) {
LAB_1800579da:
                    /* WARNING: Subroutine does not return */
                                      FUN_180201b60("trailers_buf is None",0x14,
                                                    &
                                                  PTR_s_C__Users_burne__cargo_registry_s_1802095f8);
                                    }
                                    local_d8 = (undefined **)CONCAT71(local_d8._1_7_,bVar2);
                                    FUN_1801b2af0(ppuVar12,&local_d8,1);
                                    if (*ppuVar12 == (undefined *)0x0) goto LAB_1800579da;
                                    if (local_50 <= *local_58) {
LAB_180057ccd:
                                      pcVar18 = "chunk trailers bytes over limit";
                                      uVar19 = 0x1f;
LAB_18005744a:
                                      uVar20 = 0x15;
                                      goto LAB_18005744c;
                                    }
                                    *(byte *)(param_2 + 0x33) = bVar2 == 0xd | 8;
                                    switch(bVar2 == 0xd) {
                                    case true:
switchD_1800566fa_caseD_9:
                                      ppuVar13 = param_2;
                                      FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                      if ((char)local_d8 == '\0') {
                                        if ((undefined **)uStack_d0 == (undefined **)0x0)
                                        goto LAB_180057cc6;
                                        local_68 = (undefined **)uStack_d0;
                                        if (ppuStack_c0 != (undefined **)0x0) {
                                          bVar2 = *(byte *)local_c8;
                                          unaff_R14 = (undefined **)(ulonglong)bVar2;
                                          (**(code **)((longlong)uStack_d0 + 0x20))();
                                          if (bVar2 == 10) {
                                            if (param_2[0x32] < local_78) {
                                              param_2[0x32] = (byte *)((longlong)param_2[0x32] + 1);
                                              if (param_2[0x2e] == (undefined *)0x0) {
LAB_180057afe:
                    /* WARNING: Subroutine does not return */
                                                FUN_180201b60("trailers_buf is None",0x14,
                                                              &
                                                  PTR_s_C__Users_burne__cargo_registry_s_180209678);
                                              }
                                              local_d8 = (undefined **)CONCAT71(local_d8._1_7_,10);
                                              FUN_1801b2af0(ppuVar12,&local_d8,1);
                                              if (*ppuVar12 == (undefined *)0x0) goto LAB_180057afe;
                                              bVar21 = 10;
LAB_180057b16:
                                              ppuVar13 = local_50;
                                              if (*local_58 < local_50) {
LAB_180057b2d:
                                                do {
                                                  iVar14 = (int)ppuVar13;
                                                  *(byte *)(param_2 + 0x33) = bVar21;
                                                  uVar7 = (ulonglong)
                                                          (int)(&switchD_1800566fa::caseD_12)
                                                               [bVar21];
                                                  plVar8 = (longlong *)
                                                           ((longlong)&switchD_1800566fa::caseD_12 +
                                                           uVar7);
                                                  switch(bVar21) {
                                                  case 0:
                                                    goto switchD_1800566fa_caseD_0;
                                                  case 1:
                                                    goto switchD_1800566fa_caseD_1;
                                                  case 2:
switchD_1800566fa_caseD_2:
                                                    ppuVar13 = param_2;
                                                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                                                    if ((undefined **)uStack_d0 == (undefined **)0x0
                                                       ) goto LAB_180057cc6;
                                                    local_68 = (undefined **)uStack_d0;
                                                    if (ppuStack_c0 == (undefined **)0x0) {
                                                      local_58 = local_b8;
                                                      local_50 = local_c8;
                                                      ppuVar13 = (undefined **)
                                                                 FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                                  ppuVar12 = local_68;
                                                  ppuVar10 = local_58;
                                                  goto LAB_180056ffc;
                                                  }
                                                  bVar2 = *(byte *)local_c8;
                                                  unaff_R14 = (undefined **)(ulonglong)bVar2;
                                                  ppuVar13 = local_b8;
                                                  (**(code **)((longlong)uStack_d0 + 0x20))();
                                                  bVar21 = 2;
                                                  if (bVar2 < 0x20) {
                                                    if (bVar2 == 9) break;
                                                    if (bVar2 == 0xd) {
                                                      *(byte *)(param_2 + 0x33) = 4;
                                                      goto switchD_1800566fa_caseD_4;
                                                    }
                                                  }
                                                  else {
                                                    if (bVar2 == 0x20) break;
                                                    if (bVar2 == 0x3b) {
                                                      *(byte *)(param_2 + 0x33) = 3;
                                                      goto switchD_1800566fa_caseD_3;
                                                    }
                                                  }
                                                  pcVar18 = &DAT_180209610;
                                                  uVar20 = 0x25;
                                                  uVar19 = 0x14;
                                                  goto LAB_18005701a;
                                                  case 3:
switchD_1800566fa_caseD_3:
                                                    ppuVar13 = param_2;
                                                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                                                    if ((undefined **)uStack_d0 == (undefined **)0x0
                                                       ) goto LAB_180057cc6;
                                                    local_68 = (undefined **)uStack_d0;
                                                    if (ppuStack_c0 == (undefined **)0x0) {
                                                      local_58 = local_b8;
                                                      local_50 = local_c8;
                                                      ppuVar10 = (undefined **)
                                                                 FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                                  goto LAB_18005742a;
                                                  }
                                                  bVar2 = *(byte *)local_c8;
                                                  unaff_R14 = (undefined **)(ulonglong)bVar2;
                                                  ppuVar13 = local_b8;
                                                  (**(code **)((longlong)uStack_d0 + 0x20))();
                                                  bVar21 = 4;
                                                  if (bVar2 != 0xd) {
                                                    if (bVar2 == 10) {
                                                      pcVar18 = &DAT_180209635;
                                                      uVar19 = 0x28;
                                                      goto LAB_18005744a;
                                                    }
                                                    puVar15 = param_2[0x2d];
                                                    param_2[0x2d] = puVar15 + 1;
                                                    bVar21 = 3;
                                                    if ((undefined *)0x3fff < puVar15 + 1) {
                                                      pcVar18 = &DAT_18020965d;
                                                      uVar19 = 0x1b;
                                                      goto LAB_18005744a;
                                                    }
                                                  }
                                                  break;
                                                  case 4:
                                                    goto switchD_1800566fa_caseD_4;
                                                  case 5:
                                                    goto switchD_1800566fa_caseD_5;
                                                  case 6:
switchD_1800566fa_caseD_6:
                                                    ppuVar13 = param_2;
                                                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                                                    if ((undefined **)uStack_d0 == (undefined **)0x0
                                                       ) goto LAB_180057cc6;
                                                    local_68 = (undefined **)uStack_d0;
                                                    if (ppuStack_c0 == (undefined **)0x0) {
                                                      local_58 = local_b8;
                                                      local_50 = local_c8;
                                                      ppuVar10 = (undefined **)
                                                                 FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                                  goto LAB_18005742a;
                                                  }
                                                  bVar2 = *(byte *)local_c8;
                                                  unaff_R14 = (undefined **)(ulonglong)bVar2;
                                                  ppuVar13 = local_b8;
                                                  (**(code **)((longlong)uStack_d0 + 0x20))();
                                                  bVar21 = 7;
                                                  if (bVar2 != 0xd) {
                                                    pcVar18 = "Invalid chunk body CR";
                                                    goto LAB_1800576d0;
                                                  }
                                                  break;
                                                  case 7:
switchD_1800566fa_caseD_7:
                                                    ppuVar13 = param_2;
                                                    FUN_18006b9a0(&local_d8,param_2,param_3,1);
                                                    if ((char)local_d8 != '\0') goto LAB_180056fbd;
                                                    if ((undefined **)uStack_d0 == (undefined **)0x0
                                                       ) goto LAB_180057cc6;
                                                    local_68 = (undefined **)uStack_d0;
                                                    if (ppuStack_c0 == (undefined **)0x0) {
                                                      local_58 = local_b8;
                                                      local_50 = local_c8;
                                                      ppuVar10 = (undefined **)
                                                                 FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                                  goto LAB_18005742a;
                                                  }
                                                  bVar2 = *(byte *)local_c8;
                                                  unaff_R14 = (undefined **)(ulonglong)bVar2;
                                                  ppuVar13 = local_b8;
                                                  (**(code **)((longlong)uStack_d0 + 0x20))();
                                                  bVar21 = 0;
                                                  if (bVar2 != 10) {
                                                    pcVar18 = "Invalid chunk body LF";
                                                    goto LAB_1800576d0;
                                                  }
                                                  break;
                                                  case 8:
                                                    goto switchD_1800566fa_caseD_8;
                                                  case 9:
                                                    goto switchD_1800566fa_caseD_9;
                                                  case 10:
                                                    goto switchD_1800566fa_caseD_a;
                                                  case 0xb:
                                                    goto switchD_1800566fa_caseD_b;
                                                  case 0xc:
                                                    goto switchD_1800566fa_caseD_c;
                                                  case 0xd:
                                                    goto switchD_1800566fa_caseD_d;
                                                  case 0xe:
                                                    goto switchD_1800566fa_caseD_e;
                                                  case 0xf:
                                                    goto code_r0x00000001;
                                                  }
                                                } while( true );
                                              }
                                              goto LAB_180057ccd;
                                            }
                                            pcVar18 = "chunk trailers count overflow";
                                            uVar20 = 0x1d;
                                            goto LAB_180057018;
                                          }
                                          pcVar18 = "Invalid trailer end LF";
                                          uVar20 = 0x16;
                                          uVar19 = 0x14;
                                          goto LAB_18005701a;
                                        }
                                        local_58 = local_b8;
                                        local_50 = local_c8;
                                        ppuVar10 = (undefined **)
                                                   FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
LAB_18005742a:
                                        ppuVar11 = local_68;
                                        ppuVar16 = local_58;
                                        ppuVar17 = local_50;
                                        ppuVar13 = local_60;
                                        goto LAB_180056e2e;
                                      }
                                      goto LAB_180056fbd;
                                    }
                                  } while( true );
                                }
                                local_78 = local_b8;
                                local_58 = (undefined **)uStack_d0;
                                local_50 = local_c8;
                                ppuVar13 = (undefined **)
                                           FUN_1801d6710(0x25,
                                                  "unexpected EOF during chunk size line",0x25);
                                goto LAB_180056fe1;
                              }
                              goto LAB_180056fbd;
                            }
                            goto switchD_1800566fa_caseD_5;
                          }
                          pcVar18 = "Invalid chunk size LF";
LAB_1800576d0:
                          uVar19 = 0x15;
                          uVar20 = 0x14;
                        }
                        else {
                          if (bVar2 == 0x20) goto LAB_180057b2d;
                          if (bVar2 == 0x3b) {
                            *(byte *)(param_2 + 0x33) = 3;
                            goto switchD_1800566fa_caseD_3;
                          }
LAB_18005721b:
                          pcVar18 = "Invalid chunk size line: Invalid SizeInit";
                          uVar19 = 0x25;
                          uVar20 = 0x14;
                        }
                        goto LAB_18005744c;
                      }
                      if ((ulonglong)param_2[0x2c] >> 0x3c != 0) goto LAB_1800571f8;
                      param_2[0x2c] =
                           (undefined *)
                           ((ulonglong)(byte)(bVar2 - 0x37) + (longlong)param_2[0x2c] * 0x10);
                      *(byte *)(param_2 + 0x33) = 1;
                      unaff_R14 = param_2;
                    }
                  } while( true );
                }
                pcVar18 = "invalid chunk size: overflow";
                uVar20 = 0x1c;
                goto LAB_180057018;
              }
              if ((byte)(bVar2 + 0x9f) < 6) {
                if ((ulonglong)param_2[0x2c] >> 0x3c == 0) {
                  param_2[0x2c] =
                       (undefined *)
                       ((ulonglong)(byte)(bVar2 + 0xa9) + (longlong)param_2[0x2c] * 0x10);
                  *(byte *)(param_2 + 0x33) = 1;
                  unaff_R14 = param_2;
                  goto switchD_1800566fa_caseD_1;
                }
              }
              else {
                if (5 < (byte)(bVar2 + 0xbf)) {
                  pcVar18 = "Invalid chunk size line: missing size digit";
                  uVar19 = 0x2b;
                  uVar20 = 0x14;
LAB_18005744c:
                  local_50 = (undefined **)FUN_1801d6710(uVar20,pcVar18,uVar19);
                  goto LAB_18005745b;
                }
                if ((ulonglong)param_2[0x2c] >> 0x3c == 0) {
                  param_2[0x2c] =
                       (undefined *)
                       ((ulonglong)(byte)(bVar2 - 0x37) + (longlong)param_2[0x2c] * 0x10);
                  *(byte *)(param_2 + 0x33) = 1;
                  unaff_R14 = param_2;
                  goto switchD_1800566fa_caseD_1;
                }
              }
LAB_1800571f8:
              local_50 = (undefined **)FUN_1801d6710(0x15,"invalid chunk size: overflow",0x1c);
              unaff_R14 = param_2;
              goto LAB_18005745b;
            }
LAB_180057cc6:
            cVar5 = '\x01';
            ppuVar13 = local_c8;
          }
          else {
LAB_180056fbd:
            cVar5 = '\x02';
          }
LAB_180056fbf:
          local_50 = ppuVar13;
          goto LAB_180056fcd;
        case 1:
          goto switchD_1800566fa_caseD_1;
        case 2:
          goto switchD_1800566fa_caseD_2;
        case 3:
          goto switchD_1800566fa_caseD_3;
        case 4:
          goto switchD_1800566fa_caseD_4;
        case 5:
switchD_1800566fa_caseD_5:
          puVar15 = param_2[0x2c];
          FUN_18006b9a0(&local_d8,param_2,param_3,puVar15);
          ppuVar13 = local_60;
          ppuVar12 = ppuStack_c0;
          ppuVar22 = local_c8;
          if ((char)local_d8 == '\0') {
            if ((undefined **)uStack_d0 != (undefined **)0x0) {
              local_50 = (undefined **)uStack_d0;
              local_58 = local_b8;
              if (ppuStack_c0 == (undefined **)0x0) {
                local_78 = local_c8;
                param_2[0x2c] = (undefined *)0x0;
                ppuVar10 = (undefined **)FUN_180039910(0x25);
LAB_180056db9:
                ppuVar11 = local_50;
                ppuVar16 = local_58;
                ppuVar17 = local_78;
                unaff_R14 = ppuVar12;
LAB_180056e2e:
                (*(code *)ppuVar11[4])(ppuVar16,ppuVar17,0);
                local_50 = ppuVar10;
                break;
              }
              puVar15 = puVar15 + -(longlong)ppuStack_c0;
              param_2[0x2c] = puVar15;
              *(byte *)(param_2 + 0x33) = (puVar15 == (undefined *)0x0) + 5;
              goto LAB_180056b7e;
            }
            cVar5 = '\x01';
            local_50 = local_c8;
          }
          else {
            cVar5 = '\x02';
            ppuVar22 = param_2;
            local_50 = param_2;
          }
LAB_180056fcd:
          ppuVar13 = local_60;
          if (cVar5 == '\x02') {
LAB_180056fd5:
            *param_1 = 6;
            return param_1;
          }
          break;
        case 6:
          goto switchD_1800566fa_caseD_6;
        case 7:
          goto switchD_1800566fa_caseD_7;
        case 8:
          goto switchD_1800566fa_caseD_8;
        case 9:
          goto switchD_1800566fa_caseD_9;
        case 10:
          goto switchD_1800566fa_caseD_a;
        case 0xb:
switchD_1800566fa_caseD_b:
          ppuVar10 = param_2;
          FUN_18006b9a0(&local_d8,param_2,param_3,1);
          ppuVar13 = local_60;
          if ((char)local_d8 != '\0') {
            cVar5 = '\x02';
            local_c8 = ppuVar10;
LAB_180057e9c:
            local_50 = local_c8;
            goto LAB_180056fcd;
          }
          if ((undefined **)uStack_d0 == (undefined **)0x0) {
            cVar5 = '\x01';
            goto LAB_180057e9c;
          }
          if (ppuStack_c0 == (undefined **)0x0) {
            local_78 = local_b8;
            local_58 = (undefined **)uStack_d0;
            local_50 = local_c8;
            ppuVar10 = (undefined **)
                       FUN_1801d6710(0x25,"unexpected EOF during chunk size line",0x25);
            ppuVar11 = local_58;
            ppuVar16 = local_78;
            ppuVar17 = local_50;
            goto LAB_180056e2e;
          }
          bVar2 = *(byte *)local_c8;
          unaff_R14 = (undefined **)(ulonglong)bVar2;
          (**(code **)((longlong)uStack_d0 + 0x20))();
          if (bVar2 == 10) {
            if (*ppuVar12 == (undefined *)0x0) {
              *(byte *)(param_2 + 0x33) = 0xc;
              goto LAB_1800568d4;
            }
            local_d8 = (undefined **)CONCAT71(local_d8._1_7_,10);
            FUN_1801b2af0(ppuVar12,&local_d8,1);
            if (*local_58 < local_50) goto switchD_1800566fa_caseD_c;
            pcVar18 = "chunk trailers bytes over limit";
            uVar20 = 0x1f;
LAB_180057018:
            uVar19 = 0x15;
LAB_18005701a:
            local_50 = (undefined **)FUN_1801d6710(uVar19,pcVar18,uVar20);
LAB_18005745b:
            ppuVar13 = local_60;
          }
          else {
            local_50 = (undefined **)FUN_1801d6710(0x14,"Invalid chunk end LF",0x14);
          }
          break;
        case 0xc:
switchD_1800566fa_caseD_c:
          puVar15 = param_2[0x2e];
          *(byte *)(param_2 + 0x33) = 0xc;
          if (puVar15 != (undefined *)0x0) {
            local_1f0 = local_58[2];
            local_200 = *(undefined4 *)local_58;
            uStack_1fc = *(undefined4 *)((longlong)local_58 + 4);
            uStack_1f8 = *(undefined4 *)(local_58 + 1);
            uStack_1f4 = *(undefined4 *)((longlong)local_58 + 0xc);
            param_2[0x2e] = (undefined *)0x0;
            local_208 = puVar15;
            FUN_180116dd0(&local_d8,&local_208,param_2[0x32]);
            ppuVar13 = local_60;
            if (local_d8 == (undefined **)0x3) {
              puVar15 = (undefined *)0x4;
            }
            else {
              local_58 = local_b8;
              local_148 = CONCAT44(uStack_ac,uStack_b0);
              lStack_140 = lStack_a8;
              local_138 = CONCAT44(uStack_9c,uStack_a0);
              lStack_130 = CONCAT44(uStack_94,uStack_98);
              local_128 = local_90;
              uStack_124 = uStack_8c;
              uStack_120 = uStack_88;
              uStack_11c = uStack_84;
              local_118 = local_80;
              puVar15 = (undefined *)local_d8;
              unaff_R14 = ppuStack_c0;
              ppuVar22 = local_c8;
            }
            local_50 = (undefined **)uStack_d0;
            FUN_1801b2a70(&local_208);
            ppuStack_c0 = unaff_R14;
            goto LAB_180056d01;
          }
          local_c8 = (undefined **)0x1;
          local_50 = &PTR_LAB_1802091d8;
          local_58 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          ppuVar13 = local_60;
          goto LAB_180056b7e;
        case 0xd:
switchD_1800566fa_caseD_d:
          *(longlong **)((uStack_1c0 & 0xffffffff) + 0xe8) = plVar8;
          return plVar8;
        case 0xe:
switchD_1800566fa_caseD_e:
          plVar8 = (longlong *)
                   CONCAT71((int7)((ulonglong)plVar8 >> 8),
                            ((char)plVar8 - (char)*plVar8) - (0xfffffffe7fdf659f < uVar7));
        case 0x10:
          local_208 = (undefined *)(ulonglong)(iVar14 + 8);
          plVar8 = (longlong *)
                   FUN_1801eff20(plVar8,
                                 "BodyKeepAliveClosedC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\url-2.5.8\\src\\lib.rs"
                                 ,4,&local_208,&DAT_1802096f0);
          return plVar8;
        case 0xf:
code_r0x00000001:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        case 0x11:
          pcVar4 = (code *)swi(3);
          plVar8 = (longlong *)(*pcVar4)();
          return plVar8;
        default:
          uVar6 = in(0xff);
          return (longlong *)CONCAT71((int7)((ulonglong)plVar8 >> 8),uVar6);
        case 0x14:
        case 0x16:
          uVar6 = in(1);
          *param_3 = uVar6;
          uStack_1e0 = CONCAT44(uStack_1e0._4_4_ + 1,(undefined4)uStack_1e0);
          in(0xff);
          (**(code **)((longlong)param_2 + -0x6d0019b2))();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_180057462:
        local_188 = CONCAT44(uStack_124,local_128);
        uStack_180 = CONCAT44(uStack_11c,uStack_120);
        local_198 = local_138;
        lStack_190 = lStack_130;
        local_1a8 = local_148;
      }
      else {
        if (*(byte *)(param_2 + 0x29) != 0) {
LAB_1800568d4:
          local_c8 = (undefined **)0x1;
          local_50 = &PTR_LAB_1802091d8;
          local_58 = (undefined **)0x0;
          ppuStack_c0 = (undefined **)0x0;
          goto LAB_180056b7e;
        }
        FUN_18006b9a0(&local_d8,param_2,param_3,0x2000);
        if ((char)local_d8 != '\0') goto LAB_180056fd5;
        ppuVar22 = local_c8;
        if ((undefined **)uStack_d0 == (undefined **)0x0) {
          local_50 = local_c8;
          puVar15 = (undefined *)0x4;
          ppuStack_c0 = unaff_R14;
        }
        else {
          *(bool *)(param_2 + 0x29) = ppuStack_c0 == (undefined **)0x0;
          local_58 = local_b8;
          puVar15 = (undefined *)0x3;
          local_50 = (undefined **)uStack_d0;
        }
LAB_180056d01:
        local_178 = local_118;
        local_188 = CONCAT44(uStack_124,local_128);
        uStack_180 = CONCAT44(uStack_11c,uStack_120);
        local_198 = local_138;
        lStack_190 = lStack_130;
        local_1a8 = local_148;
        lStack_1a0 = lStack_140;
        unaff_R14 = ppuStack_c0;
        if ((int)puVar15 != 4) {
          local_b8 = (undefined **)CONCAT44(uStack_124,local_128);
          local_c8 = (undefined **)local_138;
          local_d8 = (undefined **)local_148;
          ppuStack_c0 = (undefined **)lStack_130;
          if ((int)puVar15 == 3) goto LAB_180056bc3;
          local_1b8 = local_118;
          local_1c8 = CONCAT44(uStack_124,local_128);
          uStack_1c0 = CONCAT44(uStack_11c,uStack_120);
          local_1d8 = local_138;
          uStack_1d0 = lStack_130;
          local_1e8 = local_148;
          uStack_1e0 = lStack_140;
          local_78 = (undefined **)0x3;
          goto LAB_1800574bc;
        }
      }
      local_1b8 = local_118;
      local_1c8 = local_188;
      uStack_1c0 = uStack_180;
      local_1d8 = local_198;
      uStack_1d0 = lStack_190;
      local_1e8 = local_1a8;
      uStack_1e0 = lStack_140;
      local_78 = (undefined **)0x4;
      puVar15 = (undefined *)0x4;
      lStack_1a0 = lStack_140;
      local_178 = local_118;
    }
LAB_1800574bc:
    uStack_d0 = (code *)local_50;
    local_b8 = local_58;
    local_80 = local_1b8;
    local_90 = (undefined4)local_1c8;
    uStack_8c = local_1c8._4_4_;
    uStack_88 = (undefined4)uStack_1c0;
    uStack_84 = uStack_1c0._4_4_;
    uStack_a0 = (undefined4)local_1d8;
    uStack_9c = local_1d8._4_4_;
    uStack_98 = (undefined4)uStack_1d0;
    uStack_94 = uStack_1d0._4_4_;
    uStack_b0 = (undefined4)local_1e8;
    uStack_ac = local_1e8._4_4_;
    lStack_a8 = uStack_1e0;
    local_c8 = ppuVar22;
    ppuStack_c0 = unaff_R14;
    local_d8 = (undefined **)puVar15;
    if ((((*ppuVar13 == (undefined *)0x1) || ((int)*ppuVar13 == 2)) &&
        (*(uint *)(param_2 + 0x28) < 2)) && (param_2[0x2e] != (undefined *)0x0)) {
      FUN_1801b2a70(param_2 + 0x2e);
    }
    *local_60 = (undefined *)local_78;
    FUN_180059dc0(param_2 + 0x17);
    FUN_1800564c0(param_2,param_3);
    param_1[10] = CONCAT44(uStack_84,uStack_88);
    param_1[0xb] = local_80;
    param_1[8] = CONCAT44(uStack_94,uStack_98);
    param_1[9] = CONCAT44(uStack_8c,local_90);
    param_1[6] = lStack_a8;
    param_1[7] = CONCAT44(uStack_9c,uStack_a0);
    param_1[4] = (longlong)local_b8;
    param_1[5] = CONCAT44(uStack_ac,uStack_b0);
    param_1[2] = (longlong)local_c8;
    param_1[3] = (longlong)ppuStack_c0;
    *param_1 = (longlong)local_d8;
    param_1[1] = (longlong)uStack_d0;
  }
  return param_1;
}


