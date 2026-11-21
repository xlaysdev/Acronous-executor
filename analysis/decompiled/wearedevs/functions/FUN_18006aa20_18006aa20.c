/* FUN_18006aa20 @ 18006aa20 */

void * FUN_18006aa20(undefined8 *param_1)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  undefined8 uVar1;
  
  _Size = param_1[1];
  if ((longlong)_Size < 0) {
    uVar1 = 0;
LAB_18006aa32:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar1,_Size);
  }
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar1 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
    if (_Dst == (void *)0x0) goto LAB_18006aa32;
  }
  memcpy(_Dst,_Src,_Size);
  return _Dst;
}


