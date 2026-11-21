/* FUN_180108b20 @ 180108b20 */

void FUN_180108b20(longlong param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  uint uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  bool bVar15;
  bool bVar16;
  undefined8 local_1e8;
  undefined8 local_1e0;
  longlong local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined2 local_1a8;
  ulonglong local_1a0;
  longlong local_198;
  ulonglong local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong lStack_178;
  undefined1 local_170;
  uint7 uStack_16f;
  ulonglong local_168;
  ulonglong local_160;
  ulonglong local_150;
  longlong local_140;
  ulonglong local_138;
  longlong local_130;
  ulonglong local_128;
  longlong local_118;
  longlong local_110;
  undefined8 local_108;
  ulonglong local_100;
  ulonglong local_f8;
  ulonglong local_f0;
  longlong *local_e8;
  longlong local_e0;
  undefined8 local_d8;
  longlong local_d0;
  undefined *local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  longlong local_b0;
  ulonglong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  ulonglong local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  longlong local_60;
  ulonglong local_58;
  byte local_4d;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_188 = &DAT_18023b818;
  uStack_180 = 0;
  local_170 = 0;
  lStack_178 = 0x20019;
  FUN_18010d290(&local_78,&local_188,
                "Software\\Microsoft\\Windows\\CurrentVersion\\Internet Settings",0x3b);
  if ((int)uStack_70 != 0) {
    if (local_78 == (undefined *)0x0) {
      return;
    }
    FUN_180111960(&local_78);
    return;
  }
  local_80 = local_78;
  local_90 = param_1;
  FUN_180110ad0(&local_188,&local_80,"ProxyEnable",0xb);
  bVar15 = (int)uStack_180 != 0;
  bVar16 = (int)local_188 == 0;
  if (((int)uStack_180 != 0) && (local_188 != (undefined *)0x0)) {
    FUN_180111960(&local_188);
  }
  if (bVar15 || bVar16) goto LAB_18010946b;
  FUN_180110840(&local_c0,&local_80,"ProxyServer",0xb);
  if (SBORROW8(0,CONCAT44(uStack_bc,local_c0))) {
LAB_180108d1c:
    if (CONCAT44(uStack_b4,uStack_b8) != 0) {
      FUN_180111960(&uStack_b8);
    }
  }
  else {
    local_68 = local_b0;
    local_78 = (undefined *)CONCAT44(uStack_bc,local_c0);
    uStack_70 = CONCAT44(uStack_b4,uStack_b8);
    lVar9 = local_90;
    if (*(longlong *)(local_90 + 0x28) == 0) {
      FUN_1801ed500(&local_188,&local_78);
      lVar9 = local_90;
      plVar1 = (longlong *)(local_90 + 0x18);
      lVar12 = *plVar1;
      if (lVar12 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_90 + 0x20),lVar12,1);
      }
      *(longlong *)(lVar9 + 0x28) = lStack_178;
      *(int *)plVar1 = (int)local_188;
      *(undefined4 *)(lVar9 + 0x1c) = local_188._4_4_;
      *(int *)(lVar9 + 0x20) = (int)uStack_180;
      *(undefined4 *)(lVar9 + 0x24) = uStack_180._4_4_;
    }
    if (*(longlong *)(lVar9 + 0x40) == 0) {
      lStack_178 = local_68;
      local_188 = local_78;
      uStack_180 = uStack_70;
      lVar12 = *(longlong *)(lVar9 + 0x30);
      if (lVar12 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(lVar9 + 0x38),lVar12,1);
      }
      *(longlong *)(lVar9 + 0x40) = lStack_178;
      *(int *)(lVar9 + 0x30) = (int)local_188;
      *(undefined4 *)(lVar9 + 0x34) = local_188._4_4_;
      *(int *)(lVar9 + 0x38) = (int)uStack_180;
      *(undefined4 *)(lVar9 + 0x3c) = uStack_180._4_4_;
      lVar9 = CONCAT44(uStack_bc,local_c0);
    }
    else {
      if (local_78 != (undefined *)0x0) {
        thunk_FUN_1801d3330(uStack_70,local_78,1);
      }
      lVar9 = CONCAT44(uStack_bc,local_c0);
    }
    if (SBORROW8(0,lVar9)) goto LAB_180108d1c;
  }
  if (*(longlong *)(local_90 + 0x58) == 0) {
    FUN_180110840(&local_118,&local_80,"ProxyOverride",0xd);
    if (!SBORROW8(0,local_118)) {
      local_a0 = local_118;
      local_1e8 = 0;
      local_1e0 = local_108;
      local_e0 = local_110;
      local_1d8 = local_110;
      local_1d0 = local_108;
      local_1c8 = 0;
      local_1c0 = local_108;
      local_1b8 = 0x3b0000003b;
      local_1b0 = 1;
      local_1a8 = 1;
      FUN_18010cb70(&local_c0,&local_1e8);
      local_d8 = CONCAT44(uStack_b4,uStack_b8);
      FUN_1801111d0(&local_188,local_d8,local_b0,",",1);
      local_c8 = local_188;
      local_78 = (undefined *)0x0;
      uStack_70 = 1;
      local_68 = 0;
      local_a8 = uStack_180;
      local_198 = lStack_178;
      FUN_1801f2540(&local_188,uStack_180,lStack_178,
                    "*.C:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\core\\src\\str\\pattern.rs"
                    ,2);
      local_e8 = (longlong *)(local_90 + 0x48);
      local_4d = (byte)local_188;
      local_1a0 = CONCAT71(uStack_16f,local_170);
      local_100 = local_168;
      local_88 = local_160;
      local_60 = local_140;
      local_d0 = local_128 - 1;
      local_f0 = (ulonglong)uStack_16f << 8;
      local_f8 = 1;
      lVar9 = 0;
      local_4c = (uint)local_1a0;
      local_98 = 0;
      uVar13 = local_150;
      uVar8 = uStack_180;
      uVar14 = uStack_180;
      if (((ulonglong)local_188 & 1) != 0) goto LAB_180109064;
LAB_180108f03:
      if ((local_1a0 & 0x10000) == 0) {
        if (uVar8 != 0) {
          if (uVar8 < local_138) {
            if (*(char *)(local_60 + uVar8) < -0x40) goto LAB_180109549;
          }
          else if (uVar8 != local_138) goto LAB_180109549;
        }
        if (uVar8 == local_138) {
          if ((local_4c & 1) == 0) goto LAB_18010935c;
        }
        else {
          bVar5 = *(byte *)(local_60 + uVar8);
          uVar6 = (uint)bVar5;
          if ((char)bVar5 < '\0') {
            uVar10 = *(byte *)(local_60 + 1 + uVar8) & 0x3f;
            if (bVar5 < 0xe0) {
              uVar6 = (uVar6 & 0x1f) << 6 | uVar10;
            }
            else {
              uVar10 = *(byte *)(local_60 + 2 + uVar8) & 0x3f | uVar10 << 6;
              if (bVar5 < 0xf0) {
                uVar6 = (uVar6 & 0x1f) << 0xc | uVar10;
              }
              else {
                uVar6 = (uVar6 & 7) << 0x12 | *(byte *)(local_60 + 3 + uVar8) & 0x3f | uVar10 << 6;
              }
            }
          }
          if ((local_4c & 1) != 0) {
            local_4c = 0;
            uVar14 = uVar8;
            local_58 = uVar8;
            goto LAB_1801092c0;
          }
          lVar12 = 1;
          if ((0x7f < uVar6) && (lVar12 = 2, 0x7ff < uVar6)) {
            lVar12 = 4 - (ulonglong)(uVar6 < 0x10000);
          }
          uVar8 = lVar12 + uVar8;
          if (uVar8 != 0) {
            if (uVar8 < local_138) {
              if (*(char *)(local_60 + uVar8) < -0x40) goto LAB_180109549;
            }
            else if (uVar8 != local_138) {
LAB_180109549:
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(local_60,local_138,uVar8,local_138,&DAT_18023b950);
            }
          }
          if (uVar8 != local_138) {
            local_4c = 0;
            uVar14 = uVar8;
            local_58 = uVar8;
            goto LAB_1801092c0;
          }
        }
        local_4c = 0;
        local_58 = local_138;
        uVar8 = local_138;
        uVar14 = local_138;
LAB_1801092c0:
        uVar8 = uVar8 - local_98;
        if ((ulonglong)((longlong)local_78 - lVar9) < uVar8) {
          FUN_1801f6a80(&local_78,lVar9,uVar8,1,1);
          local_f8 = uStack_70;
          lVar9 = local_68;
        }
        memcpy((void *)(local_f8 + lVar9),(void *)(local_98 + local_a8),uVar8);
        lVar9 = lVar9 + uVar8;
        local_98 = local_58;
        uVar8 = uVar14;
        local_68 = lVar9;
        if ((local_4d & 1) != 0) {
LAB_180109064:
          uVar7 = local_88 + local_d0;
          uVar8 = local_88;
          if (uVar13 == 0xffffffffffffffff) {
            if (uVar7 < local_138) {
              local_190 = uVar14 - 1;
              local_58 = CONCAT71(local_58._1_7_,local_190 < local_128);
LAB_1801091fa:
              uVar13 = local_128;
              if ((local_100 >> ((ulonglong)*(byte *)(local_60 + uVar7) & 0x3f) & 1) == 0)
              goto LAB_1801091dd;
              lVar12 = 0;
              uVar13 = uVar8;
              do {
                if (local_128 <= uVar14 + lVar12) {
                  if (local_190 < local_128) {
                    uVar7 = uVar14;
                    goto LAB_180109270;
                  }
                  if (uVar14 != 0) {
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(local_190,local_128,&DAT_18023b8f8);
                  }
                  goto LAB_1801092a3;
                }
                if (local_138 <= uVar14 + uVar13) {
                  uVar13 = uVar8 + uVar14;
                  if (uVar8 + uVar14 < local_138) {
                    uVar13 = local_138;
                  }
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(uVar13,local_138,&DAT_18023b928);
                }
                pcVar3 = (char *)(local_130 + uVar14 + lVar12);
                lVar12 = lVar12 + 1;
                pcVar4 = (char *)(local_60 + uVar14 + uVar13);
                uVar7 = uVar13 + 1;
                uVar13 = uVar13 + 1;
              } while (*pcVar3 == *pcVar4);
              goto LAB_1801091e0;
            }
          }
          else if (uVar7 < local_138) {
LAB_1801090b0:
            do {
              if ((local_100 >> ((ulonglong)*(byte *)(local_60 + uVar7) & 0x3f) & 1) == 0) {
                uVar8 = uVar8 + local_128;
              }
              else {
                uVar7 = uVar14;
                if (uVar14 < uVar13) {
                  uVar7 = uVar13;
                }
                uVar11 = uVar7;
                do {
                  if (local_128 <= uVar11) {
                    uVar7 = uVar14;
                    goto LAB_180109130;
                  }
                  if (local_138 <= uVar8 + uVar11) {
                    uVar13 = uVar8 + uVar7;
                    if (uVar8 + uVar7 < local_138) {
                      uVar13 = local_138;
                    }
                    /* WARNING: Subroutine does not return */
                    FUN_180201d02(uVar13,local_138,&DAT_18023b928);
                  }
                  uVar2 = uVar11 + 1;
                  pcVar3 = (char *)(local_130 + uVar11);
                  pcVar4 = (char *)(local_60 + uVar8 + uVar11);
                  uVar11 = uVar2;
                } while (*pcVar3 == *pcVar4);
                uVar8 = (uVar8 - uVar14) + uVar2;
              }
              uVar7 = uVar8 + local_d0;
              uVar13 = 0;
            } while (uVar7 < local_138);
          }
          goto LAB_18010935c;
        }
        goto LAB_180108f03;
      }
LAB_18010935c:
      uVar8 = local_198 - local_98;
      if ((ulonglong)((longlong)local_78 - lVar9) < uVar8) {
        FUN_1801f6a80(&local_78,lVar9,uVar8,1,1);
        lVar9 = local_68;
      }
      else {
      }
      lVar12 = local_a0;
      plVar1 = local_e8;
      memcpy((void *)(uStack_70 + lVar9),(void *)(local_98 + local_a8),uVar8);
      lStack_178 = lVar9 + uVar8;
      local_188 = local_78;
      uStack_180 = uStack_70;
      if (*plVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_90 + 0x50),*plVar1,1);
      }
      plVar1[2] = lStack_178;
      *(int *)plVar1 = (int)local_188;
      *(undefined4 *)((longlong)plVar1 + 4) = local_188._4_4_;
      *(int *)(plVar1 + 1) = (int)uStack_180;
      *(undefined4 *)((longlong)plVar1 + 0xc) = uStack_180._4_4_;
      if (local_c8 != (undefined *)0x0) {
        thunk_FUN_1801d3330(local_a8,local_c8,1);
      }
      if (CONCAT44(uStack_bc,local_c0) != 0) {
        thunk_FUN_1801d3330(local_d8,CONCAT44(uStack_bc,local_c0) << 4,8);
      }
      if (lVar12 != 0) {
        thunk_FUN_1801d3330(local_e0,lVar12,1);
      }
      if (!SBORROW8(0,local_118)) goto LAB_18010946b;
    }
    if (local_110 != 0) {
      FUN_180111960(&local_110);
    }
  }
LAB_18010946b:
  FUN_180111770(&local_80);
  return;
  while( true ) {
    if (local_138 <= (uVar8 - 1) + uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar8 + uVar7 + -1,local_138,&DAT_18023b910);
    }
    pcVar4 = (char *)(local_130 + -1 + uVar7);
    pcVar3 = (char *)(local_60 + uVar8 + -1 + uVar7);
    uVar7 = uVar7 - 1;
    uVar13 = (byte)local_4c | local_f0;
    if (*pcVar4 != *pcVar3) break;
LAB_180109270:
    if (uVar7 == 0) goto LAB_1801092a3;
  }
LAB_1801091dd:
  uVar7 = uVar8 + uVar13;
LAB_1801091e0:
  uVar8 = uVar7;
  uVar7 = uVar8 + local_d0;
  if (local_138 <= uVar7) goto LAB_18010935c;
  goto LAB_1801091fa;
LAB_1801092a3:
  local_88 = uVar8 + local_128;
  uVar13 = 0xffffffffffffffff;
  local_58 = local_88;
  goto LAB_1801092c0;
  while( true ) {
    uVar7 = uVar7 - 1;
    if (local_128 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar7,local_128,&DAT_18023b8f8);
    }
    uVar11 = uVar7 + uVar8;
    if (local_138 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar11,local_138,&DAT_18023b910);
    }
    if (*(char *)(local_130 + uVar7) != *(char *)(local_60 + uVar11)) break;
LAB_180109130:
    if (uVar7 <= uVar13) {
      local_88 = uVar8 + local_128;
      uVar13 = 0;
      local_58 = local_88;
      goto LAB_1801092c0;
    }
  }
  uVar8 = uVar8 + ((byte)local_4c | local_f0);
  uVar7 = uVar8 + local_d0;
  uVar13 = local_128 - ((byte)local_4c | local_f0);
  if (local_138 <= uVar7) goto LAB_18010935c;
  goto LAB_1801090b0;
}


