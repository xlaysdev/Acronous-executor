/* FUN_1801b2d00 @ 1801b2d00 */

undefined8 * FUN_1801b2d00(undefined8 *param_1,undefined8 param_2,void *param_3,size_t param_4)

{
  void *_Dst;
  ulonglong uVar1;
  ulonglong uVar2;
  
  if (param_4 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_4);
    }
  }
  memcpy(_Dst,param_3,param_4);
  uVar1 = 0x3f;
  if (param_4 >> 10 != 0) {
    for (; (param_4 >> 10) >> uVar1 == 0; uVar1 = uVar1 - 1) {
    }
  }
  uVar2 = (uVar1 ^ 0xffffffffffffffc0) + 0x41;
  uVar1 = 7;
  if (uVar2 < 7) {
    uVar1 = uVar2;
  }
  *param_1 = _Dst;
  param_1[1] = param_4;
  param_1[2] = param_4;
  param_1[3] = (uVar1 & 0xffffffff) * 4 + 1;
  return param_1;
}


