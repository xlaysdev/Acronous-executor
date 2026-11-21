/* FUN_18018a590 @ 18018a590 */

void FUN_18018a590(undefined8 *param_1,longlong *param_2,longlong *param_3,ulonglong param_4,
                  longlong param_5)

{
  ulonglong uVar1;
  longlong lVar2;
  code *pcVar3;
  BOOL BVar4;
  uint uVar5;
  ulonglong uVar6;
  DWORD local_5c;
  ulonglong local_58;
  longlong *local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar1 = param_3[2];
  local_50 = param_3;
  if (uVar1 < param_4) {
    local_41 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(param_4,uVar1,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180266090);
  }
  lVar2 = param_3[1];
  uVar6 = 0xffffffff;
  if (uVar1 - param_4 < 0xffffffff) {
    uVar6 = uVar1 - param_4;
  }
  BVar4 = WriteFile((HANDLE)param_2[0x16],(LPCVOID)(lVar2 + param_4),(DWORD)uVar6,(LPDWORD)0x0,
                    (LPOVERLAPPED)(param_2 + 0xc));
  if (BVar4 == 0) {
    local_41 = 1;
    uVar5 = GetLastError();
    if (uVar5 != 0x3e5) goto LAB_18018a6e1;
  }
  local_5c = 0;
  BVar4 = GetOverlappedResult((HANDLE)param_2[0x16],(LPOVERLAPPED)(param_2 + 0xc),&local_5c,0);
  local_58 = param_4;
  if (BVar4 == 0) {
    local_41 = 1;
    uVar5 = GetLastError();
    if (uVar5 != 0x3e4) {
LAB_18018a6e1:
      param_1[1] = (ulonglong)uVar5 << 0x20 | 2;
      *param_1 = 2;
      if (*local_50 != 0) {
        thunk_FUN_1801d3330(lVar2,*local_50,1);
      }
      return;
    }
    *param_1 = 0;
    FUN_18018b060(param_5 + 0x38);
    *(undefined8 *)(param_5 + 0x38) = 1;
    *(ulonglong *)(param_5 + 0x40) = local_58;
    lVar2 = local_50[1];
    *(longlong *)(param_5 + 0x48) = *local_50;
    *(longlong *)(param_5 + 0x50) = lVar2;
    *(longlong *)(param_5 + 0x58) = local_50[2];
    LOCK();
    lVar2 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (*param_2 != 0 && SCARRY8(lVar2,1) == *param_2 < 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    *param_1 = 1;
    param_1[1] = (ulonglong)local_5c;
    FUN_18018b060(param_5 + 0x38);
    *(undefined8 *)(param_5 + 0x38) = 2;
    *(ulonglong *)(param_5 + 0x40) = local_58;
    lVar2 = local_50[1];
    *(longlong *)(param_5 + 0x48) = *local_50;
    *(longlong *)(param_5 + 0x50) = lVar2;
    *(longlong *)(param_5 + 0x58) = local_50[2];
    LOCK();
    lVar2 = *param_2;
    *param_2 = *param_2 + 1;
    UNLOCK();
    if (*param_2 != 0 && SCARRY8(lVar2,1) == *param_2 < 0) {
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)invalidInstructionException();
  (*pcVar3)();
}


