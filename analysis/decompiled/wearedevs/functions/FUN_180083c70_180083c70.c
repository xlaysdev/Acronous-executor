/* FUN_180083c70 @ 180083c70 */

undefined8 * FUN_180083c70(undefined8 *param_1,undefined8 *param_2,ulonglong *param_3)

{
  byte bVar1;
  uint uVar2;
  void *_Src;
  longlong lVar3;
  char cVar4;
  ulonglong uVar5;
  undefined8 *_Src_00;
  longlong *plVar6;
  longlong lVar7;
  undefined8 uVar8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined4 local_2b8;
  undefined4 uStack_2b4;
  undefined4 uStack_2b0;
  undefined4 uStack_2ac;
  undefined4 local_2a8;
  undefined4 uStack_2a4;
  undefined4 uStack_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined4 uStack_294;
  undefined4 uStack_290;
  undefined4 uStack_28c;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  ulonglong local_1c8;
  ulonglong uStack_1c0;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined8 local_1a8;
  ulonglong local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  longlong *local_158;
  longlong *local_150;
  undefined8 *local_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  byte local_e8;
  undefined4 local_e7;
  undefined3 uStack_e3;
  ulonglong local_e0;
  undefined8 *local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  ulonglong local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined8 uStack_70;
  undefined8 local_68;
  ulonglong local_60;
  longlong *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar2 = *(uint *)((longlong)param_2 + 0x34);
  uVar5 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    if (param_2[4] == 0) {
      cVar4 = '\x01';
    }
    else {
      cVar4 = (**(code **)(param_2[5] + 0x18))
                        ((*(longlong *)(param_2[5] + 0x10) - 1U & 0xfffffffffffffff0) + param_2[4] +
                         0x10,param_3);
    }
    local_98 = CONCAT71(local_98._1_7_,cVar4);
    if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
      local_2c8 = &local_98;
      uStack_2c0 = &LAB_1801edcd0;
      local_170 = 5;
      uStack_168 = &DAT_18021083b;
      local_160 = 0x15;
      local_150 = (longlong *)&DAT_1802107c7;
      local_148 = &local_2c8;
      local_1a0 = 0;
      local_198 = &DAT_18021083b;
      uStack_190 = 0x15;
      local_188 = 0;
      uStack_180 = 
      "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\retry.rs"
      ;
      local_178 = 0x60;
      local_158 = (longlong *)0x16600000001;
      FUN_1801905c0(&local_78,&local_1a0);
      cVar4 = (char)local_98;
    }
    if (cVar4 == '\0') goto LAB_180084083;
  }
  if (uVar2 < *(uint *)(param_2 + 6)) {
    if ((undefined8 *)param_3[0x1c] != (undefined8 *)0x0) {
      (**(code **)param_3[0x1c])(&local_198,param_3 + 0x1f,param_3[0x1d],param_3[0x1e]);
      local_1d8 = (undefined4)local_188;
      uStack_1d4 = local_188._4_4_;
      uStack_1d0 = (undefined4)uStack_180;
      uStack_1cc = uStack_180._4_4_;
      local_1e8 = (undefined4)local_198;
      uStack_1e4 = local_198._4_4_;
      uStack_1e0 = (undefined4)uStack_190;
      uStack_1dc = uStack_190._4_4_;
      FUN_1801ade10(&local_2c8);
      _Src_00 = &local_2c8;
      memcpy(&local_1a0,_Src_00,0xe0);
      local_c0 = local_1e8;
      uStack_bc = uStack_1e4;
      uStack_b8 = uStack_1e0;
      uStack_b4 = uStack_1dc;
      local_b0 = local_1d8;
      uStack_ac = uStack_1d4;
      uStack_a8 = uStack_1d0;
      uStack_a4 = uStack_1cc;
      bVar1 = (byte)param_3[0x17];
      if (9 < bVar1) {
        if (bVar1 == 10) {
          local_2c8._4_4_ =
               (undefined4)
               (CONCAT14(local_2c8._7_1_,*(undefined4 *)((longlong)param_3 + 0xbc)) >> 8);
          local_2c8 = (undefined8 *)
                      CONCAT44(local_2c8._4_4_,*(undefined4 *)((longlong)param_3 + 0xb9));
          uVar5 = param_3[0x18];
          param_2 = (undefined8 *)param_3[0x19];
        }
        else {
          uVar5 = FUN_18006aa20(param_3 + 0x18);
          param_2 = _Src_00;
        }
      }
      uStack_74._0_3_ = (undefined3)((ulonglong)local_2c8 >> 0x20);
      local_78 = (undefined4)local_2c8;
      if ((10 < local_e8) && (local_d8 != (undefined8 *)0x0)) {
        thunk_FUN_1801d3330(local_e0,local_d8,1);
      }
      local_e7 = local_78;
      uStack_e3 = (undefined3)uStack_74;
      local_e8 = bVar1;
      local_e0 = uVar5;
      local_d8 = param_2;
      FUN_18008f930(&local_2c8,param_3 + 0xc);
      if (1 < (byte)local_140) {
        local_50 = (longlong *)CONCAT44(uStack_134,uStack_138);
        (**(code **)(*local_50 + 0x20))(local_50[3],local_50[1],local_50[2]);
        thunk_FUN_1801d3330(local_50,0x20,8);
      }
      (**(code **)(CONCAT44(uStack_12c,local_130) + 0x20))
                (CONCAT44(uStack_114,uStack_118),CONCAT44(uStack_124,uStack_128),
                 CONCAT44(uStack_11c,local_120));
      (**(code **)(CONCAT44(uStack_10c,local_110) + 0x20))
                (uStack_f8,CONCAT44(uStack_104,uStack_108),local_100);
      local_f0 = local_278;
      local_100 = local_288;
      uStack_f8 = uStack_280;
      local_110 = local_298;
      uStack_10c = uStack_294;
      uStack_108 = uStack_290;
      uStack_104 = uStack_28c;
      local_120 = local_2a8;
      uStack_11c = uStack_2a4;
      uStack_118 = uStack_2a0;
      uStack_114 = uStack_29c;
      local_130 = local_2b8;
      uStack_12c = uStack_2b4;
      uStack_128 = uStack_2b0;
      uStack_124 = uStack_2ac;
      local_140 = (undefined4)local_2c8;
      uStack_13c = local_2c8._4_4_;
      uStack_138 = (undefined4)uStack_2c0;
      uStack_134 = uStack_2c0._4_4_;
      local_c8 = (undefined1)param_3[0x1b];
      plVar6 = (longlong *)param_3[10];
      local_60 = (longlong)plVar6 * 4;
      if (0x7ffffffffffffffe < local_60 || (ulonglong)plVar6 >> 0x3e != 0) {
        uVar8 = 0;
LAB_180083fbd:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar8,local_60);
      }
      uVar5 = param_3[0xb];
      _Src = (void *)param_3[9];
      local_50 = plVar6;
      if (local_60 == 0) {
        local_58 = (longlong *)0x2;
      }
      else {
        FUN_180027490();
        uVar8 = 2;
        local_58 = (longlong *)thunk_FUN_1801d32d0(local_60,2);
        if (local_58 == (longlong *)0x0) goto LAB_180083fbd;
      }
      memcpy(local_58,_Src,local_60);
      FUN_18009cd60(&local_78,param_3 + 3);
      FUN_18009c810(&local_2c8,param_3 + 6);
      local_60 = CONCAT62(local_60._2_6_,(short)uVar5);
      local_a0 = *param_3;
      if (1 < local_a0) {
        local_1c8 = param_3[1];
        uStack_1c0 = param_3[2];
      }
      local_88 = local_68;
      local_98 = CONCAT44(uStack_74,local_78);
      uStack_90 = uStack_70;
      local_1b8 = (undefined4)local_2c8;
      uStack_1b4 = local_2c8._4_4_;
      uStack_1b0 = (undefined4)uStack_2c0;
      uStack_1ac = uStack_2c0._4_4_;
      local_1a8 = CONCAT44(uStack_2b4,local_2b8);
      FUN_1800430f0(&local_1a0);
      local_1a0 = local_a0;
      local_198 = (undefined *)local_1c8;
      uStack_190 = uStack_1c0;
      local_188 = local_98;
      uStack_180 = (char *)uStack_90;
      local_178 = local_88;
      local_170 = CONCAT44(uStack_1b4,local_1b8);
      uStack_168 = (undefined *)CONCAT44(uStack_1ac,uStack_1b0);
      local_160 = local_1a8;
      local_158 = local_58;
      local_150 = local_50;
      local_148 = (undefined8 *)CONCAT62(local_148._2_6_,(undefined2)local_60);
      uVar5 = param_3[0x1a];
      if (uVar5 == 0) {
        plVar6 = (longlong *)0x0;
      }
      else {
        FUN_180027490();
        local_50 = (longlong *)thunk_FUN_1801d32d0(0x20,8);
        if (local_50 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x20);
        }
        FUN_1800a0e40(&local_2c8,uVar5);
        local_50[2] = CONCAT44(uStack_2b4,local_2b8);
        local_50[3] = CONCAT44(uStack_2ac,uStack_2b0);
        *(undefined4 *)local_50 = (undefined4)local_2c8;
        *(undefined4 *)((longlong)local_50 + 4) = local_2c8._4_4_;
        *(undefined4 *)(local_50 + 1) = (undefined4)uStack_2c0;
        *(undefined4 *)((longlong)local_50 + 0xc) = uStack_2c0._4_4_;
        plVar6 = local_50;
      }
      if (local_d0 != (longlong *)0x0) {
        lVar3 = local_d0[1];
        if (lVar3 != 0) {
          local_58 = local_d0;
          local_50 = plVar6;
          FUN_1800a2ea0();
          plVar6 = local_50;
          local_d0 = local_58;
          lVar7 = lVar3 * 0x21 + 0x31;
          if (lVar7 != 0) {
            thunk_FUN_1801d3330(*local_58 + lVar3 * -0x20 + -0x20,lVar7,0x10);
          }
        }
        thunk_FUN_1801d3330(local_d0,0x20,8);
      }
      local_d0 = plVar6;
      memcpy(param_1,&local_1a0,0x100);
      return param_1;
    }
  }
  else if (4 < *(ulonglong *)PTR_DAT_1802fd518) {
    local_170 = 5;
    uStack_168 = &DAT_18020d714;
    local_160 = 0xe;
    local_150 = (longlong *)0x18020d698;
    local_148 = (undefined8 *)0x37;
    local_1a0 = 0;
    local_198 = &DAT_18020d714;
    uStack_190 = 0xe;
    local_188 = 0;
    uStack_180 = 
    "C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\reqwest-0.12.28\\src\\retry.rs"
    ;
    local_178 = 0x60;
    local_158 = (longlong *)0xff00000001;
    FUN_1801905c0(&local_78,&local_1a0);
  }
LAB_180084083:
  *param_1 = 3;
  return param_1;
}


