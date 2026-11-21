/* FUN_18003f7f0 @ 18003f7f0 */

longlong * FUN_18003f7f0(longlong *param_1,undefined8 *param_2,undefined8 param_3)

{
  char cVar1;
  void *pvVar2;
  undefined8 local_168 [11];
  undefined2 local_110;
  void *local_e8;
  undefined *local_e0;
  longlong local_d8;
  void *local_d0;
  void *local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  cVar1 = FUN_1801799c0(param_2[2],param_3);
  if (cVar1 == '\0') {
    local_110 = 4;
    local_e8 = (void *)0x1;
    local_e0 = &DAT_18020b258;
    local_168[0] = 0x8000000000000000;
    FUN_180027490();
    pvVar2 = (void *)thunk_FUN_1801d32d0(0x90,8);
    if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(pvVar2,local_168,0x90);
    *param_1 = 4;
    param_1[1] = (longlong)pvVar2;
  }
  else {
    (**(code **)(param_2[1] + 0x18))(&local_d8,*param_2,param_3);
    if (local_d8 == 6) {
      *param_1 = 6;
    }
    else {
      if ((int)local_d8 == 4) {
        local_110 = 4;
        local_e8 = local_d0;
        local_e0 = local_c8;
        local_168[0] = 0x8000000000000000;
        FUN_180027490();
        pvVar2 = (void *)thunk_FUN_1801d32d0(0x90,8);
        if (pvVar2 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x90);
        }
        local_c8 = memcpy(pvVar2,local_168,0x90);
      }
      else {
        pvVar2 = local_d0;
        if ((int)local_d8 != 5) {
          local_38 = local_80;
          local_48 = local_90;
          lStack_40 = lStack_88;
          local_58 = local_a0;
          lStack_50 = lStack_98;
          local_68 = local_b0;
          lStack_60 = lStack_a8;
          local_78 = local_c0;
          lStack_70 = lStack_b8;
        }
      }
      *param_1 = local_d8;
      param_1[1] = (longlong)pvVar2;
      param_1[2] = (longlong)local_c8;
      param_1[3] = local_78;
      param_1[4] = lStack_70;
      param_1[5] = local_68;
      param_1[6] = lStack_60;
      param_1[7] = local_58;
      param_1[8] = lStack_50;
      param_1[9] = local_48;
      param_1[10] = lStack_40;
      param_1[0xb] = local_38;
    }
  }
  return param_1;
}


