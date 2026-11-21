/* FUN_1801a26d0 @ 1801a26d0 */

undefined8
FUN_1801a26d0(undefined8 *param_1,longlong param_2,ulonglong param_3,longlong param_4,
             ulonglong param_5,undefined4 param_6,undefined4 param_7,char param_8,
             undefined1 *param_9)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  byte bVar3;
  uint *puVar4;
  longlong *plVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  ulonglong *puVar10;
  undefined1 *puVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  longlong lVar15;
  ulonglong uVar16;
  uint uVar17;
  undefined4 local_258 [2];
  undefined4 uStack_250;
  ulonglong local_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined8 local_1f8;
  undefined8 local_1f0;
  longlong local_1e8;
  longlong local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  uint local_188;
  undefined1 local_184;
  longlong local_180;
  ulonglong local_178;
  ulonglong *local_170;
  undefined1 local_168 [4];
  undefined1 local_164 [4];
  ulonglong local_160;
  undefined1 *local_158;
  ulonglong local_120;
  uint local_118;
  uint local_114;
  uint *local_110;
  uint *local_108;
  longlong *local_100;
  ulonglong local_b8;
  uint local_b0;
  byte local_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  uint local_98;
  uint local_94;
  ulonglong *local_90;
  uint local_84;
  longlong local_80;
  uint local_74;
  longlong local_70;
  ulonglong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_258[0] = param_6;
  uStack_250 = param_7;
  local_1e0 = param_4 + param_5 * 4;
  local_1d8 = *param_1;
  puVar1 = (undefined8 *)param_1[1];
  puVar2 = (undefined8 *)param_1[2];
  local_1d0 = *puVar1;
  local_1c8 = puVar1[1];
  local_1c0 = puVar1[2];
  local_1b8 = puVar1[3];
  if (puVar2 == (undefined8 *)0x0) {
    local_1a0 = 1;
    local_1a8 = 0;
    local_1b0 = 1;
    local_198 = 0;
  }
  else {
    local_1b0 = *puVar2;
    local_1a8 = puVar2[1];
    local_1a0 = puVar2[2];
    local_198 = puVar2[3];
  }
  local_240 = local_240 & 0xffffffff00000000;
  local_1f8 = 0;
  local_190 = 0;
  local_188 = (uint)*(byte *)((longlong)param_1 + 0x1a);
  local_184 = 2;
  local_1f0 = 0x110000;
  local_1e8 = param_4;
  local_70 = param_2;
  FUN_1801a5c00(&local_240,0xffff,0);
  local_180 = param_4;
  local_178 = param_3;
  memcpy(local_168,&local_240,0xc0);
  local_a8 = *(undefined8 *)param_1[4];
  uStack_a0 = ((undefined8 *)param_1[4])[1];
  local_98 = 0x110000;
  local_94 = (uint)*(ushort *)(param_1 + 3);
  local_90 = (ulonglong *)local_258;
  local_68 = (ulonglong *)(local_70 + 0x3f8);
  local_80 = local_70 + 4;
  local_170 = (ulonglong *)(local_70 + 8);
  do {
    plVar5 = local_100;
    puVar4 = local_108;
    uVar7 = local_114;
    uVar6 = local_118;
    puVar11 = local_164;
    uVar16 = local_120;
    if (0x11 < local_120) {
      puVar11 = local_158;
      uVar16 = local_160;
    }
    if (local_b8 < uVar16) {
      uVar7 = *(uint *)(puVar11 + local_b8 * 4);
      local_b8 = local_b8 + 1;
      if (local_120 < 0x12) {
        puVar10 = &local_120;
        uVar16 = local_120;
      }
      else {
        puVar10 = &local_160;
        uVar16 = local_160;
      }
      if (local_b8 == uVar16) {
        *puVar10 = 0;
        local_b8 = 0;
      }
      uVar17 = uVar7 & 0xffffff;
      uVar6 = uVar17;
      if (0xffffff < uVar7) goto LAB_1801a2fc4;
      uVar6 = 0;
      uVar7 = 0;
      local_98 = uVar17;
    }
    else {
      local_118 = 0x110000;
      if (uVar6 == 0x110000) {
LAB_1801a30e4:
        if (0x11 < local_120) {
          thunk_FUN_1801d3330(local_158,local_120 << 2,4);
        }
        uVar16 = *local_68;
        if (0xfd < uVar16) {
          uVar16 = *(ulonglong *)(local_70 + 8);
          local_80 = *(longlong *)(local_70 + 0x10);
        }
        if (uVar16 < local_178) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(local_178,uVar16,uVar16,&PTR_s_C__Users_burne__cargo_registry_s_180281d88);
        }
        uVar13 = uVar16 - local_178;
        if (param_5 < uVar16 - local_178) {
          uVar13 = param_5;
        }
        if (uVar13 == 0) {
          return 0;
        }
        local_80 = local_80 + local_178 * 4;
        uVar16 = 0;
        do {
          if (*(int *)(local_80 + uVar16 * 4) != *(int *)(local_180 + uVar16 * 4)) {
            *(undefined4 *)(local_80 + uVar16 * 4) = 0xfffd;
            if (param_8 == '\0') {
              *param_9 = 1;
              return 0;
            }
            return 1;
          }
          uVar16 = uVar16 + 1;
        } while (uVar13 != uVar16);
        return 0;
      }
      if ((local_114 & 0x40000000) == 0 || uVar6 < local_94) {
        local_84 = local_b0;
        local_74 = (uint)local_ac;
        puVar9 = local_110;
        do {
          if (puVar9 == puVar4) goto LAB_1801a2fc4;
          local_110 = puVar9 + 1;
          uVar17 = *puVar9;
          if (uVar17 < local_84) {
            uVar8 = 0;
            goto LAB_1801a2a50;
          }
          uVar8 = 0xffff;
          if (*(char *)((longlong)plVar5 + 0x34) != '\0') {
            uVar8 = 0xfff;
          }
          if (uVar8 < uVar17) {
            uVar8 = FUN_1801a8300(plVar5,uVar17);
          }
          else {
            uVar8 = *(uint *)(plVar5[2] +
                             (ulonglong)
                             ((uVar17 & 0x3f) +
                             (uint)*(ushort *)(*plVar5 + (ulonglong)(uVar17 >> 6) * 2)) * 4);
          }
          if (uVar8 != 0xffffffff) goto LAB_1801a2a50;
          puVar9 = puVar9 + 1;
        } while (local_74 == 1);
        uVar8 = 0x4000fffd;
        if (local_74 == 0) {
          uVar8 = 0xffffffff;
          if (uVar17 < local_94) goto LAB_1801a2a58;
          local_118 = uVar17;
          local_114 = 0xffffffff;
        }
        else {
LAB_1801a2a50:
          if (uVar17 < local_94) {
LAB_1801a2a58:
            local_118 = uVar17;
            local_114 = uVar8;
            goto LAB_1801a2fc4;
          }
          local_118 = uVar17;
          local_114 = uVar8;
          if (-1 < (int)uVar8) goto LAB_1801a2fc4;
        }
      }
    }
    do {
      bVar14 = false;
      uVar17 = 0;
LAB_1801a2a98:
      uVar8 = local_98;
      local_98 = 0x110000;
      if (uVar8 != 0x110000) {
LAB_1801a2baa:
        uVar17 = uVar8;
        if (local_120 < 0x12) {
          puVar11 = local_164;
          if (local_120 <= local_b8) {
            puVar10 = &local_120;
            uVar16 = local_120;
            goto joined_r0x0001801a2d8a;
          }
LAB_1801a2bf7:
          uVar6 = *(uint *)(puVar11 + local_b8 * 4);
          uVar8 = uVar6 & 0xffffff;
          local_220 = (undefined4)local_a8;
          uStack_21c = local_a8._4_4_;
          uStack_218 = (undefined4)uStack_a0;
          uStack_214 = uStack_a0._4_4_;
          local_240 = 1;
          uVar7 = uVar8 - 0x1161;
          local_238 = 0;
          uStack_230 = 0;
          if (0x9e < uVar7) {
            uVar8 = FUN_1801a8d20(&local_240,uVar17);
            if (uVar8 == 0x110000) goto LAB_1801a2da7;
LAB_1801a2ba0:
            local_b8 = local_b8 + 1;
            goto LAB_1801a2baa;
          }
          if (uVar7 < 0x15) {
            if (0x12 < uVar17 - 0x1100) goto LAB_1801a2da7;
            uVar8 = (uVar17 - 0x1100) * 0x24c + uVar7 * 0x1c + 0xac00;
            goto LAB_1801a2ba0;
          }
          if (((uVar8 - 0x11a8 < 0x1b) && (uVar7 = uVar17 - 0xac00, uVar7 < 0x2ba4)) &&
             (uVar7 == (uVar7 / 0x1c) * 0x1c)) {
            uVar8 = (uVar17 + uVar8) - 0x11a7;
            goto LAB_1801a2ba0;
          }
LAB_1801a2da7:
          if (local_120 < 0x12) {
            puVar10 = &local_120;
            uVar16 = local_120;
          }
          else {
            puVar10 = &local_160;
            uVar16 = local_160;
          }
          if (uVar16 < local_b8) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: end <= len",0x1c,
                          &PTR_s_C__Users_burne__cargo_registry_s_180282180);
          }
          *puVar10 = 0;
          if (local_120 < 0x12) {
            if (uVar16 != local_b8) {
              puVar11 = local_164;
              uVar13 = local_120;
              if (local_b8 != local_120) goto LAB_1801a2e31;
              puVar10 = &local_120;
              goto LAB_1801a2e64;
            }
          }
          else if (uVar16 != local_b8) {
            if (local_b8 != local_160) {
              puVar11 = local_158;
              uVar13 = local_160;
LAB_1801a2e31:
              lVar15 = uVar16 - local_b8;
              memmove(puVar11 + uVar13 * 4,puVar11 + local_b8 * 4,lVar15 * 4);
              uVar16 = lVar15 + uVar13;
              puVar10 = &local_120;
              if (local_120 < 0x12) goto LAB_1801a2e64;
            }
            puVar10 = &local_160;
LAB_1801a2e64:
            *puVar10 = uVar16;
          }
          local_b8 = 0;
          if (0xffffff < uVar6) {
            uVar6 = uVar6 >> 0x18;
            uVar16 = 1;
            do {
              while( true ) {
                puVar11 = local_164;
                uVar13 = local_120;
                if (0x11 < local_120) {
                  puVar11 = local_158;
                  uVar13 = local_160;
                }
                if (uVar13 <= uVar16) goto LAB_1801a2d18;
                uVar7 = *(uint *)(puVar11 + uVar16 * 4);
                if (uVar7 < 0x1000000) goto LAB_1801a2fb7;
                if ((char)uVar6 == (char)(uVar7 >> 0x18)) break;
                local_220 = (undefined4)local_a8;
                uStack_21c = local_a8._4_4_;
                uStack_218 = (undefined4)uStack_a0;
                uStack_214 = uStack_a0._4_4_;
                local_240 = 1;
                local_238 = 0;
                uStack_230 = 0;
                uVar8 = FUN_1801a8d20(&local_240,uVar17,uVar7 & 0xffffff);
                uVar7 = uVar7 >> 0x18;
                if (uVar8 == 0x110000) goto LAB_1801a2f93;
                puVar10 = &local_120;
                puVar11 = local_164;
                uVar13 = local_120;
                if (0x11 < local_120) {
                  puVar10 = &local_160;
                  puVar11 = local_158;
                  uVar13 = local_160;
                }
                if (uVar13 <= uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_180201ec0("assertion failed: index < len",0x1d,
                                &PTR_s_C__Users_burne__cargo_registry_s_1802821b8);
                }
                *puVar10 = uVar13 - 1;
                memmove(puVar11 + uVar16 * 4,puVar11 + uVar16 * 4 + 4,(uVar13 + ~uVar16) * 4);
                uVar17 = uVar8;
              }
              uVar7 = uVar6;
LAB_1801a2f93:
              uVar6 = uVar7;
              uVar16 = uVar16 + 1;
            } while( true );
          }
          goto LAB_1801a2fb7;
        }
        if (local_b8 < local_160) {
          puVar11 = local_158;
          goto LAB_1801a2bf7;
        }
        puVar10 = &local_160;
        uVar16 = local_160;
joined_r0x0001801a2d8a:
        if (uVar16 != 0) {
          *puVar10 = 0;
        }
        local_b8 = 0;
LAB_1801a2d18:
        uVar6 = local_118;
        uVar16 = local_120;
        if (0x11 < local_120) {
          uVar16 = local_160;
        }
        if ((uVar16 != 0) || (local_118 = 0x110000, uVar6 == 0x110000)) goto LAB_1801a2fb7;
        if (uVar6 < local_94) goto LAB_1801a2f9e;
        bVar14 = true;
        uVar7 = local_114;
        if (-1 < (int)local_114) {
LAB_1801a2f9e:
          local_118 = uVar6;
          goto LAB_1801a2fb7;
        }
        goto LAB_1801a2a98;
      }
      uVar6 = FUN_1801a5c00(local_168,uVar6,uVar7);
      if (!bVar14) {
        uVar8 = uVar6;
        goto LAB_1801a2baa;
      }
      local_220 = (undefined4)local_a8;
      uStack_21c = local_a8._4_4_;
      uStack_218 = (undefined4)uStack_a0;
      uStack_214 = uStack_a0._4_4_;
      local_240 = 1;
      uVar7 = uVar6 - 0x1161;
      local_238 = 0;
      uStack_230 = 0;
      if (0x9e < uVar7) {
        uVar8 = FUN_1801a8d20(&local_240,uVar17,uVar6);
        if (uVar8 == 0x110000) goto LAB_1801a2fa6;
        goto LAB_1801a2baa;
      }
      if (uVar7 < 0x15) {
        if (uVar17 - 0x1100 < 0x13) {
          uVar8 = (uVar17 - 0x1100) * 0x24c + uVar7 * 0x1c + 0xac00;
          goto LAB_1801a2baa;
        }
      }
      else if (((uVar6 - 0x11a8 < 0x1b) && (uVar7 = uVar17 - 0xac00, uVar7 < 0x2ba4)) &&
              (uVar7 == (uVar7 / 0x1c) * 0x1c)) {
        uVar8 = (uVar17 + uVar6) - 0x11a7;
        goto LAB_1801a2baa;
      }
LAB_1801a2fa6:
      local_98 = uVar6;
LAB_1801a2fb7:
      uVar6 = uVar17;
      if (uVar17 == 0x110000) goto LAB_1801a30e4;
LAB_1801a2fc4:
      if (uVar6 < 0x80) {
        bVar3 = (byte)uVar6 & 0x3f;
        uVar12 = 1L << ((byte)uVar6 & 0x3f);
        uVar13 = uVar12;
        uVar16 = 0L << bVar3 | 1UL >> 0x40 - bVar3;
        if ((uVar6 & 0x40) != 0) {
          uVar13 = 0;
          uVar16 = uVar12;
        }
        if (!((uVar13 & *local_90) == 0 && (uVar16 & local_90[1]) == 0)) goto LAB_1801a300e;
LAB_1801a3069:
        uVar16 = *local_68;
        uVar13 = uVar16;
        if (0xfd < uVar16) goto LAB_1801a3075;
LAB_1801a303e:
        uVar16 = 0xfd;
        lVar15 = local_80;
        puVar10 = local_68;
      }
      else {
        if (uVar6 != 0xfffd) goto LAB_1801a3069;
LAB_1801a300e:
        if (param_8 != '\0') {
          if (0x11 < local_120) {
            thunk_FUN_1801d3330(local_158,local_120 << 2,4);
          }
          return 1;
        }
        *param_9 = 1;
        uVar6 = 0xfffd;
        uVar16 = *local_68;
        uVar13 = uVar16;
        if (uVar16 < 0xfe) goto LAB_1801a303e;
LAB_1801a3075:
        uVar13 = *(ulonglong *)(local_70 + 8);
        lVar15 = *(longlong *)(local_70 + 0x10);
        puVar10 = local_170;
      }
      if (uVar13 == uVar16) {
        FUN_1801fc110(local_70);
        uVar13 = *(ulonglong *)(local_70 + 8);
        lVar15 = *(longlong *)(local_70 + 0x10);
        puVar10 = local_170;
      }
      *(uint *)(lVar15 + uVar13 * 4) = uVar6;
      *puVar10 = *puVar10 + 1;
      uVar6 = 0;
      uVar7 = 0;
    } while (local_98 != 0x110000);
  } while( true );
}


