/* FUN_18017a830 @ 18017a830 */

void FUN_18017a830(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 local_3b8 [160];
  longlong local_318;
  undefined8 local_310;
  undefined1 local_308 [208];
  longlong local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined4 uStack_1f0;
  undefined4 uStack_1ec;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined4 local_1a8;
  undefined4 local_1a4;
  undefined1 local_1a0;
  undefined2 local_19f;
  undefined1 local_19d;
  longlong local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  longlong *local_98;
  undefined8 local_90;
  longlong *local_88;
  undefined8 local_80;
  undefined2 local_78;
  byte local_76;
  undefined1 local_75;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_78 = *(undefined2 *)(param_2 + 0xe1);
  local_75 = *(undefined1 *)(param_2 + 0xe3);
  local_80 = *(undefined8 *)(param_2 + 0x60);
  local_76 = *(byte *)(param_2 + 0xe0) ^ 1;
  FUN_1801646b0(&local_318,&local_80);
  if (local_318 == 3) {
    param_1[1] = local_310;
    *param_1 = 2;
  }
  else {
    memcpy(&local_1f8,local_308,0xd0);
    uStack_110 = CONCAT44(uStack_1ec,uStack_1f0);
    local_108 = CONCAT44(uStack_1e4,local_1e8);
    uStack_100 = CONCAT44(uStack_1dc,uStack_1e0);
    local_f8 = CONCAT44(uStack_1d4,local_1d8);
    uStack_f0 = CONCAT44(uStack_1cc,uStack_1d0);
    local_118 = local_1f8;
    memcpy(local_3b8,&local_1c8,0xa0);
    local_128 = local_318;
    uStack_120 = local_310;
    uVar7 = *(undefined8 *)(param_2 + 0x68);
    local_4a = 1;
    local_98 = (longlong *)FUN_180174880(param_2);
    LOCK();
    lVar1 = *local_98;
    *local_98 = *local_98 + 1;
    UNLOCK();
    local_90 = uVar7;
    if (*local_98 == 0 || SCARRY8(lVar1,1) != *local_98 < 0) {
LAB_18017abe5:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    local_49 = 1;
    uVar8 = uVar7;
    local_60 = local_98;
    local_58 = local_98;
    uVar4 = FUN_18016f900(param_2 + 0xd4);
    uVar5 = (undefined4)uVar8;
    local_49 = 1;
    uVar6 = uVar5;
    local_68 = FUN_18016f900(param_2 + 0xd4);
    local_6c = 0;
    local_208 = local_f8;
    uStack_200 = uStack_f0;
    local_218 = local_108;
    uStack_210 = uStack_100;
    local_228 = local_118;
    uStack_220 = uStack_110;
    local_238 = local_128;
    uStack_230 = uStack_120;
    local_64 = uVar6;
    memcpy(&local_318,local_3b8,0xa0);
    local_88 = local_58;
    plVar2 = *(longlong **)(param_2 + 0x90);
    uStack_1e0 = 0;
    uStack_1dc = 0;
    local_1d8 = 0;
    uStack_1d4 = 0;
    uStack_1f0 = 0;
    uStack_1ec = 0;
    local_1e8 = 0;
    uStack_1e4 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_18017abe5;
      uStack_1f0 = *(undefined4 *)(param_2 + 0x90);
      uStack_1ec = *(undefined4 *)(param_2 + 0x94);
      local_1e8 = *(undefined4 *)(param_2 + 0x98);
      uStack_1e4 = *(undefined4 *)(param_2 + 0x9c);
    }
    plVar2 = *(longlong **)(param_2 + 0xa0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_18017abe5;
      uStack_1e0 = *(undefined4 *)(param_2 + 0xa0);
      uStack_1dc = *(undefined4 *)(param_2 + 0xa4);
      local_1d8 = *(undefined4 *)(param_2 + 0xa8);
      uStack_1d4 = *(undefined4 *)(param_2 + 0xac);
    }
    plVar2 = *(longlong **)(param_2 + 0xb0);
    local_1c0 = 0;
    uStack_1bc = 0;
    uStack_1b8 = 0;
    uStack_1b4 = 0;
    uStack_1d0 = 0;
    uStack_1cc = 0;
    local_1c8 = 0;
    uStack_1c4 = 0;
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_18017abe5;
      uStack_1d0 = *(undefined4 *)(param_2 + 0xb0);
      uStack_1cc = *(undefined4 *)(param_2 + 0xb4);
      local_1c8 = *(undefined4 *)(param_2 + 0xb8);
      uStack_1c4 = *(undefined4 *)(param_2 + 0xbc);
    }
    plVar2 = *(longlong **)(param_2 + 0xc0);
    if (plVar2 != (longlong *)0x0) {
      LOCK();
      lVar1 = *plVar2;
      *plVar2 = *plVar2 + 1;
      UNLOCK();
      if (*plVar2 == 0 || SCARRY8(lVar1,1) != *plVar2 < 0) goto LAB_18017abe5;
      local_1c0 = *(undefined4 *)(param_2 + 0xc0);
      uStack_1bc = *(undefined4 *)(param_2 + 0xc4);
      uStack_1b8 = *(undefined4 *)(param_2 + 200);
      uStack_1b4 = *(undefined4 *)(param_2 + 0xcc);
    }
    local_1b0 = *(undefined4 *)(param_2 + 0xd0);
    local_1a0 = *(undefined1 *)(param_2 + 0xe4);
    local_19f = *(undefined2 *)(param_2 + 0xe5);
    local_1f8 = *(undefined8 *)(param_2 + 0x38);
    local_1ac = 0;
    local_19d = 0;
    local_1a8 = uVar4;
    local_1a4 = uVar5;
    if (SBORROW8(0,*(longlong *)(param_2 + 0x20))) {
      local_b8 = 0x8000000000000000;
    }
    else {
      local_4b = 1;
      FUN_1801ed500(&local_e8,param_2 + 0x20);
      local_a8 = local_d8;
      local_b8 = CONCAT44(uStack_e4,local_e8);
      uStack_b0 = uStack_e0;
      uStack_ac = uStack_dc;
    }
    local_4b = 0;
    FUN_180169740(&local_e8,&local_238,&local_318,local_58,&local_6c,&local_1f8,param_3,&local_b8);
    param_1[6] = local_c8;
    param_1[4] = local_d8;
    param_1[5] = uStack_d0;
    param_1[2] = CONCAT44(uStack_e4,local_e8);
    param_1[3] = CONCAT44(uStack_dc,uStack_e0);
    *param_1 = 0;
    param_1[1] = local_c0;
    param_1[7] = local_58;
    param_1[8] = uVar7;
  }
  return;
}


