/* FUN_1801b29c0 @ 1801b29c0 */

undefined8 * FUN_1801b29c0(undefined8 *param_1,undefined8 *param_2)

{
  size_t _Size;
  void *_Src;
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  
  _Size = param_2[1];
  if ((longlong)_Size < 0) {
    uVar3 = 0;
LAB_1801b29d7:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar3,_Size);
  }
  _Src = (void *)*param_2;
  if (_Size == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar3 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
    if (_Dst == (void *)0x0) goto LAB_1801b29d7;
  }
  memcpy(_Dst,_Src,_Size);
  uVar1 = 0x3f;
  if (_Size >> 10 != 0) {
    for (; (_Size >> 10) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar2 = (uVar1 ^ 0xffffffffffffffc0) + 0x41;
  uVar1 = 7;
  if (uVar2 < 7) {
    uVar1 = uVar2;
  }
  *param_1 = _Dst;
  param_1[1] = _Size;
  param_1[2] = _Size;
  param_1[3] = (uVar1 & 0xffffffff) * 4 + 1;
  return param_1;
}


