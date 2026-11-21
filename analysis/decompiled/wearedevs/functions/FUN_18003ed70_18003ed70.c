/* FUN_18003ed70 @ 18003ed70 */

undefined8 *
FUN_18003ed70(undefined8 param_1,undefined8 param_2,longlong param_3,undefined8 param_4,int param_5)

{
  undefined8 *_Dst;
  undefined8 local_b8;
  undefined8 uStack_b0;
  longlong local_a8;
  undefined8 local_48;
  int local_40;
  undefined8 local_38;
  undefined8 local_30;
  longlong local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_b8 = param_1;
  uStack_b0 = param_2;
  local_48 = param_4;
  local_38 = param_1;
  local_30 = param_2;
  if (param_3 == 0) {
    if (param_5 == 1000000000) {
      FUN_180027490();
      _Dst = (undefined8 *)thunk_FUN_1801d32d0(0x10,8);
      if (_Dst == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x10);
      }
      *_Dst = param_1;
      _Dst[1] = param_2;
    }
    else {
      local_b8 = 2;
      local_40 = param_5;
      FUN_180027490();
      _Dst = (undefined8 *)thunk_FUN_1801d32d0(0x90,8);
      if (_Dst == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x90);
      }
      memcpy(_Dst,&local_b8,0x90);
    }
  }
  else if (param_5 == 1000000000) {
    local_a8 = param_3;
    FUN_180027490();
    _Dst = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
    if (_Dst == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x18);
    }
    _Dst[2] = local_a8;
    *_Dst = local_b8;
    _Dst[1] = uStack_b0;
  }
  else {
    local_b8 = 2;
    local_40 = param_5;
    local_28 = param_3;
    FUN_180027490();
    _Dst = (undefined8 *)thunk_FUN_1801d32d0(0x98,8);
    if (_Dst == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x98);
    }
    memcpy(_Dst,&local_b8,0x98);
  }
  return _Dst;
}


