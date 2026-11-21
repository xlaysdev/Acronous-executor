/* FUN_18009cbb0 @ 18009cbb0 */

ulonglong * FUN_18009cbb0(ulonglong *param_1,longlong param_2)

{
  ulonglong uVar1;
  size_t _Size;
  void *_Src;
  longlong lVar2;
  void *_Dst;
  longlong lVar3;
  ulonglong uVar4;
  longlong lVar5;
  undefined8 uVar6;
  ulonglong local_60;
  ulonglong local_58;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  lVar2 = uVar1 * 0x18;
  if (0x555555555555555 < uVar1) {
    uVar6 = 0;
LAB_18009cbef:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar6,lVar2);
  }
  if (lVar2 == 0) {
    local_60 = 0;
    local_58 = 8;
  }
  else {
    lVar3 = *(longlong *)(param_2 + 8);
    FUN_180027490();
    uVar6 = 8;
    local_58 = thunk_FUN_1801d32d0(lVar2,8);
    if (local_58 == 0) goto LAB_18009cbef;
    local_60 = uVar1;
    if (uVar1 != 0) {
      lVar5 = 0;
      uVar4 = 0;
      do {
        if (lVar2 == lVar5) break;
        uVar4 = uVar4 + 1;
        _Size = *(size_t *)(lVar3 + 0x10);
        if ((longlong)_Size < 0) {
          uVar6 = 0;
LAB_18009cd0e:
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(uVar6);
        }
        _Src = *(void **)(lVar3 + 8);
        if (_Size == 0) {
          _Dst = (void *)0x1;
        }
        else {
          FUN_180027490();
          _Dst = (void *)thunk_FUN_1801d32d0(_Size,1);
          if (_Dst == (void *)0x0) {
            uVar6 = 1;
            goto LAB_18009cd0e;
          }
        }
        memcpy(_Dst,_Src,_Size);
        *(size_t *)(local_58 + lVar5) = _Size;
        *(void **)(local_58 + 8 + lVar5) = _Dst;
        *(size_t *)(local_58 + 0x10 + lVar5) = _Size;
        lVar5 = lVar5 + 0x18;
        lVar3 = lVar3 + 0x18;
      } while (uVar1 != uVar4);
    }
  }
  param_1[2] = uVar1;
  *param_1 = local_60;
  param_1[1] = local_58;
  return param_1;
}


