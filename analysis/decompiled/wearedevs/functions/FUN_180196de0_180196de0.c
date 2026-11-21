/* FUN_180196de0 @ 180196de0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_180196de0(undefined8 *param_1,ulonglong *param_2,byte *******param_3,byte *******param_4,
                  byte param_5,uint param_6)

{
  byte *******pppppppbVar1;
  ulonglong *puVar2;
  char cVar3;
  int iVar4;
  ulonglong uVar5;
  byte *******pppppppbVar6;
  undefined8 uVar7;
  ulonglong uVar8;
  byte bVar9;
  uint uVar10;
  byte *******pppppppbVar11;
  byte *******pppppppbVar12;
  void *_Size;
  void *pvVar13;
  byte *******pppppppbVar14;
  longlong lVar15;
  undefined2 uVar16;
  ulonglong uVar17;
  undefined4 uVar18;
  uint uVar19;
  ulonglong uVar20;
  undefined1 uVar21;
  byte *******pppppppbVar22;
  bool bVar23;
  undefined1 local_110;
  undefined4 local_10f;
  undefined4 local_10b;
  byte *******local_107;
  byte ******local_f8;
  undefined8 *local_f0;
  undefined1 local_e8 [2];
  undefined1 auStack_e6 [2];
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
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
  ulonglong local_a8;
  byte *******local_a0;
  undefined1 local_98;
  undefined7 uStack_97;
  undefined1 local_90;
  undefined7 uStack_8f;
  ulonglong local_88;
  byte *******local_80;
  byte *******local_78;
  byte *******local_70;
  byte *******local_68;
  byte *******local_60;
  ulonglong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar20 = param_2[2];
  uVar5 = uVar20;
  local_f0 = param_1;
  local_58 = param_2;
  if (*param_2 == uVar20) {
    local_49 = 1;
    FUN_1801f6a80(param_2,uVar20,1,1,1);
    uVar5 = local_58[2];
  }
  *(undefined1 *)(local_58[1] + uVar5) = 0x2f;
  pppppppbVar11 = (byte *******)(uVar20 + 1);
  local_58[2] = (ulonglong)pppppppbVar11;
  if ((byte *******)*local_58 == pppppppbVar11) {
    local_49 = 1;
    FUN_1801f6a80(local_58,pppppppbVar11,1,1,1);
    pppppppbVar11 = (byte *******)local_58[2];
  }
  pppppppbVar6 = (byte *******)local_58[1];
  *(byte *)((longlong)pppppppbVar6 + (longlong)pppppppbVar11) = 0x2f;
  uVar20 = uVar20 + 2;
  local_58[2] = uVar20;
  local_60 = (byte *******)0x0;
  uVar17 = 0;
  uVar5 = uVar20;
  pppppppbVar22 = param_3;
  while (pppppppbVar22 != param_4) {
LAB_180196e97:
    bVar9 = *(byte *)pppppppbVar22;
    uVar10 = (uint)bVar9;
    uVar8 = uVar17;
    if ((char)bVar9 < '\0') {
      uVar19 = *(byte *)((longlong)pppppppbVar22 + 1) & 0x3f;
      if (bVar9 < 0xe0) {
        pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 2);
        uVar19 = (uVar10 & 0x1f) << 6 | uVar19;
        pppppppbVar6 = (byte *******)(ulonglong)uVar19;
      }
      else {
        uVar19 = *(byte *)((longlong)pppppppbVar22 + 2) & 0x3f | uVar19 << 6;
        if (bVar9 < 0xf0) {
          pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 3);
          uVar10 = uVar19 | (uVar10 & 0x1f) << 0xc;
          pppppppbVar11 = (byte *******)(ulonglong)uVar10;
          pppppppbVar6 = pppppppbVar11;
          goto joined_r0x000180196ea9;
        }
        uVar19 = uVar19 << 6;
        pppppppbVar11 = (byte *******)(ulonglong)uVar19;
        uVar19 = *(byte *)((longlong)pppppppbVar22 + 3) & 0x3f | uVar19 | (uVar10 & 7) << 0x12;
        pppppppbVar6 = (byte *******)(ulonglong)uVar19;
        if (uVar19 == 0x110000) break;
        pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 4);
      }
      if (0xd < uVar19) goto LAB_180196e80;
LAB_180196f40:
      if ((0x2600U >> ((uint)pppppppbVar6 & 0x1f) & 1) == 0) goto LAB_180196e80;
joined_r0x000180196fbd:
      uVar17 = uVar8;
      if (pppppppbVar22 == param_4) break;
      goto LAB_180196e97;
    }
    pppppppbVar22 = (byte *******)((longlong)pppppppbVar22 + 1);
    pppppppbVar6 = (byte *******)(ulonglong)bVar9;
joined_r0x000180196ea9:
    if (uVar10 < 0xe) goto LAB_180196f40;
LAB_180196e80:
    iVar4 = (int)pppppppbVar6;
    if (iVar4 == 0x110000) goto joined_r0x000180196fbd;
    if (iVar4 - 0x23U < 0x1e) {
      pppppppbVar6 = (byte *******)
                     ((longlong)&switchD_180196f69::switchdataD_180267a68 +
                     (longlong)(int)(&switchD_180196f69::switchdataD_180267a68)[iVar4 - 0x23U]);
      switch(iVar4) {
      case 0x23:
      case 0x2f:
      case 0x3f:
        goto switchD_180196f69_caseD_23;
      default:
        goto switchD_180196f69_caseD_24;
      case 0x40:
        if (local_58[6] != 0) {
          pppppppbVar11 =
               (byte *******)
               (CONCAT71((int7)((ulonglong)pppppppbVar11 >> 8),(local_60 != (byte *******)0x0) << 3)
               | 2);
          local_49 = 1;
          (**(code **)(local_58[7] + 0x28))(local_58[6],pppppppbVar11);
        }
        uVar8 = (ulonglong)((int)uVar17 + 1);
        uVar5 = uVar17;
        pppppppbVar6 = pppppppbVar22;
        local_60 = pppppppbVar22;
      }
      goto joined_r0x000180196fbd;
    }
    if ((iVar4 == 0x5c) && (pppppppbVar6 = (byte *******)0x39, param_5 != 2)) break;
switchD_180196f69_caseD_24:
    uVar17 = (ulonglong)((int)uVar17 + 1);
    pppppppbVar6 = local_60;
  }
switchD_180196f69_caseD_23:
  puVar2 = local_58;
  if (local_60 == (byte *******)0x0) {
    pppppppbVar11 = (byte *******)local_58[2];
    if ((ulonglong)pppppppbVar11 >> 0x20 != 0) {
LAB_180197361:
      uVar18 = 9;
      goto LAB_1801974a4;
    }
LAB_180197596:
    uVar18 = SUB84(pppppppbVar11,0);
    pppppppbVar11 = &local_f8;
    local_a0 = param_3;
  }
  else {
    if ((int)uVar5 != 0) {
      if ((int)uVar5 < 1) {
        bVar9 = 0;
LAB_1801974e7:
        pppppppbVar6 = (byte *******)local_58[2];
        if ((ulonglong)pppppppbVar6 >> 0x20 != 0) {
          param_4 = (byte *******)0x0;
          pppppppbVar11 = (byte *******)&local_a0;
          uVar18 = 9;
          goto LAB_18019759e;
        }
      }
      else {
        uVar17 = 0;
        local_68 = (byte *******)0x0;
        local_80 = (byte *******)0x0;
        local_78 = pppppppbVar6;
        do {
          if (param_3 == param_4) {
LAB_180197caa:
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_1802670f0);
          }
          pppppppbVar11 = param_3;
          while( true ) {
            bVar9 = *(byte *)pppppppbVar11;
            uVar10 = (uint)bVar9;
            if ((char)bVar9 < '\0') {
              uVar19 = *(byte *)((longlong)pppppppbVar11 + 1) & 0x3f;
              if (bVar9 < 0xe0) {
                param_3 = (byte *******)((longlong)pppppppbVar11 + 2);
                uVar10 = (uVar10 & 0x1f) << 6 | uVar19;
              }
              else {
                uVar19 = *(byte *)((longlong)pppppppbVar11 + 2) & 0x3f | uVar19 << 6;
                if (bVar9 < 0xf0) {
                  param_3 = (byte *******)((longlong)pppppppbVar11 + 3);
                  uVar10 = uVar19 | (uVar10 & 0x1f) << 0xc;
                }
                else {
                  param_3 = (byte *******)((longlong)pppppppbVar11 + 4);
                  uVar10 = *(byte *)((longlong)pppppppbVar11 + 3) & 0x3f | uVar19 << 6 |
                           (uVar10 & 7) << 0x12;
                }
              }
            }
            else {
              param_3 = (byte *******)((longlong)pppppppbVar11 + 1);
            }
            if ((0xd < uVar10) || ((0x2600U >> (uVar10 & 0x1f) & 1) == 0)) break;
            pppppppbVar11 = param_3;
            if (param_3 == param_4) goto LAB_180197caa;
          }
          pvVar13 = (void *)0x1;
          if ((0x7f < uVar10) && (pvVar13 = (void *)0x2, 0x7ff < uVar10)) {
            pvVar13 = (void *)(4 - (ulonglong)(uVar10 < 0x10000));
          }
          _Size = (void *)((longlong)param_4 - (longlong)pppppppbVar11);
          if (pvVar13 < _Size) {
            if ((char)*(byte *)((longlong)pppppppbVar11 + (longlong)pvVar13) < -0x40) {
LAB_180197f5c:
              local_49 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(pppppppbVar11,_Size,0,pvVar13,
                            &PTR_s_C__Users_burne__cargo_registry_s_180266ef8);
            }
          }
          else if (pvVar13 != _Size) goto LAB_180197f5c;
          if (uVar10 == 0x3a && (int)uVar17 == 0) {
            pppppppbVar11 = (byte *******)local_58[2];
            if ((ulonglong)pppppppbVar11 >> 0x20 != 0) {
              uVar18 = 9;
              param_4 = (byte *******)0x0;
              pppppppbVar11 = (byte *******)&local_a0;
              goto LAB_18019759e;
            }
            iVar4 = (int)uVar5;
            pppppppbVar6 = pppppppbVar11;
            if (iVar4 == 1) {
              param_3 = local_60;
              if ((((byte)local_68 | (byte)local_80) & 1) == 0) goto LAB_180197596;
              goto LAB_18019754d;
            }
            pppppppbVar22 = pppppppbVar11;
            if ((byte *******)*local_58 == pppppppbVar11) {
              local_49 = 1;
              FUN_1801f6a80(local_58,pppppppbVar11,1,1,1);
              pppppppbVar22 = (byte *******)local_58[2];
            }
            *(byte *)((longlong)pppppppbVar22 + local_58[1]) = 0x3a;
            local_58[2] = (ulonglong)((longlong)pppppppbVar11 + 1);
            uVar17 = 1;
            local_80 = (byte *******)CONCAT71((int7)((ulonglong)pppppppbVar22 >> 8),1);
          }
          else {
            local_70 = (byte *******)CONCAT44(local_70._4_4_,(int)uVar17);
            local_88 = uVar5;
            if (local_58[6] != 0) {
              _Size = *(void **)(local_58[7] + 0x28);
              local_49 = 1;
              FUN_180191cf0(local_58[6],_Size,uVar10,param_3,param_4);
            }
            local_68 = (byte *******)
                       CONCAT71((int7)((ulonglong)local_68 >> 8),(byte)local_68 | (byte)local_80 ^ 1
                               );
            uStack_e0 = SUB84(pvVar13,0);
            uStack_dc = (undefined4)((ulonglong)pvVar13 >> 0x20);
            local_d8 = 0x80267108;
            uStack_d4 = 1;
            _local_e8 = pppppppbVar11;
            while( true ) {
              local_49 = 1;
              pvVar13 = (void *)FUN_1801aac60(local_e8);
              if (pvVar13 == (void *)0x0) break;
              uVar5 = local_58[2];
              if ((void *)(*local_58 - uVar5) < _Size) {
                local_49 = 1;
                FUN_1801f6a80(local_58,uVar5,_Size,1,1);
                uVar5 = local_58[2];
              }
              memcpy((void *)(puVar2[1] + uVar5),pvVar13,(size_t)_Size);
              puVar2[2] = (longlong)_Size + uVar5;
              _Size = pvVar13;
            }
            uVar17 = (ulonglong)local_70 & 0xffffffff;
            iVar4 = (int)local_88;
            pppppppbVar6 = local_78;
          }
          uVar5 = (ulonglong)(iVar4 - 1);
          local_78 = pppppppbVar6;
        } while (1 < iVar4);
        bVar9 = (byte)local_68 | (byte)local_80;
        if ((uVar17 & 1) == 0) goto LAB_1801974e7;
      }
      param_3 = local_60;
      pppppppbVar11 = pppppppbVar6;
      if ((bVar9 & 1) != 0) {
        pppppppbVar11 = (byte *******)local_58[2];
LAB_18019754d:
        pppppppbVar22 = pppppppbVar11;
        if ((byte *******)*local_58 == pppppppbVar11) {
          local_49 = 1;
          FUN_1801f6a80(local_58,pppppppbVar11,1,1,1);
          pppppppbVar22 = (byte *******)local_58[2];
        }
        *(byte *)((longlong)pppppppbVar22 + local_58[1]) = 0x40;
        local_58[2] = (ulonglong)((longlong)pppppppbVar11 + 1);
        param_3 = local_60;
        pppppppbVar11 = pppppppbVar6;
      }
      goto LAB_180197596;
    }
    pppppppbVar11 = local_60;
    do {
      if (pppppppbVar11 == param_4) goto LAB_180197585;
      bVar9 = *(byte *)pppppppbVar11;
      uVar10 = (uint)bVar9;
      if ((char)bVar9 < '\0') {
        uVar19 = *(byte *)((longlong)pppppppbVar11 + 1) & 0x3f;
        if (bVar9 < 0xe0) {
          pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 2);
          uVar10 = (uVar10 & 0x1f) << 6 | uVar19;
        }
        else {
          uVar19 = *(byte *)((longlong)pppppppbVar11 + 2) & 0x3f | uVar19 << 6;
          if (bVar9 < 0xf0) {
            pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 3);
            uVar10 = uVar19 | (uVar10 & 0x1f) << 0xc;
          }
          else {
            uVar10 = *(byte *)((longlong)pppppppbVar11 + 3) & 0x3f | uVar19 << 6 |
                     (uVar10 & 7) << 0x12;
            if (uVar10 == 0x110000) goto LAB_180197585;
            pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 4);
          }
        }
      }
      else {
        pppppppbVar11 = (byte *******)((longlong)pppppppbVar11 + 1);
      }
    } while (((uVar10 < 0xe) && ((0x2600U >> (uVar10 & 0x1f) & 1) != 0)) || (uVar10 == 0x110000));
    if ((uVar10 < 0x40) && ((0x8000800800000000U >> ((ulonglong)uVar10 & 0x3f) & 1) != 0)) {
      uVar18 = 0;
    }
    else {
      if ((param_5 == 2) || (uVar10 != 0x5c)) {
LAB_180197585:
        pppppppbVar11 = (byte *******)local_58[2];
        param_3 = local_60;
        if ((ulonglong)pppppppbVar11 >> 0x20 != 0) goto LAB_180197361;
        goto LAB_180197596;
      }
      uVar18 = 0;
    }
LAB_1801974a4:
    pppppppbVar11 = (byte *******)&local_a0;
    param_4 = (byte *******)0x0;
  }
LAB_18019759e:
  *pppppppbVar11 = (byte ******)param_4;
  if (local_a0 == (byte *******)0x0) {
    uVar21 = (undefined1)uVar18;
    goto LAB_1801976c8;
  }
  uVar5 = local_58[2];
  uVar21 = 9;
  if (uVar5 >> 0x20 != 0) goto LAB_1801976c8;
  local_49 = 1;
  FUN_180193680(local_e8,local_a0,local_f8,param_5);
  uVar21 = (undefined1)uStack_e0;
  if (_local_e8 != (byte *******)0x8000000000000003) {
    uStack_97 = CONCAT43(uStack_dc,uStack_e0._1_3_);
    uStack_8f = (undefined7)(CONCAT44(uStack_d4,local_d8) >> 8);
    local_90 = (undefined1)local_d8;
    local_68 = (byte *******)CONCAT44(uStack_cc,uStack_d0);
    pppppppbVar11 = (byte *******)CONCAT44(uStack_c4,local_c8);
    local_a0 = _local_e8;
    local_98 = (undefined1)uStack_e0;
    _local_e8 = (byte *******)&local_a0;
    uStack_e0 = 0x8019cf10;
    uStack_dc = 1;
    cVar3 = FUN_1801ef150(local_58,&PTR_LAB_180267120,&DAT_180267118);
    pppppppbVar6 = local_a0;
    if (cVar3 != '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0(&DAT_180267438,0x2b,&local_f8,&DAT_180267418,
                    &PTR_s_C__Users_burne__cargo_registry_s_180267180);
    }
    pppppppbVar12 = (byte *******)0x0;
    uVar17 = local_58[2];
    pppppppbVar22 = (byte *******)0x0;
    if ((byte *******)0x8000000000000000 < local_a0) {
      pppppppbVar22 = local_a0;
    }
    uVar21 = 9;
    if (uVar17 >> 0x20 == 0) {
      local_80 = (byte *******)CONCAT71(uStack_8f,local_90);
      local_88 = uVar17;
      if (((ulonglong)pppppppbVar22 & 0x7fffffffffffffff) == 0 && local_80 == (byte *******)0x0) {
        _local_e8 = local_68;
        uStack_e0 = local_c8;
        uStack_dc = uStack_c4;
        cVar3 = FUN_180199fe0(&DAT_180267198,1,local_e8);
        uVar21 = 0;
        if ((param_5 != 2) || (cVar3 != '\0')) {
          pppppppbVar22 = (byte *******)0x0;
          goto LAB_18019768f;
        }
      }
      pppppppbVar1 = (byte *******)(local_e8 + 4);
      pppppppbVar14 = local_68;
      do {
        if (pppppppbVar14 == pppppppbVar11) goto LAB_1801979b4;
        bVar9 = *(byte *)pppppppbVar14;
        uVar10 = (uint)bVar9;
        if ((char)bVar9 < '\0') {
          uVar19 = *(byte *)((longlong)pppppppbVar14 + 1) & 0x3f;
          if (bVar9 < 0xe0) {
            pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 2);
            uVar10 = (uVar10 & 0x1f) << 6 | uVar19;
          }
          else {
            uVar19 = *(byte *)((longlong)pppppppbVar14 + 2) & 0x3f | uVar19 << 6;
            if (bVar9 < 0xf0) {
              pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 3);
              uVar10 = uVar19 | (uVar10 & 0x1f) << 0xc;
            }
            else {
              uVar10 = *(byte *)((longlong)pppppppbVar14 + 3) & 0x3f | uVar19 << 6 |
                       (uVar10 & 7) << 0x12;
              if (uVar10 == 0x110000) goto LAB_1801979b4;
              pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 4);
            }
          }
        }
        else {
          pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 1);
        }
      } while (((uVar10 < 0xe) && ((0x2600U >> (uVar10 & 0x1f) & 1) != 0)) || (uVar10 == 0x110000));
      if (uVar10 != 0x3a) {
LAB_1801979b4:
        uVar16 = 0;
        goto LAB_1801979b7;
      }
      cVar3 = (char)local_58[8];
      local_60 = (byte *******)CONCAT71(local_60._1_7_,cVar3);
      bVar23 = false;
      local_70 = (byte *******)0x0;
      local_68 = pppppppbVar14;
      do {
        do {
          local_78 = pppppppbVar1;
          if (pppppppbVar14 == pppppppbVar11) {
LAB_180197bb0:
            if ((!(bool)(cVar3 != '\x01' | bVar23)) && (local_68 != pppppppbVar11)) {
              pppppppbVar12 = local_68;
              goto LAB_180197c08;
            }
LAB_180197ce7:
            if (bVar23) {
              uVar17 = (ulonglong)param_6;
              pppppppbVar1 = (byte *******)local_58[1];
              if (param_6 != 0) {
                if (uVar17 < local_88) {
                  if ((char)*(byte *)((longlong)pppppppbVar1 + uVar17) < -0x40) {
LAB_180197d17:
                    /* WARNING: Subroutine does not return */
                    FUN_1802018d0(pppppppbVar1,local_88,0,uVar17,
                                  &PTR_s_C__Users_burne__cargo_registry_s_1802671a0);
                  }
                }
                else if (local_88 != uVar17) goto LAB_180197d17;
              }
              local_60 = pppppppbVar1;
              uVar8 = FUN_180191c60();
              if (((uVar8 & 1) == 0) || ((short)uVar17 != (short)local_70)) {
                uVar17 = local_88;
                if (*local_58 == local_88) {
                  FUN_1801f6a80(local_58,local_88,1,1,1);
                  local_60 = (byte *******)local_58[1];
                  uVar17 = local_58[2];
                }
                *(byte *)((longlong)local_60 + uVar17) = 0x3a;
                local_58[2] = local_88 + 1;
                uVar17 = (ulonglong)local_70 & 0xffff;
                uVar10 = (uint)uVar17 / 10;
                uVar19 = (uint)local_70;
                cVar3 = (char)uVar10;
                _local_e8 = (byte *******)
                            ((ulonglong)
                             CONCAT31((int3)((ulonglong)_local_e8 >> 0x28),
                                      (char)local_70 + cVar3 * -10) << 0x20 | 0x3000000000);
                lVar15 = 1;
                if (9 < uVar19) {
                  _local_e8 = (byte *******)
                              ((ulonglong)
                               CONCAT41(uStack_e4,cVar3 + ((byte)(uVar10 / 5) & 0xfe) * -5) << 0x18
                              | 0x30000000);
                  lVar15 = 2;
                  local_78 = (byte *******)(local_e8 + 3);
                  if (99 < uVar19) {
                    uVar10 = (uint)(uVar17 >> 2) / 0x19;
                    _local_e8 = (byte *******)
                                ((ulonglong)
                                 CONCAT51(stack0xffffffffffffff1b,
                                          (char)uVar10 + ((byte)(uVar10 / 5) & 0xfe) * -5) << 0x10 |
                                0x300000);
                    lVar15 = 3;
                    local_78 = (byte *******)(local_e8 + 2);
                    if (999 < uVar19) {
                      uVar10 = (uint)(uVar17 >> 3) / 0x7d;
                      _local_e8 = (byte *******)
                                  ((ulonglong)
                                   CONCAT61(_auStack_e6,
                                            (char)uVar10 + ((byte)(uVar10 / 5) & 0xfe) * -5) << 8 |
                                  0x3000);
                      lVar15 = 4;
                      local_78 = (byte *******)(local_e8 + 1);
                      if (9999 < uVar19) {
                        _local_e8 = (byte *******)
                                    (CONCAT71(stack0xffffffffffffff19,(char)((uint)uVar17 / 10000))
                                    | 0x30);
                        lVar15 = 5;
                        local_78 = (byte *******)local_e8;
                      }
                    }
                  }
                }
                pppppppbVar14 = (byte *******)((longlong)local_78 + lVar15);
                FUN_18019d700();
                pppppppbVar22 = pppppppbVar12;
                if ((byte *******)0x8000000000000000 < local_a0) {
                  pppppppbVar22 = local_a0;
                }
                local_80 = (byte *******)CONCAT71(uStack_8f,local_90);
                uVar16 = 1;
                pppppppbVar6 = local_a0;
                pppppppbVar12 = local_70;
                goto LAB_1801979b7;
              }
            }
            uVar16 = 0;
            pppppppbVar12 = local_70;
            goto LAB_1801979b7;
          }
          bVar9 = *(byte *)pppppppbVar14;
          uVar10 = (uint)bVar9;
          if ((char)bVar9 < '\0') {
            uVar19 = *(byte *)((longlong)pppppppbVar14 + 1) & 0x3f;
            if (bVar9 < 0xe0) {
              pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 2);
              uVar10 = (uVar10 & 0x1f) << 6 | uVar19;
            }
            else {
              uVar19 = *(byte *)((longlong)pppppppbVar14 + 2) & 0x3f | uVar19 << 6;
              if (bVar9 < 0xf0) {
                pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 3);
                uVar10 = uVar19 | (uVar10 & 0x1f) << 0xc;
              }
              else {
                uVar10 = *(byte *)((longlong)pppppppbVar14 + 3) & 0x3f | uVar19 << 6 |
                         (uVar10 & 7) << 0x12;
                if (uVar10 == 0x110000) goto LAB_180197bb0;
                pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 4);
              }
            }
          }
          else {
            pppppppbVar14 = (byte *******)((longlong)pppppppbVar14 + 1);
          }
        } while (((uVar10 < 0xe) && ((0x2600U >> (uVar10 & 0x1f) & 1) != 0)) || (uVar10 == 0x110000)
                );
        if (9 < uVar10 - 0x30) {
          if (cVar3 != '\0') goto LAB_180197bb0;
          uVar21 = 2;
          if ((uVar10 - 0x23 < 0x3a) &&
             ((0x200000010001001U >> ((ulonglong)(uVar10 - 0x23) & 0x3f) & 1) != 0))
          goto LAB_180197ce7;
          break;
        }
        uVar10 = (uVar10 - 0x30) + (int)local_70 * 10;
        local_70 = (byte *******)(ulonglong)uVar10;
        bVar23 = true;
        uVar21 = 2;
        local_68 = pppppppbVar14;
      } while (uVar10 < 0x10000);
    }
LAB_18019768f:
    if ((!SBORROW8(0,(longlong)pppppppbVar6) && ((ulonglong)pppppppbVar22 & 0x7fffffffffffffff) == 0
        ) && (pppppppbVar6 != (byte *******)0x0)) {
      thunk_FUN_1801d3330(CONCAT71(uStack_97,local_98),pppppppbVar6,1);
    }
  }
  goto LAB_1801976c8;
LAB_180197c08:
  do {
    bVar9 = *(byte *)pppppppbVar12;
    uVar10 = (uint)bVar9;
    if ((char)bVar9 < '\0') {
      uVar19 = *(byte *)((longlong)pppppppbVar12 + 1) & 0x3f;
      if (bVar9 < 0xe0) {
        pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 2);
        uVar10 = (uVar10 & 0x1f) << 6 | uVar19;
        pppppppbVar14 = (byte *******)(ulonglong)uVar10;
        goto joined_r0x000180197c79;
      }
      uVar19 = *(byte *)((longlong)pppppppbVar12 + 2) & 0x3f | uVar19 << 6;
      if (0xef < bVar9) {
        uVar10 = (uVar10 & 7) << 0x12;
        pppppppbVar14 = (byte *******)(ulonglong)uVar10;
        uVar10 = *(byte *)((longlong)pppppppbVar12 + 3) & 0x3f | uVar19 << 6 | uVar10;
        if (uVar10 != 0x110000) {
          pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 4);
          goto joined_r0x000180197c79;
        }
        break;
      }
      pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 3);
      uVar10 = (uVar10 & 0x1f) << 0xc;
      pppppppbVar14 = (byte *******)(ulonglong)uVar10;
      uVar10 = uVar19 | uVar10;
      if (uVar10 < 0xe) goto LAB_180197bfa;
LAB_180197c1c:
      if (uVar10 != 0x110000) {
        uVar21 = 2;
        goto LAB_18019768f;
      }
    }
    else {
      pppppppbVar12 = (byte *******)((longlong)pppppppbVar12 + 1);
joined_r0x000180197c79:
      if (0xd < uVar10) goto LAB_180197c1c;
LAB_180197bfa:
      if ((0x2600U >> (uVar10 & 0x1f) & 1) == 0) goto LAB_180197c1c;
    }
  } while (pppppppbVar12 != pppppppbVar11);
  uVar16 = 0;
  pppppppbVar12 = local_70;
LAB_1801979b7:
  pppppppbVar1 = local_80;
  if (((ulonglong)pppppppbVar22 & 0x7fffffffffffffff) == 0) {
    bVar23 = local_80 != (byte *******)0x0;
    if (((ulonglong)pppppppbVar6 & 0x7fffffffffffffff) != 0) {
      thunk_FUN_1801d3330(CONCAT71(uStack_97,local_98),pppppppbVar6,1);
    }
    local_110 = bVar23;
    if (uVar20 != uVar5 && pppppppbVar1 == (byte *******)0x0) {
      uVar21 = 0;
      goto LAB_1801976c8;
    }
  }
  else {
    if (((ulonglong)pppppppbVar22 & 0x7fffffffffffffff) == 1) {
      local_110 = 2;
      local_107 = pppppppbVar14;
      local_10b = 0xffffffff;
    }
    else {
      local_10b = (undefined4)((uint7)uStack_97 >> 0x18);
      local_110 = 3;
      local_107 = local_80;
    }
    local_10f = (undefined4)CONCAT71(uStack_97,local_98);
  }
  uVar20 = local_58[2];
  uVar21 = 9;
  if (uVar20 >> 0x20 == 0) {
    _local_e8 = (byte *******)CONCAT71(stack0xffffffffffffff19,1);
    local_49 = 1;
    uVar17 = (ulonglong)param_5;
    uVar7 = FUN_180196b50(local_58,uVar17,local_e8,local_68,pppppppbVar11);
    local_a8 = local_58[8];
    _local_e8 = (byte *******)*local_58;
    uStack_e0 = (undefined4)local_58[1];
    uStack_dc = *(undefined4 *)((longlong)local_58 + 0xc);
    local_d8 = (undefined4)local_58[2];
    uStack_d4 = *(undefined4 *)((longlong)local_58 + 0x14);
    uStack_d0 = (undefined4)local_58[3];
    uStack_cc = *(undefined4 *)((longlong)local_58 + 0x1c);
    local_c8 = (undefined4)local_58[4];
    uStack_c4 = *(undefined4 *)((longlong)local_58 + 0x24);
    uStack_c0 = (undefined4)local_58[5];
    uStack_bc = *(undefined4 *)((longlong)local_58 + 0x2c);
    local_b8 = (undefined4)local_58[6];
    uStack_b4 = *(undefined4 *)((longlong)local_58 + 0x34);
    uStack_b0 = (undefined4)local_58[7];
    uStack_ac = *(undefined4 *)((longlong)local_58 + 0x3c);
    local_49 = 0;
    FUN_180198070(local_f0,local_e8,param_5,param_6,uVar18,(int)uVar5,(int)local_88,&local_110,
                  uVar16,(short)pppppppbVar12,(int)uVar20,uVar7,uVar17);
    return;
  }
LAB_1801976c8:
  *(undefined1 *)(local_f0 + 1) = uVar21;
  *local_f0 = 0x8000000000000000;
  if (*local_58 != 0) {
    thunk_FUN_1801d3330(local_58[1],*local_58,1);
  }
  return;
}


