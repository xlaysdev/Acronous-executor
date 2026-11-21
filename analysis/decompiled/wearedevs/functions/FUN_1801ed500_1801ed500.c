/* FUN_1801ed500 @ 1801ed500 */

size_t * FUN_1801ed500(size_t *param_1,longlong param_2)

{
  void *_Src;
  size_t _Size;
  void *_Dst;
  
  _Src = *(void **)(param_2 + 8);
  _Size = *(size_t *)(param_2 + 0x10);
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
  *param_1 = _Size;
  param_1[1] = (size_t)_Dst;
  param_1[2] = _Size;
  return param_1;
}


