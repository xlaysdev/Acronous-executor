/* FUN_18009ea40 @ 18009ea40 */

void FUN_18009ea40(longlong *param_1)

{
  void *_Src;
  size_t *psVar1;
  size_t _Size;
  undefined8 uVar2;
  void *unaff_R14;
  
  if (SBORROW8(0,*param_1)) {
    _Size = 0x8000000000000000;
  }
  else {
    _Size = param_1[2];
    if ((longlong)_Size < 0) {
      uVar2 = 0;
LAB_18009ea75:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar2,_Size);
    }
    _Src = (void *)param_1[1];
    if (_Size == 0) {
      unaff_R14 = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar2 = 1;
      unaff_R14 = (void *)thunk_FUN_1801d32d0(_Size,1);
      if (unaff_R14 == (void *)0x0) goto LAB_18009ea75;
    }
    memcpy(unaff_R14,_Src,_Size);
  }
  FUN_180027490();
  psVar1 = (size_t *)thunk_FUN_1801d32d0(0x18,8);
  if (psVar1 == (size_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *psVar1 = _Size;
  psVar1[1] = (size_t)unaff_R14;
  psVar1[2] = _Size;
  return;
}


