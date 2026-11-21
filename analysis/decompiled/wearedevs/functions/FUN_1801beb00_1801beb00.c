/* FUN_1801beb00 @ 1801beb00 */

undefined8 FUN_1801beb00(longlong *param_1,longlong param_2,longlong param_3,char *param_4)

{
  code *pcVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 uVar6;
  longlong lVar7;
  longlong *plVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  longlong *plVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  ulonglong uVar16;
  longlong lVar17;
  longlong local_3a0;
  undefined1 local_398 [216];
  undefined8 local_2c0;
  longlong local_248;
  int iStack_240;
  undefined4 uStack_23c;
  longlong local_238;
  undefined8 *local_230;
  longlong **local_228;
  char *local_220;
  longlong *local_218;
  undefined8 *local_210;
  longlong local_208;
  longlong local_200;
  longlong local_1f8;
  longlong local_1f0;
  longlong local_1e8;
  undefined8 local_1e0;
  longlong local_1c8;
  undefined8 local_1c0;
  longlong local_1b0;
  undefined8 local_1a8;
  longlong local_190;
  undefined8 local_188;
  longlong *local_150 [13];
  undefined8 local_e8;
  longlong local_e0;
  longlong *local_d8;
  longlong *local_d0;
  undefined8 local_c8;
  longlong local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  longlong local_a8;
  longlong local_a0;
  ulonglong local_98;
  longlong local_90;
  undefined8 local_88;
  longlong *local_80;
  longlong local_78;
  longlong *local_70;
  char *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2 == 0) {
    param_2 = 8;
    local_58 = (longlong *)&DAT_180286d28;
    param_3 = 0;
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    local_58 = (longlong *)&DAT_180286d58;
  }
  local_68 = param_4;
  local_60 = param_1;
  FUN_180027490();
  lVar7 = thunk_FUN_1801d32d0(0x80000);
  if (lVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0x80000);
  }
  local_a8 = 0x80000;
  local_98 = 0;
  uVar16 = 0x80000;
  local_a0 = lVar7;
  while( true ) {
    local_88 = (longlong *)((ulonglong)local_88 & 0xffffffff00000000);
    if (local_a8 - local_98 < uVar16) {
      FUN_1801f6a80(&local_a8,local_98,uVar16,1,1);
      lVar7 = local_a0;
    }
    lVar17 = lVar7;
    uVar5 = NtQuerySystemInformation(5,lVar7,uVar16 & 0xffffffff,&local_88);
    iVar9 = (int)lVar17;
    if (-1 < (int)uVar5) break;
    local_248 = FUN_1801c9620(uVar5 | 0x10000000);
    if (iVar9 != -0x2ffffffc) {
      iStack_240 = iVar9;
      if (local_248 != 0) {
        FUN_180111960(&local_248);
      }
      uVar11 = 0;
      if (local_a8 != 0) {
LAB_1801bf213:
        thunk_FUN_1801d3330(local_a0,local_a8,1);
      }
      return uVar11;
    }
    iStack_240 = 0xd0000004;
    uVar2 = uVar16 * 2;
    uVar16 = (ulonglong)((int)local_88 + 0x2800);
    if ((int)local_88 == 0) {
      uVar16 = uVar2;
    }
    if (local_248 != 0) {
      FUN_180111960(&local_248);
    }
  }
  local_c8 = 0;
  local_98 = uVar16;
  FUN_180027490();
  uStack_b8 = thunk_FUN_1801d32d0(4000,8);
  if (uStack_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,4000);
  }
  local_c0 = 500;
  local_b0 = 0;
  pcVar1 = *(code **)((longlong)local_58 + 0x28);
  lVar17 = 0;
  do {
    uVar5 = *(uint *)(lVar7 + lVar17);
    uVar11 = *(undefined8 *)(lVar7 + 0x50 + lVar17);
    local_49 = 1;
    cVar4 = (*pcVar1)(1,uVar11,param_2,param_3);
    lVar3 = local_b0;
    uVar10 = (undefined4)uVar11;
    if (cVar4 != '\0') {
      if (local_b0 == local_c0) {
        local_49 = 1;
        FUN_1801f88d0(&local_c0);
      }
      *(longlong *)(uStack_b8 + lVar3 * 8) = lVar7 + lVar17;
      local_b0 = lVar3 + 1;
    }
    plVar8 = local_60;
    lVar17 = lVar17 + (ulonglong)uVar5;
  } while (uVar5 != 0);
  plVar15 = local_60 + 7;
  local_d8 = plVar15;
  if (*local_68 == '\x01') {
    local_49 = 1;
    uVar10 = 0;
    FUN_1801b6e40();
    local_e0 = plVar8[2];
  }
  else {
    local_e0 = 0;
  }
  local_49 = 1;
  uVar6 = FUN_1801df620();
  local_88 = (longlong *)CONCAT44(uVar10,uVar6);
  local_49 = 1;
  FUN_1801df5d0(&local_248,&local_88,0xd53e8000,0x19db1de);
  if ((char)local_248 == '\0') {
    local_e8 = CONCAT44(uStack_23c,iStack_240);
  }
  else {
    local_e8 = 0;
  }
  local_238 = local_b0;
  local_248 = local_c0;
  iStack_240 = (int)uStack_b8;
  uStack_23c = uStack_b8._4_4_;
  local_88 = (longlong *)0x0;
  local_80 = (longlong *)&DAT_00000008;
  local_78 = 0;
  local_230 = &local_c8;
  local_228 = &local_d8;
  local_220 = local_68;
  local_218 = &local_e0;
  local_210 = &local_e8;
  FUN_1801badc0(&local_88,&local_248);
  lVar7 = local_78;
  local_90 = (longlong)local_88;
  plVar8 = local_80 + local_78 * 0x2b;
  local_88 = local_80;
  local_78 = local_90;
  local_60 = local_80;
  local_d0 = local_80;
  local_70 = plVar8;
  if (lVar7 != 0) {
    plVar12 = local_80;
    local_58 = plVar15;
    do {
      plVar13 = plVar12 + 0x2b;
      local_d0 = plVar13;
      local_80 = plVar13;
      if (*plVar12 == 2) goto LAB_1801bf179;
      local_3a0 = *plVar12;
      memcpy(local_398,plVar12 + 1,0x150);
      FUN_1801bb170(&local_248,plVar15,local_2c0,&local_3a0);
      if ((int)local_248 != 2) {
        if (local_238 != 0) {
          thunk_FUN_1801d3330(local_230,local_238,1);
        }
        if (local_208 != 0) {
          puVar14 = local_210 + 1;
          lVar7 = local_208;
          do {
            if (puVar14[-1] != 0) {
              thunk_FUN_1801d3330(*puVar14,puVar14[-1],1);
            }
            puVar14 = puVar14 + 4;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (local_218 != (longlong *)0x0) {
          thunk_FUN_1801d3330(local_210,(longlong)local_218 << 5,8);
        }
        if ((!SBORROW8(0,local_1e8)) && (local_1e8 != 0)) {
          thunk_FUN_1801d3330(local_1e0,local_1e8,1);
        }
        if ((!SBORROW8(0,local_1c8)) && (local_1c8 != 0)) {
          thunk_FUN_1801d3330(local_1c0,local_1c8,1);
        }
        if (local_1f0 != 0) {
          puVar14 = (undefined8 *)(local_1f8 + 8);
          lVar7 = local_1f0;
          do {
            if (puVar14[-1] != 0) {
              thunk_FUN_1801d3330(*puVar14,puVar14[-1],1);
            }
            puVar14 = puVar14 + 4;
            lVar7 = lVar7 + -1;
          } while (lVar7 != 0);
        }
        if (local_200 != 0) {
          thunk_FUN_1801d3330(local_1f8,local_200 << 5,8);
        }
        if ((!SBORROW8(0,local_1b0)) && (local_1b0 != 0)) {
          thunk_FUN_1801d3330(local_1a8,local_1b0,1);
        }
        if ((!SBORROW8(0,local_190)) && (local_190 != 0)) {
          thunk_FUN_1801d3330(local_188,local_190,1);
        }
        plVar15 = local_58;
        if (local_150[0] != (longlong *)0x0) {
          LOCK();
          *local_150[0] = *local_150[0] + -1;
          UNLOCK();
          if (*local_150[0] == 0) {
            FUN_1801b4f50(local_150);
          }
        }
      }
      plVar12 = plVar13;
    } while (plVar13 != plVar8);
    local_d0 = plVar8;
  }
LAB_1801bf179:
  local_68 = (char *)(((ulonglong)((longlong)plVar8 - (longlong)local_d0) >> 3) *
                     -0x7d05f417d05f417d);
  local_58 = (longlong *)0x0;
  plVar8 = local_d0;
  while ((longlong *)local_68 != local_58) {
    local_58 = (longlong *)((longlong)local_58 + 1);
    FUN_1801bab00(plVar8);
    plVar8 = plVar8 + 0x2b;
  }
  if (local_90 != 0) {
    thunk_FUN_1801d3330(local_60,local_90 * 0x158,8);
  }
  uVar11 = local_c8;
  if (local_a8 == 0) {
    return local_c8;
  }
  goto LAB_1801bf213;
}


