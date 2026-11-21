/* FUN_180052400 @ 180052400 */

/* WARNING: Type propagation algorithm not settling */

undefined8 *
FUN_180052400(undefined8 *param_1,longlong *param_2,longlong *param_3,undefined8 param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte bVar8;
  ushort uVar9;
  ushort uVar10;
  longlong lVar11;
  char cVar12;
  int iVar13;
  byte *******_Buf2;
  ulonglong uVar14;
  longlong lVar15;
  byte *******pppppppbVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  ulonglong uVar19;
  longlong lVar20;
  longlong lVar21;
  undefined1 uVar22;
  undefined8 unaff_RBP;
  ulonglong uVar23;
  ulonglong uVar24;
  ushort uVar25;
  uint uVar26;
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  byte *******local_e0;
  uint local_d4;
  longlong local_d0;
  longlong *local_c8;
  undefined8 *local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined8 local_78;
  longlong local_68;
  ulonglong local_60;
  
  cVar12 = FUN_180053cd0(param_2);
  uVar22 = 3;
  if (cVar12 == '\0') {
    local_d0 = *param_2;
    local_c0 = param_1;
    if (local_d0 == 2) {
      local_98 = *(undefined1 (*) [16])(param_2 + 1);
      auVar27._0_8_ = local_98._0_8_;
      auVar27._8_4_ = local_98._0_4_;
      auVar27._12_4_ = local_98._4_4_;
      local_b8 = auVar27 ^ (undefined1  [16])s_uespemosarenegyl_180204b70;
      auVar28._0_8_ = local_98._8_8_;
      auVar28._8_4_ = local_98._8_4_;
      auVar28._12_4_ = local_98._12_4_;
      local_a8 = auVar28 ^ (undefined1  [16])s_modnarodsetybdet_180204b80;
      local_88 = (undefined1  [16])0x0;
      local_78 = 0;
      lVar11 = *param_3;
      local_e0 = (byte *******)(ulonglong)(lVar11 != 0);
      FUN_1800271e0(local_b8,&local_e0,8);
      if (lVar11 == 0) {
        _Buf2 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
        pppppppbVar16 = (byte *******)&local_e0;
        lVar20 = 8;
        local_e0 = _Buf2;
      }
      else {
        pppppppbVar16 = (byte *******)param_3[1];
        lVar20 = param_3[2];
        _Buf2 = pppppppbVar16;
      }
      FUN_1800271e0(local_b8,pppppppbVar16,lVar20);
      uVar24 = local_88._0_8_ << 0x38 | local_88._8_8_;
      uVar17 = local_a8._8_8_ ^ uVar24;
      uVar23 = local_b8._0_8_ + local_a8._0_8_;
      uVar14 = (local_a8._0_8_ << 0xd | (ulonglong)local_a8._0_8_ >> 0x33) ^ uVar23;
      uVar18 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ local_b8._8_8_ + uVar17;
      uVar19 = local_b8._8_8_ + uVar17 + uVar14;
      uVar23 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar18;
      uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar19;
      uVar17 = (uVar18 << 0x15 | uVar18 >> 0x2b) ^ uVar23;
      uVar23 = (uVar23 ^ uVar24) + uVar14;
      uVar18 = ((uVar19 << 0x20 | uVar19 >> 0x20) ^ 0xff) + uVar17;
      uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar23;
      uVar17 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ uVar18;
      uVar18 = uVar18 + uVar14;
      uVar19 = (uVar23 << 0x20 | uVar23 >> 0x20) + uVar17;
      uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar18;
      uVar17 = (uVar17 << 0x15 | uVar17 >> 0x2b) ^ uVar19;
      uVar19 = uVar19 + uVar14;
      uVar18 = (uVar18 << 0x20 | uVar18 >> 0x20) + uVar17;
      uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar19;
      uVar17 = (uVar17 << 0x10 | uVar17 >> 0x30) ^ uVar18;
      uVar18 = uVar18 + uVar14;
      uVar19 = (uVar19 << 0x20 | uVar19 >> 0x20) + uVar17;
      uVar14 = (uVar14 << 0x11 | uVar14 >> 0x2f) ^ uVar18;
      uVar17 = (uVar17 << 0x15 | uVar17 >> 0x2b) ^ uVar19;
      lVar20 = (uVar18 << 0x20 | uVar18 >> 0x20) + uVar17;
      uVar14 = (uVar14 << 0xd | uVar14 >> 0x33) ^ uVar19 + uVar14;
      lVar21 = lVar20 + uVar14;
      uVar26 = (uint)((ulonglong)lVar21 >> 0x20) ^ (uint)lVar21 ^
               ((uint)(uVar17 >> 0x10) ^ (uint)((ulonglong)lVar20 >> 0x20)) >> 0xb ^
               (uint)(uVar14 >> 0x2f);
      uVar14 = CONCAT71((int7)((ulonglong)unaff_RBP >> 8),lVar11 == 0) & 0xffffffff;
    }
    else {
      uVar26 = (*param_3 != 0 ^ 0x84222325) * 0xaef4a21;
      if (*param_3 == 0) {
        _Buf2 = (byte *******)(ulonglong)*(byte *)(param_3 + 1);
        uVar26 = (*(byte *)(param_3 + 1) ^ 0x281a39c5) * 0xaef4a21;
        uVar14 = CONCAT71((int7)((ulonglong)param_4 >> 8),1);
      }
      else {
        _Buf2 = (byte *******)param_3[1];
        uVar14 = param_3[2];
        if (uVar14 != 0) {
          uVar17 = uVar14 & 7;
          pppppppbVar16 = _Buf2;
          if (uVar17 != 0) {
            do {
              bVar8 = *(byte *)pppppppbVar16;
              pppppppbVar16 = (byte *******)((longlong)pppppppbVar16 + 1);
              uVar26 = (bVar8 ^ uVar26) * 0x1b3;
              uVar17 = uVar17 - 1;
            } while (uVar17 != 0);
          }
          if (7 < uVar14) {
            do {
              bVar8 = *(byte *)pppppppbVar16;
              pbVar1 = (byte *)((longlong)pppppppbVar16 + 1);
              pbVar2 = (byte *)((longlong)pppppppbVar16 + 2);
              pbVar3 = (byte *)((longlong)pppppppbVar16 + 3);
              pbVar4 = (byte *)((longlong)pppppppbVar16 + 4);
              pbVar5 = (byte *)((longlong)pppppppbVar16 + 5);
              pbVar6 = (byte *)((longlong)pppppppbVar16 + 6);
              pbVar7 = (byte *)((longlong)pppppppbVar16 + 7);
              pppppppbVar16 = pppppppbVar16 + 1;
              uVar26 = ((uint)*pbVar7 ^
                       ((uint)*pbVar6 ^
                       ((uint)*pbVar5 ^
                       ((uint)*pbVar4 ^
                       ((uint)*pbVar3 ^
                       ((uint)*pbVar2 ^ ((uint)*pbVar1 ^ (bVar8 ^ uVar26) * 0x1b3) * 0x1b3) * 0x1b3)
                       * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3) * 0x1b3;
            } while (pppppppbVar16 != (byte *******)((longlong)_Buf2 + uVar14));
          }
        }
        uVar14 = 0;
      }
    }
    uVar9 = *(ushort *)(param_2 + 0xb);
    uVar19 = (ulonglong)(uVar26 & 0x7fff & (uint)uVar9);
    uVar17 = param_2[10];
    lVar11 = param_2[9];
    lVar20 = param_2[4];
    uVar18 = param_2[5];
    uVar23 = 0;
    local_c8 = param_2;
    do {
      if (uVar17 <= uVar19) {
        uVar19 = 0;
      }
      if (uVar17 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar24 = (ulonglong)*(ushort *)(lVar11 + uVar19 * 4);
      uVar25 = (ushort)(uVar26 & 0x7fff);
      if ((uVar24 == 0xffff) ||
         (uVar10 = *(ushort *)(lVar11 + 2 + uVar19 * 4),
         ((int)uVar19 - (uint)(uVar10 & uVar9) & (uint)uVar9) < uVar23)) {
        uVar22 = (int)local_d0 != 2 && 0x1ff < uVar23;
        FUN_1801ae640(local_b8,param_3);
        *local_c0 = local_c8;
        local_c0[1] = local_b8._0_8_;
        local_c0[2] = local_b8._8_8_;
        local_c0[3] = local_a8._0_8_;
        local_c0[4] = local_a8._8_8_;
        local_c0[5] = uVar19;
        *(ushort *)(local_c0 + 6) = uVar25;
        param_1 = local_c0;
        break;
      }
      if (uVar10 == uVar25) {
        if (uVar18 <= uVar24) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar24,uVar18,&PTR_s_C__Users_burne__cargo_registry_s_180208e90);
        }
        lVar21 = *(longlong *)(lVar20 + 0x40 + uVar24 * 0x68);
        if ((bool)(char)uVar14 != (lVar21 != 0)) {
          lVar15 = uVar24 * 0x68 + lVar20;
          if (lVar21 == 0) {
            if (*(char *)(lVar15 + 0x48) == (char)_Buf2) goto LAB_180052838;
          }
          else if (*(size_t *)(lVar15 + 0x50) == param_3[2]) {
            _Buf2 = (byte *******)param_3[1];
            local_d4 = (uint)uVar14;
            local_68 = lVar20;
            local_60 = uVar18;
            iVar13 = memcmp(*(void **)(lVar15 + 0x48),_Buf2,*(size_t *)(lVar15 + 0x50));
            uVar14 = (ulonglong)local_d4;
            lVar20 = local_68;
            uVar18 = local_60;
            if (iVar13 == 0) goto LAB_180052838;
          }
        }
      }
      uVar23 = uVar23 + 1;
      uVar19 = uVar19 + 1;
    } while( true );
  }
LAB_1800528c1:
  *(undefined1 *)((longlong)param_1 + 0x32) = uVar22;
  return param_1;
LAB_180052838:
  *local_c0 = local_c8;
  local_c0[1] = uVar19;
  local_c0[2] = uVar24;
  uVar22 = 2;
  param_1 = local_c0;
  goto LAB_1800528c1;
}


