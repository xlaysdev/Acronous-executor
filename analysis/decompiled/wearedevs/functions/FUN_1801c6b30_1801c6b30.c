/* FUN_1801c6b30 @ 1801c6b30 */

undefined8 * FUN_1801c6b30(undefined8 *param_1)

{
  longlong lVar1;
  void *_Dst;
  undefined8 local_200;
  undefined8 local_1f8 [15];
  longlong *local_180;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 *local_40;
  undefined8 local_30;
  
  local_40 = local_1f8;
  local_30 = 0xfffffffffffffffe;
  FUN_180027490();
  lVar1 = thunk_FUN_1801d32d0(0x400,8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,0x400);
  }
  FUN_180027490();
  local_180 = (longlong *)thunk_FUN_1801d32d0(0x10,8);
  if (local_180 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x10);
  }
  *local_180 = lVar1;
  local_180[1] = 0x40;
  local_200 = 1;
  local_1f8[0] = 1;
  local_100 = 0;
  uStack_f8 = 0;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x180,0x80);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(0x80,0x180);
  }
  memcpy(_Dst,&local_200,0x180);
  *param_1 = _Dst;
  param_1[1] = lVar1;
  param_1[2] = 0x40;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}


