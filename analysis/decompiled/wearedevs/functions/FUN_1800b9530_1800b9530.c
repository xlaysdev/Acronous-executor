/* FUN_1800b9530 @ 1800b9530 */

void FUN_1800b9530(longlong *param_1,undefined8 param_2)

{
  void *_Src;
  size_t _Size;
  void *unaff_RDI;
  undefined8 uVar1;
  size_t local_58;
  void *local_50;
  size_t local_48;
  longlong local_40;
  undefined8 local_38;
  
  if (SBORROW8(0,*param_1)) {
    _Size = 0x8000000000000000;
  }
  else {
    _Size = param_1[2];
    if ((longlong)_Size < 0) {
      uVar1 = 0;
LAB_1800b955a:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar1,_Size);
    }
    _Src = (void *)param_1[1];
    if (_Size == 0) {
      unaff_RDI = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar1 = 1;
      unaff_RDI = (void *)thunk_FUN_1801d32d0(_Size,1);
      if (unaff_RDI == (void *)0x0) goto LAB_1800b955a;
    }
    memcpy(unaff_RDI,_Src,_Size);
  }
  local_58 = _Size;
  local_50 = unaff_RDI;
  local_48 = _Size;
  FUN_18009fc20(&local_40,param_2,&local_58);
  if ((-0x7fffffffffffffff < local_40) && (local_40 != 0)) {
    thunk_FUN_1801d3330(local_38,local_40,1);
  }
  return;
}


