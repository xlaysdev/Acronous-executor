/* FUN_18006a990 @ 18006a990 */

void * FUN_18006a990(undefined8 *param_1)

{
  ulonglong _Size;
  void *_Src;
  void *_Dst;
  undefined8 uVar1;
  
  _Size = param_1[1] * 4;
  if (0x7ffffffffffffffe < _Size || (ulonglong)param_1[1] >> 0x3e != 0) {
    uVar1 = 0;
LAB_18006a9c6:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar1,_Size);
  }
  _Src = (void *)*param_1;
  if (_Size == 0) {
    _Dst = (void *)0x2;
  }
  else {
    FUN_180027490();
    uVar1 = 2;
    _Dst = (void *)thunk_FUN_1801d32d0(_Size,2);
    if (_Dst == (void *)0x0) goto LAB_18006a9c6;
  }
  memcpy(_Dst,_Src,_Size);
  return _Dst;
}


