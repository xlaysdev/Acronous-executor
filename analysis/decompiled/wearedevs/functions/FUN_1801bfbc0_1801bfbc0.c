/* FUN_1801bfbc0 @ 1801bfbc0 */

void FUN_1801bfbc0(undefined8 *param_1,undefined4 *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  code *pcVar7;
  undefined8 *puVar8;
  ulonglong uVar9;
  bool bVar10;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined8 *local_158;
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
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 *local_68;
  longlong local_60;
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
  lVar2 = *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x108);
  lVar3 = *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x100);
  uVar4 = *(ulonglong *)(*(longlong *)(param_3 + 0x118) + 0x108);
  lVar6 = *(longlong *)(param_3 + 0x128);
  local_60 = param_3;
  if (lVar6 <= (longlong)(uVar4 - *(longlong *)(*(longlong *)(param_3 + 0x118) + 0x100))) {
    local_53 = 1;
    FUN_1801fccf0(param_3 + 0x118,lVar6 * 2);
    lVar6 = *(longlong *)(local_60 + 0x128);
  }
  lVar5 = *(longlong *)(local_60 + 0x120);
  lVar6 = (lVar6 - 1U & uVar4) * 0x10;
  *(code **)(lVar5 + lVar6) = FUN_1801c05c0;
  *(undefined8 **)(lVar5 + 8 + lVar6) = &local_f8;
  *(ulonglong *)(*(longlong *)(local_60 + 0x118) + 0x108) = uVar4 + 1;
  lVar6 = *(longlong *)(local_60 + 0x110);
  do {
    uVar4 = *(ulonglong *)(lVar6 + 0x1f0);
    uVar9 = uVar4;
    if ((uVar4 >> 0x20 & 1) != 0) break;
    uVar9 = uVar4 | 0x100000000;
    LOCK();
    bVar10 = uVar4 == *(ulonglong *)(lVar6 + 0x1f0);
    if (bVar10) {
      *(ulonglong *)(lVar6 + 0x1f0) = uVar9;
    }
    UNLOCK();
  } while (!bVar10);
  if (((uVar4 & 0xffff) != 0) &&
     ((0 < lVar2 - lVar3 || (((uint)(uVar9 >> 0x10) & 0xffff) == ((uint)uVar4 & 0xffff))))) {
    local_53 = 1;
    FUN_1801fdf00(lVar6 + 0x1d8,1);
  }
  puVar8 = (undefined8 *)**(longlong **)(param_2 + 0xc);
  FUN_1801b8c90(&local_168,puVar8,
                CONCAT71((int7)((ulonglong)*(undefined8 *)(param_2 + 0x14) >> 8),1),
                **(undefined8 **)(param_2 + 0xe),(*(undefined8 **)(param_2 + 0xe))[1],param_2[0x10],
                param_2[0x12],*(undefined8 *)(param_2 + 0x14));
  local_78 = local_168;
  uStack_74 = uStack_164;
  uStack_70 = uStack_160;
  uStack_6c = uStack_15c;
  local_68 = local_158;
  puVar1 = (undefined8 *)(local_60 + 0x138);
  do {
    if (lStack_a0 == 3) {
LAB_1801bfe50:
      local_158 = local_68;
      local_168 = local_78;
      uStack_164 = uStack_74;
      uStack_160 = uStack_70;
      uStack_15c = uStack_6c;
      if (local_f8 != 1) {
        if (local_f8 == 2) {
          FUN_1801c22b0();
                    /* WARNING: Does not return */
          pcVar7 = (code *)invalidInstructionException();
          (*pcVar7)();
        }
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\job.rs"
                      ,0x28,&DAT_180286fe8);
      }
      local_170 = CONCAT44(uStack_dc,uStack_e0);
      param_1[2] = local_68;
      *param_1 = CONCAT44(uStack_74,local_78);
      param_1[1] = CONCAT44(uStack_6c,uStack_70);
      param_1[3] = CONCAT44(uStack_ec,uStack_f0);
      param_1[4] = CONCAT44(uStack_e4,local_e8);
LAB_1801bff35:
      param_1[5] = local_170;
      return;
    }
    local_51 = 1;
    local_52 = 1;
    pcVar7 = (code *)FUN_1801b9a50(param_3 + 0x118);
    local_148 = local_d8;
    uStack_144 = uStack_d4;
    uStack_140 = uStack_d0;
    uStack_13c = uStack_cc;
    local_138 = local_c8;
    uStack_134 = uStack_c4;
    uStack_130 = uStack_c0;
    uStack_12c = uStack_bc;
    local_118 = local_a8;
    lStack_110 = lStack_a0;
    local_108 = local_98;
    if (pcVar7 == (code *)0x0) {
      do {
        local_51 = 1;
        local_52 = 1;
        puVar8 = puVar1;
        FUN_1801b9b90(&local_168);
      } while (CONCAT44(uStack_164,local_168) == 2);
      local_148 = local_d8;
      uStack_144 = uStack_d4;
      uStack_140 = uStack_d0;
      uStack_13c = uStack_cc;
      local_138 = local_c8;
      uStack_134 = uStack_c4;
      uStack_130 = uStack_c0;
      uStack_12c = uStack_bc;
      local_118 = local_a8;
      lStack_110 = lStack_a0;
      local_108 = local_98;
      if (CONCAT44(uStack_164,local_168) == 0) {
        pcVar7 = (code *)0x0;
      }
      else {
        pcVar7 = (code *)CONCAT44(uStack_15c,uStack_160);
        puVar8 = local_158;
      }
    }
    local_d8 = local_148;
    uStack_d4 = uStack_144;
    uStack_d0 = uStack_140;
    uStack_cc = uStack_13c;
    local_c8 = local_138;
    uStack_c4 = uStack_134;
    uStack_c0 = uStack_130;
    uStack_bc = uStack_12c;
    local_a8 = local_118;
    lStack_a0 = lStack_110;
    local_98 = local_108;
    if (pcVar7 == (code *)0x0) {
      if (lStack_110 != 3) {
        local_51 = 1;
        local_52 = 1;
        FUN_1801fe2e0(local_60,&lStack_a0);
      }
      goto LAB_1801bfe50;
    }
    if (pcVar7 == FUN_1801c05c0 && &local_f8 == puVar8) {
      uStack_100 = CONCAT71(uStack_8f,uStack_90);
      local_128 = CONCAT44(uStack_b4,local_b8);
      uStack_120 = CONCAT44(uStack_ac,uStack_b0);
      local_f8._4_4_ = (undefined4)((ulonglong)local_f8 >> 0x20);
      local_168 = (undefined4)local_f8;
      uStack_164 = local_f8._4_4_;
      local_51 = 1;
      local_52 = 0;
      FUN_1801bfa10(&local_180,&local_168,1);
      param_1[2] = local_68;
      *param_1 = CONCAT44(uStack_74,local_78);
      param_1[1] = CONCAT44(uStack_6c,uStack_70);
      param_1[3] = local_180;
      param_1[4] = uStack_178;
      goto LAB_1801bff35;
    }
    local_51 = 1;
    local_52 = 1;
    (*pcVar7)(puVar8);
  } while( true );
}


