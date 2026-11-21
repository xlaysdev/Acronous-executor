/* FUN_18003f550 @ 18003f550 */

longlong * FUN_18003f550(longlong *param_1,longlong param_2,undefined8 param_3)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong extraout_XMM0_Qb;
  longlong lVar4;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  longlong local_c8;
  longlong local_c0;
  void *local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 *local_40;
  undefined **local_38;
  void *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  cVar2 = FUN_1801799c0(*(undefined8 *)(param_2 + 0x90),param_3);
  if (cVar2 == '\0') {
    local_68 = 4;
    local_40 = (undefined8 *)0x1;
    local_38 = (undefined **)&DAT_18020b258;
    local_c0 = -0x8000000000000000;
    FUN_180027490();
    pvVar3 = (void *)thunk_FUN_1801d32d0(0x90,8);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(pvVar3,&local_c0,0x90);
    *param_1 = 4;
    param_1[1] = (longlong)pvVar3;
  }
  else {
    pvVar3 = (void *)FUN_18003eff0(&local_c0,param_2,param_3);
    lVar1 = local_c0;
    if (local_c0 == 4) {
      local_30 = local_b8;
      FUN_180027490();
      local_40 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
      if (local_40 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,8);
      }
      *local_40 = local_b8;
      local_68 = 4;
      local_38 = &PTR_FUN_18020b168;
      local_c0 = -0x8000000000000000;
      FUN_180027490();
      pvVar3 = (void *)thunk_FUN_1801d32d0(0x90,8);
      if (pvVar3 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x90);
      }
      memcpy(pvVar3,&local_c0,0x90);
      lVar4 = 0;
    }
    else {
      if ((int)local_c0 == 6) {
        *param_1 = 6;
        return param_1;
      }
      lVar4 = extraout_XMM0_Qb;
      if ((int)local_c0 != 5) {
        local_108 = local_a8;
        lStack_100 = lStack_a0;
        local_f8 = local_98;
        lStack_f0 = lStack_90;
        local_e8 = local_88;
        lStack_e0 = lStack_80;
        local_d8 = local_78;
        lStack_d0 = lStack_70;
        local_c8 = CONCAT62(uStack_66,local_68);
        pvVar3 = local_b8;
        lVar4 = lStack_b0;
      }
    }
    *param_1 = lVar1;
    param_1[1] = (longlong)pvVar3;
    param_1[2] = lVar4;
    param_1[3] = local_108;
    param_1[4] = lStack_100;
    param_1[5] = local_f8;
    param_1[6] = lStack_f0;
    param_1[7] = local_e8;
    param_1[8] = lStack_e0;
    param_1[9] = local_d8;
    param_1[10] = lStack_d0;
    param_1[0xb] = local_c8;
  }
  return param_1;
}


