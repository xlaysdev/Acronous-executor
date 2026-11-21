/* FUN_1801015f0 @ 1801015f0 */

longlong FUN_1801015f0(longlong param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  void *_Dst;
  
  if (param_3 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (_Dst == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,param_3);
    }
  }
  memcpy(_Dst,param_2,param_3);
  lVar1 = *(longlong *)(param_1 + 0x30);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x38),lVar1,1);
  }
  *(size_t *)(param_1 + 0x30) = param_3;
  *(void **)(param_1 + 0x38) = _Dst;
  *(size_t *)(param_1 + 0x40) = param_3;
  return param_1;
}


