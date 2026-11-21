/* FUN_1801a4d80 @ 1801a4d80 */

undefined8 FUN_1801a4d80(undefined4 *param_1,ulonglong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  char cVar3;
  undefined8 uVar4;
  void *_Dst;
  ulonglong uVar5;
  undefined4 *_Src;
  ulonglong uVar6;
  undefined8 local_50;
  longlong local_48;
  
  uVar2 = *(ulonglong *)(param_1 + 0x3c);
  if (uVar2 < 0x3c) {
    _Src = param_1 + 1;
    uVar5 = 0x3b;
    uVar6 = uVar2;
  }
  else {
    _Src = *(undefined4 **)(param_1 + 4);
    uVar5 = uVar2;
    uVar6 = *(ulonglong *)(param_1 + 2);
  }
  if (param_2 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_1802821d0,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802821f0);
  }
  if (param_2 < 0x3c) {
    uVar4 = 0x8000000000000001;
    if (0x3b < uVar2) {
      *param_1 = 0;
      memcpy(param_1 + 1,_Src,uVar6 * 4);
      *(ulonglong *)(param_1 + 0x3c) = uVar6;
      local_48 = uVar5 * 4;
      if ((uVar5 >> 0x3e != 0) || (cVar3 = FUN_1801f2f10(local_48,4), cVar3 == '\0')) {
        local_50 = 0;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_50,&DAT_180282010,
                      &PTR_s_C__Users_burne__cargo_registry_s_180282100);
      }
      thunk_FUN_1801d3330(_Src,local_48,4);
      uVar4 = 0x8000000000000001;
    }
  }
  else if (param_2 == uVar5) {
    uVar4 = 0x8000000000000001;
  }
  else {
    lVar1 = param_2 * 4;
    if ((param_2 >> 0x3e == 0) && (cVar3 = FUN_1801f2f10(lVar1,4), cVar3 != '\0')) {
      if (uVar2 < 0x3c) {
        FUN_180027490();
        _Dst = (void *)thunk_FUN_1801d32d0(lVar1,4);
        if (_Dst == (void *)0x0) {
          return 4;
        }
        memcpy(_Dst,_Src,uVar6 * 4);
      }
      else {
        if ((uVar5 >> 0x3e != 0) || (cVar3 = FUN_1801f2f10(uVar5 * 4,4), cVar3 == '\0')) {
          return 0;
        }
        _Dst = (void *)thunk_FUN_1801d3370(_Src,uVar5 * 4,4,lVar1);
        if (_Dst == (void *)0x0) {
          return 4;
        }
      }
      *param_1 = 1;
      *(ulonglong *)(param_1 + 2) = uVar6;
      *(void **)(param_1 + 4) = _Dst;
      *(ulonglong *)(param_1 + 0x3c) = param_2;
      uVar4 = 0x8000000000000001;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}


