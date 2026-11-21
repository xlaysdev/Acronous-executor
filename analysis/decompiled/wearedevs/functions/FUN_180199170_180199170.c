/* FUN_180199170 @ 180199170 */

undefined8 *
FUN_180199170(undefined8 *param_1,longlong *param_2,undefined8 param_3,ulonglong param_4)

{
  byte bVar1;
  short sVar2;
  int *piVar3;
  void *_Buf1;
  undefined4 uVar4;
  void *_Buf2;
  size_t _Size;
  longlong *plVar5;
  char cVar6;
  undefined1 uVar7;
  int iVar8;
  byte *pbVar9;
  byte *pbVar10;
  size_t sVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  byte *pbVar15;
  longlong lVar16;
  ulonglong uVar17;
  uint uVar18;
  ulonglong uVar19;
  uint uVar20;
  undefined4 uVar21;
  byte *pbVar22;
  undefined8 in_stack_fffffffffffffe58;
  undefined4 uVar23;
  undefined8 in_stack_fffffffffffffe60;
  undefined4 uVar24;
  undefined1 local_151 [17];
  byte *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  ulonglong local_128;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  longlong local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  size_t local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  longlong *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  size_t local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  longlong local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  uVar23 = (undefined4)((ulonglong)in_stack_fffffffffffffe58 >> 0x20);
  uVar24 = (undefined4)((ulonglong)in_stack_fffffffffffffe60 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  lVar16 = param_2[6];
  lVar12 = param_2[7];
  local_4a = 1;
  uVar14 = param_4;
  local_a0 = param_2;
  pbVar9 = (byte *)FUN_18019d960(param_3);
  if (lVar16 != 0) {
    if (uVar14 < param_4) {
      local_4a = 1;
      (**(code **)(lVar12 + 0x28))(lVar16,1);
    }
    pbVar15 = pbVar9;
    do {
      if (pbVar15 == pbVar9 + uVar14) goto LAB_1801992d3;
      bVar1 = *pbVar15;
      uVar13 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        pbVar10 = pbVar15 + 1;
        if (bVar1 < 0xe0) {
          pbVar15 = pbVar15 + 2;
          uVar13 = (uVar13 & 0x1f) << 6 | *pbVar10 & 0x3f;
        }
        else {
          uVar18 = pbVar15[2] & 0x3f | (*pbVar10 & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            pbVar15 = pbVar15 + 3;
            uVar13 = uVar18 | (uVar13 & 0x1f) << 0xc;
          }
          else {
            uVar13 = pbVar15[3] & 0x3f | uVar18 << 6 | (uVar13 & 7) << 0x12;
            if (uVar13 == 0x110000) goto LAB_1801992d3;
            pbVar15 = pbVar15 + 4;
          }
        }
      }
      else {
        pbVar15 = pbVar15 + 1;
      }
    } while ((0xd < uVar13) || ((0x2600U >> (uVar13 & 0x1f) & 1) == 0));
    local_4a = 1;
    (**(code **)(lVar12 + 0x28))(lVar16,CONCAT71((int7)((ulonglong)pbVar15 >> 8),9));
  }
LAB_1801992d3:
  pbVar22 = pbVar9 + uVar14;
  local_4a = 1;
  pbVar15 = pbVar9;
  pbVar10 = (byte *)FUN_180195450(local_a0,pbVar9,pbVar22);
  plVar5 = local_a0;
  if (pbVar10 == (byte *)0x0) {
    lVar16 = local_a0[3];
    if (lVar16 == 0) {
      uVar7 = 6;
    }
    else {
      pbVar15 = pbVar9;
      do {
        if (pbVar15 == pbVar22) goto LAB_1801995f1;
        bVar1 = *pbVar15;
        uVar13 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          pbVar10 = pbVar15 + 1;
          if (bVar1 < 0xe0) {
            pbVar15 = pbVar15 + 2;
            uVar13 = (uVar13 & 0x1f) << 6 | *pbVar10 & 0x3f;
          }
          else {
            uVar18 = pbVar15[2] & 0x3f | (*pbVar10 & 0x3f) << 6;
            if (bVar1 < 0xf0) {
              pbVar15 = pbVar15 + 3;
              uVar13 = uVar18 | (uVar13 & 0x1f) << 0xc;
            }
            else {
              uVar13 = pbVar15[3] & 0x3f | uVar18 << 6 | (uVar13 & 7) << 0x12;
              if (uVar13 == 0x110000) goto LAB_1801995f1;
              pbVar15 = pbVar15 + 4;
            }
          }
        }
        else {
          pbVar15 = pbVar15 + 1;
        }
      } while (((uVar13 < 0xe) && ((0x2600U >> (uVar13 & 0x1f) & 1) != 0)) || (uVar13 == 0x110000));
      if (uVar13 == 0x23) {
        local_58 = local_a0[8];
        local_98 = (byte *)*local_a0;
        uStack_90 = (byte *)local_a0[1];
        local_88 = local_a0[2];
        uStack_80 = local_a0[3];
        local_78 = (undefined4)local_a0[4];
        uStack_74 = *(undefined4 *)((longlong)local_a0 + 0x24);
        uStack_70 = (undefined4)local_a0[5];
        uStack_6c = *(undefined4 *)((longlong)local_a0 + 0x2c);
        local_68 = (undefined4)local_a0[6];
        uStack_64 = *(undefined4 *)((longlong)local_a0 + 0x34);
        uStack_60 = (undefined4)local_a0[7];
        uStack_5c = *(undefined4 *)((longlong)local_a0 + 0x3c);
        local_4a = 0;
        FUN_180195790(param_1,&local_98,lVar16,pbVar9,pbVar22);
        return param_1;
      }
LAB_1801995f1:
      uVar13 = *(uint *)(lVar16 + 0x2c);
      uVar19 = (ulonglong)uVar13;
      lVar12 = *(longlong *)(lVar16 + 8);
      uVar14 = *(ulonglong *)(lVar16 + 0x10);
      uVar17 = (ulonglong)(uVar13 + 1);
      if (uVar13 + 1 != 0) {
        if (uVar17 < uVar14) {
          if (*(char *)(lVar12 + uVar17) < -0x40) goto LAB_18019961d;
        }
        else if (uVar14 != uVar17) {
LAB_18019961d:
          local_4a = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(lVar12,uVar14,uVar17,uVar14,
                        &PTR_s_C__Users_burne__cargo_registry_s_180267680);
        }
      }
      uVar7 = 7;
      if ((uVar14 != uVar17) && (*(char *)(lVar12 + uVar17) == '/')) {
        if (uVar13 != 0) {
          if (uVar19 < uVar14) {
            if (*(char *)(lVar12 + uVar19) < -0x40) goto LAB_1801999ed;
          }
          else if (uVar14 != uVar19) {
LAB_1801999ed:
            local_4a = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar12,uVar14,0,uVar19,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
          }
        }
        cVar6 = FUN_18019a5c0(lVar12,uVar19);
        if (cVar6 == '\0') {
          local_58 = plVar5[8];
          local_98 = (byte *)*plVar5;
          uStack_90 = (byte *)plVar5[1];
          local_88 = plVar5[2];
          uStack_80 = plVar5[3];
          local_78 = (undefined4)plVar5[4];
          uStack_74 = *(undefined4 *)((longlong)plVar5 + 0x24);
          uStack_70 = (undefined4)plVar5[5];
          uStack_6c = *(undefined4 *)((longlong)plVar5 + 0x2c);
          local_68 = (undefined4)plVar5[6];
          uStack_64 = *(undefined4 *)((longlong)plVar5 + 0x34);
          uStack_60 = (undefined4)plVar5[7];
          uStack_5c = *(undefined4 *)((longlong)plVar5 + 0x3c);
          local_4a = 0;
          FUN_180192390(param_1,&local_98,pbVar9,pbVar22,lVar16);
          return param_1;
        }
        local_58 = plVar5[8];
        local_98 = (byte *)*plVar5;
        uStack_90 = (byte *)plVar5[1];
        local_88 = plVar5[2];
        uStack_80 = plVar5[3];
        local_78 = (undefined4)plVar5[4];
        uStack_74 = *(undefined4 *)((longlong)plVar5 + 0x24);
        uStack_70 = (undefined4)plVar5[5];
        uStack_6c = *(undefined4 *)((longlong)plVar5 + 0x2c);
        local_68 = (undefined4)plVar5[6];
        uStack_64 = *(undefined4 *)((longlong)plVar5 + 0x34);
        uStack_60 = (undefined4)plVar5[7];
        uStack_5c = *(undefined4 *)((longlong)plVar5 + 0x3c);
        local_4a = 0;
        FUN_180195ca0(param_1,&local_98,pbVar9,pbVar22,cVar6,lVar16);
        return param_1;
      }
    }
    *(undefined1 *)(param_1 + 1) = uVar7;
    *param_1 = 0x8000000000000000;
    lVar16 = *local_a0;
    if (lVar16 == 0) {
      return param_1;
    }
    lVar12 = local_a0[1];
LAB_180199a2d:
    thunk_FUN_1801d3330(lVar12,lVar16,1);
    return param_1;
  }
  local_e8 = (undefined4)*local_a0;
  uStack_e4 = *(undefined4 *)((longlong)local_a0 + 4);
  lVar16 = *local_a0;
  uStack_e0 = (undefined4)local_a0[1];
  uStack_dc = *(undefined4 *)((longlong)local_a0 + 0xc);
  lVar12 = local_a0[1];
  uVar4 = (undefined4)local_a0[2];
  _Size = local_a0[2];
  uStack_d0 = (undefined4)local_a0[3];
  uStack_cc = *(undefined4 *)((longlong)local_a0 + 0x1c);
  local_c8 = (undefined4)local_a0[4];
  uStack_c4 = *(undefined4 *)((longlong)local_a0 + 0x24);
  uStack_c0 = (undefined4)local_a0[5];
  uStack_bc = *(undefined4 *)((longlong)local_a0 + 0x2c);
  local_b8 = (undefined4)local_a0[6];
  uStack_b4 = *(undefined4 *)((longlong)local_a0 + 0x34);
  uStack_b0 = (undefined4)local_a0[7];
  uStack_ac = *(undefined4 *)((longlong)local_a0 + 0x3c);
  local_a8 = local_a0[8];
  local_d8 = _Size;
  if (*(int *)((longlong)local_a0 + 0x14) != 0) {
    *(undefined1 *)(param_1 + 1) = 9;
    *param_1 = 0x8000000000000000;
    if (lVar16 == 0) {
      return param_1;
    }
    goto LAB_180199a2d;
  }
  cVar6 = FUN_18019a530(&local_e8);
  sVar11 = _Size;
  if (CONCAT44(uStack_e4,local_e8) == _Size) {
    local_49 = 1;
    uVar23 = 0;
    FUN_1801f6a80(&local_e8,_Size,1,1,1);
    sVar11 = local_d8;
  }
  _Buf2 = (void *)CONCAT44(uStack_dc,uStack_e0);
  *(undefined1 *)((longlong)_Buf2 + sVar11) = 0x3a;
  local_d8 = _Size + 1;
  if (cVar6 != '\0') {
    if (cVar6 != '\x02') {
      uVar13 = 0;
      pbVar9 = pbVar10;
      local_140 = pbVar10;
      while (pbVar9 != pbVar15) {
        while( true ) {
          bVar1 = *pbVar9;
          uVar18 = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            pbVar22 = pbVar9 + 1;
            if (bVar1 < 0xe0) {
              pbVar9 = pbVar9 + 2;
              uVar18 = (uVar18 & 0x1f) << 6 | *pbVar22 & 0x3f;
            }
            else {
              uVar20 = pbVar9[2] & 0x3f | (*pbVar22 & 0x3f) << 6;
              if (bVar1 < 0xf0) {
                pbVar9 = pbVar9 + 3;
                uVar18 = uVar20 | (uVar18 & 0x1f) << 0xc;
              }
              else {
                uVar18 = pbVar9[3] & 0x3f | uVar20 << 6 | (uVar18 & 7) << 0x12;
                if (uVar18 == 0x110000) goto LAB_18019981b;
                pbVar9 = pbVar9 + 4;
              }
            }
          }
          else {
            pbVar9 = pbVar9 + 1;
          }
          if (((uVar18 < 0xe) && ((0x2600U >> (uVar18 & 0x1f) & 1) != 0)) || (uVar18 == 0x110000))
          break;
          if ((uVar18 != 0x5c) && (uVar18 != 0x2f)) goto LAB_18019981b;
          uVar13 = uVar13 + 1;
          local_140 = pbVar9;
          if (pbVar9 == pbVar15) goto LAB_18019981b;
        }
      }
LAB_18019981b:
      lVar16 = CONCAT44(uStack_cc,uStack_d0);
      if (uVar13 < 2 && lVar16 != 0) {
        uVar14 = (ulonglong)*(uint *)(lVar16 + 0x2c);
        _Buf1 = *(void **)(lVar16 + 8);
        if (uVar14 != 0) {
          uVar17 = *(ulonglong *)(lVar16 + 0x10);
          if (uVar14 < uVar17) {
            if (*(char *)((longlong)_Buf1 + uVar14) < -0x40) goto LAB_180199861;
          }
          else if (uVar17 != uVar14) {
LAB_180199861:
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(_Buf1,uVar17,0,uVar14,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
          }
        }
        if ((_Size != 0) && (*(char *)((longlong)_Buf2 + _Size) < -0x40)) {
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(_Buf2,local_d8,0,_Size,&PTR_s_C__Users_burne__cargo_registry_s_180267168);
        }
        if ((_Size == uVar14) && (iVar8 = memcmp(_Buf1,_Buf2,_Size), iVar8 == 0)) {
          local_d8 = 0;
          local_58 = local_a8;
          local_68 = local_b8;
          uStack_64 = uStack_b4;
          uStack_60 = uStack_b0;
          uStack_5c = uStack_ac;
          local_78 = local_c8;
          uStack_74 = uStack_c4;
          uStack_70 = uStack_c0;
          uStack_6c = uStack_bc;
          local_88 = 0;
          uStack_80 = CONCAT44(uStack_cc,uStack_d0);
          local_98 = (byte *)CONCAT44(uStack_e4,local_e8);
          uStack_90 = (byte *)CONCAT44(uStack_dc,uStack_e0);
          local_49 = 0;
          FUN_180195ca0(param_1,&local_98,pbVar10,pbVar15,1,lVar16);
          return param_1;
        }
      }
      lVar16 = CONCAT44(uStack_b4,local_b8);
      if (lVar16 != 0) {
        lVar12 = CONCAT44(uStack_ac,uStack_b0);
        local_88 = local_88 & 0xffffffffffffff00;
        local_49 = 1;
        local_98 = pbVar10;
        uStack_90 = pbVar15;
        FUN_18019dcf0(&local_138,&local_98);
        if (local_128 == 2) {
          sVar2 = *(short *)CONCAT44(uStack_12c,uStack_130);
          if (CONCAT44(uStack_134,local_138) != 0) {
            thunk_FUN_1801d3330((short *)CONCAT44(uStack_12c,uStack_130),
                                CONCAT44(uStack_134,local_138),1);
          }
          if (sVar2 == 0x2f2f) goto LAB_180199c57;
        }
        else if (CONCAT44(uStack_134,local_138) != 0) {
          thunk_FUN_1801d3330(CONCAT44(uStack_12c,uStack_130),CONCAT44(uStack_134,local_138),1);
        }
        local_49 = 1;
        (**(code **)(lVar12 + 0x28))(lVar16,3);
      }
LAB_180199c57:
      local_58 = local_a8;
      local_68 = local_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      local_88 = local_d8;
      uStack_80 = CONCAT44(uStack_cc,uStack_d0);
      local_98 = (byte *)CONCAT44(uStack_e4,local_e8);
      uStack_90 = (byte *)CONCAT44(uStack_dc,uStack_e0);
      local_49 = 0;
      FUN_180196de0(param_1,&local_98,local_140,pbVar15,1,CONCAT44(uVar24,uVar4));
      return param_1;
    }
    local_f8 = local_a8;
    local_108 = local_b8;
    uStack_104 = uStack_b4;
    uStack_100 = uStack_b0;
    uStack_fc = uStack_ac;
    local_118 = local_c8;
    uStack_114 = uStack_c4;
    uStack_110 = uStack_c0;
    uStack_10c = uStack_bc;
    uStack_120 = uStack_d0;
    uStack_11c = uStack_cc;
    local_138 = local_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    local_128 = local_d8;
    local_98 = pbVar10;
    uStack_90 = pbVar15;
    cVar6 = FUN_180199fe0(&DAT_1802670e8,2,&local_98);
    pbVar22 = uStack_90;
    pbVar9 = local_98;
    uVar14 = local_128;
    if (cVar6 != '\0') {
      local_58 = local_a8;
      local_68 = local_b8;
      uStack_64 = uStack_b4;
      uStack_60 = uStack_b0;
      uStack_5c = uStack_ac;
      local_78 = local_c8;
      uStack_74 = uStack_c4;
      uStack_70 = uStack_c0;
      uStack_6c = uStack_bc;
      local_88 = local_d8;
      uStack_80 = CONCAT44(uStack_cc,uStack_d0);
      local_98 = (byte *)CONCAT44(uStack_e4,local_e8);
      uStack_90 = (byte *)CONCAT44(uStack_dc,uStack_e0);
      local_4b = 0;
      FUN_180196de0(param_1,&local_98,pbVar9,pbVar22,2,CONCAT44(uVar24,uVar4));
      return param_1;
    }
    if (local_128 >> 0x20 == 0) {
      local_151[0] = 0;
      pbVar9 = pbVar10;
      do {
        if (pbVar9 == pbVar15) goto LAB_180199af2;
        bVar1 = *pbVar9;
        uVar13 = (uint)bVar1;
        if ((char)bVar1 < '\0') {
          pbVar22 = pbVar9 + 1;
          if (bVar1 < 0xe0) {
            pbVar9 = pbVar9 + 2;
            uVar13 = (uVar13 & 0x1f) << 6 | *pbVar22 & 0x3f;
          }
          else {
            uVar18 = pbVar9[2] & 0x3f | (*pbVar22 & 0x3f) << 6;
            if (bVar1 < 0xf0) {
              pbVar9 = pbVar9 + 3;
              uVar13 = uVar18 | (uVar13 & 0x1f) << 0xc;
            }
            else {
              uVar13 = pbVar9[3] & 0x3f | uVar18 << 6 | (uVar13 & 7) << 0x12;
              if (uVar13 == 0x110000) goto LAB_180199af2;
              pbVar9 = pbVar9 + 4;
            }
          }
        }
        else {
          pbVar9 = pbVar9 + 1;
        }
      } while (((uVar13 < 0xe) && ((0x2600U >> (uVar13 & 0x1f) & 1) != 0)) || (uVar13 == 0x110000));
      if (uVar13 == 0x2f) {
        if (CONCAT44(uStack_134,local_138) == local_128) {
          local_4b = 1;
          uVar23 = 0;
          FUN_1801f6a80(&local_138,local_128,1,1,1);
        }
        *(undefined1 *)(CONCAT44(uStack_12c,uStack_130) + local_128) = 0x2f;
        local_128 = uVar14 + 1;
        local_4b = 1;
        FUN_18019a640(&local_138,uVar14,pbVar9,pbVar15);
      }
      else {
LAB_180199af2:
        local_4b = 1;
        FUN_180198980(&local_138,pbVar10,pbVar15);
      }
      local_58 = local_f8;
      local_68 = local_108;
      uStack_64 = uStack_104;
      uStack_60 = uStack_100;
      uStack_5c = uStack_fc;
      local_78 = local_118;
      uStack_74 = uStack_114;
      uStack_70 = uStack_110;
      uStack_6c = uStack_10c;
      local_88 = local_128;
      uStack_80 = CONCAT44(uStack_11c,uStack_120);
      local_98 = (byte *)CONCAT44(uStack_134,local_138);
      uStack_90 = (byte *)CONCAT44(uStack_12c,uStack_130);
      local_4b = 0;
      uVar21 = (undefined4)uVar14;
      FUN_180198070(param_1,&local_98,2,uVar4,CONCAT44(uVar23,uVar21),CONCAT44(uVar24,uVar21),uVar21
                    ,local_151,0);
      return param_1;
    }
    *(undefined1 *)(param_1 + 1) = 9;
    *param_1 = 0x8000000000000000;
    lVar16 = CONCAT44(uStack_134,local_138);
    if (lVar16 == 0) {
      return param_1;
    }
    lVar12 = CONCAT44(uStack_12c,uStack_130);
    goto LAB_180199a2d;
  }
  lVar16 = CONCAT44(uStack_b4,local_b8);
  if (lVar16 != 0) {
    lVar12 = CONCAT44(uStack_ac,uStack_b0);
    local_98 = pbVar10;
    uStack_90 = pbVar15;
    cVar6 = FUN_180199fe0(&DAT_1802670e8,2,&local_98);
    if (cVar6 == '\0') {
      local_49 = 1;
      (**(code **)(lVar12 + 0x28))(lVar16,4);
    }
  }
  lVar16 = CONCAT44(uStack_cc,uStack_d0);
  if (lVar16 != 0) {
    uVar14 = (ulonglong)*(uint *)(lVar16 + 0x2c);
    if (uVar14 != 0) {
      piVar3 = *(int **)(lVar16 + 8);
      uVar17 = *(ulonglong *)(lVar16 + 0x10);
      if (uVar14 < uVar17) {
        if (*(char *)((longlong)piVar3 + uVar14) < -0x40) goto LAB_1801996c9;
      }
      else if (uVar17 != uVar14) {
LAB_1801996c9:
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar3,uVar17,0,uVar14,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
      }
      lVar12 = 0;
      if ((*(uint *)(lVar16 + 0x2c) == 4) && (*piVar3 == 0x656c6966)) {
        lVar12 = lVar16;
      }
      goto LAB_180199a79;
    }
  }
  lVar12 = 0;
LAB_180199a79:
  local_d8 = 0;
  local_58 = local_a8;
  local_68 = local_b8;
  uStack_64 = uStack_b4;
  uStack_60 = uStack_b0;
  uStack_5c = uStack_ac;
  local_78 = local_c8;
  uStack_74 = uStack_c4;
  uStack_70 = uStack_c0;
  uStack_6c = uStack_bc;
  local_88 = 0;
  uStack_80 = CONCAT44(uStack_cc,uStack_d0);
  local_98 = (byte *)CONCAT44(uStack_e4,local_e8);
  uStack_90 = (byte *)CONCAT44(uStack_dc,uStack_e0);
  local_49 = 0;
  FUN_180192390(param_1,&local_98,pbVar10,pbVar15,lVar12);
  return param_1;
}


