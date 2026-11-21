/* FUN_18003ea80 @ 18003ea80 */

longlong * FUN_18003ea80(longlong *param_1,longlong *param_2)

{
  void *_Dst;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined2 local_110;
  void *local_e8;
  void *local_e0;
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
  if (*param_2 == 0) {
    (**(code **)(param_2[2] + 0x18))(&local_d8,param_2[1]);
    if (local_d8 == 6) {
      *param_1 = 6;
    }
    else {
      if ((int)local_d8 == 4) {
        local_110 = 4;
        local_e8 = local_d0;
        local_e0 = local_c8;
        local_168 = -0x8000000000000000;
        FUN_180027490();
        _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
        if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x90);
        }
        local_c8 = memcpy(_Dst,&local_168,0x90);
      }
      else {
        _Dst = local_d0;
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
      param_1[1] = (longlong)_Dst;
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
  else {
    FUN_1801b3c20(&local_168,param_2,0);
    if (local_158 == 0) {
      *param_1 = 5;
      (**(code **)(local_168 + 0x20))(lStack_150,lStack_160,0);
    }
    else {
      param_1[3] = local_158;
      param_1[4] = lStack_150;
      param_1[1] = local_168;
      param_1[2] = lStack_160;
      *param_1 = 3;
    }
  }
  return param_1;
}


