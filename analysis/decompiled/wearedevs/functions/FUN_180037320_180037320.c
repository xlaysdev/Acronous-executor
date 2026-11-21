/* FUN_180037320 @ 180037320 */

size_t * FUN_180037320(size_t *param_1,longlong param_2)

{
  void *_Dst;
  undefined8 uVar1;
  longlong local_40;
  void *local_38;
  size_t local_30;
  
  *(longlong *)(param_2 + 0x28) = *(longlong *)(param_2 + 0x28) + 1;
  *(undefined8 *)(param_2 + 0x10) = 0;
  FUN_1801cb540(&local_40,param_2 + 0x18);
  if (local_40 == 2) {
    param_1[1] = (size_t)local_38;
    *param_1 = 0x8000000000000000;
  }
  else {
    if ((longlong)local_30 < 0) {
      uVar1 = 0;
LAB_18003737d:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar1,local_30);
    }
    if (local_30 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar1 = 1;
      _Dst = (void *)thunk_FUN_1801d32d0(local_30,1);
      if (_Dst == (void *)0x0) goto LAB_18003737d;
    }
    memcpy(_Dst,local_38,local_30);
    *param_1 = local_30;
    param_1[1] = (size_t)_Dst;
    param_1[2] = local_30;
  }
  return param_1;
}


