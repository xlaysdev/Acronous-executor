/* FUN_180038e60 @ 180038e60 */

size_t * FUN_180038e60(size_t *param_1,longlong *param_2)

{
  longlong lVar1;
  size_t sVar2;
  void *_Dst;
  undefined8 uVar3;
  undefined4 local_40;
  void *local_38;
  size_t local_30;
  
  FUN_180038d20(&local_40);
  if ((char)local_40 == '\x01') {
    param_1[1] = (size_t)local_38;
    sVar2 = 0x8000000000000001;
  }
  else if (local_40._1_1_ == '\0') {
    sVar2 = 0x8000000000000000;
  }
  else {
    lVar1 = *param_2;
    *(longlong *)(lVar1 + 0x28) = *(longlong *)(lVar1 + 0x28) + 1;
    *(undefined8 *)(lVar1 + 0x10) = 0;
    FUN_1801cb540(&local_40,lVar1 + 0x18);
    if (local_40 != 2) {
      if ((longlong)local_30 < 0) {
        uVar3 = 0;
LAB_180038f00:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar3,local_30);
      }
      if (local_30 == 0) {
        _Dst = (void *)0x1;
      }
      else {
        FUN_180027490();
        uVar3 = 1;
        _Dst = (void *)thunk_FUN_1801d32d0(local_30,1);
        if (_Dst == (void *)0x0) goto LAB_180038f00;
      }
      memcpy(_Dst,local_38,local_30);
      *param_1 = local_30;
      param_1[1] = (size_t)_Dst;
      param_1[2] = local_30;
      return param_1;
    }
    param_1[1] = (size_t)local_38;
    sVar2 = 0x8000000000000001;
  }
  *param_1 = sVar2;
  return param_1;
}


