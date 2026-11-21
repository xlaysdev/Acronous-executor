/* FUN_1801ec9d0 @ 1801ec9d0 */

size_t * FUN_1801ec9d0(size_t *param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  
  if (param_3 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
  }
  memcpy(_Dst,param_2,param_3);
  *param_1 = param_3;
  param_1[1] = (size_t)_Dst;
  param_1[2] = param_3;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}


