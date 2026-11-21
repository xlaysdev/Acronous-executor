/* FUN_1800831b0 @ 1800831b0 */

/* WARNING: Removing unreachable block (ram,0x00018008339d) */

undefined8 * FUN_1800831b0(undefined8 *param_1,longlong *param_2,ulonglong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong *plVar3;
  ulonglong uVar4;
  longlong *plVar5;
  void *pvVar6;
  size_t _Size;
  code *pcVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  longlong *plVar13;
  undefined8 uVar14;
  longlong in_R10;
  longlong in_R11;
  uint uVar15;
  undefined1 local_968 [424];
  ulonglong local_7c0;
  longlong *plStack_7b8;
  longlong local_7b0;
  longlong *plStack_7a8;
  longlong *local_7a0;
  longlong lStack_798;
  longlong local_790;
  longlong *local_788;
  undefined8 uStack_780;
  undefined8 local_778;
  undefined4 local_688;
  undefined4 uStack_684;
  undefined8 uStack_680;
  undefined **local_678;
  undefined8 local_670;
  undefined8 uStack_668;
  ulonglong local_390;
  longlong *plStack_388;
  longlong local_380;
  longlong *plStack_378;
  longlong *local_370;
  longlong lStack_368;
  longlong local_360;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  ulonglong local_158;
  ulonglong uStack_150;
  ulonglong local_148;
  ulonglong uStack_140;
  ulonglong uStack_138;
  longlong *plStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined **ppuStack_110;
  undefined **local_108;
  void *pvStack_100;
  ulonglong local_f8;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  undefined8 local_e8;
  undefined **ppuStack_e0;
  undefined **local_d8;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  ulonglong local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined **local_a8;
  longlong *plStack_a0;
  undefined1 local_98;
  undefined1 uStack_97;
  undefined6 uStack_96;
  ulonglong local_88;
  void *local_80;
  ulonglong local_78;
  void *local_70;
  undefined4 local_68;
  undefined3 uStack_64;
  longlong *local_60;
  ulonglong *local_58;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar3 = (longlong *)param_2[0x38];
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    lVar1 = *plVar3;
    *plVar3 = *plVar3 + 1;
    UNLOCK();
    if (*plVar3 == 0 || SCARRY8(lVar1,1) != *plVar3 < 0) goto LAB_180083835;
  }
  uVar4 = param_2[0x35];
  plVar13 = param_2;
  if (1 < uVar4) {
    plVar13 = (longlong *)param_2[0x36];
    LOCK();
    lVar1 = *plVar13;
    *plVar13 = *plVar13 + 1;
    UNLOCK();
    if (*plVar13 == 0 || SCARRY8(lVar1,1) != *plVar13 < 0) goto LAB_180083835;
    in_R11 = param_2[0x37];
  }
  lVar1 = param_2[0x3b];
  plVar5 = (longlong *)param_2[0x39];
  if (plVar5 != (longlong *)0x0) {
    LOCK();
    lVar2 = *plVar5;
    *plVar5 = *plVar5 + 1;
    UNLOCK();
    if (*plVar5 == 0 || SCARRY8(lVar2,1) != *plVar5 < 0) goto LAB_180083835;
    in_R10 = param_2[0x3a];
  }
  local_390 = uVar4;
  plStack_388 = plVar13;
  local_380 = in_R11;
  plStack_378 = plVar3;
  local_370 = plVar5;
  lStack_368 = in_R10;
  local_360 = lVar1;
  local_58 = param_3;
  FUN_1800e5640(&local_688,param_2);
  local_790 = local_360;
  local_7a0 = local_370;
  lStack_798 = lStack_368;
  local_7b0 = local_380;
  plStack_7a8 = plStack_378;
  local_7c0 = local_390;
  plStack_7b8 = plStack_388;
  memcpy(local_968,&local_688,0x1a8);
  memcpy(&local_390,param_2,0x1e0);
  memcpy(param_2,local_968,0x1e0);
  local_788 = (longlong *)param_2[0x3f];
  LOCK();
  lVar1 = *local_788;
  *local_788 = *local_788 + 1;
  UNLOCK();
  if (*local_788 == 0 || SCARRY8(lVar1,1) != *local_788 < 0) {
LAB_180083835:
                    /* WARNING: Does not return */
    pcVar7 = (code *)invalidInstructionException();
    (*pcVar7)();
  }
  lVar1 = param_2[0x40];
  local_60 = local_788;
  FUN_18009c9e0(&local_688,param_2 + 0x3c);
  uStack_97 = *(undefined1 *)((longlong)param_2 + 0x201);
  plStack_a0 = local_60;
  local_b8 = local_688;
  uStack_b4 = uStack_684;
  uStack_b0 = (undefined4)uStack_680;
  uStack_ac = uStack_680._4_4_;
  local_a8 = local_678;
  local_e8 = 2;
  local_98 = (char)lVar1;
  if (local_58[0x1c] == 0) {
    local_49 = 1;
    (**(code **)(local_58[0x1e] + 0x28))(&local_688,local_58[0x1d]);
    ppuVar11 = uStack_680;
    ppuVar12 = local_678;
    if ((char)local_688 != '\0') goto LAB_1800833e1;
LAB_18008340b:
    if ((undefined8 *)local_58[0x1c] != (undefined8 *)0x0) {
      local_49 = 1;
      (**(code **)local_58[0x1c])(&uStack_680,local_58 + 0x1f,local_58[0x1d],local_58[0x1e]);
      goto LAB_18008343f;
    }
  }
  else {
    ppuVar11 = (undefined **)local_58[0x1e];
    ppuVar12 = (undefined **)local_58[0x1e];
LAB_1800833e1:
    if (ppuVar11 != (undefined **)0x0 || ppuVar12 != (undefined **)0x0) goto LAB_18008340b;
    local_670 = 0;
    uStack_668 = 0;
    uStack_680 = &PTR_LAB_18020de18;
    local_678 = (undefined **)0x1;
LAB_18008343f:
    local_e8 = 0;
    ppuStack_e0 = uStack_680;
    local_d8 = local_678;
    uStack_d0 = (undefined4)local_670;
    uStack_cc = local_670._4_4_;
    uStack_c8 = (undefined4)uStack_668;
    uStack_c4 = uStack_668._4_4_;
  }
  local_49 = 1;
  FUN_180040270(&local_b8,local_58);
  puVar10 = local_58;
  uVar15 = (uint)(byte)local_58[0x17];
  local_60 = (longlong *)CONCAT44(local_60._4_4_,uVar15);
  if (9 < uVar15) {
    if (uVar15 == 10) {
      local_68 = *(undefined4 *)((longlong)local_58 + 0xb9);
      uStack_64 = (undefined3)((uint)*(undefined4 *)((longlong)local_58 + 0xbc) >> 8);
      local_70 = (void *)local_58[0x18];
      local_78 = local_58[0x19];
    }
    else {
      _Size = local_58[0x19];
      if ((longlong)_Size < 0) {
        uVar14 = 0;
LAB_180083823:
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar14,_Size);
      }
      pvVar6 = (void *)local_58[0x18];
      if (_Size == 0) {
        local_70 = (void *)0x1;
      }
      else {
        FUN_180027490();
        uVar14 = 1;
        local_70 = (void *)thunk_FUN_1801d32d0(_Size,1);
        if (local_70 == (void *)0x0) goto LAB_180083823;
      }
      local_78 = _Size;
      memcpy(local_70,pvVar6,_Size);
    }
  }
  local_4d = 1;
  FUN_18008f930(&local_1b0,puVar10 + 0xc);
  puVar10 = local_58;
  uVar4 = local_58[10];
  local_c0 = uVar4 * 4;
  if (0x7ffffffffffffffe < local_c0 || uVar4 >> 0x3e != 0) {
    uVar14 = 0;
LAB_1800834fc:
    local_4c = 1;
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar14,local_c0);
  }
  uVar8 = local_58[0x1b];
  uVar9 = local_58[0xb];
  pvVar6 = (void *)local_58[9];
  local_88 = uVar4;
  if (local_c0 == 0) {
    local_80 = (void *)0x2;
  }
  else {
    FUN_180027490();
    uVar14 = 2;
    local_80 = (void *)thunk_FUN_1801d32d0(local_c0,2);
    if (local_80 == (void *)0x0) goto LAB_1800834fc;
  }
  memcpy(local_80,pvVar6,local_c0);
  FUN_18009cd60(&local_788,puVar10 + 3);
  FUN_18009c810(&local_688,puVar10 + 6);
  local_148 = *puVar10;
  if (1 < local_148) {
    local_158 = puVar10[1];
    uStack_150 = puVar10[2];
  }
  pvStack_100 = local_80;
  local_f8 = local_88;
  plStack_130 = local_788;
  uStack_128 = uStack_780;
  local_120 = local_778;
  local_118 = CONCAT44(uStack_684,local_688);
  ppuStack_110 = uStack_680;
  local_108 = local_678;
  uStack_140 = local_158;
  uStack_138 = uStack_150;
  uStack_f0 = (short)uVar9;
  memcpy(&local_788,puVar10,0x100);
  FUN_180093cc0(&local_688,&local_390,&local_788);
  memcpy(param_1 + 1,&local_688,0x2f8);
  memcpy(param_1 + 0x60,&local_390,0x1e0);
  param_1[0xb1] = CONCAT62(uStack_96,CONCAT11(uStack_97,local_98));
  param_1[0xaf] = local_a8;
  param_1[0xb0] = plStack_a0;
  param_1[0xad] = CONCAT44(uStack_b4,local_b8);
  param_1[0xae] = CONCAT44(uStack_ac,uStack_b0);
  *param_1 = 0;
  *(char *)(param_1 + 0xbd) = (char)local_60;
  *(undefined4 *)((longlong)param_1 + 0x5e9) = local_68;
  *(uint *)((longlong)param_1 + 0x5ec) = CONCAT31(uStack_64,local_68._3_1_);
  param_1[0xbe] = local_70;
  param_1[0xbf] = local_78;
  param_1[0xb2] = local_1b0;
  param_1[0xb3] = uStack_1a8;
  param_1[0xb4] = local_1a0;
  param_1[0xb5] = uStack_198;
  param_1[0xb6] = local_190;
  param_1[0xb7] = uStack_188;
  param_1[0xb8] = local_180;
  param_1[0xb9] = uStack_178;
  param_1[0xba] = local_170;
  param_1[0xbb] = uStack_168;
  param_1[0xbc] = local_160;
  *(char *)(param_1 + 0xc0) = (char)uVar8;
  param_1[0x9c] = local_148;
  param_1[0x9d] = uStack_140;
  param_1[0x9e] = uStack_138;
  param_1[0x9f] = plStack_130;
  param_1[0xa0] = uStack_128;
  param_1[0xa1] = local_120;
  param_1[0xa2] = local_118;
  param_1[0xa3] = ppuStack_110;
  param_1[0xa4] = local_108;
  param_1[0xa5] = pvStack_100;
  param_1[0xa6] = local_f8;
  param_1[0xa7] = CONCAT62(uStack_ee,uStack_f0);
  param_1[0xa8] = local_e8;
  param_1[0xa9] = ppuStack_e0;
  param_1[0xaa] = local_d8;
  param_1[0xab] = CONCAT44(uStack_cc,uStack_d0);
  param_1[0xac] = CONCAT44(uStack_c4,uStack_c8);
  return param_1;
}


