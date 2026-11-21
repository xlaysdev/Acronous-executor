/* FUN_1801d6710 @ 1801d6710 */

longlong FUN_1801d6710(undefined1 param_1,void *param_2,size_t param_3)

{
  void *_Dst;
  size_t *psVar1;
  longlong *plVar2;
  
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
  FUN_180027490();
  psVar1 = (size_t *)thunk_FUN_1801d32d0(0x18,8);
  if (psVar1 == (size_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *psVar1 = param_3;
  psVar1[1] = (size_t)_Dst;
  psVar1[2] = param_3;
  FUN_180027490();
  plVar2 = (longlong *)thunk_FUN_1801d32d0(0x18,8);
  if (plVar2 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *plVar2 = (longlong)psVar1;
  plVar2[1] = (longlong)&PTR_LAB_180290d38;
  *(undefined1 *)(plVar2 + 2) = param_1;
  return (longlong)plVar2 + 1;
}


