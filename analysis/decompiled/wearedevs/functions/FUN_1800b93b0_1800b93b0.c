/* FUN_1800b93b0 @ 1800b93b0 */

void FUN_1800b93b0(longlong *param_1,size_t param_2)

{
  void *_Src;
  size_t sVar1;
  size_t *psVar2;
  size_t _Size;
  undefined8 uVar3;
  
  sVar1 = (**(code **)(param_1[4] + 0x18))(param_1[3]);
  if (SBORROW8(0,*param_1)) {
    _Size = 0x8000000000000000;
  }
  else {
    _Size = param_1[2];
    if ((longlong)_Size < 0) {
      uVar3 = 0;
LAB_1800b93fe:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar3,_Size);
    }
    _Src = (void *)param_1[1];
    if (_Size == 0) {
      param_1 = (longlong *)0x1;
    }
    else {
      FUN_180027490();
      uVar3 = 1;
      param_1 = (longlong *)thunk_FUN_1801d32d0(_Size,1);
      if (param_1 == (longlong *)0x0) goto LAB_1800b93fe;
    }
    memcpy(param_1,_Src,_Size);
  }
  FUN_180027490();
  psVar2 = (size_t *)thunk_FUN_1801d32d0(0x28,8);
  if (psVar2 == (size_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x28);
  }
  psVar2[4] = param_2;
  psVar2[2] = _Size;
  psVar2[3] = sVar1;
  *psVar2 = _Size;
  psVar2[1] = (size_t)param_1;
  return;
}


