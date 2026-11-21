/* FUN_1801b9120 @ 1801b9120 */

void FUN_1801b9120(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  code *pcVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *puVar10;
  code *pcVar11;
  code *pcVar12;
  ulonglong uVar13;
  int iVar14;
  bool bVar15;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  longlong local_118;
  longlong lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
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
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong local_70;
  undefined8 *local_68;
  undefined8 *local_60;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  local_d8 = *param_2;
  uStack_d4 = param_2[1];
  uStack_d0 = param_2[2];
  uStack_cc = param_2[3];
  local_c8 = param_2[4];
  uStack_c4 = param_2[5];
  uStack_c0 = param_2[6];
  uStack_bc = param_2[7];
  local_b8 = param_2[8];
  uStack_b4 = param_2[9];
  uStack_b0 = param_2[10];
  uStack_ac = param_2[0xb];
  local_a8 = param_3 + 0x110;
  local_98 = *(undefined8 *)(param_3 + 0x100);
  lStack_a0 = 0;
  uStack_90 = 0;
  local_f8 = 0;
  lVar1 = *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x108);
  lVar7 = *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x100);
  uVar2 = *(ulonglong *)(*(longlong *)(param_3 + 0x118) + 0x108);
  lVar4 = *(longlong *)(param_3 + 0x128);
  local_70 = param_3;
  if (lVar4 <= (longlong)(uVar2 - *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x100))) {
    local_53 = 1;
    FUN_1801fccf0(param_3 + 0x118,lVar4 * 2);
    lVar4 = *(longlong *)(local_70 + 0x128);
  }
  lVar9 = *(longlong *)(local_70 + 0x120);
  lVar4 = (lVar4 - 1U & uVar2) * 0x10;
  *(code **)(lVar9 + lVar4) = FUN_1801c05c0;
  *(undefined8 **)(lVar9 + 8 + lVar4) = &local_f8;
  pcVar11 = (code *)(uVar2 + 1);
  *(code **)(*(longlong *)(local_70 + 0x118) + 0x108) = pcVar11;
  lVar4 = *(longlong *)(local_70 + 0x110);
  do {
    uVar2 = *(ulonglong *)(lVar4 + 0x1f0);
    uVar13 = uVar2;
    if ((uVar2 >> 0x20 & 1) != 0) break;
    uVar13 = uVar2 | 0x100000000;
    LOCK();
    bVar15 = uVar2 == *(ulonglong *)(lVar4 + 0x1f0);
    if (bVar15) {
      *(ulonglong *)(lVar4 + 0x1f0) = uVar13;
    }
    UNLOCK();
  } while (!bVar15);
  if (((uVar2 & 0xffff) != 0) &&
     ((0 < lVar1 - lVar7 || (((uint)(uVar13 >> 0x10) & 0xffff) == ((uint)uVar2 & 0xffff))))) {
    local_53 = 1;
    FUN_1801fdf00(lVar4 + 0x1d8,1);
  }
  puVar10 = (undefined8 *)**(ulonglong **)(param_2 + 0xc);
  local_68 = param_1;
  FUN_1801b8c90(&local_168,puVar10,0,**(undefined8 **)(param_2 + 0xe),
                (*(undefined8 **)(param_2 + 0xe))[1],param_2[0x10],param_2[0x12],
                *(undefined8 *)(param_2 + 0x14));
  local_88 = local_168;
  uStack_84 = uStack_164;
  uStack_80 = uStack_160;
  uStack_7c = uStack_15c;
  local_78 = local_158;
  do {
    if (lStack_a0 == 3) {
LAB_1801b95b4:
      local_158 = local_78;
      local_168 = local_88;
      uStack_164 = uStack_84;
      uStack_160 = uStack_80;
      uStack_15c = uStack_7c;
      if (local_f8 == 1) {
        local_68[2] = local_78;
        *local_68 = CONCAT44(uStack_84,local_88);
        local_68[1] = CONCAT44(uStack_7c,uStack_80);
        local_68[3] = CONCAT44(uStack_ec,uStack_f0);
        local_68[4] = CONCAT44(uStack_e4,local_e8);
        local_68[5] = CONCAT44(uStack_dc,uStack_e0);
        return;
      }
      if (local_f8 == 2) {
        FUN_1801c22b0();
                    /* WARNING: Does not return */
        pcVar11 = (code *)invalidInstructionException();
        (*pcVar11)();
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\job.rs"
                    ,0x28,&DAT_180286fe8);
    }
    local_51 = 1;
    local_52 = 1;
    pcVar5 = (code *)FUN_1801b9a50(param_3 + 0x118);
    pcVar12 = pcVar11;
    if (pcVar5 == (code *)0x0) {
      do {
        lVar1 = *(longlong *)(local_70 + 0x138);
        uVar2 = *(ulonglong *)(lVar1 + 0x100);
        local_51 = 1;
        local_52 = 1;
        plVar6 = (longlong *)FUN_1801c8690();
        if ((char)plVar6[1] == '\x01') {
LAB_1801b938c:
          uVar13 = *(ulonglong *)(*plVar6 + 0x818);
LAB_1801b9396:
          if (uVar13 != 0) {
            LOCK();
            UNLOCK();
          }
        }
        else {
          local_51 = 1;
          local_52 = 1;
          puVar10 = (undefined8 *)0x0;
          plVar6 = (longlong *)FUN_1801fd000(plVar6);
          if (plVar6 != (longlong *)0x0) goto LAB_1801b938c;
          local_51 = 1;
          local_52 = 1;
          uVar8 = FUN_1801c8660();
          local_51 = 1;
          local_52 = 1;
          lVar7 = FUN_1801c8b90(uVar8);
          uVar13 = *(ulonglong *)(lVar7 + 0x818);
          uVar3 = *(ulonglong *)(lVar7 + 0x820);
          *(ulonglong *)(lVar7 + 0x820) = uVar3 - 1;
          puVar10 = (undefined8 *)(uVar3 ^ 1 | uVar13);
          if (puVar10 != (undefined8 *)0x0) goto LAB_1801b9396;
          local_51 = 1;
          local_52 = 1;
          FUN_1801fe8b0(lVar7);
        }
        local_51 = 1;
        local_52 = 1;
        lVar7 = FUN_1801b9ce0();
        if ((longlong)(*(longlong *)(lVar1 + 0x108) - uVar2) < 1) {
          iVar14 = 0;
LAB_1801b9473:
          pcVar11 = pcVar12;
          if (lVar7 != 0) {
            lVar1 = *(longlong *)(lVar7 + 0x818);
            puVar10 = (undefined8 *)(lVar1 - 1);
            *(undefined8 **)(lVar7 + 0x818) = puVar10;
            if ((lVar1 == 1) &&
               (*(undefined8 *)(lVar7 + 0x880) = 0, *(longlong *)(lVar7 + 0x820) == 0))
            goto LAB_1801b9335;
          }
        }
        else {
          plVar6 = (longlong *)(*(ulonglong *)(lVar1 + 0x80) & 0xfffffffffffffff8);
          lVar4 = *plVar6;
          lVar9 = (plVar6[1] - 1U & uVar2) * 0x10;
          pcVar11 = *(code **)(lVar4 + lVar9);
          puVar10 = *(undefined8 **)(lVar4 + 8 + lVar9);
          iVar14 = 2;
          if (*(ulonglong *)(lVar1 + 0x80) != *(ulonglong *)(lVar1 + 0x80)) goto LAB_1801b9473;
          LOCK();
          bVar15 = uVar2 == *(ulonglong *)(lVar1 + 0x100);
          if (bVar15) {
            *(ulonglong *)(lVar1 + 0x100) = uVar2 + 1;
          }
          UNLOCK();
          if (!bVar15) goto LAB_1801b9473;
          local_60 = puVar10;
          if ((lVar7 == 0) ||
             ((lVar1 = *(longlong *)(lVar7 + 0x818), *(longlong *)(lVar7 + 0x818) = lVar1 + -1,
              lVar1 != 1 || (*(undefined8 *)(lVar7 + 0x880) = 0, *(longlong *)(lVar7 + 0x820) != 0))
             )) {
            pcVar5 = pcVar11;
            goto LAB_1801b955a;
          }
          iVar14 = 1;
          pcVar12 = pcVar11;
LAB_1801b9335:
          local_51 = 1;
          local_52 = 1;
          FUN_1801fe8b0();
          pcVar11 = pcVar12;
        }
        pcVar12 = pcVar11;
      } while (iVar14 == 2);
      if (iVar14 == 0) {
        pcVar5 = (code *)0x0;
      }
      else {
        puVar10 = local_60;
        pcVar5 = pcVar11;
      }
    }
LAB_1801b955a:
    if (pcVar5 == (code *)0x0) {
      if (lStack_a0 != 3) {
        local_51 = 1;
        local_52 = 1;
        FUN_1801fe2e0(local_70,&lStack_a0);
      }
      goto LAB_1801b95b4;
    }
    if (pcVar5 == FUN_1801c05c0 && &local_f8 == puVar10) {
      uStack_100 = CONCAT71(uStack_8f,uStack_90);
      local_108 = local_98;
      local_118 = local_a8;
      lStack_110 = lStack_a0;
      local_128 = CONCAT44(uStack_b4,local_b8);
      uStack_120 = CONCAT44(uStack_ac,uStack_b0);
      local_138 = local_c8;
      uStack_134 = uStack_c4;
      uStack_130 = uStack_c0;
      uStack_12c = uStack_bc;
      local_148 = local_d8;
      uStack_144 = uStack_d4;
      uStack_140 = uStack_d0;
      uStack_13c = uStack_cc;
      uStack_150 = uStack_e0;
      uStack_14c = uStack_dc;
      local_168 = (undefined4)local_f8;
      uStack_164 = local_f8._4_4_;
      uStack_160 = uStack_f0;
      uStack_15c = uStack_ec;
      local_51 = 1;
      local_52 = 0;
      FUN_1801bfa10(&local_180,&local_168,0);
      local_68[2] = local_78;
      *local_68 = CONCAT44(uStack_84,local_88);
      local_68[1] = CONCAT44(uStack_7c,uStack_80);
      local_68[3] = local_180;
      local_68[4] = uStack_178;
      local_68[5] = local_170;
      return;
    }
    local_51 = 1;
    local_52 = 1;
    (*pcVar5)(puVar10);
  } while( true );
}


