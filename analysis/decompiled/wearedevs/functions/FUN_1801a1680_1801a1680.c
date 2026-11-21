/* FUN_1801a1680 @ 1801a1680 */

ulonglong *
FUN_1801a1680(ulonglong *param_1,undefined8 param_2,ulonglong *param_3,undefined8 param_4,
             undefined8 param_5,undefined1 param_6,char param_7)

{
  longlong lVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  byte *pbVar5;
  ulonglong *puVar6;
  char cVar7;
  uint *puVar8;
  longlong lVar9;
  ulonglong *puVar10;
  byte **ppbVar11;
  byte bVar12;
  byte **ppbVar13;
  byte bVar14;
  byte bVar15;
  byte **ppbVar16;
  byte *pbVar17;
  byte *pbVar18;
  byte *pbVar19;
  ulonglong uVar20;
  byte **ppbVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  undefined4 local_5a0;
  uint local_59c;
  ulonglong local_598;
  uint *local_590;
  ulonglong local_1a8;
  undefined8 local_1a0;
  ulonglong local_198;
  ulonglong *local_190;
  ulonglong local_d8;
  ulonglong *local_d0;
  byte **local_c8;
  undefined8 local_c0;
  byte **local_b8;
  ulonglong local_b0;
  ulonglong *local_a8;
  byte **local_a0;
  ulonglong *local_98;
  ulonglong local_90;
  ulonglong *local_88;
  byte **local_80;
  uint *local_78;
  byte **local_70;
  byte **local_68;
  byte *local_60;
  byte *local_58;
  byte *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = (byte *)0x0;
  local_58 = (byte *)0x1;
  local_50 = (byte *)0x0;
  local_70 = (byte **)param_3[1];
  local_68 = (byte **)param_3[2];
  local_1a8 = 0;
  local_5a0 = 0;
  local_d8 = 0;
  local_1a0 = 0;
  local_a8 = param_3;
  local_98 = param_1;
  if (local_68 != (byte **)0x0) {
    ppbVar11 = local_70;
    ppbVar13 = local_68;
    ppbVar16 = local_70;
    do {
      if ((byte)(*(byte *)ppbVar16 + 0x9f) < 0x1a) {
        ppbVar21 = ppbVar11;
      }
      else {
        ppbVar21 = (byte **)((longlong)ppbVar16 + 1);
        if (*(byte *)ppbVar16 != 0x2e) {
          ppbVar16 = (byte **)&local_5a0;
          FUN_18019ee50(&local_c8,param_2,ppbVar16,local_68,param_4,param_5,param_6,1,ppbVar16,
                        &local_1a0,ppbVar11,
                        (longlong)((longlong)local_70 + (longlong)local_68) - (longlong)ppbVar11);
          bVar24 = local_c8 != local_68;
          if ((local_c8 == local_68) || (local_c0._1_1_ != '\0')) goto LAB_1801a21c4;
          if (local_1a8 < 0xfe) {
            puVar8 = &local_59c;
            uVar20 = local_1a8;
            if (local_1a8 != 0) goto LAB_1801a1814;
LAB_1801a1820:
            if (local_1a8 < 0xfe) {
              puVar8 = &local_59c;
              uVar20 = local_1a8;
            }
            else {
              puVar8 = local_590;
              uVar20 = local_598;
            }
          }
          else {
            puVar8 = local_590;
            uVar20 = local_598;
            if (local_598 == 0) goto LAB_1801a1820;
LAB_1801a1814:
            if (puVar8[uVar20 - 1] != 0x2e) goto LAB_1801a1820;
            uVar20 = uVar20 - 1;
          }
          lVar9 = uVar20 << 2;
          goto LAB_1801a1840;
        }
      }
      ppbVar11 = ppbVar21;
      ppbVar13 = (byte **)((longlong)ppbVar13 + -1);
      ppbVar16 = (byte **)((longlong)ppbVar16 + 1);
    } while (ppbVar13 != (byte **)0x0);
  }
LAB_1801a21c2:
  bVar24 = false;
LAB_1801a21c4:
  if (8 < local_d8) {
    thunk_FUN_1801d3330(local_190,local_d8 * 0x18,8);
  }
  bVar23 = false;
  bVar22 = false;
  puVar10 = local_98;
joined_r0x0001801a234f:
  local_98 = puVar10;
  if (0xfd < local_1a8) {
    thunk_FUN_1801d3330(local_590,local_1a8 << 2,4);
    bVar22 = bVar23;
  }
  puVar6 = local_a8;
  pbVar17 = local_60;
  if (bVar24) {
    if (bVar22) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0(&DAT_180281d00,0x28,&PTR_s_C__Users_burne__cargo_registry_s_180281d70);
    }
    *puVar10 = 0x8000000000000001;
    bVar24 = true;
  }
  else if (bVar22) {
    if (param_7 == '\0') {
LAB_1801a23e5:
      *puVar10 = (ulonglong)local_60;
      puVar10[1] = (ulonglong)local_58;
      puVar10[2] = (ulonglong)local_50;
      bVar24 = true;
      goto LAB_1801a24c5;
    }
    if (local_50 == (byte *)0x0) {
      pbVar17 = (byte *)0x0;
LAB_1801a235d:
      bVar24 = false;
      pbVar18 = local_58;
      do {
        if (bVar24) goto LAB_1801a23e5;
        if (pbVar17 == (byte *)0x0) break;
        pbVar19 = (byte *)0x0;
        do {
          bVar24 = pbVar19[(longlong)pbVar18] != 0x2e;
          if (pbVar19[(longlong)pbVar18] == 0x2e) {
            pbVar17 = pbVar17 + ~(ulonglong)pbVar19;
            pbVar18 = pbVar19 + (longlong)(pbVar18 + 1);
            pbVar5 = pbVar19;
            break;
          }
          pbVar19 = pbVar19 + 1;
          pbVar5 = pbVar17;
        } while (pbVar17 != pbVar19);
      } while ((byte *)0xffffffffffffffc0 < pbVar5 + -0x40);
    }
    else {
      pbVar17 = local_50 + -1;
      if (local_50[(longlong)(local_58 + -1)] != 0x2e) {
        pbVar17 = local_50;
      }
      if ((local_50[(longlong)(local_58 + -1)] != 0x2e || param_7 == '\x01') &&
         (pbVar17 < (byte *)0xfe)) goto LAB_1801a235d;
    }
    *puVar10 = 0x8000000000000001;
    bVar24 = true;
    pbVar17 = (byte *)((ulonglong)local_60 & 0x7fffffffffffffff);
  }
  else {
    uVar20 = *local_a8;
    bVar24 = SBORROW8(0,uVar20);
    if (param_7 == '\0') {
LAB_1801a248e:
      *puVar10 = uVar20;
      puVar10[1] = (ulonglong)local_70;
      puVar10[2] = (ulonglong)local_68;
      goto joined_r0x0001801a23da;
    }
    if (local_68 == (byte **)0x0) {
      ppbVar16 = (byte **)0x0;
LAB_1801a23f9:
      bVar22 = false;
      ppbVar11 = local_70;
      do {
        if (bVar22) goto LAB_1801a248e;
        if (ppbVar16 == (byte **)0x0) break;
        ppbVar13 = (byte **)0x0;
        do {
          bVar23 = *(byte *)((longlong)ppbVar11 + (longlong)ppbVar13) == 0x2e;
          bVar22 = !bVar23;
          if (bVar23) {
            ppbVar16 = (byte **)((longlong)ppbVar16 + ~(ulonglong)ppbVar13);
            ppbVar11 = (byte **)((byte *)((longlong)ppbVar11 + (longlong)ppbVar13) + 1);
            ppbVar21 = ppbVar13;
            break;
          }
          ppbVar13 = (byte **)((longlong)ppbVar13 + 1);
          ppbVar21 = ppbVar16;
        } while (ppbVar16 != ppbVar13);
      } while ((byte **)0xffffffffffffffc0 < ppbVar21 + -8);
    }
    else {
      bVar22 = ((byte *)((longlong)local_70 + -1))[(longlong)local_68] != 0x2e;
      ppbVar16 = (byte **)((longlong)local_68 + -1);
      if (bVar22) {
        ppbVar16 = local_68;
      }
      if (ppbVar16 < (byte **)0xfe && (bVar22 || param_7 == '\x01')) goto LAB_1801a23f9;
    }
    *puVar10 = 0x8000000000000001;
    if ((uVar20 & 0x7fffffffffffffff) != 0) {
      thunk_FUN_1801d3330(local_70,uVar20,1);
      pbVar17 = local_60;
    }
  }
joined_r0x0001801a23da:
  if (pbVar17 != (byte *)0x0) {
    thunk_FUN_1801d3330(local_58,local_60,1);
  }
LAB_1801a24c5:
  if ((bool)(bVar24 & (*puVar6 & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(local_70,*puVar6,1);
  }
  return puVar10;
  while (lVar1 = lVar9 + -4, lVar9 = lVar9 + -4, *(int *)((longlong)puVar8 + lVar1) != 0x2e) {
LAB_1801a1840:
    if (lVar9 == 0) break;
  }
  puVar10 = local_190;
  if (local_d8 < 9) {
    puVar10 = &local_198;
    local_198 = local_d8;
  }
  if (local_1a8 < 0xfe) {
    local_90 = local_1a8;
    puVar8 = &local_59c;
  }
  else {
    local_90 = local_598;
    puVar8 = local_590;
  }
  local_d0 = puVar10 + local_198 * 3;
  local_b0 = 0;
  bVar22 = false;
  bVar23 = false;
LAB_1801a18ea:
  ppbVar11 = local_c8;
LAB_1801a1916:
  pbVar17 = local_50;
  if ((local_b0 & 1) == 0) {
    local_b0 = CONCAT71((int7)((ulonglong)ppbVar16 >> 8),1);
    if (local_90 == 0) {
      uVar20 = 0;
      local_78 = puVar8;
      local_90 = 0;
    }
    else {
      lVar9 = -4;
      uVar20 = 0;
      do {
        if (puVar8[uVar20] == 0x2e) {
          local_90 = local_90 + ~uVar20;
          local_78 = (uint *)((longlong)puVar8 - lVar9);
          local_b0 = 0;
          goto LAB_1801a19cc;
        }
        uVar20 = uVar20 + 1;
        lVar1 = local_90 * 4 + lVar9;
        lVar9 = lVar9 + -4;
      } while (lVar1 != 0);
      local_78 = puVar8;
      uVar20 = local_90;
    }
LAB_1801a19cc:
    local_88 = puVar10 + 3;
    if (puVar10 == local_d0) {
      local_88 = puVar10;
    }
    if (puVar10 == local_d0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180281da0);
    }
    uVar4 = *puVar10;
    ppbVar16 = (byte **)puVar10[1];
    local_80 = ppbVar16;
    ppbVar13 = (byte **)puVar10[2];
    if (bVar23) {
      if (bVar22) {
        if (local_60 == local_50) {
          ppbVar16 = (byte **)0x0;
          FUN_1801f6a80(&local_60,local_50,1,1,1);
        }
        local_50[(longlong)local_58] = 0x2e;
        local_50 = pbVar17 + 1;
      }
      else {
        ppbVar11 = (byte **)((longlong)ppbVar11 + 1);
        if (ppbVar11 == local_68) goto LAB_1801a21c2;
      }
    }
    if (uVar4 != 0) goto code_r0x0001801a1a51;
    if (ppbVar13 != (byte **)0x0) {
      local_b8 = (byte **)((longlong)local_80 + (longlong)ppbVar13);
      lVar9 = 0;
      ppbVar21 = local_80;
LAB_1801a1af0:
      if (0x19 < (byte)(*(byte *)ppbVar21 + 0xbf)) goto code_r0x0001801a1b01;
      if (bVar22) {
        ppbVar16 = ppbVar11;
        ppbVar13 = (byte **)-lVar9;
      }
      else {
        ppbVar16 = (byte **)((longlong)ppbVar11 - lVar9);
        local_80 = local_70;
        ppbVar13 = ppbVar16;
        if (local_68 < ppbVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,(longlong)ppbVar11 - lVar9,local_68,
                        &PTR_s_C__Users_burne__cargo_registry_s_180281db8);
        }
      }
      local_a0 = ppbVar16;
      if (local_60 + -(longlong)local_50 < ppbVar13) {
        FUN_1801f6a80(&local_60,local_50,ppbVar13,1,1);
      }
      pbVar17 = local_50;
      ppbVar16 = ppbVar13;
      memcpy(local_50 + (longlong)local_58,local_80,(size_t)ppbVar13);
      pbVar17 = pbVar17 + (longlong)ppbVar13;
      for (; local_50 = pbVar17, ppbVar21 != local_b8; ppbVar21 = (byte **)((longlong)ppbVar21 + 1))
      {
        bVar12 = *(byte *)ppbVar21;
        ppbVar11 = (byte **)((ulonglong)((char)bVar12 < '\0') + 1);
        if (local_60 + -(longlong)pbVar17 < ppbVar11) {
          ppbVar16 = ppbVar11;
          FUN_1801f6a80(&local_60,pbVar17,ppbVar11,1,1);
        }
        bVar14 = ((byte)(bVar12 + 0xbf) < 0x1a) << 5;
        bVar15 = bVar14 | bVar12;
        if ((char)bVar12 < '\0') {
          bVar15 = bVar12 >> 6 | 0xc0;
          local_50[(longlong)(local_58 + 1)] = bVar14 | bVar12 & 0xbf;
        }
        local_50[(longlong)local_58] = bVar15;
        pbVar17 = pbVar17 + (longlong)ppbVar11;
      }
LAB_1801a18d0:
      local_c8 = local_a0;
      goto LAB_1801a18e1;
    }
LAB_1801a1b0c:
    if (!bVar22) goto LAB_1801a1b66;
    if (local_60 + -(longlong)local_50 < ppbVar13) {
      FUN_1801f6a80(&local_60,local_50,ppbVar13,1,1);
    }
    goto LAB_1801a1fe5;
  }
  bVar23 = true;
  bVar22 = true;
  if (8 < local_d8) {
    thunk_FUN_1801d3330(local_190,local_d8 * 0x18,8);
  }
  bVar24 = false;
  puVar10 = local_98;
  goto joined_r0x0001801a234f;
code_r0x0001801a1a51:
  puVar2 = puVar8 + uVar20;
  if (uVar20 != 0) {
    lVar9 = 0;
    do {
      if (0x7f < *(uint *)((longlong)puVar8 + lVar9)) {
        if (uVar4 == 1) {
          if (ppbVar13 == (byte **)0x0) goto LAB_1801a1b5c;
          local_b8 = (byte **)((longlong)local_80 + (longlong)ppbVar13);
          lVar9 = 0;
          ppbVar21 = local_80;
          goto LAB_1801a1b40;
        }
        if (!bVar22) {
          if (local_68 < ppbVar11) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,ppbVar11,local_68,&PTR_s_C__Users_burne__cargo_registry_s_180281de8);
          }
          if (local_60 + -(longlong)local_50 < ppbVar11) {
            FUN_1801f6a80(&local_60,local_50,ppbVar11,1,1);
          }
          pbVar17 = local_50;
          memcpy(local_50 + (longlong)local_58,local_70,(size_t)ppbVar11);
          local_50 = pbVar17 + (longlong)ppbVar11;
        }
        if ((ulonglong)((longlong)local_60 - (longlong)local_50) < 4) {
          FUN_1801f6a80(&local_60,local_50,4,1,1);
        }
        pbVar17 = local_50 + (longlong)local_58;
        pbVar17[0] = 0x78;
        pbVar17[1] = 0x6e;
        pbVar17[2] = 0x2d;
        pbVar17[3] = 0x2d;
        local_50 = local_50 + 4;
        ppbVar16 = &local_60;
        cVar7 = FUN_1801a6ab0(puVar8,puVar2,ppbVar16);
        bVar22 = true;
        bVar23 = true;
        puVar10 = local_88;
        puVar8 = local_78;
        if (cVar7 != '\x02') {
          local_c8 = &PTR_s_Punycode_overflows_should_not_be_180281bb8;
          local_c0 = &LAB_1800a5660;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180281bc8,&local_c8,&PTR_s_C__Users_burne__cargo_registry_s_180281c58);
        }
        goto LAB_1801a1916;
      }
      lVar9 = lVar9 + 4;
    } while (uVar20 * 4 != lVar9);
  }
  if (bVar22) goto LAB_1801a1d27;
  if (local_68 < ppbVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,ppbVar11,local_68,&PTR_s_C__Users_burne__cargo_registry_s_180281e00);
  }
  if (local_60 + -(longlong)local_50 < ppbVar11) {
    FUN_1801f6a80(&local_60,local_50,ppbVar11,1,1);
  }
  pbVar17 = local_50;
  ppbVar16 = ppbVar11;
  memcpy(local_50 + (longlong)local_58,local_70,(size_t)ppbVar11);
  local_50 = pbVar17 + (longlong)ppbVar11;
  while( true ) {
LAB_1801a1d27:
    pbVar17 = local_50;
    if (puVar8 == puVar2) break;
    uVar3 = *puVar8;
    puVar8 = puVar8 + 1;
    ppbVar13 = (byte **)0x1;
    if ((0x7f < uVar3) && (ppbVar13 = (byte **)0x2, 0x7ff < uVar3)) {
      ppbVar13 = (byte **)(4 - (ulonglong)(uVar3 < 0x10000));
    }
    if (local_60 + -(longlong)local_50 < ppbVar13) {
      ppbVar16 = ppbVar13;
      FUN_1801f6a80(&local_60,local_50,ppbVar13,1,1);
      if (0x7f < uVar3) goto LAB_1801a1dd0;
LAB_1801a1d8f:
      local_50[(longlong)local_58] = (byte)uVar3;
      local_50 = (byte *)((longlong)ppbVar13 + (longlong)pbVar17);
    }
    else {
      if (uVar3 < 0x80) goto LAB_1801a1d8f;
LAB_1801a1dd0:
      bVar12 = (byte)uVar3 & 0x3f | 0x80;
      if (uVar3 < 0x800) {
        ppbVar16 = (byte **)((ulonglong)(uVar3 >> 6) | 0xc0);
        local_50[(longlong)local_58] = (byte)ppbVar16;
        local_50[(longlong)(local_58 + 1)] = bVar12;
        local_50 = (byte *)((longlong)ppbVar13 + (longlong)pbVar17);
      }
      else {
        ppbVar16 = (byte **)((ulonglong)(uVar3 >> 6) & 0xffffffffffffff3f | 0x80);
        bVar15 = (byte)(uVar3 >> 0xc);
        if (uVar3 < 0x10000) {
          local_50[(longlong)local_58] = bVar15 | 0xe0;
          local_50[(longlong)(local_58 + 1)] = (byte)ppbVar16;
          local_50[(longlong)(local_58 + 2)] = bVar12;
          local_50 = (byte *)((longlong)ppbVar13 + (longlong)pbVar17);
        }
        else {
          local_50[(longlong)local_58] = (byte)(uVar3 >> 0x12) | 0xf0;
          local_50[(longlong)(local_58 + 1)] = bVar15 & 0x3f | 0x80;
          local_50[(longlong)(local_58 + 2)] = (byte)ppbVar16;
          local_50[(longlong)(local_58 + 3)] = bVar12;
          local_50 = (byte *)((longlong)ppbVar13 + (longlong)pbVar17);
        }
      }
    }
  }
  bVar22 = true;
  bVar23 = true;
  puVar10 = local_88;
  puVar8 = local_78;
  goto LAB_1801a1916;
LAB_1801a1b40:
  if (0x19 < (byte)(*(byte *)ppbVar21 + 0xbf)) goto code_r0x0001801a1b51;
  if (bVar22) {
    ppbVar16 = ppbVar11;
    ppbVar13 = (byte **)-lVar9;
  }
  else {
    ppbVar16 = (byte **)((longlong)ppbVar11 - lVar9);
    local_80 = local_70;
    ppbVar13 = ppbVar16;
    if (local_68 < ppbVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,(longlong)ppbVar11 - lVar9,local_68,
                    &PTR_s_C__Users_burne__cargo_registry_s_180281dd0);
    }
  }
  local_a0 = ppbVar16;
  if (local_60 + -(longlong)local_50 < ppbVar13) {
    FUN_1801f6a80(&local_60,local_50,ppbVar13,1,1);
  }
  pbVar17 = local_50;
  ppbVar16 = ppbVar13;
  memcpy(local_50 + (longlong)local_58,local_80,(size_t)ppbVar13);
  pbVar17 = pbVar17 + (longlong)ppbVar13;
  for (; local_50 = pbVar17, ppbVar21 != local_b8; ppbVar21 = (byte **)((longlong)ppbVar21 + 1)) {
    bVar12 = *(byte *)ppbVar21;
    ppbVar11 = (byte **)((ulonglong)((char)bVar12 < '\0') + 1);
    if (local_60 + -(longlong)pbVar17 < ppbVar11) {
      ppbVar16 = ppbVar11;
      FUN_1801f6a80(&local_60,pbVar17,ppbVar11,1,1);
    }
    bVar14 = ((byte)(bVar12 + 0xbf) < 0x1a) << 5;
    bVar15 = bVar14 | bVar12;
    if ((char)bVar12 < '\0') {
      bVar15 = bVar12 >> 6 | 0xc0;
      local_50[(longlong)(local_58 + 1)] = bVar14 | bVar12 & 0xbf;
    }
    local_50[(longlong)local_58] = bVar15;
    pbVar17 = pbVar17 + (longlong)ppbVar11;
  }
  goto LAB_1801a18d0;
code_r0x0001801a1b51:
  ppbVar21 = (byte **)((longlong)ppbVar21 + 1);
  lVar9 = lVar9 + -1;
  if ((byte **)-lVar9 == ppbVar13) goto LAB_1801a1b5c;
  goto LAB_1801a1b40;
LAB_1801a1b5c:
  if (!bVar22) {
LAB_1801a1b66:
    ppbVar16 = (byte **)((longlong)ppbVar11 + (longlong)ppbVar13);
    bVar23 = true;
    bVar22 = false;
    bVar24 = false;
    puVar10 = local_88;
    ppbVar11 = ppbVar16;
    puVar8 = local_78;
    if (ppbVar16 == local_68) goto LAB_1801a21c4;
    goto LAB_1801a1916;
  }
  if (local_60 + -(longlong)local_50 < ppbVar13) {
    FUN_1801f6a80(&local_60,local_50,ppbVar13,1,1);
  }
LAB_1801a1fe5:
  pbVar17 = local_50;
  ppbVar16 = ppbVar13;
  memcpy(local_50 + (longlong)local_58,local_80,(size_t)ppbVar13);
  local_50 = pbVar17 + (longlong)ppbVar13;
  local_c8 = ppbVar11;
LAB_1801a18e1:
  bVar22 = true;
  bVar23 = true;
  puVar10 = local_88;
  puVar8 = local_78;
  goto LAB_1801a18ea;
code_r0x0001801a1b01:
  ppbVar21 = (byte **)((longlong)ppbVar21 + 1);
  lVar9 = lVar9 + -1;
  if ((byte **)-lVar9 == ppbVar13) goto LAB_1801a1b0c;
  goto LAB_1801a1af0;
}


