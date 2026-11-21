/* FUN_18003fb30 @ 18003fb30 */

void * FUN_18003fb30(void *param_1,void *param_2)

{
  void *_Dst;
  undefined1 local_490 [424];
  undefined1 local_2e8 [424];
  undefined1 local_140 [272];
  undefined1 local_30;
  void *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_19 = 1;
  local_28 = param_2;
  FUN_1800e5640(local_490,param_1);
  memcpy(local_2e8,param_1,0x1a8);
  memcpy(param_1,local_490,0x1a8);
  memcpy(local_140,local_28,0x100);
  local_30 = 0;
  FUN_180027490();
  _Dst = (void *)thunk_FUN_1801d32d0(0x2c0,8);
  if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x2c0);
  }
  memcpy(_Dst,local_2e8,0x2c0);
  return _Dst;
}


