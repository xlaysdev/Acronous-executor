/* FUN_1800a2fc0 @ 1800a2fc0 */

longlong FUN_1800a2fc0(longlong *param_1,longlong *param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  undefined **ppuVar3;
  char cVar4;
  longlong lVar5;
  undefined8 uVar6;
  longlong *plVar7;
  longlong lVar8;
  undefined1 local_460 [256];
  undefined1 local_360 [152];
  undefined **local_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  int iStack_2b0;
  int iStack_2ac;
  longlong local_2a8;
  longlong local_1c8;
  longlong lStack_1c0;
  longlong local_1b8;
  longlong lStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  undefined **local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  longlong local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined **local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  longlong local_68;
  int iStack_60;
  int iStack_5c;
  longlong local_58;
  undefined **local_50;
  longlong lStack_48;
  longlong lStack_40;
  longlong *local_38;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if ((int)*param_2 == 3) {
    local_38 = (longlong *)param_2[1];
    local_b0 = *param_1;
    *param_1 = 2;
    if (local_b0 == 2) {
      if ((char)param_1[5] != '\0') {
        return (longlong)local_38;
      }
      lVar5 = param_1[4];
      LOCK();
      uVar6 = *(undefined8 *)(lVar5 + 0x10);
      *(undefined8 *)(lVar5 + 0x10) = 3;
      UNLOCK();
      local_29 = 1;
      cVar4 = FUN_18012c0f0(uVar6);
      if (cVar4 == '\x02') {
        do {
          LOCK();
          cVar4 = *(char *)(lVar5 + 0x28);
          *(char *)(lVar5 + 0x28) = '\x01';
          UNLOCK();
        } while (cVar4 != '\0');
        lVar2 = *(longlong *)(lVar5 + 0x18);
        *(undefined8 *)(lVar5 + 0x18) = 0;
        LOCK();
        uVar1 = *(undefined1 *)(lVar5 + 0x28);
        *(undefined1 *)(lVar5 + 0x28) = 0;
        UNLOCK();
        if (lVar2 != 0) {
          local_29 = 1;
          (**(code **)(lVar2 + 8))(*(undefined8 *)(lVar5 + 0x20),uVar1);
        }
      }
      lVar5 = param_1[3];
      if (*(char *)(lVar5 + 0x1b8) == '\0') {
        *(undefined1 *)(lVar5 + 0x1b8) = 1;
      }
      LOCK();
      *(ulonglong *)(lVar5 + 0x1c0) = *(ulonglong *)(lVar5 + 0x1c0) | 1;
      UNLOCK();
      local_29 = 1;
      FUN_180166e40(lVar5 + 0x180);
      local_50 = &PTR_LAB_1802072c8;
      lStack_48 = 0;
      local_78 = &local_50;
      local_68 = 0;
      uStack_70 = local_78;
      FUN_1800aa290(&local_1c8,param_1 + 3,&local_78);
      ppuVar3 = local_c8;
      if (local_c8 != (undefined **)0x4) {
        memcpy(&local_2c8,&local_1c8,0x100);
        local_98 = (undefined4)local_c0;
        uStack_94 = local_c0._4_4_;
        uStack_90 = (undefined4)uStack_b8;
        uStack_8c = uStack_b8._4_4_;
      }
      local_29 = 1;
      (*(code *)local_50[3])(lStack_48);
      if (1 < (longlong)local_c8 - 3U) {
        memcpy(&local_1c8,&local_2c8,0x100);
        local_c0 = CONCAT44(uStack_94,local_98);
        uStack_b8 = CONCAT44(uStack_8c,uStack_90);
        memcpy(local_460,&local_2c8,0x100);
        local_78._0_4_ = local_98;
        local_78._4_4_ = uStack_94;
        uStack_70._0_4_ = uStack_90;
        uStack_70._4_4_ = uStack_8c;
        local_c8 = (undefined **)0x2;
        local_29 = 1;
        FUN_1800a5ed0(&local_1c8);
        if ((int)ppuVar3 != 2) {
          uStack_2c0 = CONCAT44(local_78._4_4_,(undefined4)local_78);
          uStack_2b8 = CONCAT44(uStack_70._4_4_,(undefined4)uStack_70);
          local_2c8 = ppuVar3;
          local_2b = 1;
          local_2c = 1;
          uVar6 = FUN_180115640();
          local_2b = 1;
          local_2c = 0;
          FUN_180068510(uVar6,local_38);
          memcpy(&local_1c8,local_460,0x100);
          local_2b = 0;
          local_2c = 0;
          local_c8 = (undefined **)uVar6;
          FUN_1800a98b0(&local_2c8,&local_1c8);
          return 0;
        }
      }
      return (longlong)local_38;
    }
    local_a8 = (undefined4)param_1[1];
    uStack_a4 = *(undefined4 *)((longlong)param_1 + 0xc);
    uStack_a0 = (undefined4)param_1[2];
    uStack_9c = *(undefined4 *)((longlong)param_1 + 0x14);
    local_1c8 = 3;
    local_29 = 0;
    local_c8 = (undefined **)local_38;
    FUN_1800a98b0(&local_b0,&local_1c8);
  }
  else {
    local_58 = param_2[0x12];
    local_78 = (undefined ***)param_2[0xe];
    uStack_70 = (undefined ***)param_2[0xf];
    local_68 = param_2[0x10];
    iStack_60 = (int)param_2[0x11];
    iStack_5c = *(int *)((longlong)param_2 + 0x8c);
    local_80 = (undefined **)*param_1;
    *param_1 = 2;
    local_38 = param_2;
    if (local_80 == (undefined **)0x2) {
      lVar5 = FUN_180115820();
      local_2a = 1;
      FUN_1800a6ff0(&local_78);
      FUN_1800430f0(local_38);
      plVar7 = (longlong *)local_38[0xc];
      if (plVar7 == (longlong *)0x0) {
        return lVar5;
      }
      lVar2 = plVar7[1];
      if (lVar2 != 0) {
        local_38 = plVar7;
        FUN_1800a2ea0();
        plVar7 = local_38;
        lVar8 = lVar2 * 0x21 + 0x31;
        if (lVar8 != 0) {
          thunk_FUN_1801d3330(*local_38 + lVar2 * -0x20 + -0x20,lVar8,0x10);
        }
      }
      thunk_FUN_1801d3330(plVar7,0x20,8);
      return lVar5;
    }
    lStack_48 = param_1[1];
    lStack_40 = param_1[2];
    local_168 = param_2[0xc];
    lStack_160 = param_2[0xd];
    local_178 = param_2[10];
    lStack_170 = param_2[0xb];
    local_188 = param_2[8];
    lStack_180 = param_2[9];
    local_1c8 = *param_2;
    lStack_1c0 = param_2[1];
    local_1b8 = param_2[2];
    lStack_1b0 = param_2[3];
    local_1a8 = (int)param_2[4];
    iStack_1a4 = *(int *)((longlong)param_2 + 0x24);
    iStack_1a0 = (int)param_2[5];
    iStack_19c = *(int *)((longlong)param_2 + 0x2c);
    local_198 = (int)param_2[6];
    iStack_194 = *(int *)((longlong)param_2 + 0x34);
    iStack_190 = (int)param_2[7];
    iStack_18c = *(int *)((longlong)param_2 + 0x3c);
    local_2a8 = param_2[0x12];
    local_2c8 = (undefined **)param_2[0xe];
    uStack_2c0 = param_2[0xf];
    uStack_2b8 = param_2[0x10];
    iStack_2b0 = (int)param_2[0x11];
    iStack_2ac = *(int *)((longlong)param_2 + 0x8c);
    local_2d = 1;
    local_50 = local_80;
    FUN_18008fe50(local_360,&local_1c8,&local_2c8);
    uStack_2b8 = lStack_40;
    local_2c8 = local_50;
    uStack_2c0 = lStack_48;
    memcpy(&lStack_1c0,local_360,0x98);
    local_1c8 = 4;
    local_2d = 0;
    FUN_1800a98b0(&local_2c8,&local_1c8);
  }
  return 0;
}


