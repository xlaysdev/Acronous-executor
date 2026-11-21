/* FUN_18018a170 @ 18018a170 */

ulonglong FUN_18018a170(longlong *param_1,int *param_2,longlong *param_3)

{
  int *piVar1;
  longlong lVar2;
  undefined8 uVar3;
  longlong lVar4;
  code *pcVar5;
  LPVOID pvVar6;
  BOOL BVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 unaff_RSI;
  undefined7 uVar11;
  ulonglong uVar10;
  ulonglong local_88;
  LPVOID pvStack_80;
  undefined8 local_78;
  ulonglong local_70;
  DWORD local_64;
  ulonglong local_60;
  ulonglong local_58;
  int *local_50;
  undefined1 local_44;
  undefined1 local_43;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  uVar11 = (undefined7)((ulonglong)unaff_RSI >> 8);
  uVar10 = CONCAT71(uVar11,1);
  if (*(longlong *)(param_2 + 4) != 0) goto LAB_18018a27c;
  piVar1 = param_2 + 4;
  FUN_180189b80(&local_88,param_1 + 2);
  pvVar6 = pvStack_80;
  local_70 = local_88;
  uVar9 = 0xffffffff;
  if (local_88 < 0xffffffff) {
    uVar9 = local_88;
  }
  BVar7 = ReadFile((HANDLE)param_1[0x16],pvStack_80,(DWORD)uVar9,(LPDWORD)0x0,
                   (LPOVERLAPPED)(param_1 + 7));
  if (BVar7 == 0) {
    local_41 = 1;
    uVar8 = GetLastError();
    if (uVar8 == 0x3e5) goto LAB_18018a207;
LAB_18018a290:
    uVar9 = (ulonglong)uVar8 << 0x20 | 2;
    if (uVar8 != 0xea) {
      if (uVar8 == 0x218) {
        uVar10 = 0;
      }
      else {
        local_58 = uVar9;
        local_50 = param_2;
        FUN_18018b060(piVar1);
        local_50[4] = 3;
        local_50[5] = 0;
        *(ulonglong *)(local_50 + 6) = local_58;
        uVar10 = CONCAT71(uVar11,1);
        if (*local_50 == 1) {
          uVar3 = *(undefined8 *)(local_50 + 2);
          if (param_3 == (longlong *)0x0) {
            local_42 = 1;
            local_60 = local_58;
            local_43 = 0;
            local_44 = 1;
            FUN_180189a50(*(undefined8 *)(local_50 + 0x18),param_1,uVar3,1);
          }
          else {
            lVar2 = param_3[2];
            if (lVar2 == *param_3) {
              local_42 = 1;
              local_60 = local_58;
              local_43 = 0;
              local_44 = 1;
              FUN_1801f8fa0(param_3);
            }
            lVar4 = param_3[1];
            *(undefined8 *)(lVar4 + lVar2 * 0x10) = uVar3;
            *(undefined4 *)(lVar4 + 8 + lVar2 * 0x10) = 1;
            param_3[2] = lVar2 + 1;
          }
        }
      }
      if (local_70 != 0) {
        thunk_FUN_1801d3330(pvVar6,local_70,1);
      }
      goto LAB_18018a27c;
    }
    local_58 = uVar9;
    local_50 = param_2;
    FUN_18018b060(piVar1);
    local_50[4] = 2;
    local_50[5] = 0;
  }
  else {
LAB_18018a207:
    local_64 = 0;
    BVar7 = GetOverlappedResult((HANDLE)param_1[0x16],(LPOVERLAPPED)(param_1 + 7),&local_64,0);
    if (BVar7 == 0) {
      local_41 = 1;
      uVar8 = GetLastError();
      if (uVar8 != 0x3e4) goto LAB_18018a290;
    }
    else {
      local_58 = (ulonglong)local_64;
    }
    local_50 = param_2;
    FUN_18018b060(piVar1);
    local_50[4] = 1;
    local_50[5] = 0;
  }
  local_50[6] = 0;
  local_50[7] = 0;
  *(ulonglong *)(local_50 + 8) = local_88;
  *(LPVOID *)(local_50 + 10) = pvStack_80;
  *(undefined8 *)(local_50 + 0xc) = local_78;
  LOCK();
  lVar2 = *param_1;
  *param_1 = *param_1 + 1;
  UNLOCK();
  if (*param_1 == 0 || SCARRY8(lVar2,1) != *param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
LAB_18018a27c:
  return uVar10 & 0xffffffff;
}


