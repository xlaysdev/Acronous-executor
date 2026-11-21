/* FUN_1800e7690 @ 1800e7690 */

undefined8 * FUN_1800e7690(undefined8 *param_1,void *param_2)

{
  void *_Dst;
  undefined8 uVar1;
  int local_270 [2];
  longlong local_268;
  void *local_260;
  undefined1 local_258 [272];
  longlong local_148;
  void *local_140;
  undefined1 local_138 [272];
  void *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_28 = param_2;
  memcpy(&local_148,param_2,0x120);
  FUN_1800c1560(local_270,&local_148);
  if (local_270[0] == 1) {
    if (local_268 == 2) {
      uVar1 = 0;
      _Dst = local_260;
    }
    else {
      local_148 = local_268;
      local_140 = local_260;
      memcpy(local_138,local_258,0x110);
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(0x120,8);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_180201705(8,0x120);
      }
      memcpy(_Dst,&local_148,0x120);
      uVar1 = 1;
    }
    param_1[1] = uVar1;
    param_1[2] = _Dst;
    *param_1 = 2;
  }
  else {
    memcpy(param_1,&local_268,0x120);
  }
  thunk_FUN_1801d3330(local_28,0x120,8);
  return param_1;
}


