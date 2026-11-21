/* FUN_1800e4ed0 @ 1800e4ed0 */

void * FUN_1800e4ed0(undefined8 param_1)

{
  void *_Dst;
  undefined1 local_a8 [144];
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1800cbf10(local_a8,param_1);
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x90,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x90);
  }
  memcpy(_Dst,local_a8,0x90);
  return _Dst;
}


