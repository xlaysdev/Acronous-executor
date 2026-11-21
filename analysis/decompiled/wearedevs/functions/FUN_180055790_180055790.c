/* FUN_180055790 @ 180055790 */

void FUN_180055790(longlong param_1,longlong *param_2,longlong param_3,longlong param_4)

{
  char cVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined **ppuVar6;
  longlong lVar7;
  undefined8 *puVar8;
  bool bVar9;
  undefined **local_138;
  longlong *plStack_130;
  undefined8 local_128;
  ulonglong uStack_120;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  ulonglong local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  ulonglong uStack_80;
  undefined1 local_78;
  longlong local_68;
  undefined **local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  cVar1 = *(char *)(param_1 + 0x1fd);
  if (cVar1 != '\x02') {
    *(undefined1 *)(param_1 + 0x1fd) = 1;
  }
  local_48 = param_2;
  if (*(char *)(param_1 + 0x1fe) == '\x02') {
    if (cVar1 == '\x02') {
      local_98 = &PTR_LAB_1802091d8;
      uStack_90 = "close";
      local_88 = 5;
      uStack_80 = 0;
      local_78 = 0;
      local_31 = 1;
      FUN_1800530f0(&local_f8,param_2,&DAT_180209348,&local_98);
      if ((char)local_d8 == '\x03') {
        local_31 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_138,&DAT_180208de8,
                      &PTR_s_C__Users_burne__cargo_registry_s_180208fc8);
      }
      if ((char)local_d8 != '\x02') {
        local_31 = 1;
        (**(code **)((longlong)local_f8 + 0x20))(uStack_e0,uStack_f0,uStack_e8);
      }
    }
    goto LAB_180055963;
  }
  if (*(char *)(param_1 + 0x1fe) != '\x01') goto LAB_180055963;
  local_31 = 1;
  lVar2 = FUN_180054a00(param_2,&DAT_180209348);
  if (lVar2 == 0) {
LAB_18005581d:
    if ((char)local_48[0x1b] == '\x02') {
      if (*(char *)(param_1 + 0x1fd) != '\x02') {
        local_98 = &PTR_LAB_1802091d8;
        uStack_90 = &DAT_180209368;
        local_88 = 10;
        uStack_80 = 0;
        local_78 = 0;
        local_31 = 1;
        FUN_1800530f0(&local_f8,local_48,&DAT_180209348,&local_98);
        if ((char)local_d8 == '\x03') {
          local_31 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_138,&DAT_180208de8,
                        &PTR_s_C__Users_burne__cargo_registry_s_180208fc8);
        }
        if ((char)local_d8 != '\x02') {
          local_31 = 1;
          (**(code **)((longlong)local_f8 + 0x20))(uStack_e0,uStack_f0,uStack_e8);
        }
      }
    }
    else if ((char)local_48[0x1b] == '\x01') {
      *(undefined1 *)(param_1 + 0x1fd) = 2;
    }
  }
  else {
    local_31 = 1;
    cVar1 = FUN_18011a8c0(lVar2);
    if (cVar1 == '\0') goto LAB_18005581d;
  }
  *(undefined1 *)(local_48 + 0x1b) = 1;
LAB_180055963:
  uStack_e0 = param_1 + 0x1c0;
  uStack_e8 = local_48;
  local_d8 = CONCAT31(local_d8._1_3_,*(undefined1 *)(param_1 + 0x1f9));
  local_31 = 1;
  plVar4 = &local_f8;
  local_f8 = (undefined **)param_3;
  uStack_f0 = param_4;
  FUN_180120940(&local_138,plVar4,param_1 + 0x10);
  local_60 = local_138;
  local_50 = param_1;
  if (local_138 == (undefined **)0x8000000000000002) {
    local_40 = plStack_130;
    FUN_18003c2f0(*(undefined8 *)(param_1 + 0x1d8));
    *(longlong **)(local_50 + 0x1d8) = local_40;
    lVar5 = *(longlong *)(local_50 + 0x1a0);
    plVar4 = local_48;
    lVar2 = local_50;
    if (-1 < lVar5) {
      plVar4 = *(longlong **)(local_50 + 0x1b0);
      if (plVar4 != (longlong *)0x0) {
        local_68 = *(longlong *)(local_50 + 0x1a8);
        puVar8 = (undefined8 *)(local_68 + 0x18);
        plVar3 = (longlong *)0x1;
        local_58 = plVar4;
        do {
          local_40 = plVar3;
          if (puVar8[-3] != 0) {
            (**(code **)(puVar8[-3] + 0x20))(*puVar8,puVar8[-2],puVar8[-1]);
          }
          plVar3 = (longlong *)((longlong)local_40 + 1);
          puVar8 = puVar8 + 4;
        } while (local_40 != plVar4);
        lVar5 = *(longlong *)(local_50 + 0x1a0);
      }
      plVar4 = local_48;
      lVar2 = local_50;
      if (lVar5 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(local_50 + 0x1a8),lVar5 << 5,8);
      }
    }
    *(undefined8 *)(lVar2 + 0x1a0) = 0x8000000000000005;
    if ((10 < *(byte *)(plVar4 + 0x17)) && (plVar4[0x19] != 0)) {
      thunk_FUN_1801d3330(plVar4[0x18],plVar4[0x19],1);
    }
    FUN_18000adf0(plVar4 + 0xc);
    FUN_1800430f0(local_48);
    ppuVar6 = (undefined **)0x8000000000000002;
  }
  else {
    local_88 = local_128;
    uStack_80 = uStack_120;
    local_98 = local_138;
    uStack_90 = (char *)plStack_130;
    local_a8 = local_48[10];
    lStack_a0 = local_48[0xb];
    local_b8 = local_48[8];
    lStack_b0 = local_48[9];
    local_f8 = (undefined **)*local_48;
    uStack_f0 = local_48[1];
    uStack_e8 = (longlong *)local_48[2];
    uStack_e0 = local_48[3];
    local_d8 = (undefined4)local_48[4];
    uStack_d4 = *(undefined4 *)((longlong)local_48 + 0x24);
    uStack_d0 = (undefined4)local_48[5];
    uStack_cc = *(undefined4 *)((longlong)local_48 + 0x2c);
    local_c8 = (undefined4)local_48[6];
    uStack_c4 = *(undefined4 *)((longlong)local_48 + 0x34);
    uStack_c0 = (undefined4)local_48[7];
    uStack_bc = *(undefined4 *)((longlong)local_48 + 0x3c);
    local_40 = (longlong *)(param_1 + 0xd8);
    if (*(int *)(param_1 + 0xd8) != 3) {
      FUN_1800430f0(local_40);
    }
    *(longlong *)((longlong)local_40 + 0x50) = local_a8;
    *(longlong *)((longlong)local_40 + 0x58) = lStack_a0;
    *(longlong *)((longlong)local_40 + 0x40) = local_b8;
    *(longlong *)((longlong)local_40 + 0x48) = lStack_b0;
    *(undefined4 *)((longlong)local_40 + 0x30) = local_c8;
    *(undefined4 *)((longlong)local_40 + 0x34) = uStack_c4;
    *(undefined4 *)((longlong)local_40 + 0x38) = uStack_c0;
    *(undefined4 *)((longlong)local_40 + 0x3c) = uStack_bc;
    *(undefined4 *)((longlong)local_40 + 0x20) = local_d8;
    *(undefined4 *)((longlong)local_40 + 0x24) = uStack_d4;
    *(undefined4 *)((longlong)local_40 + 0x28) = uStack_d0;
    *(undefined4 *)((longlong)local_40 + 0x2c) = uStack_cc;
    *(undefined4 *)((longlong)local_40 + 0x10) = (undefined4)uStack_e8;
    *(undefined4 *)((longlong)local_40 + 0x14) = uStack_e8._4_4_;
    *(undefined4 *)((longlong)local_40 + 0x18) = (undefined4)uStack_e0;
    *(undefined4 *)((longlong)local_40 + 0x1c) = uStack_e0._4_4_;
    *(undefined4 *)local_40 = (undefined4)local_f8;
    *(undefined4 *)((longlong)local_40 + 4) = local_f8._4_4_;
    *(undefined4 *)((longlong)local_40 + 8) = (undefined4)uStack_f0;
    *(undefined4 *)((longlong)local_40 + 0xc) = uStack_f0._4_4_;
    local_58 = (longlong *)FUN_1800a0470(local_48 + 0x1a);
    plVar3 = *(longlong **)(param_1 + 0x1e0);
    local_40 = plVar4;
    if (plVar3 != (longlong *)0x0) {
      LOCK();
      *plVar3 = *plVar3 + -1;
      UNLOCK();
      if (*plVar3 == 0) {
        FUN_18003cc40(local_50 + 0x1e0);
      }
    }
    lVar2 = local_50;
    ppuVar6 = local_98;
    *(longlong **)(local_50 + 0x1e0) = local_58;
    *(longlong **)(local_50 + 0x1e8) = local_40;
    local_118 = (undefined4)uStack_90;
    uStack_114 = uStack_90._4_4_;
    uStack_110 = (undefined4)local_88;
    uStack_10c = local_88._4_4_;
    local_108 = uStack_80;
    plVar4 = local_48 + 0xc;
    if ((10 < *(byte *)(local_48 + 0x17)) && (local_48[0x19] != 0)) {
      thunk_FUN_1801d3330(local_48[0x18],local_48[0x19],1);
    }
    FUN_18000adf0(plVar4);
  }
  plVar4 = (longlong *)local_48[0x1a];
  if (plVar4 != (longlong *)0x0) {
    lVar5 = plVar4[1];
    if (lVar5 != 0) {
      local_40 = plVar4;
      FUN_1800a2ea0();
      plVar4 = local_40;
      lVar7 = lVar5 * 0x21 + 0x31;
      if (lVar7 != 0) {
        thunk_FUN_1801d3330(*local_40 + lVar5 * -0x20 + -0x20,lVar7,0x10);
      }
    }
    thunk_FUN_1801d3330(plVar4,0x20,8);
  }
  if (ppuVar6 != (undefined **)0x8000000000000002) {
    uStack_f0 = CONCAT44(uStack_114,local_118);
    uStack_e8 = (longlong *)CONCAT44(uStack_10c,uStack_110);
    uStack_e0 = local_108;
    bVar9 = ppuVar6 == (undefined **)0x8000000000000001 && uStack_f0 == 0;
    local_f8 = ppuVar6;
    if (ppuVar6 == (undefined **)0x8000000000000001 && uStack_f0 == 0) {
      ppuVar6 = (undefined **)(local_108 & 0xff | 0x8000000000000004);
      lVar5 = *(longlong *)(lVar2 + 0x1a0);
      if (-1 < lVar5) {
        plVar4 = *(longlong **)(lVar2 + 0x1b0);
        if (plVar4 != (longlong *)0x0) {
          local_48 = (longlong *)CONCAT71(local_48._1_7_,bVar9);
          local_68 = *(longlong *)(lVar2 + 0x1a8);
          puVar8 = (undefined8 *)(local_68 + 0x18);
          plVar3 = (longlong *)0x1;
          local_60 = ppuVar6;
          local_58 = plVar4;
          do {
            local_40 = plVar3;
            if (puVar8[-3] != 0) {
              (**(code **)(puVar8[-3] + 0x20))(*puVar8,puVar8[-2],puVar8[-1]);
            }
            plVar3 = (longlong *)((longlong)local_40 + 1);
            puVar8 = puVar8 + 4;
          } while (local_40 != plVar4);
          lVar5 = *(longlong *)(local_50 + 0x1a0);
          ppuVar6 = local_60;
          lVar2 = local_50;
        }
        if (lVar5 != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x1a8),lVar5 << 5,8);
        }
      }
      *(undefined ***)(lVar2 + 0x1a0) = ppuVar6;
    }
    else {
      local_88 = local_108;
      local_98 = (undefined **)CONCAT44(uStack_114,local_118);
      uStack_90 = (char *)CONCAT44(uStack_10c,uStack_110);
      lVar5 = *(longlong *)(lVar2 + 0x1a0);
      if (-1 < lVar5) {
        plVar4 = *(longlong **)(lVar2 + 0x1b0);
        if (plVar4 != (longlong *)0x0) {
          local_48 = (longlong *)CONCAT71(local_48._1_7_,bVar9);
          local_68 = *(longlong *)(lVar2 + 0x1a8);
          puVar8 = (undefined8 *)(local_68 + 0x18);
          plVar3 = (longlong *)0x1;
          local_60 = ppuVar6;
          local_58 = plVar4;
          do {
            local_40 = plVar3;
            if (puVar8[-3] != 0) {
              (**(code **)(puVar8[-3] + 0x20))(*puVar8,puVar8[-2],puVar8[-1]);
            }
            plVar3 = (longlong *)((longlong)local_40 + 1);
            puVar8 = puVar8 + 4;
          } while (local_40 != plVar4);
          lVar5 = *(longlong *)(local_50 + 0x1a0);
          ppuVar6 = local_60;
          lVar2 = local_50;
        }
        if (lVar5 != 0) {
          thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x1a8),lVar5 << 5,8);
        }
      }
      *(undefined ***)(lVar2 + 0x1a0) = ppuVar6;
      *(ulonglong *)(lVar2 + 0x1a8) = CONCAT44(uStack_114,local_118);
      *(ulonglong *)(lVar2 + 0x1b0) = CONCAT44(uStack_10c,uStack_110);
      *(ulonglong *)(lVar2 + 0x1b8) = local_108;
    }
  }
  return;
}


