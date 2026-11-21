/* FUN_1801b3140 @ 1801b3140 */

void FUN_1801b3140(size_t *param_1,undefined8 *param_2,void *param_3,size_t param_4)

{
  longlong *plVar1;
  undefined8 uVar2;
  char cVar3;
  void *_Dst;
  size_t sVar4;
  undefined8 uVar5;
  bool bVar6;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  LOCK();
  bVar6 = param_2[2] == 1;
  if (bVar6) {
    param_2[2] = 0;
  }
  UNLOCK();
  if (bVar6) {
    _Dst = (void *)*param_2;
    sVar4 = param_2[1];
    thunk_FUN_1801d3330(param_2,0x18,8);
    memmove(_Dst,param_3,param_4);
  }
  else {
    plVar1 = param_2 + 2;
    if ((longlong)param_4 < 0) {
      uVar5 = 0;
LAB_1801b31c8:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar5,param_4);
    }
    if (param_4 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar5 = 1;
      _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
      if (_Dst == (void *)0x0) goto LAB_1801b31c8;
    }
    memcpy(_Dst,param_3,param_4);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    sVar4 = param_4;
    if (*plVar1 == 0) {
      uVar5 = *param_2;
      uVar2 = param_2[1];
      cVar3 = FUN_1801f2f10(uVar2,1);
      if (cVar3 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_49,&DAT_180285b28,
                      &PTR_s_C__Users_burne__cargo_registry_s_180285ce8);
      }
      thunk_FUN_1801d3330(uVar5,uVar2,1);
      thunk_FUN_1801d3330(param_2,0x18,8);
    }
  }
  *param_1 = sVar4;
  param_1[1] = (size_t)_Dst;
  param_1[2] = param_4;
  return;
}


