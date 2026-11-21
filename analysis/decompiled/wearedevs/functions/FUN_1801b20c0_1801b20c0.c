/* FUN_1801b20c0 @ 1801b20c0 */

size_t * FUN_1801b20c0(size_t *param_1,size_t *param_2,void *param_3,size_t param_4)

{
  size_t *psVar1;
  void *_Dst;
  size_t sVar2;
  undefined8 uVar3;
  
  psVar1 = param_2 + 4;
  if (param_2[4] == 1) {
    sVar2 = *param_2;
    _Dst = (void *)param_2[1];
    *param_2 = 0;
    param_2[1] = 1;
    param_2[2] = 0;
    LOCK();
    *psVar1 = *psVar1 - 1;
    UNLOCK();
    if (*psVar1 == 0) {
      if (*param_2 != 0) {
        thunk_FUN_1801d3330(param_2[1],*param_2,1);
      }
      thunk_FUN_1801d3330(param_2,0x28,8);
    }
    memmove(_Dst,param_3,param_4);
  }
  else {
    if ((longlong)param_4 < 0) {
      uVar3 = 0;
LAB_1801b2170:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar3,param_4);
    }
    if (param_4 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar3 = 1;
      _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
      if (_Dst == (void *)0x0) goto LAB_1801b2170;
    }
    memcpy(_Dst,param_3,param_4);
    LOCK();
    *psVar1 = *psVar1 - 1;
    UNLOCK();
    sVar2 = param_4;
    if (*psVar1 == 0) {
      if (*param_2 != 0) {
        thunk_FUN_1801d3330(param_2[1],*param_2,1);
      }
      thunk_FUN_1801d3330(param_2,0x28,8);
    }
  }
  *param_1 = sVar2;
  param_1[1] = (size_t)_Dst;
  param_1[2] = param_4;
  return param_1;
}


