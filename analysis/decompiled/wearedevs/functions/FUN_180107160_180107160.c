/* FUN_180107160 @ 180107160 */

undefined8 * FUN_180107160(undefined8 *param_1,longlong *param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  void *_Src;
  longlong lVar5;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined1 local_370 [136];
  undefined8 local_2e8 [17];
  longlong local_260 [17];
  int local_1d8;
  undefined4 uStack_1d4;
  longlong lStack_1d0;
  undefined1 local_1c8;
  undefined7 uStack_1c7;
  char local_14a;
  undefined7 uStack_149;
  undefined8 uStack_142;
  undefined2 local_13a;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 local_f0;
  undefined7 uStack_ef;
  byte local_e8;
  byte bStack_e7;
  undefined6 uStack_e6;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  longlong local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong *local_80;
  ulonglong local_78;
  longlong lStack_70;
  ulonglong local_68;
  longlong *local_60;
  longlong *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((char)param_2[0xc] == '\0') {
    lVar7 = param_2[1];
    local_60 = param_2;
    FUN_1801054b0(local_260,lVar7,param_2[2]);
    lVar2 = local_60[4];
    local_4a = 1;
    FUN_1801054b0(&local_128,lVar2,local_60[5]);
    if (local_128 == 0x8000000000000002) {
      if (local_260[0] == -0x7ffffffffffffffe) {
        local_2e8[0] = 0x8000000000000002;
      }
      else {
        FUN_180108790(local_2e8,local_260);
      }
    }
    else {
      memcpy(local_2e8,&local_128,0x88);
    }
    local_138 = local_60[7];
    local_49 = 1;
    FUN_1801054b0(&local_1d8,local_138,local_60[8]);
    memcpy(&local_128,local_260,0x88);
    if (CONCAT44(uStack_1d4,local_1d8) == -0x7ffffffffffffffe) {
      memcpy(local_370,local_260,0x88);
    }
    else {
      memcpy(local_370,&local_1d8,0x88);
      if (local_128 != 0x8000000000000002) {
        if (1 < (byte)local_f8) {
          local_58 = (longlong *)CONCAT71(uStack_ef,local_f0);
          (**(code **)(*local_58 + 0x20))(local_58[3],local_58[1],local_58[2]);
          thunk_FUN_1801d3330(local_58,0x20,8);
        }
        (**(code **)(CONCAT62(uStack_e6,CONCAT11(bStack_e7,local_e8)) + 0x20))
                  (local_d0,local_e0,local_d8);
        (**(code **)(local_c8 + 0x20))(local_b0,local_c0,local_b8);
        uVar4 = 2;
        if ((longlong)local_128 < 0) {
          uVar4 = local_128 ^ 0x8000000000000000;
        }
        if (uVar4 != 0) {
          if (uVar4 == 1) {
            local_49 = 0;
            (**(code **)(uStack_120 + 0x20))(uStack_108,local_118,uStack_110);
          }
          else {
            if (local_128 != 0) {
              thunk_FUN_1801d3330(uStack_120,local_128,1);
            }
            if (uStack_110 != 0) {
              thunk_FUN_1801d3330(uStack_108,uStack_110,1);
            }
          }
        }
      }
    }
    lVar5 = local_60[10];
    uStack_120 = local_60[0xb];
    local_78 = 0;
    lStack_70 = 1;
    local_68 = 0;
    local_98 = 0;
    lStack_90 = 8;
    local_88 = 0;
    local_128 = 0;
    uStack_108 = 0;
    local_f8 = 0x2c0000002c;
    local_f0 = 1;
    local_e8 = 1;
    bStack_e7 = 0;
    local_130 = lVar7;
    local_118 = lVar5;
    uStack_110 = uStack_120;
    uStack_100 = uStack_120;
    while( true ) {
      lVar7 = local_118;
      if ((bStack_e7 & 1) != 0) break;
      FUN_1801085d0(&local_1d8,&local_118);
      lVar3 = local_128;
      if (local_1d8 == 1) {
        plVar6 = (longlong *)(lStack_1d0 - local_128);
        local_128 = CONCAT71(uStack_1c7,local_1c8);
      }
      else {
        if (bStack_e7 != 0) break;
        bStack_e7 = 1;
        plVar6 = (longlong *)(uStack_120 - local_128);
        lVar7 = local_118;
        if ((plVar6 != (longlong *)0x0 | local_e8) != 1) break;
      }
      _Src = (void *)FUN_180110f50(lVar7 + lVar3);
      local_58 = plVar6;
      FUN_1801122b0(&local_14a,_Src,plVar6);
      uVar4 = local_68;
      if (local_14a == '\x02') {
        FUN_1801f19d0(&local_1d8,_Src,local_58);
        uVar4 = local_68;
        if ((char)local_1d8 == '\x02') {
          plVar6 = local_58;
          FUN_180110f50(_Src);
          if (plVar6 != (longlong *)0x0) {
            if ((longlong)local_58 < 0) {
              uVar8 = 0;
LAB_1801077bb:
                    /* WARNING: Subroutine does not return */
              FUN_18020171e(uVar8,local_80);
            }
            if (local_58 == (longlong *)0x0) {
              local_80 = (longlong *)0x1;
            }
            else {
              FUN_180027490();
              uVar8 = 1;
              local_80 = (longlong *)thunk_FUN_1801d32d0(local_58,1);
              if (local_80 == (longlong *)0x0) {
                local_80 = local_58;
                goto LAB_1801077bb;
              }
            }
            memcpy(local_80,_Src,(size_t)local_58);
            lVar7 = local_88;
            if (local_88 == local_98) {
              FUN_1801f90f0(&local_98);
            }
            *(longlong **)(lStack_90 + lVar7 * 0x18) = local_58;
            *(longlong **)(lStack_90 + 8 + lVar7 * 0x18) = local_80;
            *(longlong **)(lStack_90 + 0x10 + lVar7 * 0x18) = local_58;
            local_88 = lVar7 + 1;
          }
        }
        else {
          if (local_68 == local_78) {
            FUN_1801f9080(&local_78);
          }
          *(undefined1 *)(lStack_70 + uVar4 * 0x12) = 2;
          puVar1 = (undefined8 *)(lStack_70 + 1 + uVar4 * 0x12);
          *puVar1 = CONCAT44(uStack_1d4,local_1d8);
          puVar1[1] = lStack_1d0;
          *(undefined1 *)(lStack_70 + 0x11 + uVar4 * 0x12) = local_1c8;
          local_68 = uVar4 + 1;
        }
      }
      else {
        if (local_68 == local_78) {
          FUN_1801f9080(&local_78);
        }
        *(undefined2 *)(lStack_70 + 0x10 + uVar4 * 0x12) = local_13a;
        puVar1 = (undefined8 *)(lStack_70 + uVar4 * 0x12);
        *puVar1 = CONCAT71(uStack_149,local_14a);
        puVar1[1] = uStack_142;
        local_68 = uVar4 + 1;
      }
    }
    local_128 = local_78;
    uStack_120 = lStack_70;
    local_118 = local_68;
    uStack_110 = local_98;
    uStack_108 = lStack_90;
    uStack_100 = local_88;
    memcpy(param_1 + 6,local_2e8,0x88);
    memcpy(param_1 + 0x17,local_370,0x88);
    plVar6 = local_60;
    *(undefined4 *)param_1 = (undefined4)local_128;
    *(undefined4 *)((longlong)param_1 + 4) = local_128._4_4_;
    *(undefined4 *)(param_1 + 1) = (undefined4)uStack_120;
    *(undefined4 *)((longlong)param_1 + 0xc) = uStack_120._4_4_;
    *(undefined4 *)(param_1 + 2) = (undefined4)local_118;
    *(undefined4 *)((longlong)param_1 + 0x14) = local_118._4_4_;
    *(undefined4 *)(param_1 + 3) = (undefined4)uStack_110;
    *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_110._4_4_;
    *(undefined4 *)(param_1 + 4) = (undefined4)uStack_108;
    *(undefined4 *)((longlong)param_1 + 0x24) = uStack_108._4_4_;
    *(undefined4 *)(param_1 + 5) = (undefined4)uStack_100;
    *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_100._4_4_;
    if (*local_60 != 0) {
      thunk_FUN_1801d3330(local_130,*local_60,1);
    }
    if (plVar6[3] != 0) {
      thunk_FUN_1801d3330(lVar2,plVar6[3],1);
    }
    if (plVar6[6] != 0) {
      thunk_FUN_1801d3330(local_138,plVar6[6],1);
    }
    lVar7 = plVar6[9];
    if (lVar7 == 0) {
      return param_1;
    }
  }
  else {
    param_1[6] = 0x8000000000000002;
    param_1[0x17] = 0x8000000000000002;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 8;
    param_1[5] = 0;
    if (*param_2 != 0) {
      thunk_FUN_1801d3330(param_2[1],*param_2,1);
    }
    if (param_2[3] != 0) {
      thunk_FUN_1801d3330(param_2[4],param_2[3],1);
    }
    if (param_2[6] != 0) {
      thunk_FUN_1801d3330(param_2[7],param_2[6],1);
    }
    lVar7 = param_2[9];
    if (lVar7 == 0) {
      return param_1;
    }
    lVar5 = param_2[10];
  }
  thunk_FUN_1801d3330(lVar5,lVar7,1);
  return param_1;
}


