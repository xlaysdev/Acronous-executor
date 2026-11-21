/* FUN_18002aa80 @ 18002aa80 */

longlong *
FUN_18002aa80(longlong *param_1,longlong *param_2,undefined8 *param_3,undefined8 *param_4,
             longlong *param_5)

{
  ushort uVar1;
  ushort uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  void *pvVar8;
  void *_Dst;
  void *pvVar9;
  ulonglong uVar10;
  void *pvVar11;
  longlong lVar12;
  longlong lVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  longlong lVar17;
  short sVar18;
  ulonglong uVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  longlong lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  void *pvVar26;
  longlong lVar27;
  longlong *plVar28;
  longlong lVar29;
  undefined8 *puVar30;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  undefined4 uStack_19c;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  ulonglong local_78;
  ulonglong local_60;
  ulonglong local_50;
  
  pvVar11 = (void *)*param_2;
  uVar1 = *(ushort *)((longlong)pvVar11 + 0x272);
  uVar19 = (ulonglong)uVar1;
  if (uVar19 < 0xb) {
    local_78 = param_2[2];
    uVar16 = local_78 + 1;
    puVar30 = (undefined8 *)(local_78 * 0x18 + 0x168 + (longlong)pvVar11);
    if (uVar19 < uVar16) {
      puVar30[2] = param_3[2];
      uVar22 = param_3[1];
      *puVar30 = *param_3;
      puVar30[1] = uVar22;
      local_148 = *param_4;
      uStack_140 = param_4[1];
      local_138 = param_4[2];
      uStack_130 = param_4[3];
    }
    else {
      memmove((void *)((longlong)pvVar11 + uVar16 * 0x18 + 0x168),puVar30,(uVar19 - local_78) * 0x18
             );
      uVar22 = param_3[1];
      *puVar30 = *param_3;
      puVar30[1] = uVar22;
      puVar30[2] = param_3[2];
      local_148 = *param_4;
      uStack_140 = param_4[1];
      local_138 = param_4[2];
      uStack_130 = param_4[3];
      memmove((void *)(uVar16 * 0x20 + (longlong)pvVar11),
              (void *)(local_78 * 0x20 + (longlong)pvVar11),(uVar19 - local_78) * 0x20);
    }
    puVar30 = (undefined8 *)((longlong)pvVar11 + local_78 * 0x20 + 0x10);
    *puVar30 = local_138;
    puVar30[1] = uStack_130;
    puVar30 = (undefined8 *)((longlong)pvVar11 + local_78 * 0x20);
    *puVar30 = local_148;
    puVar30[1] = uStack_140;
    *(ushort *)((longlong)pvVar11 + 0x272) = uVar1 + 1;
    lVar12 = param_2[1];
    pvVar26 = pvVar11;
  }
  else {
    local_78 = param_2[2];
    if (local_78 < 5) {
      uVar19 = 4;
      bVar7 = false;
    }
    else if (local_78 == 5) {
      bVar7 = false;
      uVar19 = 5;
    }
    else if (local_78 == 6) {
      uVar19 = 5;
      bVar7 = true;
      local_78 = 0;
    }
    else {
      local_78 = local_78 - 7;
      uVar19 = 6;
      bVar7 = true;
    }
    lVar29 = param_2[1];
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(0x278,8);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x278);
    }
    *(undefined8 *)((longlong)_Dst + 0x160) = 0;
    uVar16 = ~uVar19 + (ulonglong)*(ushort *)((longlong)pvVar11 + 0x272);
    *(short *)((longlong)_Dst + 0x272) = (short)uVar16;
    lVar17 = *(longlong *)((longlong)pvVar11 + uVar19 * 0x18 + 0x168);
    uVar22 = *(undefined8 *)((longlong)pvVar11 + uVar19 * 0x18 + 0x170);
    uVar24 = *(undefined8 *)((longlong)pvVar11 + uVar19 * 0x18 + 0x178);
    if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar16,0xb,&PTR_s_C__Users_burne__rustup_toolchain_180205b20);
    }
    puVar30 = (undefined8 *)(uVar19 * 0x20 + (longlong)pvVar11);
    memcpy((void *)((longlong)_Dst + 0x168),
           (void *)((longlong)pvVar11 + (uVar19 + 1) * 0x18 + 0x168),uVar16 * 0x18);
    memcpy(_Dst,(void *)((uVar19 + 1) * 0x20 + (longlong)pvVar11),uVar16 * 0x20);
    *(short *)((longlong)pvVar11 + 0x272) = (short)uVar19;
    uVar21 = *puVar30;
    uVar25 = puVar30[1];
    uVar3 = puVar30[2];
    uVar4 = puVar30[3];
    lVar12 = 0;
    pvVar26 = _Dst;
    if (!bVar7) {
      lVar12 = lVar29;
      pvVar26 = pvVar11;
    }
    uVar1 = *(ushort *)((longlong)pvVar26 + 0x272);
    puVar30 = (undefined8 *)((longlong)pvVar26 + local_78 * 0x18 + 0x168);
    if (local_78 < uVar1) {
      iVar14 = (uint)uVar1 - (int)local_78;
      memmove((void *)((longlong)pvVar26 + (local_78 + 1) * 0x18 + 0x168),puVar30,
              (ulonglong)(uint)(iVar14 * 8) * 3);
      uVar5 = param_3[1];
      *puVar30 = *param_3;
      *(undefined8 *)((longlong)pvVar26 + local_78 * 0x18 + 0x170) = uVar5;
      *(undefined8 *)((longlong)pvVar26 + local_78 * 0x18 + 0x178) = param_3[2];
      local_148 = *param_4;
      uStack_140 = param_4[1];
      local_138 = param_4[2];
      uStack_130 = param_4[3];
      memmove((void *)((local_78 + 1) * 0x20 + (longlong)pvVar26),
              (void *)(local_78 * 0x20 + (longlong)pvVar26),(ulonglong)(uint)(iVar14 * 0x20));
    }
    else {
      *(undefined8 *)((longlong)pvVar26 + local_78 * 0x18 + 0x178) = param_3[2];
      uVar5 = param_3[1];
      *puVar30 = *param_3;
      *(undefined8 *)((longlong)pvVar26 + local_78 * 0x18 + 0x170) = uVar5;
      local_148 = *param_4;
      uStack_140 = param_4[1];
      local_138 = param_4[2];
      uStack_130 = param_4[3];
    }
    puVar30 = (undefined8 *)((longlong)pvVar26 + local_78 * 0x20 + 0x10);
    *puVar30 = local_138;
    puVar30[1] = uStack_130;
    puVar30 = (undefined8 *)((longlong)pvVar26 + local_78 * 0x20);
    *puVar30 = local_148;
    puVar30[1] = uStack_140;
    *(ushort *)((longlong)pvVar26 + 0x272) = uVar1 + 1;
    if (!SBORROW8(0,lVar17)) {
      local_198 = (undefined4)uVar21;
      uStack_194 = (undefined4)((ulonglong)uVar21 >> 0x20);
      uStack_190 = (undefined4)uVar25;
      uStack_18c = (undefined4)((ulonglong)uVar25 >> 0x20);
      local_188 = (undefined4)uVar3;
      uStack_184 = (undefined4)((ulonglong)uVar3 >> 0x20);
      uStack_180 = (undefined4)uVar4;
      uStack_17c = (undefined4)((ulonglong)uVar4 >> 0x20);
      local_b8 = local_188;
      uStack_b4 = uStack_184;
      uStack_b0 = uStack_180;
      uStack_ac = uStack_17c;
      local_c8 = local_198;
      uStack_c4 = uStack_194;
      uStack_c0 = uStack_190;
      uStack_bc = uStack_18c;
      if (*(void **)((longlong)pvVar11 + 0x160) == (void *)0x0) {
        lVar13 = 0;
      }
      else {
        lVar13 = 0;
        pvVar8 = *(void **)((longlong)pvVar11 + 0x160);
        pvVar20 = _Dst;
        uVar21 = uVar24;
        uVar25 = uVar22;
        lVar27 = lVar17;
        do {
          pvVar9 = pvVar8;
          if (lVar13 != lVar29) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: edge.height == self.node.height - 1",0x35,
                          &PTR_s_C__Users_burne__rustup_toolchain_180205b88);
          }
          uVar1 = *(ushort *)((longlong)pvVar11 + 0x270);
          local_50 = (ulonglong)uVar1;
          uVar2 = *(ushort *)((longlong)pvVar9 + 0x272);
          uVar19 = (ulonglong)uVar2;
          if (uVar19 < 0xb) {
            lVar29 = local_50 + 1;
            plVar28 = (longlong *)((longlong)pvVar9 + local_50 * 0x18 + 0x168);
            if (uVar1 < uVar2) {
              lVar17 = uVar19 - local_50;
              memmove((void *)((longlong)pvVar9 + lVar29 * 0x18 + 0x168),plVar28,lVar17 * 0x18);
              *plVar28 = lVar27;
              *(undefined8 *)((longlong)pvVar9 + local_50 * 0x18 + 0x170) = uVar25;
              *(undefined8 *)((longlong)pvVar9 + local_50 * 0x18 + 0x178) = uVar21;
              lVar13 = (ulonglong)uVar1 * 0x20;
              memmove((void *)((ulonglong)((uint)lVar29 << 5) + (longlong)pvVar9),
                      (void *)((longlong)pvVar9 + lVar13),lVar17 * 0x20);
              *(undefined8 *)((longlong)pvVar9 + lVar13) = CONCAT44(uStack_c4,local_c8);
              ((undefined8 *)((longlong)pvVar9 + lVar13))[1] = CONCAT44(uStack_bc,uStack_c0);
              puVar30 = (undefined8 *)((longlong)pvVar9 + lVar13 + 0x10);
              *puVar30 = CONCAT44(uStack_b4,local_b8);
              puVar30[1] = CONCAT44(uStack_ac,uStack_b0);
              memmove((void *)((longlong)pvVar9 + local_50 * 8 + 0x288),
                      (void *)((longlong)pvVar9 + lVar29 * 8 + 0x278),lVar17 * 8);
            }
            else {
              *plVar28 = lVar27;
              *(undefined8 *)((longlong)pvVar9 + local_50 * 0x18 + 0x170) = uVar25;
              *(undefined8 *)((longlong)pvVar9 + local_50 * 0x18 + 0x178) = uVar21;
              puVar30 = (undefined8 *)((longlong)pvVar9 + (ulonglong)uVar1 * 0x20 + 0x10);
              *puVar30 = CONCAT44(uStack_b4,local_b8);
              puVar30[1] = CONCAT44(uStack_ac,uStack_b0);
              puVar30 = (undefined8 *)((longlong)pvVar9 + (ulonglong)uVar1 * 0x20);
              *puVar30 = CONCAT44(uStack_c4,local_c8);
              puVar30[1] = CONCAT44(uStack_bc,uStack_c0);
            }
            *(void **)((longlong)pvVar9 + local_50 * 8 + 0x280) = pvVar20;
            *(ushort *)((longlong)pvVar9 + 0x272) = uVar2 + 1;
            if ((uint)lVar29 < (uint)(uVar19 + 2)) {
              uVar15 = ((uint)uVar2 - (uint)uVar1) + 1 & 3;
              if (uVar15 != 0) {
                uVar16 = 0;
                do {
                  lVar17 = *(longlong *)((longlong)pvVar9 + uVar16 * 8 + local_50 * 8 + 0x280);
                  *(void **)(lVar17 + 0x160) = pvVar9;
                  *(short *)(lVar17 + 0x270) = (short)lVar29 + (short)uVar16;
                  uVar16 = uVar16 + 1;
                } while (uVar15 != uVar16);
                lVar29 = lVar29 + uVar16;
              }
              if (2 < uVar19 - local_50) {
                do {
                  lVar17 = *(longlong *)((longlong)pvVar9 + lVar29 * 8 + 0x278);
                  *(void **)(lVar17 + 0x160) = pvVar9;
                  sVar18 = (short)lVar29;
                  *(short *)(lVar17 + 0x270) = sVar18;
                  lVar17 = *(longlong *)((longlong)pvVar9 + lVar29 * 8 + 0x280);
                  *(void **)(lVar17 + 0x160) = pvVar9;
                  *(short *)(lVar17 + 0x270) = sVar18 + 1;
                  lVar17 = *(longlong *)((longlong)pvVar9 + lVar29 * 8 + 0x288);
                  *(void **)(lVar17 + 0x160) = pvVar9;
                  *(short *)(lVar17 + 0x270) = sVar18 + 2;
                  lVar17 = *(longlong *)((longlong)pvVar9 + lVar29 * 8 + 0x290);
                  *(void **)(lVar17 + 0x160) = pvVar9;
                  *(short *)(lVar17 + 0x270) = sVar18 + 3;
                  lVar29 = lVar29 + 4;
                } while (lVar29 != uVar19 + 2);
              }
            }
LAB_18002b75a:
            *param_1 = (longlong)pvVar26;
            param_1[1] = lVar12;
            param_1[2] = local_78;
            return param_1;
          }
          if (uVar1 < 5) {
            local_60 = 4;
            bVar7 = false;
          }
          else if (uVar1 == 5) {
            bVar7 = false;
            local_60 = 5;
          }
          else if (uVar1 == 6) {
            bVar7 = true;
            local_60 = 5;
            local_50 = 0;
          }
          else {
            local_50 = local_50 - 7;
            bVar7 = true;
            local_60 = 6;
          }
          FUN_180027490();
          _Dst = (void *)thunk_FUN_1801d32d0(0x2d8,8);
          if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x2d8);
          }
          *(undefined8 *)((longlong)_Dst + 0x160) = 0;
          *(undefined2 *)((longlong)_Dst + 0x272) = 0;
          uVar16 = ~local_60 + (ulonglong)*(ushort *)((longlong)pvVar9 + 0x272);
          *(short *)((longlong)_Dst + 0x272) = (short)uVar16;
          lVar17 = *(longlong *)((longlong)pvVar9 + local_60 * 0x18 + 0x168);
          uVar22 = *(undefined8 *)((longlong)pvVar9 + local_60 * 0x18 + 0x170);
          uVar24 = *(undefined8 *)((longlong)pvVar9 + local_60 * 0x18 + 0x178);
          uVar19 = (ulonglong)(uint)((int)local_60 << 5);
          puVar30 = (undefined8 *)((longlong)pvVar9 + uVar19);
          uVar6 = *puVar30;
          uVar3 = puVar30[1];
          puVar30 = (undefined8 *)((longlong)pvVar9 + uVar19 + 0x10);
          uVar4 = *puVar30;
          uVar5 = puVar30[1];
          if (0xb < uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar16,0xb,&PTR_s_C__Users_burne__rustup_toolchain_180205b20);
          }
          memcpy((void *)((longlong)_Dst + 0x168),
                 (void *)((longlong)pvVar9 + (local_60 + 1) * 0x18 + 0x168),uVar16 * 0x18);
          memcpy(_Dst,(void *)((ulonglong)(uint)((int)(local_60 + 1) << 5) + (longlong)pvVar9),
                 uVar16 * 0x20);
          *(short *)((longlong)pvVar9 + 0x272) = (short)local_60;
          uVar19 = (ulonglong)*(ushort *)((longlong)_Dst + 0x272);
          if (0xb < uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar19 + 1,0xc,&PTR_s_C__Users_burne__rustup_toolchain_180205b38);
          }
          iVar14 = (int)(uVar19 + 1);
          if ((uint)uVar2 - (int)local_60 != iVar14) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0(&DAT_180205ae0,0x28,&PTR_s_C__Users_burne__rustup_toolchain_180205b08);
          }
          lVar13 = lVar29 + 1;
          memcpy((void *)((longlong)_Dst + 0x278),(void *)((longlong)pvVar9 + local_60 * 8 + 0x280),
                 (ulonglong)(uint)(iVar14 << 3));
          uVar16 = 0;
          do {
            uVar10 = uVar16 + (uVar16 < uVar19);
            lVar29 = *(longlong *)((longlong)_Dst + uVar16 * 8 + 0x278);
            *(void **)(lVar29 + 0x160) = _Dst;
            *(short *)(lVar29 + 0x270) = (short)uVar16;
            if (uVar19 <= uVar16) break;
            uVar16 = uVar10;
          } while (uVar10 <= uVar19);
          pvVar11 = _Dst;
          if (!bVar7) {
            pvVar11 = pvVar9;
          }
          uVar1 = *(ushort *)((longlong)pvVar11 + 0x272);
          uVar16 = (ulonglong)uVar1;
          uVar19 = local_50 + 1;
          plVar28 = (longlong *)((longlong)pvVar11 + local_50 * 0x18 + 0x168);
          if (local_50 < uVar16) {
            iVar14 = (uint)uVar1 - (int)local_50;
            uVar10 = (ulonglong)(uint)(iVar14 * 8);
            memmove((void *)((longlong)pvVar11 + uVar19 * 0x18 + 0x168),plVar28,uVar10 * 3);
            *plVar28 = lVar27;
            *(undefined8 *)((longlong)pvVar11 + local_50 * 0x18 + 0x170) = uVar25;
            *(undefined8 *)((longlong)pvVar11 + local_50 * 0x18 + 0x178) = uVar21;
            lVar29 = local_50 * 0x20;
            memmove((void *)(uVar19 * 0x20 + (longlong)pvVar11),(void *)((longlong)pvVar11 + lVar29)
                    ,(ulonglong)(uint)(iVar14 * 0x20));
            *(undefined8 *)((longlong)pvVar11 + lVar29) = CONCAT44(uStack_c4,local_c8);
            ((undefined8 *)((longlong)pvVar11 + lVar29))[1] = CONCAT44(uStack_bc,uStack_c0);
            puVar30 = (undefined8 *)((longlong)pvVar11 + lVar29 + 0x10);
            *puVar30 = CONCAT44(uStack_b4,local_b8);
            puVar30[1] = CONCAT44(uStack_ac,uStack_b0);
            memmove((void *)((longlong)pvVar11 + local_50 * 8 + 0x288),
                    (void *)((longlong)pvVar11 + uVar19 * 8 + 0x278),uVar10);
          }
          else {
            *plVar28 = lVar27;
            *(undefined8 *)((longlong)pvVar11 + local_50 * 0x18 + 0x170) = uVar25;
            *(undefined8 *)((longlong)pvVar11 + local_50 * 0x18 + 0x178) = uVar21;
            puVar30 = (undefined8 *)((longlong)pvVar11 + local_50 * 0x20 + 0x10);
            *puVar30 = CONCAT44(uStack_b4,local_b8);
            puVar30[1] = CONCAT44(uStack_ac,uStack_b0);
            puVar30 = (undefined8 *)((longlong)pvVar11 + local_50 * 0x20);
            *puVar30 = CONCAT44(uStack_c4,local_c8);
            puVar30[1] = CONCAT44(uStack_bc,uStack_c0);
          }
          *(void **)((longlong)pvVar11 + local_50 * 8 + 0x280) = pvVar20;
          *(ushort *)((longlong)pvVar11 + 0x272) = uVar1 + 1;
          if (uVar19 < uVar16 + 2) {
            uVar15 = ((uint)uVar1 - (int)local_50) + 1 & 3;
            if (uVar15 != 0) {
              uVar10 = 0;
              do {
                lVar29 = *(longlong *)((longlong)pvVar11 + uVar10 * 8 + local_50 * 8 + 0x280);
                *(void **)(lVar29 + 0x160) = pvVar11;
                *(short *)(lVar29 + 0x270) = (short)uVar19 + (short)uVar10;
                uVar10 = uVar10 + 1;
              } while (uVar15 != uVar10);
              uVar19 = uVar19 + uVar10;
            }
            if (2 < uVar16 - local_50) {
              do {
                lVar29 = *(longlong *)((longlong)pvVar11 + uVar19 * 8 + 0x278);
                *(void **)(lVar29 + 0x160) = pvVar11;
                sVar18 = (short)uVar19;
                *(short *)(lVar29 + 0x270) = sVar18;
                lVar29 = *(longlong *)((longlong)pvVar11 + uVar19 * 8 + 0x280);
                *(void **)(lVar29 + 0x160) = pvVar11;
                *(short *)(lVar29 + 0x270) = sVar18 + 1;
                lVar29 = *(longlong *)((longlong)pvVar11 + uVar19 * 8 + 0x288);
                *(void **)(lVar29 + 0x160) = pvVar11;
                *(short *)(lVar29 + 0x270) = sVar18 + 2;
                lVar29 = *(longlong *)((longlong)pvVar11 + uVar19 * 8 + 0x290);
                *(void **)(lVar29 + 0x160) = pvVar11;
                *(short *)(lVar29 + 0x270) = sVar18 + 3;
                uVar19 = uVar19 + 4;
              } while (uVar19 != uVar16 + 2);
            }
          }
          if (SBORROW8(0,lVar17)) goto LAB_18002b75a;
          local_1b8 = (undefined4)uVar6;
          uStack_1b4 = (undefined4)((ulonglong)uVar6 >> 0x20);
          uStack_1b0 = (undefined4)uVar3;
          uStack_1ac = (undefined4)((ulonglong)uVar3 >> 0x20);
          local_1a8 = (undefined4)uVar4;
          uStack_1a4 = (undefined4)((ulonglong)uVar4 >> 0x20);
          uStack_1a0 = (undefined4)uVar5;
          uStack_19c = (undefined4)((ulonglong)uVar5 >> 0x20);
          local_b8 = local_1a8;
          uStack_b4 = uStack_1a4;
          uStack_b0 = uStack_1a0;
          uStack_ac = uStack_19c;
          local_c8 = local_1b8;
          uStack_c4 = uStack_1b4;
          uStack_c0 = uStack_1b0;
          uStack_bc = uStack_1ac;
          pvVar8 = *(void **)((longlong)pvVar9 + 0x160);
          pvVar11 = pvVar9;
          lVar29 = lVar13;
          pvVar20 = _Dst;
          uVar21 = uVar24;
          uVar25 = uVar22;
          lVar27 = lVar17;
        } while (*(void **)((longlong)pvVar9 + 0x160) != (void *)0x0);
      }
      param_5 = (longlong *)*param_5;
      lVar29 = *param_5;
      if (lVar29 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_1802059e0);
      }
      lVar27 = param_5[1];
      FUN_180027490();
      puVar30 = (undefined8 *)thunk_FUN_1801d32d0(0x2d8,8);
      if (puVar30 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x2d8);
      }
      puVar30[0x2c] = 0;
      *(undefined2 *)((longlong)puVar30 + 0x272) = 0;
      puVar30[0x4f] = lVar29;
      lVar23 = lVar27 + 1;
      if (lVar23 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__rustup_toolchain_180205ac8);
      }
      *(undefined8 **)(lVar29 + 0x160) = puVar30;
      *(undefined2 *)(lVar29 + 0x270) = 0;
      *param_5 = (longlong)puVar30;
      param_5[1] = lVar23;
      if (lVar13 != lVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: edge.height == self.height - 1",0x30,
                      &PTR_s_C__Users_burne__rustup_toolchain_180205ab0);
      }
      *(undefined2 *)((longlong)puVar30 + 0x272) = 1;
      puVar30[0x2d] = lVar17;
      puVar30[0x2e] = uVar22;
      puVar30[0x2f] = uVar24;
      *puVar30 = CONCAT44(uStack_c4,local_c8);
      puVar30[1] = CONCAT44(uStack_bc,uStack_c0);
      puVar30[2] = CONCAT44(uStack_b4,local_b8);
      puVar30[3] = CONCAT44(uStack_ac,uStack_b0);
      puVar30[0x50] = _Dst;
      *(undefined8 **)((longlong)_Dst + 0x160) = puVar30;
      *(undefined2 *)((longlong)_Dst + 0x270) = 1;
      *param_1 = (longlong)pvVar26;
      param_1[1] = lVar12;
      param_1[2] = local_78;
      return param_1;
    }
  }
  *param_1 = (longlong)pvVar26;
  param_1[1] = lVar12;
  param_1[2] = local_78;
  return param_1;
}


