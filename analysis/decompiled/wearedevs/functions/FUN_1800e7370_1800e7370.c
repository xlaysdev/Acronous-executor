/* FUN_1800e7370 @ 1800e7370 */

undefined8 * FUN_1800e7370(undefined8 *param_1,void *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  int local_480 [2];
  longlong local_478;
  void *local_470;
  undefined1 local_468 [536];
  longlong local_250;
  void *local_248;
  undefined1 local_240 [536];
  void *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  memcpy(&local_250,param_2,0x228);
  FUN_1800c13d0(local_480,&local_250);
  if (local_480[0] == 1) {
    if (local_478 == 2) {
      uVar1 = 0;
      _Dst = local_470;
    }
    else {
      local_250 = local_478;
      local_248 = local_470;
      memcpy(local_240,local_468,0x218);
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0x228,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x228);
      }
      memcpy(_Dst,&local_250,0x228);
      uVar1 = 1;
    }
    param_1[1] = uVar1;
    param_1[2] = _Dst;
    *param_1 = 2;
  }
  else {
    memcpy(param_1,&local_478,0x228);
  }
  thunk_FUN_1801d3330(local_28,0x228,8);
  return param_1;
}


