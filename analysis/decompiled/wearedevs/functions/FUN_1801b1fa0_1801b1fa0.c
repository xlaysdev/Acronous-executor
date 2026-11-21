/* FUN_1801b1fa0 @ 1801b1fa0 */

undefined8 * FUN_1801b1fa0(undefined8 *param_1,longlong *param_2,void *param_3,size_t param_4)

{
  longlong *plVar1;
  void *_Dst;
  ulonglong uVar2;
  size_t sVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  
  if (param_2[4] == 1) {
    sVar3 = (*param_2 - (longlong)param_3) + param_2[1];
    _Dst = param_3;
  }
  else {
    plVar1 = param_2 + 4;
    if ((longlong)param_4 < 0) {
      uVar5 = 0;
LAB_1801b1fda:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar5,param_4);
    }
    if (param_4 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar5 = 1;
      _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
      if (_Dst == (void *)0x0) goto LAB_1801b1fda;
    }
    memcpy(_Dst,param_3,param_4);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      if (*param_2 != 0) {
        thunk_FUN_1801d3330(param_2[1],*param_2,1);
      }
      thunk_FUN_1801d3330(param_2,0x28,8);
    }
    uVar2 = 0x3f;
    if (param_4 >> 10 != 0) {
      for (; (param_4 >> 10) >> uVar2 == 0; uVar2 = uVar2 - 1) {
      }
    }
    uVar4 = (uVar2 ^ 0xffffffffffffffc0) + 0x41;
    uVar2 = 7;
    if (uVar4 < 7) {
      uVar2 = uVar4;
    }
    param_2 = (longlong *)((uVar2 & 0xffffffff) * 4 + 1);
    sVar3 = param_4;
  }
  *param_1 = _Dst;
  param_1[1] = param_4;
  param_1[2] = sVar3;
  param_1[3] = param_2;
  return param_1;
}


