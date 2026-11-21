/* FUN_1800e7500 @ 1800e7500 */

undefined8 * FUN_1800e7500(undefined8 *param_1,void *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  int local_280 [2];
  longlong local_278;
  void *local_270;
  undefined1 local_268 [280];
  longlong local_150;
  void *local_148;
  undefined1 local_140 [280];
  void *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  memcpy(&local_150,param_2,0x128);
  FUN_1800c1240(local_280,&local_150);
  if (local_280[0] == 1) {
    if (local_278 == 2) {
      uVar1 = 0;
      _Dst = local_270;
    }
    else {
      local_150 = local_278;
      local_148 = local_270;
      memcpy(local_140,local_268,0x118);
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0x128,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x128);
      }
      memcpy(_Dst,&local_150,0x128);
      uVar1 = 1;
    }
    param_1[1] = uVar1;
    param_1[2] = _Dst;
    *param_1 = 2;
  }
  else {
    memcpy(param_1,&local_278,0x128);
  }
  thunk_FUN_1801d3330(local_28,0x128,8);
  return param_1;
}


