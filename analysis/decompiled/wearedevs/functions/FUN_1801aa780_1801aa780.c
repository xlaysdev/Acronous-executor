/* FUN_1801aa780 @ 1801aa780 */

ulonglong * FUN_1801aa780(ulonglong *param_1,void *param_2,byte *param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  ulonglong _Size;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  ulonglong local_60;
  void *local_58;
  ulonglong uStack_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  _Size = 0;
LAB_1801aa7b3:
  if ((byte *)((longlong)param_2 + _Size) == param_3) {
    uVar6 = (longlong)param_3 - (longlong)param_2;
  }
  else {
    if ((byte *)((longlong)param_2 + _Size + 1) == param_3 ||
        *(char *)((longlong)param_2 + _Size) != '%') goto LAB_1801aa7b0;
    pbVar2 = (byte *)((longlong)param_2 + _Size + 2);
    bVar4 = *(byte *)((longlong)param_2 + _Size + 1);
    uVar5 = bVar4 - 0x30;
    if (0x39 < bVar4) {
      uVar5 = (bVar4 - 0x41 & 0xffffffdf) + 10;
    }
    if (pbVar2 == param_3 || 0xf < uVar5) goto LAB_1801aa7b0;
    bVar4 = *pbVar2;
    uVar7 = bVar4 - 0x30;
    if (0x39 < bVar4) {
      uVar7 = (bVar4 - 0x41 & 0xffffffdf) + 10;
    }
    if (0xf < uVar7) goto LAB_1801aa7b0;
    uVar6 = (longlong)param_3 - (longlong)param_2;
    if (uVar6 < _Size) {
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,_Size,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_1802827c0);
    }
    if (_Size == 0) {
      local_58 = (void *)0x1;
    }
    else {
      FUN_180027490();
      local_58 = (void *)thunk_FUN_1801d32d0(_Size,1);
      if (local_58 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,_Size);
      }
    }
    local_60 = _Size;
    memcpy(local_58,param_2,_Size);
    uStack_50 = _Size;
    FUN_180201770(&local_60);
    *(byte *)((longlong)local_58 + _Size) = (byte)uVar7 | (char)uVar5 << 4;
    pbVar2 = (byte *)((longlong)param_2 + _Size + 3);
    while (_Size = _Size + 1, pbVar2 != param_3) {
      pbVar3 = pbVar2 + 1;
      bVar4 = *pbVar2;
      if ((bVar4 == 0x25) && (bVar4 = 0x25, pbVar3 != param_3)) {
        bVar1 = pbVar2[1];
        uVar5 = bVar1 - 0x30;
        if (0x39 < bVar1) {
          uVar5 = (bVar1 - 0x41 & 0xffffffdf) + 10;
        }
        if (pbVar2 + 2 != param_3 && uVar5 < 0x10) {
          bVar1 = pbVar2[2];
          uVar7 = bVar1 - 0x30;
          if (0x39 < bVar1) {
            uVar7 = (bVar1 - 0x41 & 0xffffffdf) + 10;
          }
          if (uVar7 < 0x10) {
            pbVar3 = pbVar2 + 3;
            bVar4 = (byte)uVar7 | (char)uVar5 << 4;
          }
        }
      }
      if (_Size == local_60) {
        uStack_50 = _Size;
        FUN_1801fc230(&local_60,_Size,(ulonglong)(param_3 + (2 - (longlong)pbVar3)) / 3 + 1);
      }
      *(byte *)((longlong)local_58 + _Size) = bVar4;
      pbVar2 = pbVar3;
    }
    if (!SBORROW8(0,local_60)) {
      param_1[1] = (ulonglong)local_58;
      param_1[2] = _Size;
      goto LAB_1801aa876;
    }
  }
  param_1[1] = (ulonglong)param_2;
  param_1[2] = uVar6;
  local_60 = 0x8000000000000000;
LAB_1801aa876:
  *param_1 = local_60;
  return param_1;
LAB_1801aa7b0:
  _Size = _Size + 1;
  goto LAB_1801aa7b3;
}


