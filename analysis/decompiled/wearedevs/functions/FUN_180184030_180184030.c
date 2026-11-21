/* FUN_180184030 @ 180184030 */

longlong * FUN_180184030(longlong *param_1,longlong param_2,int param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined1 uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  bool bVar10;
  longlong local_60;
  longlong *local_58;
  longlong local_50;
  longlong *local_48;
  longlong *local_40;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar7 = *(longlong *)(param_2 + 8);
  *(undefined8 *)(param_2 + 8) = 0;
  if (lVar7 == 0) {
    local_33 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("park missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180264fc8);
  }
  local_60 = lVar7;
  local_40 = (longlong *)param_2;
  if (param_1[1] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180264fe0);
  }
  param_1[1] = -1;
  local_58 = param_1;
  if (param_1[2] == 0) {
    lVar6 = 0;
  }
  else {
    local_50 = param_1[2];
    FUN_180181ad0();
    thunk_FUN_1801d3330(local_50,0x78,8);
    lVar6 = local_58[1] + 1;
  }
  plVar1 = local_58;
  local_58[2] = (longlong)local_40;
  local_58[1] = lVar6;
  lVar6 = *(longlong *)(*local_58 + 0x10) + 0x160;
  if (param_3 == 1000000000) {
    local_31 = 1;
    local_32 = 0;
    local_48 = local_40;
    uVar5 = FUN_18017c940(&local_60,lVar6);
  }
  else {
    lVar2 = *(longlong *)(lVar7 + 0x10);
    uVar5 = 1;
    LOCK();
    bVar10 = *(char *)(lVar2 + 0x50) == '\0';
    if (bVar10) {
      *(char *)(lVar2 + 0x50) = '\x01';
    }
    UNLOCK();
    if (bVar10) {
      local_50 = lVar2;
      uVar5 = FUN_18017c390(lVar7 + 0x10,lVar2 + 0x10,lVar6,0,param_3);
      LOCK();
      *(undefined1 *)(local_50 + 0x50) = 0;
      UNLOCK();
    }
    else if (param_3 != 0) {
      local_48 = local_40;
      local_31 = 1;
      local_32 = 0;
      FUN_18017c4b0(lVar7 + 0x10,0,param_3);
    }
  }
  lVar7 = plVar1[3];
  plVar4 = local_48;
  local_48 = local_40;
  while( true ) {
    local_40 = local_48;
    if (lVar7 != 0) {
      local_31 = 1;
      local_32 = 0;
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180260490);
    }
    plVar1[3] = -1;
    if (plVar1[6] == 0) break;
    lVar7 = plVar1[6] + -1;
    plVar1[6] = lVar7;
    lVar7 = lVar7 * 0x10;
    local_48 = plVar4;
    (**(code **)(*(longlong *)(plVar1[5] + lVar7) + 8))(*(undefined8 *)(plVar1[5] + 8 + lVar7));
    plVar1 = local_58 + 3;
    *plVar1 = *plVar1 + 1;
    lVar7 = *plVar1;
    plVar1 = local_58;
    plVar4 = local_48;
    local_48 = local_40;
  }
  plVar1[3] = 0;
  if (plVar1[1] != 0) {
    local_31 = 1;
    local_32 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180264ff8);
  }
  plVar1[1] = -1;
  local_40 = (longlong *)plVar1[2];
  plVar1[2] = 0;
  if (local_40 == (longlong *)0x0) {
    local_40 = local_48;
    local_48 = plVar4;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180265020);
  }
  plVar1[1] = 0;
  plVar3 = (longlong *)local_40[1];
  local_50 = local_60;
  if (plVar3 != (longlong *)0x0) {
    LOCK();
    *plVar3 = *plVar3 + -1;
    UNLOCK();
    if (*plVar3 == 0) {
      local_48 = plVar4;
      FUN_1801638e0();
    }
  }
  plVar4 = local_40;
  local_40[1] = local_50;
  *(undefined1 *)((longlong)local_40 + 0x74) = uVar5;
  if ((*(char *)((longlong)local_40 + 0x71) == '\0') &&
     (1 < ((ulonglong)
           (uint)(*(int *)(local_40[3] + 0x20) - (int)*(undefined8 *)(local_40[3] + 0x18)) + 1) -
          (ulonglong)(*local_40 == 0))) {
    lVar7 = *(longlong *)(*plVar1 + 0x10);
    uVar9 = lVar7 + 0x28;
    local_48 = local_40;
    local_31 = 0;
    local_32 = 1;
    uVar8 = FUN_18017bd40(lVar7 + 0xf8);
    if ((uVar8 & 1) != 0) {
      if (*(ulonglong *)(lVar7 + 0xa0) <= uVar9) {
        local_48 = plVar4;
        local_31 = 0;
        local_32 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar9,*(ulonglong *)(lVar7 + 0xa0),
                      &PTR_s_C__Users_burne__cargo_registry_s_1802626c0);
      }
      local_48 = plVar4;
      local_31 = 0;
      local_32 = 1;
      FUN_18017ca80(*(longlong *)(lVar7 + 0x98) + uVar9 * 0x10 + 8,lVar7 + 0x160);
    }
  }
  return plVar4;
}


