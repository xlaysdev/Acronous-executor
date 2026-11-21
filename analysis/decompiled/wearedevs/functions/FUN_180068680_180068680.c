/* FUN_180068680 @ 180068680 */

longlong * FUN_180068680(longlong *param_1,void *param_2,size_t param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  void *_Dst;
  size_t *psVar3;
  undefined8 uVar4;
  
  if ((longlong)param_3 < 0) {
    uVar4 = 0;
LAB_1800686a7:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar4,param_3);
  }
  if (param_3 == 0) {
    _Dst = (void *)0x1;
  }
  else {
    FUN_180027490();
    uVar4 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(param_3,1);
    if (_Dst == (void *)0x0) goto LAB_1800686a7;
  }
  memcpy(_Dst,param_2,param_3);
  FUN_180027490();
  psVar3 = (size_t *)thunk_FUN_1801d32d0(0x18,8);
  if (psVar3 == (size_t *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  *psVar3 = param_3;
  psVar3[1] = (size_t)_Dst;
  psVar3[2] = param_3;
  lVar1 = *param_1;
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)param_1[1];
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(lVar1,puVar2[1],puVar2[2]);
    }
  }
  *param_1 = (longlong)psVar3;
  param_1[1] = (longlong)&PTR_LAB_18020b4b0;
  return param_1;
}


