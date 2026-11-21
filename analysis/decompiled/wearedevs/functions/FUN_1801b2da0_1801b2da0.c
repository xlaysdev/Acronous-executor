/* FUN_1801b2da0 @ 1801b2da0 */

size_t * FUN_1801b2da0(size_t *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  void *_Dst;
  undefined8 uVar1;
  
  if ((longlong)param_4 < 0) {
    uVar1 = 0;
LAB_1801b2db3:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar1,param_4);
  }
  if (param_4 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar1 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
    if (_Dst == (void *)0x0) goto LAB_1801b2db3;
  }
  *param_1 = param_4;
  param_1[1] = (size_t)_Dst;
  memcpy(_Dst,param_3,param_4);
  param_1[2] = param_4;
  return param_1;
}


