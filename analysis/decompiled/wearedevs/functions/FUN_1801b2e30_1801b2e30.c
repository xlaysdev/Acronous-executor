/* FUN_1801b2e30 @ 1801b2e30 */

void FUN_1801b2e30(ulonglong *param_1,ulonglong *param_2,void *param_3,size_t param_4)

{
  ulonglong *puVar1;
  char cVar2;
  ulonglong uVar3;
  void *_Dst;
  ulonglong *puVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  ulonglong local_70;
  ulonglong local_68;
  ulonglong local_60;
  ulonglong *local_58;
  size_t local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_2[2] == 1) {
    uVar5 = *param_2;
    uVar7 = param_2[1];
    thunk_FUN_1801d3330(param_2,0x18,8);
    uVar3 = 0x3f;
    if (uVar7 >> 10 != 0) {
      for (; (uVar7 >> 10) >> uVar3 == 0; uVar3 = uVar3 - 1) {
      }
    }
    uVar6 = (uVar3 ^ 0xffffffffffffffc0) + 0x41;
    uVar3 = 7;
    if (uVar6 < 7) {
      uVar3 = uVar6;
    }
    uVar9 = (longlong)param_3 - uVar5;
    uVar6 = uVar9 + param_4;
    puVar1 = (ulonglong *)((uVar3 & 0xffffffff) * 4 + 1);
    local_70 = uVar5;
    local_68 = uVar6;
    local_60 = uVar7;
    local_58 = puVar1;
    if (uVar9 != 0) {
      if (uVar9 >> 0x3b == 0) {
        puVar4 = puVar1 + uVar9 * 4;
      }
      else {
        FUN_180027490();
        puVar4 = (ulonglong *)thunk_FUN_1801d32d0(0x28,8);
        if (puVar4 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201705(8,0x28);
        }
        *puVar4 = uVar7;
        puVar4[1] = uVar5;
        puVar4[2] = uVar6;
        puVar4[3] = (ulonglong)((uint)((ulonglong)puVar1 >> 2) & 7);
        puVar4[4] = 1;
      }
      local_70 = uVar5 + uVar9;
      local_68 = 0;
      if (uVar9 <= uVar6) {
        local_68 = uVar6 - uVar9;
      }
      local_60 = uVar7 - uVar9;
      local_58 = puVar4;
    }
    param_1[2] = local_60;
    param_1[3] = (ulonglong)local_58;
    *param_1 = local_70;
    param_1[1] = local_68;
  }
  else {
    puVar1 = param_2 + 2;
    if ((longlong)param_4 < 0) {
      uVar8 = 0;
LAB_1801b2eea:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar8,param_4);
    }
    if (param_4 == 0) {
      _Dst = (void *)0x1;
    }
    else {
      FUN_180027490();
      uVar8 = 1;
      _Dst = (void *)thunk_FUN_1801d32d0(param_4,1);
      if (_Dst == (void *)0x0) goto LAB_1801b2eea;
    }
    memcpy(_Dst,param_3,param_4);
    LOCK();
    *puVar1 = *puVar1 - 1;
    UNLOCK();
    if (*puVar1 == 0) {
      uVar5 = *param_2;
      uVar7 = param_2[1];
      local_50 = param_4;
      cVar2 = FUN_1801f2f10(uVar7,1);
      if (cVar2 == '\0') {
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_70,&DAT_180285b28,
                      &PTR_s_C__Users_burne__cargo_registry_s_180285ce8);
      }
      thunk_FUN_1801d3330(uVar5,uVar7,1);
      thunk_FUN_1801d3330(param_2,0x18,8);
      param_4 = local_50;
    }
    uVar5 = 0x3f;
    if (param_4 >> 10 != 0) {
      for (; (param_4 >> 10) >> uVar5 == 0; uVar5 = uVar5 - 1) {
      }
    }
    uVar7 = (uVar5 ^ 0xffffffffffffffc0) + 0x41;
    uVar5 = 7;
    if (uVar7 < 7) {
      uVar5 = uVar7;
    }
    *param_1 = (ulonglong)_Dst;
    param_1[1] = param_4;
    param_1[2] = param_4;
    param_1[3] = (uVar5 & 0xffffffff) * 4 + 1;
  }
  return;
}


