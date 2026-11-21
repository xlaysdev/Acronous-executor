/* FUN_180027d80 @ 180027d80 */

undefined8 FUN_180027d80(undefined8 *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  char *******_Src;
  char cVar6;
  char *******pppppppcVar7;
  char *******pppppppcVar8;
  ulonglong uVar9;
  undefined **ppuVar10;
  char *******pppppppcVar11;
  char *******_Size;
  char *******local_1c0;
  char *******local_1b8;
  longlong *local_1b0;
  char *******local_1a8;
  char *******local_1a0;
  char *******local_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined *local_178;
  undefined8 local_170;
  undefined *local_168;
  undefined8 local_160;
  undefined *local_158;
  undefined8 local_150;
  undefined *local_148;
  undefined8 local_140;
  char *******local_138;
  undefined1 *local_130;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  longlong local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  longlong *local_e0;
  undefined8 local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  char *******local_b8;
  char *******pppppppcStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  char *******local_80;
  char *******local_78;
  char *******pppppppcStack_70;
  undefined8 local_68;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  char *******local_50;
  char *******local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  *(undefined1 *)*param_1 = 0;
  FUN_1801d31c0(&local_1a8);
  FUN_180027490();
  pppppppcVar7 = (char *******)thunk_FUN_1801d32d0(0x20,1);
  _Size = local_198;
  pppppppcVar8 = local_1a0;
  if (pppppppcVar7 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x20);
  }
  pppppppcVar7[2] = (char ******)0x6420746e656d7563;
  pppppppcVar7[3] = (char ******)0x79726f7463657269;
  *(undefined4 *)pppppppcVar7 = 0x6c696146;
  builtin_strncpy((char *)((longlong)pppppppcVar7 + 4),"ed t",4);
  *(undefined4 *)(pppppppcVar7 + 1) = 0x6567206f;
  builtin_strncpy((char *)((longlong)pppppppcVar7 + 0xc),"t do",4);
  if (SBORROW8(0,(longlong)local_1a8)) {
    local_80 = (char *******)&DAT_00000020;
    local_50 = (char *******)&DAT_00000020;
    local_48 = pppppppcVar7;
    goto LAB_180027f82;
  }
  local_48 = local_1a8;
  thunk_FUN_1801d3330(pppppppcVar7,0x20,1);
  local_50 = pppppppcVar8;
  FUN_1801de240(&local_100,pppppppcVar8,_Size,&DAT_180204f10,8);
  if (local_48 != (char *******)0x0) {
    thunk_FUN_1801d3330(local_50,local_48,1);
  }
  pppppppcVar8 = (char *******)FUN_1801daff0(local_f8,local_f0);
  if (pppppppcVar8 == (char *******)0x0) {
    local_1a8 = (char *******)&DAT_180204f18;
    local_1a0 = (char *******)&DAT_00000007;
    local_198 = (char *******)&DAT_180204f1f;
    local_190 = 0x13;
    local_188 = &DAT_180204f32;
    local_180 = 10;
    local_178 = &DAT_180204f3c;
    local_170 = 0x10;
    local_168 = &DAT_180204f4c;
    local_160 = 8;
    local_158 = &DAT_180204f54;
    local_150 = 0xc;
    local_148 = &DAT_180204f60;
    local_140 = 8;
    local_1b8 = (char *******)&local_138;
    local_1c0 = (char *******)&local_1a8;
    local_1b0 = &local_100;
    FUN_18002f8f0(&local_118,&local_1c0);
    if (local_108 == 0) {
      FUN_1801de240(&local_138,local_f8,local_f0,&DAT_180204f18,7);
      FUN_180029230(&local_78,&local_138,0);
      if (local_78 == (char *******)0x8000000000000011) {
        pppppppcVar11 = (char *******)0x8000000000000000;
        pppppppcVar8 = pppppppcStack_70;
      }
      else {
        local_a8 = (undefined4)local_68;
        uStack_a4 = local_68._4_4_;
        uStack_a0 = uStack_60;
        uStack_9c = uStack_5c;
        local_b8 = local_78;
        pppppppcStack_b0 = pppppppcStack_70;
        uVar9 = 0xf;
        if ((longlong)local_78 < 0) {
          uVar9 = (ulonglong)local_78 ^ 0x8000000000000000;
        }
        if (uVar9 < 0x11) {
          pppppppcVar8 = (char *******)&pppppppcStack_b0;
          if ((0x1540UL >> (uVar9 & 0x3f) & 1) == 0) {
            if (uVar9 == 0xf) {
              pppppppcVar8 = (char *******)&local_b8;
              ppuVar10 = &PTR_LAB_180205400;
            }
            else {
              if (uVar9 != 0x10) goto LAB_18002850f;
              ppuVar10 = (undefined **)&DAT_180205478;
            }
          }
          else {
            ppuVar10 = &PTR_FUN_180205388;
          }
          local_98 = (char ******)0x0;
          uStack_90 = (undefined1 *)0x1;
          local_88 = 0;
          local_68 = (char *******)0x60000020;
          local_78 = (char *******)&local_98;
          pppppppcStack_70 = (char *******)&PTR_LAB_180205138;
          cVar6 = (*(code *)ppuVar10[4])(pppppppcVar8,&local_78);
          if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("a Display implementation returned an error unexpectedly",0x37,&local_d8,
                          &DAT_180205340,&PTR_s_C__Users_burne__rustup_toolchain_180205210);
          }
        }
        else {
LAB_18002850f:
          local_98 = (char ******)0x0;
          uStack_90 = (undefined1 *)0x1;
          local_88 = 0;
          local_68 = (char *******)0x60000020;
          local_78 = (char *******)&local_98;
          pppppppcStack_70 = (char *******)&PTR_LAB_180205138;
          cVar6 = FUN_1801b4540(&local_b8,&local_78);
          if (cVar6 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0("a Display implementation returned an error unexpectedly",0x37,&local_d8,
                          &DAT_180205340,&PTR_s_C__Users_burne__rustup_toolchain_180205210);
          }
        }
        uVar5 = local_88;
        puVar4 = uStack_90;
        local_d8._0_4_ = (undefined4)local_98;
        local_d8._4_4_ = local_98._4_4_;
        uStack_d0 = (undefined4)uStack_90;
        uStack_cc = uStack_90._4_4_;
        local_c8 = local_88;
        cVar6 = FUN_1800274f0(&DAT_180204f9a,0xd,uStack_90,local_88);
        if (cVar6 == '\0') {
          cVar6 = FUN_1800274f0(&DAT_180204fa7,0xc,puVar4,uVar5);
          if (cVar6 == '\0') {
            local_98 = (char ******)&local_d8;
            uStack_90 = &LAB_180027ca0;
            FUN_1801ec780(&local_78,&DAT_180204fb3,&local_98);
            _Size = local_68;
            _Src = pppppppcStack_70;
            pppppppcVar7 = local_78;
            FUN_1800290b0(&local_78,local_68,0,1,1);
            pppppppcVar8 = local_68;
            pppppppcVar11 = pppppppcStack_70;
            if ((int)local_78 == 1) {
              local_50 = _Src;
              local_48 = pppppppcVar7;
                    /* WARNING: Subroutine does not return */
              FUN_18020171e(pppppppcStack_70,local_68);
            }
            memcpy(local_68,_Src,(size_t)_Size);
            if (pppppppcVar7 != (char *******)0x0) {
              thunk_FUN_1801d3330(_Src,pppppppcVar7,1);
            }
          }
          else {
            FUN_180027490();
            pppppppcVar11 = (char *******)0x74;
            pppppppcVar8 = (char *******)thunk_FUN_1801d32d0(0x74,1);
            if (pppppppcVar8 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_18020171e(1,0x74);
            }
            pppppppcVar8[0xc] = (char ******)0x617473657220646e;
            pppppppcVar8[0xd] = (char ******)0x6c70534a4a207472;
            pppppppcVar8[10] = (char ******)0x6173696420657361;
            pppppppcVar8[0xb] = (char ******)0x6120746920656c62;
            pppppppcVar8[8] = (char ******)0x65646e6570656420;
            pppppppcVar8[9] = (char ******)0x656c50202e79636e;
            pppppppcVar8[6] = (char ******)0x69206e6120676e69;
            pppppppcVar8[7] = (char ******)0x746e6174726f706d;
            pppppppcVar8[4] = (char ******)0x662074696f6c7053;
            pppppppcVar8[5] = (char ******)0x64616f6c206d6f72;
            pppppppcVar8[2] = (char ******)0x6576657270207369;
            pppppppcVar8[3] = (char ******)0x4a4a20676e69746e;
            *pppppppcVar8 = (char ******)0x746e612072756f59;
            pppppppcVar8[1] = (char ******)0x2073757269762d69;
            *(undefined4 *)(pppppppcVar8 + 0xe) = 0x2e74696f;
            _Size = (char *******)0x74;
          }
        }
        else {
          FUN_180027490();
          pppppppcVar11 = (char *******)0xf3;
          pppppppcVar8 = (char *******)thunk_FUN_1801d32d0(0xf3,1);
          if (pppppppcVar8 == (char *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_18020171e(1,0xf3);
          }
          memcpy(pppppppcVar8,
                 "Windows Smart App Control (or a Group Policy/WDAC rule) is blocking WRD.dll from loading because it is unsigned. Go to Windows Security > App & browser control > Smart App Control settings and turn Smart App Control Off, then restart JJSploit."
                 ,0xf3);
          _Size = (char *******)0xf3;
        }
        if (CONCAT44(local_d8._4_4_,(undefined4)local_d8) != 0) {
          thunk_FUN_1801d3330(CONCAT44(uStack_cc,uStack_d0),
                              CONCAT44(local_d8._4_4_,(undefined4)local_d8),1);
        }
        FUN_180027400(&local_b8);
      }
      if (local_138 != (char *******)0x0) {
        thunk_FUN_1801d3330(local_130,local_138,1);
      }
      local_80 = _Size;
      local_50 = pppppppcVar11;
      if (local_118 != 0) {
        thunk_FUN_1801d3330(local_110,local_118 << 4,8);
      }
    }
    else {
      FUN_18002d650(&local_b8,local_110,local_108,&DAT_180204f68,2);
      local_68 = (char *******)CONCAT44(uStack_a4,local_a8);
      local_78 = local_b8;
      pppppppcStack_70 = pppppppcStack_b0;
      local_138 = (char *******)&local_78;
      local_130 = &LAB_180027ca0;
      FUN_1801ec780(&local_b8,&DAT_180204f6a,&local_138);
      if (local_78 != (char *******)0x0) {
        thunk_FUN_1801d3330(pppppppcStack_70,local_78,1);
      }
      pppppppcVar8 = pppppppcStack_b0;
      local_50 = local_b8;
      local_80 = (char *******)CONCAT44(uStack_a4,local_a8);
      if (local_118 != 0) {
        thunk_FUN_1801d3330(local_110,local_118 << 4,8);
      }
    }
  }
  else {
    local_b8 = (char *******)&local_78;
    pppppppcStack_b0 = (char *******)FUN_1801e3c90;
    local_78 = pppppppcVar8;
    FUN_1801ec780(&local_1a8,&DAT_180204f76,&local_b8);
    if (((uint)local_78 & 3) == 1) {
      local_80 = (char *******)((longlong)local_78 + -1);
      local_48 = *(char ********)((longlong)local_78 + -1);
      local_50 = *(char ********)((longlong)local_78 + 7);
      if (*local_50 != (char ******)0x0) {
        (*(code *)*local_50)(local_48);
      }
      if (local_50[1] != (char ******)0x0) {
        thunk_FUN_1801d3330(local_48,local_50[1],local_50[2]);
      }
      thunk_FUN_1801d3330(local_80,0x18,8);
    }
    pppppppcVar8 = local_1a0;
    local_80 = local_198;
    local_50 = local_1a8;
  }
  local_48 = pppppppcVar8;
  if (local_100 != 0) {
    thunk_FUN_1801d3330(local_f8,local_100,1);
  }
LAB_180027f82:
  local_e0 = (longlong *)param_1[1];
  plVar1 = (longlong *)*local_e0;
  lVar2 = *plVar1;
  if (lVar2 != -0x7fffffffffffffff) {
    if (SBORROW8(0,lVar2)) {
      FUN_1801b48c0(plVar1 + 1);
    }
    else if (lVar2 != 0) {
      thunk_FUN_1801d3330(plVar1[1],lVar2,1);
    }
  }
  puVar3 = (undefined8 *)*local_e0;
  *puVar3 = local_50;
  puVar3[1] = local_48;
  puVar3[2] = local_80;
  return CONCAT71((int7)((ulonglong)puVar3 >> 8),1);
}


