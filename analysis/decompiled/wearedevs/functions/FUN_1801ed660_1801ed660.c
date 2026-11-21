/* FUN_1801ed660 @ 1801ed660 */

longlong * FUN_1801ed660(longlong *param_1,void *param_2,void *param_3)

{
  void *_Dst;
  ulonglong uVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong local_70;
  void *local_68;
  void *local_60;
  longlong local_58;
  void *local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  lVar5 = (longlong)param_3 + 1;
  if (lVar5 < 0) {
    uVar4 = 0;
  }
  else {
    FUN_180027490();
    uVar4 = 1;
    _Dst = (void *)thunk_FUN_1801d32d0(lVar5,1);
    if (_Dst != (void *)0x0) {
      memcpy(_Dst,param_2,(size_t)param_3);
      local_58 = lVar5;
      local_50 = _Dst;
      if (param_3 < (void *)0x10) {
        if (param_3 == (void *)0x0) {
          pvVar3 = (void *)0x0;
        }
        else {
          pvVar2 = (void *)0x0;
          do {
            if (*(char *)((longlong)param_2 + (longlong)pvVar2) == '\0') goto LAB_1801ed71e;
            pvVar2 = (void *)((longlong)pvVar2 + 1);
            pvVar3 = param_3;
          } while (param_3 != pvVar2);
        }
      }
      else {
        local_41 = 1;
        uVar1 = FUN_1801f2f70(0,param_2,param_3);
        pvVar2 = param_2;
        pvVar3 = param_2;
        _Dst = local_50;
        lVar5 = local_58;
        if ((uVar1 & 1) != 0) {
LAB_1801ed71e:
          *param_1 = lVar5;
          param_1[1] = (longlong)_Dst;
          param_1[2] = (longlong)param_3;
          param_1[3] = (longlong)pvVar2;
          return param_1;
        }
      }
      local_41 = 0;
      local_70 = local_58;
      local_68 = local_50;
      local_60 = param_3;
      lVar5 = FUN_1801ec600(&local_70);
      param_1[1] = lVar5;
      param_1[2] = (longlong)pvVar3;
      *param_1 = -0x8000000000000000;
      return param_1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar4,lVar5);
}


