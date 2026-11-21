/* FUN_180081b50 @ 180081b50 */

undefined8 * FUN_180081b50(undefined8 *param_1,longlong *param_2,longlong *param_3)

{
  byte *pbVar1;
  byte bVar2;
  longlong *plVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined8 uVar6;
  char cVar7;
  longlong *plVar8;
  undefined1 local_7f8 [256];
  undefined **local_6f8;
  longlong *plStack_6f0;
  undefined4 local_6e8;
  undefined4 uStack_6e4;
  undefined4 uStack_6e0;
  undefined4 uStack_6dc;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined4 uStack_6d0;
  undefined4 uStack_6cc;
  undefined4 local_6c8;
  undefined4 uStack_6c4;
  undefined4 uStack_6c0;
  undefined4 uStack_6bc;
  longlong local_6b8;
  longlong lStack_6b0;
  longlong local_6a8;
  char local_518;
  undefined7 uStack_517;
  longlong *plStack_510;
  undefined4 local_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 local_4e8;
  undefined4 uStack_4e4;
  undefined4 uStack_4e0;
  undefined4 uStack_4dc;
  longlong local_4d8;
  longlong lStack_4d0;
  longlong local_4c8;
  undefined **local_4c0;
  longlong *local_4b8;
  undefined1 local_4b0 [80];
  undefined1 local_460 [8];
  ushort local_458;
  undefined **local_428;
  longlong *plStack_420;
  undefined4 local_418;
  undefined4 uStack_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 local_408;
  undefined4 uStack_404;
  undefined4 uStack_400;
  undefined4 uStack_3fc;
  undefined4 local_3f8;
  undefined4 uStack_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  longlong local_3e8;
  longlong lStack_3e0;
  longlong local_3d8;
  undefined8 uStack_3d0;
  undefined **local_3c8;
  longlong *plStack_3c0;
  undefined4 local_3b8;
  undefined4 uStack_3b4;
  undefined4 uStack_3b0;
  undefined4 uStack_3ac;
  undefined4 local_3a8;
  undefined4 uStack_3a4;
  undefined4 uStack_3a0;
  undefined4 uStack_39c;
  undefined4 local_398;
  undefined4 uStack_394;
  undefined4 uStack_390;
  undefined4 uStack_38c;
  longlong local_388;
  longlong lStack_380;
  longlong local_378;
  byte local_370;
  undefined4 local_36f;
  undefined3 uStack_36b;
  longlong *local_368;
  longlong *local_360;
  undefined1 local_350;
  byte *local_320;
  longlong *local_318;
  byte *local_310;
  longlong *local_308;
  ushort local_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  undefined4 local_2d8;
  undefined4 uStack_2d4;
  undefined4 uStack_2d0;
  undefined4 uStack_2cc;
  undefined4 local_2c8;
  undefined4 uStack_2c4;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  longlong local_2b8;
  longlong lStack_2b0;
  longlong local_2a8;
  undefined8 uStack_2a0;
  longlong local_118;
  longlong *plStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  undefined **local_b8;
  longlong *plStack_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  byte local_90;
  undefined4 local_8f;
  undefined3 uStack_8b;
  longlong *local_88;
  longlong *local_80;
  longlong *local_78;
  longlong local_70;
  undefined8 *local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  FUN_18009e6c0(&local_2f8);
  plVar8 = uStack_2f0;
  local_4c0 = local_2f8;
  if (local_2f8 == (undefined **)0x4) {
    *param_1 = 4;
    return param_1;
  }
  if ((int)local_2f8 == 3) {
    *param_1 = 3;
    param_1[1] = uStack_2f0;
    return param_1;
  }
  plVar5 = param_2 + 0xb2;
  memcpy(local_4b0,&local_2e8,0x88);
  local_4b8 = plVar8;
  local_4c = 1;
  FUN_18008f930(&local_2f8,plVar5);
  local_6a8 = local_2a8;
  local_6b8 = local_2b8;
  lStack_6b0 = lStack_2b0;
  local_6c8 = local_2c8;
  uStack_6c4 = uStack_2c4;
  uStack_6c0 = uStack_2c0;
  uStack_6bc = uStack_2bc;
  local_6d8 = local_2d8;
  uStack_6d4 = uStack_2d4;
  uStack_6d0 = uStack_2d0;
  uStack_6cc = uStack_2cc;
  local_6e8 = local_2e8;
  uStack_6e4 = uStack_2e4;
  uStack_6e0 = uStack_2e0;
  uStack_6dc = uStack_2dc;
  local_6f8 = local_2f8;
  plStack_6f0 = uStack_2f0;
  local_4c = 1;
  FUN_18009f960(&local_2f8,local_460,&local_6f8);
  if ((byte)local_2f8 != 3) {
    if (1 < (byte)local_2f8) {
      local_58 = uStack_2f0;
      (**(code **)(*uStack_2f0 + 0x20))(uStack_2f0[3],uStack_2f0[1],uStack_2f0[2]);
      thunk_FUN_1801d3330(local_58,0x20,8);
    }
    (**(code **)(CONCAT44(uStack_2e4,local_2e8) + 0x20))
              (CONCAT44(uStack_2cc,uStack_2d0),CONCAT44(uStack_2dc,uStack_2e0),
               CONCAT44(uStack_2d4,local_2d8));
    local_4c = 1;
    (**(code **)(CONCAT44(uStack_2c4,local_2c8) + 0x20))
              (lStack_2b0,CONCAT44(uStack_2bc,uStack_2c0),local_2b8);
  }
  pbVar1 = (byte *)(param_2 + 0xbd);
  bVar2 = *pbVar1;
  plVar3 = param_2;
  local_58 = plVar5;
  if (9 < bVar2) {
    if (bVar2 == 10) {
      local_2f8._4_4_ =
           (undefined4)(CONCAT14(local_2f8._7_1_,*(undefined4 *)((longlong)param_2 + 0x5ec)) >> 8);
      local_2f8 = (undefined **)CONCAT44(local_2f8._4_4_,*(undefined4 *)((longlong)param_2 + 0x5e9))
      ;
      plVar3 = (longlong *)param_2[0xbe];
      plVar8 = (longlong *)param_2[0xbf];
    }
    else {
      plVar8 = (longlong *)param_2[0xbf];
      if ((longlong)plVar8 < 0) {
        uVar6 = 0;
LAB_180081f00:
        local_4c = 1;
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar6,plVar8);
      }
      plVar5 = (longlong *)param_2[0xbe];
      if (plVar8 == (longlong *)0x0) {
        plVar3 = (longlong *)0x1;
      }
      else {
        local_60 = plVar5;
        FUN_180027490();
        plVar3 = (longlong *)thunk_FUN_1801d32d0(plVar8,1);
        uVar6 = 1;
        if (plVar3 == (longlong *)0x0) goto LAB_180081f00;
        plVar5 = local_60;
      }
      memcpy(plVar3,plVar5,(size_t)plVar8);
    }
  }
  local_60 = param_2 + 0x9c;
  plVar5 = param_2 + 0xa8;
  uStack_8b = (undefined3)((ulonglong)local_2f8 >> 0x20);
  local_90 = bVar2;
  local_8f = (int)local_2f8;
  local_88 = plVar3;
  local_80 = plVar8;
  if (local_458 - 0x12d < 2) {
    if (*pbVar1 == 2) {
      param_2[0xbf] = 0x101010101010101;
      pbVar1[0] = 1;
      pbVar1[1] = 1;
      pbVar1[2] = 1;
      pbVar1[3] = 1;
      pbVar1[4] = 1;
      pbVar1[5] = 1;
      pbVar1[6] = 1;
      pbVar1[7] = 1;
      param_2[0xbe] = 0x101010101010101;
      local_78 = plVar5;
      if (*plVar5 == 0) {
        if (param_2[0xa9] == 0) {
          local_70 = param_2[0xaa];
          local_68 = (undefined8 *)param_2[0xab];
          if ((code *)*local_68 != (code *)0x0) {
            (*(code *)*local_68)(local_70);
          }
          if (local_68[1] != 0) {
            thunk_FUN_1801d3330(local_70,local_68[1],local_68[2]);
          }
        }
        else {
          (**(code **)(param_2[0xa9] + 0x20))(param_2[0xac],param_2[0xaa],param_2[0xab]);
        }
      }
      plVar5 = local_78;
      *local_78 = 1;
      local_4d = 1;
      FUN_1800830d0(local_60);
    }
  }
  else if (1 < local_458 - 0x133) {
    if (local_458 != 0x12f) {
      memcpy(param_1,&local_4c0,0x98);
      goto joined_r0x0001800821c3;
    }
    if (*pbVar1 != 5) {
      if ((10 < *pbVar1) && (param_2[0xbf] != 0)) {
        thunk_FUN_1801d3330(param_2[0xbe],param_2[0xbf],1);
      }
      param_2[0xbf] = 0x101010101010101;
      pbVar1[0] = 1;
      pbVar1[1] = 1;
      pbVar1[2] = 1;
      pbVar1[3] = 1;
      pbVar1[4] = 1;
      pbVar1[5] = 1;
      pbVar1[6] = 1;
      pbVar1[7] = 1;
      param_2[0xbe] = 0x101010101010101;
    }
    local_78 = plVar5;
    if (*plVar5 == 0) {
      if (param_2[0xa9] == 0) {
        local_70 = param_2[0xaa];
        local_68 = (undefined8 *)param_2[0xab];
        if ((code *)*local_68 != (code *)0x0) {
          (*(code *)*local_68)(local_70);
        }
        if (local_68[1] != 0) {
          thunk_FUN_1801d3330(local_70,local_68[1],local_68[2]);
        }
      }
      else {
        (**(code **)(param_2[0xa9] + 0x20))(param_2[0xac],param_2[0xaa],param_2[0xab]);
      }
    }
    plVar5 = local_78;
    *local_78 = 1;
    local_4d = 1;
    FUN_1800830d0(local_60);
  }
  lVar4 = *plVar5;
  *plVar5 = 2;
  if (lVar4 == 0) {
    local_b8 = (undefined **)param_2[0xa9];
    plStack_b0 = (longlong *)param_2[0xaa];
    local_2f8 = (undefined **)param_2[0xab];
    uStack_2f0 = (longlong *)param_2[0xac];
  }
  else {
    if (lVar4 != 1) {
      memcpy(param_1,&local_4c0,0x98);
      bVar2 = local_90;
      goto joined_r0x0001800821c3;
    }
    *plVar5 = 1;
    local_2f8 = (undefined **)0x0;
    uStack_2f0 = (longlong *)0x0;
    plStack_b0 = (longlong *)0x1;
    local_b8 = &PTR_LAB_18020de18;
  }
  local_a8 = (int)local_2f8;
  uStack_a4 = local_2f8._4_4_;
  uStack_a0 = (undefined4)uStack_2f0;
  uStack_9c = uStack_2f0._4_4_;
  lVar4 = FUN_180054890(&local_4c0,&DAT_18020d5f8);
  if (lVar4 != 0) {
    FUN_1801f2ab0(&local_2f8,*(undefined8 *)(lVar4 + 8),*(undefined8 *)(lVar4 + 0x10));
    if (((int)local_2f8 != 1) &&
       (FUN_180100120(&local_518,uStack_2f0,CONCAT44(uStack_2e4,local_2e8),local_58),
       local_518 != '\x03')) {
      local_c8 = local_4c8;
      local_d8 = local_4d8;
      lStack_d0 = lStack_4d0;
      local_118 = CONCAT71(uStack_517,local_518);
      local_e8 = local_4e8;
      uStack_e4 = uStack_4e4;
      uStack_e0 = uStack_4e0;
      uStack_dc = uStack_4dc;
      local_f8 = local_4f8;
      uStack_f4 = uStack_4f4;
      uStack_f0 = uStack_4f0;
      uStack_ec = uStack_4ec;
      local_108 = local_508;
      uStack_104 = uStack_504;
      uStack_100 = uStack_500;
      uStack_fc = uStack_4fc;
      plStack_110 = plStack_510;
      local_300 = local_458;
      local_318 = &local_118;
      local_310 = &local_90;
      local_308 = local_58;
      local_320 = pbVar1;
      FUN_180040cd0(&local_2f8,param_2 + 0xad,&local_320);
      if ((byte)local_2f8 == '\x01') {
        *param_1 = 3;
        param_1[1] = uStack_2f0;
        if (1 < (byte)local_118) {
          local_58 = plStack_110;
          (**(code **)(*plStack_110 + 0x20))(plStack_110[3],plStack_110[1],plStack_110[2]);
          thunk_FUN_1801d3330(local_58,0x20,8);
        }
        (**(code **)(CONCAT44(uStack_104,local_108) + 0x20))
                  (CONCAT44(uStack_ec,uStack_f0),CONCAT44(uStack_fc,uStack_100),
                   CONCAT44(uStack_f4,local_f8));
        local_4a = 1;
        local_4b = 1;
        (**(code **)(CONCAT44(uStack_e4,local_e8) + 0x20))
                  (lStack_d0,CONCAT44(uStack_dc,uStack_e0),local_d8);
        if (local_b8 == (undefined **)0x0) {
          local_58 = plStack_b0;
          local_60 = (longlong *)CONCAT44(uStack_a4,local_a8);
          if ((code *)*local_60 != (code *)0x0) {
            (*(code *)*local_60)(plStack_b0);
          }
          if (local_60[1] != 0) {
            thunk_FUN_1801d3330(local_58,local_60[1],local_60[2]);
          }
        }
        else {
          local_4e = 1;
          (*(code *)local_b8[4])
                    (CONCAT44(uStack_9c,uStack_a0),plStack_b0,CONCAT44(uStack_a4,local_a8));
        }
        if ((10 < local_90) && (local_80 != (longlong *)0x0)) {
          thunk_FUN_1801d3330(local_88,local_80,1);
        }
      }
      else {
        cVar7 = local_2f8._1_1_;
        if (local_2f8._1_1_ == '\0') {
          local_2a8 = local_c8;
          local_2b8 = local_d8;
          lStack_2b0 = lStack_d0;
          local_2c8 = local_e8;
          uStack_2c4 = uStack_e4;
          uStack_2c0 = uStack_e0;
          uStack_2bc = uStack_dc;
          local_2d8 = local_f8;
          uStack_2d4 = uStack_f4;
          uStack_2d0 = uStack_f0;
          uStack_2cc = uStack_ec;
          local_2e8 = local_108;
          uStack_2e4 = uStack_104;
          uStack_2e0 = uStack_100;
          uStack_2dc = uStack_fc;
          local_2f8 = (undefined **)local_118;
          uStack_2f0 = plStack_110;
          FUN_18000adf0(local_58);
          local_58[10] = local_2a8;
          local_58[8] = local_2b8;
          local_58[9] = lStack_2b0;
          *(undefined4 *)(local_58 + 6) = local_2c8;
          *(undefined4 *)((longlong)local_58 + 0x34) = uStack_2c4;
          *(undefined4 *)(local_58 + 7) = uStack_2c0;
          *(undefined4 *)((longlong)local_58 + 0x3c) = uStack_2bc;
          *(undefined4 *)(local_58 + 4) = local_2d8;
          *(undefined4 *)((longlong)local_58 + 0x24) = uStack_2d4;
          *(undefined4 *)(local_58 + 5) = uStack_2d0;
          *(undefined4 *)((longlong)local_58 + 0x2c) = uStack_2cc;
          *(undefined4 *)(local_58 + 2) = local_2e8;
          *(undefined4 *)((longlong)local_58 + 0x14) = uStack_2e4;
          *(undefined4 *)(local_58 + 3) = uStack_2e0;
          *(undefined4 *)((longlong)local_58 + 0x1c) = uStack_2dc;
          *local_58 = (longlong)local_2f8;
          local_58[1] = (longlong)uStack_2f0;
          local_4a = 1;
          local_4b = 1;
          FUN_180081a10(plVar5,&local_b8);
          local_2e8 = local_a8;
          uStack_2e4 = uStack_a4;
          uStack_2e0 = uStack_a0;
          uStack_2dc = uStack_9c;
          local_2f8 = local_b8;
          uStack_2f0 = plStack_b0;
          local_4a = 0;
          local_4b = 1;
          FUN_18008f890(&local_428,&local_2f8);
          local_78 = (longlong *)((ulonglong)local_78 & 0xffffffffffffff00);
          local_49 = 1;
          plVar3 = local_58;
          FUN_18008f930(&local_2f8);
          FUN_18000adf0(&local_3c8);
          local_378 = local_2a8;
          local_388 = local_2b8;
          lStack_380 = lStack_2b0;
          local_398 = local_2c8;
          uStack_394 = uStack_2c4;
          uStack_390 = uStack_2c0;
          uStack_38c = uStack_2bc;
          local_3a8 = local_2d8;
          uStack_3a4 = uStack_2d4;
          uStack_3a0 = uStack_2d0;
          uStack_39c = uStack_2cc;
          local_3b8 = local_2e8;
          uStack_3b4 = uStack_2e4;
          uStack_3b0 = uStack_2e0;
          uStack_3ac = uStack_2dc;
          local_3c8 = local_2f8;
          plStack_3c0 = uStack_2f0;
          bVar2 = *pbVar1;
          plVar8 = (longlong *)0x0;
          if (9 < bVar2) {
            if (bVar2 == 0xb) {
              local_49 = 1;
              plVar5 = (longlong *)FUN_18006aa20(param_2 + 0xbe);
              plVar8 = plVar3;
            }
            else {
              local_c0 = *(undefined4 *)((longlong)param_2 + 0x5e9);
              uStack_bc = (undefined3)((uint)*(undefined4 *)((longlong)param_2 + 0x5ec) >> 8);
              plVar5 = (longlong *)param_2[0xbe];
              plVar8 = (longlong *)param_2[0xbf];
            }
          }
          if ((10 < local_370) && (local_360 != (longlong *)0x0)) {
            thunk_FUN_1801d3330(local_368,local_360,1);
          }
          local_36f = local_c0;
          uStack_36b = uStack_bc;
          local_350 = (undefined1)param_2[0xc0];
          local_49 = 1;
          local_370 = bVar2;
          local_368 = plVar5;
          local_360 = plVar8;
          FUN_180090450(&local_2f8,local_60);
          FUN_1800430f0(&local_428);
          local_3d8 = local_2a8;
          uStack_3d0 = uStack_2a0;
          local_3e8 = local_2b8;
          lStack_3e0 = lStack_2b0;
          local_3f8 = local_2c8;
          uStack_3f4 = uStack_2c4;
          uStack_3f0 = uStack_2c0;
          uStack_3ec = uStack_2bc;
          local_408 = local_2d8;
          uStack_404 = uStack_2d4;
          uStack_400 = uStack_2d0;
          uStack_3fc = uStack_2cc;
          local_418 = local_2e8;
          uStack_414 = uStack_2e4;
          uStack_410 = uStack_2e0;
          uStack_40c = uStack_2dc;
          local_428 = local_2f8;
          plStack_420 = uStack_2f0;
          local_49 = 1;
          FUN_180040270(param_2 + 0xad,&local_428);
          local_49 = 1;
          FUN_180090300(&local_6f8,param_2 + 0x60);
          memcpy(local_7f8,&local_428,0x100);
          memcpy(&local_2f8,&local_6f8,0x1e0);
          local_58 = param_2;
          FUN_18008ef30(param_2);
          plVar8 = local_58;
          *local_58 = 1;
          local_58[1] = 2;
          memcpy(local_58 + 2,&local_2f8,0x1e0);
          memcpy(plVar8 + 0x3e,local_7f8,0x100);
          local_49 = 0;
          (**(code **)(*(longlong *)*param_3 + 0x10))(((longlong *)*param_3)[1]);
          *param_1 = 4;
          cVar7 = (char)local_78;
        }
        else {
          memcpy(param_1,&local_4c0,0x98);
          local_4a = 1;
          local_4b = 0;
          FUN_18000adf0(&local_118);
          local_4e = 0;
          FUN_18000b7c0(&local_b8);
        }
        if ((10 < local_90) && (local_80 != (longlong *)0x0)) {
          thunk_FUN_1801d3330(local_88,local_80,1);
        }
        if (cVar7 != '\0') {
          return param_1;
        }
      }
      FUN_18008f760(&local_4c0);
      return param_1;
    }
  }
  memcpy(param_1,&local_4c0,0x98);
  if (local_b8 == (undefined **)0x0) {
    local_58 = plStack_b0;
    local_60 = (longlong *)CONCAT44(uStack_a4,local_a8);
    if ((code *)*local_60 != (code *)0x0) {
      (*(code *)*local_60)(plStack_b0);
    }
    bVar2 = local_90;
    if (local_60[1] != 0) {
      thunk_FUN_1801d3330(local_58,local_60[1],local_60[2]);
      bVar2 = local_90;
    }
  }
  else {
    local_4d = 0;
    (*(code *)local_b8[4])(CONCAT44(uStack_9c,uStack_a0),plStack_b0,CONCAT44(uStack_a4,local_a8));
    bVar2 = local_90;
  }
joined_r0x0001800821c3:
  if ((10 < bVar2) && (local_80 != (longlong *)0x0)) {
    thunk_FUN_1801d3330(local_88,local_80,1);
  }
  return param_1;
}


