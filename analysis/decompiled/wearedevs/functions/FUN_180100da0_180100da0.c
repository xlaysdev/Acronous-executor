/* FUN_180100da0 @ 180100da0 */

ulonglong * FUN_180100da0(ulonglong *param_1,longlong *param_2)

{
  void *_Src;
  void *_Dst;
  ulonglong _Size;
  
  _Src = *(void **)(*param_2 + 8);
  _Size = (ulonglong)*(uint *)(*param_2 + 0x10);
  if (_Size == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,_Size);
    }
  }
  memcpy(_Dst,_Src,_Size);
  param_1[2] = _Size;
  param_1[1] = (ulonglong)_Dst;
  *param_1 = _Size;
  return param_1;
}


