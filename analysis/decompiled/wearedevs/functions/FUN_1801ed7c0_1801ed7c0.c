/* FUN_1801ed7c0 @ 1801ed7c0 */

size_t * FUN_1801ed7c0(size_t *param_1,size_t *param_2)

{
  void *_Src;
  size_t sVar1;
  void *_Dst;
  
  if (SBORROW8(0,*param_2)) {
    _Src = (void *)param_2[1];
    sVar1 = param_2[2];
    if (sVar1 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      _Dst = (void *)thunk_FUN_1801d32d0(sVar1,1);
      if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,sVar1);
      }
    }
    memcpy(_Dst,_Src,sVar1);
    *param_1 = sVar1;
    param_1[1] = (size_t)_Dst;
    param_1[2] = sVar1;
  }
  else {
    param_1[2] = param_2[2];
    sVar1 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = sVar1;
  }
  return param_1;
}


