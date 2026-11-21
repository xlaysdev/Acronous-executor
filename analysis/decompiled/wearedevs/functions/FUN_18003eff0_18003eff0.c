/* FUN_18003eff0 @ 18003eff0 */

longlong * FUN_18003eff0(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  char cVar3;
  void *pvVar4;
  int local_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_158;
  longlong lStack_150;
  longlong local_148;
  longlong lStack_140;
  longlong local_138;
  longlong lStack_130;
  longlong local_128;
  void *pvStack_120;
  void *local_118;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined8 local_48;
  undefined *local_40;
  longlong *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  if ((int)*param_2 == 2) {
    FUN_180178c10(&local_198,param_2[0xe],(int)param_2[0xf],
                  &PTR_s_C__Users_burne__cargo_registry_s_180207918);
    local_68 = local_138;
    lStack_60 = lStack_130;
    local_78 = local_148;
    lStack_70 = lStack_140;
    local_88 = local_158;
    lStack_80 = lStack_150;
    local_98 = CONCAT44(uStack_164,local_168);
    uStack_90 = CONCAT44(uStack_15c,uStack_160);
    local_a8 = CONCAT44(uStack_174,local_178);
    uStack_a0 = CONCAT44(uStack_16c,uStack_170);
    local_b8 = CONCAT44(uStack_184,local_188);
    uStack_b0 = CONCAT44(uStack_17c,uStack_180);
    local_c8 = CONCAT44(uStack_194,local_198);
    uStack_c0 = CONCAT44(uStack_18c,uStack_190);
    local_38 = param_2;
    if (*param_2 != 2) {
      if (*param_2 == 0) {
        plVar1 = (longlong *)param_2[1];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_1801635e0();
        }
      }
      else {
        plVar1 = (longlong *)param_2[1];
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_180162f80();
        }
      }
      FUN_18000c570(local_38 + 2);
    }
    local_38[0xc] = local_68;
    local_38[0xd] = lStack_60;
    local_38[10] = local_78;
    local_38[0xb] = lStack_70;
    local_38[8] = local_88;
    local_38[9] = lStack_80;
    *(int *)(local_38 + 6) = (int)local_98;
    *(int *)((longlong)local_38 + 0x34) = local_98._4_4_;
    *(int *)(local_38 + 7) = (int)uStack_90;
    *(int *)((longlong)local_38 + 0x3c) = uStack_90._4_4_;
    *(int *)(local_38 + 4) = (int)local_a8;
    *(int *)((longlong)local_38 + 0x24) = local_a8._4_4_;
    *(int *)(local_38 + 5) = (int)uStack_a0;
    *(int *)((longlong)local_38 + 0x2c) = uStack_a0._4_4_;
    *(int *)(local_38 + 2) = (int)local_b8;
    *(int *)((longlong)local_38 + 0x14) = local_b8._4_4_;
    *(int *)(local_38 + 3) = (int)uStack_b0;
    *(int *)((longlong)local_38 + 0x1c) = uStack_b0._4_4_;
    *(int *)local_38 = (int)local_c8;
    *(int *)((longlong)local_38 + 4) = local_c8._4_4_;
    *(int *)(local_38 + 1) = (int)uStack_c0;
    *(int *)((longlong)local_38 + 0xc) = uStack_c0._4_4_;
    param_2 = local_38;
    if ((int)*local_38 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180207930);
    }
  }
  cVar3 = FUN_1801799c0(param_2,param_3);
  if (cVar3 == '\0') {
    lStack_70 = CONCAT62(lStack_70._2_6_,4);
    local_48 = 1;
    local_40 = &DAT_18020b258;
    local_c8 = 0x8000000000000000;
    FUN_180027490();
    pvVar4 = (void *)thunk_FUN_1801d32d0(0x90,8);
    if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(pvVar4,&local_c8,0x90);
    *param_1 = 4;
    param_1[1] = (longlong)pvVar4;
  }
  else {
    (**(code **)(param_2[0x11] + 0x18))(&local_198,param_2[0x10],param_3);
    if (CONCAT44(uStack_194,local_198) == 6) {
      *param_1 = 6;
    }
    else {
      if (local_198 == 5) {
        local_128 = 5;
        lVar2 = *param_2;
      }
      else {
        pvVar4 = (void *)CONCAT44(uStack_18c,uStack_190);
        local_118 = (void *)CONCAT44(uStack_184,local_188);
        if (local_198 == 4) {
          lStack_70 = CONCAT62(lStack_70._2_6_,4);
          local_c8 = 0x8000000000000000;
          FUN_180027490();
          pvVar4 = (void *)thunk_FUN_1801d32d0(0x90,8);
          if (pvVar4 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_180201705(8,0x90);
          }
          local_118 = memcpy(pvVar4,&local_c8,0x90);
        }
        else {
          local_88 = lStack_140;
          local_c8 = CONCAT44(uStack_17c,uStack_180);
          uStack_c0 = CONCAT44(uStack_174,local_178);
          local_b8 = CONCAT44(uStack_16c,uStack_170);
          uStack_b0 = CONCAT44(uStack_164,local_168);
          local_a8 = CONCAT44(uStack_15c,uStack_160);
          local_98 = lStack_150;
          uStack_90 = local_148;
          uStack_a0 = local_158;
        }
        lVar2 = *param_2;
        pvStack_120 = pvVar4;
        uStack_110 = (int)local_c8;
        uStack_10c = local_c8._4_4_;
        local_108 = (int)uStack_c0;
        uStack_104 = uStack_c0._4_4_;
        lStack_100 = local_b8;
        local_f8 = uStack_b0;
        lStack_f0 = local_a8;
        local_e8 = uStack_a0;
        lStack_e0 = local_98;
        local_d8 = uStack_90;
        lStack_d0 = local_88;
        local_128 = CONCAT44(uStack_194,local_198);
      }
      local_38 = param_2;
      if (lVar2 != 2) {
        if (lVar2 == 0) {
          plVar1 = (longlong *)param_2[1];
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_1801635e0();
          }
        }
        else {
          plVar1 = (longlong *)param_2[1];
          LOCK();
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            FUN_180162f80();
          }
        }
        FUN_18000c570(local_38 + 2);
      }
      *local_38 = 2;
      param_1[10] = local_d8;
      param_1[0xb] = lStack_d0;
      param_1[8] = local_e8;
      param_1[9] = lStack_e0;
      param_1[6] = local_f8;
      param_1[7] = lStack_f0;
      param_1[4] = CONCAT44(uStack_104,local_108);
      param_1[5] = lStack_100;
      param_1[2] = (longlong)local_118;
      param_1[3] = CONCAT44(uStack_10c,uStack_110);
      *param_1 = local_128;
      param_1[1] = (longlong)pvStack_120;
    }
  }
  return param_1;
}


