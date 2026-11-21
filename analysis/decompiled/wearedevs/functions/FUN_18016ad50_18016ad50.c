/* FUN_18016ad50 @ 18016ad50 */

void FUN_18016ad50(longlong *param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 local_e8;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  longlong *local_60;
  longlong *local_58;
  longlong *local_50;
  longlong *local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_e8 = *param_2;
  *param_2 = 3;
  if (local_e8 == 3) {
    local_3b = 1;
    local_60 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_180201b60("driver missing",0xe,&PTR_s_C__Users_burne__cargo_registry_s_1802610f8);
  }
  local_b0 = param_2[7];
  iStack_e0 = (int)param_2[1];
  iStack_dc = *(int *)((longlong)param_2 + 0xc);
  iStack_d8 = (int)param_2[2];
  iStack_d4 = *(int *)((longlong)param_2 + 0x14);
  iStack_d0 = (int)param_2[3];
  iStack_cc = *(int *)((longlong)param_2 + 0x1c);
  iStack_c8 = (int)param_2[4];
  iStack_c4 = *(int *)((longlong)param_2 + 0x24);
  local_c0 = (int)param_2[5];
  iStack_bc = *(int *)((longlong)param_2 + 0x2c);
  iStack_b8 = (int)param_2[6];
  iStack_b4 = *(int *)((longlong)param_2 + 0x34);
  lVar1 = *(longlong *)(param_3 + 0x88);
  if (lVar1 == 0) {
    lVar1 = param_2[0xb];
    local_48 = param_2;
  }
  else {
    if (param_1[1] != 0) {
      local_58 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261110);
    }
    lVar2 = *(longlong *)(param_3 + 0x90);
    param_1[1] = -1;
    if (param_1[2] == 0) {
      lVar4 = 0;
    }
    else {
      local_58 = param_2;
      local_50 = param_1;
      FUN_180168500();
      lVar4 = local_50[1] + 1;
      param_1 = local_50;
      param_2 = local_58;
    }
    param_1[2] = (longlong)param_2;
    param_1[1] = lVar4;
    local_39 = 1;
    local_3a = 0;
    local_48 = param_2;
    (**(code **)(lVar2 + 0x28))
              (lVar1 + (*(longlong *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    if (param_1[1] != 0) {
      local_39 = 1;
      local_3a = 0;
      local_48 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261128);
    }
    param_1[1] = -1;
    plVar5 = (longlong *)param_1[2];
    param_1[2] = 0;
    if (plVar5 == (longlong *)0x0) {
      local_58 = param_2;
      local_50 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180261150);
    }
    param_1[1] = 0;
    lVar1 = plVar5[0xb];
    local_48 = plVar5;
  }
  if (lVar1 == 0) {
    if (0x7ffffffffffffffe < (ulonglong)param_1[3]) {
      local_39 = 1;
      local_3a = 1;
      FUN_180201940(&PTR_s_C__Users_burne__cargo_registry_s_1802604c0);
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    if ((param_1[6] == 0) && (*(char *)(*param_1 + 0x1d0) == '\0')) {
      lVar1 = local_48[0xd];
      local_48[0xd] = lVar1 + 1;
      lVar2 = local_48[0xe];
      local_48[0xe] = lVar2 + 1;
      *(longlong *)(param_3 + 0x10) = local_48[0xc];
      *(longlong *)(param_3 + 0x20) = lVar1 + 1;
      *(longlong *)(param_3 + 0x28) = lVar2 + 1;
      local_39 = 1;
      local_3a = 0;
      plVar5 = (longlong *)FUN_18016aae0(param_1,local_48,param_3,&local_e8,1000000000);
      lVar1 = plVar5[0xe];
      plVar5[0xe] = lVar1 + 1;
      *(longlong *)(param_3 + 0x10) = plVar5[0xc];
      *(longlong *)(param_3 + 0x20) = plVar5[0xd];
      *(longlong *)(param_3 + 0x28) = lVar1 + 1;
      lVar1 = *(longlong *)(param_3 + 0x98);
      goto joined_r0x00018016b008;
    }
  }
  *(longlong *)(param_3 + 0x10) = local_48[0xc];
  *(longlong *)(param_3 + 0x20) = local_48[0xd];
  *(longlong *)(param_3 + 0x28) = local_48[0xe];
  local_39 = 1;
  local_3a = 0;
  plVar5 = (longlong *)FUN_18016aae0(param_1,local_48,param_3,&local_e8,0);
  lVar1 = *(longlong *)(param_3 + 0x98);
joined_r0x00018016b008:
  if (lVar1 != 0) {
    if (param_1[1] != 0) {
      local_58 = plVar5;
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261110);
    }
    lVar2 = *(longlong *)(param_3 + 0xa0);
    param_1[1] = -1;
    if (param_1[2] == 0) {
      lVar4 = 0;
      plVar6 = plVar5;
    }
    else {
      local_58 = plVar5;
      local_50 = param_1;
      FUN_180168500();
      lVar4 = local_50[1] + 1;
      plVar6 = local_58;
      param_1 = local_50;
    }
    param_1[2] = (longlong)plVar6;
    param_1[1] = lVar4;
    local_39 = 1;
    local_3a = 0;
    local_48 = plVar6;
    (**(code **)(lVar2 + 0x28))
              (lVar1 + (*(longlong *)(lVar2 + 0x10) - 1U & 0xfffffffffffffff0) + 0x10);
    if (param_1[1] != 0) {
      local_39 = 1;
      local_3a = 0;
      local_48 = plVar6;
                    /* WARNING: Subroutine does not return */
      FUN_1802018f0(&PTR_s_C__Users_burne__cargo_registry_s_180261128);
    }
    param_1[1] = -1;
    plVar5 = (longlong *)param_1[2];
    param_1[2] = 0;
    if (plVar5 == (longlong *)0x0) {
      local_58 = plVar6;
      local_50 = param_1;
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("core missing",0xc,&PTR_s_C__Users_burne__cargo_registry_s_180261150);
    }
    param_1[1] = 0;
  }
  local_78 = iStack_b8;
  iStack_74 = iStack_b4;
  uStack_70 = (undefined4)local_b0;
  uStack_6c = local_b0._4_4_;
  local_88 = iStack_c8;
  iStack_84 = iStack_c4;
  iStack_80 = local_c0;
  iStack_7c = iStack_bc;
  local_98 = iStack_d8;
  iStack_94 = iStack_d4;
  iStack_90 = iStack_d0;
  iStack_8c = iStack_cc;
  local_a8 = (undefined4)local_e8;
  uStack_a4 = local_e8._4_4_;
  iStack_a0 = iStack_e0;
  iStack_9c = iStack_dc;
  local_50 = plVar5;
  if ((int)*plVar5 != 3) {
    lVar1 = plVar5[1];
    if (SBORROW8(0,lVar1)) {
      plVar6 = (longlong *)plVar5[2];
      LOCK();
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
        FUN_180163980(plVar5 + 2);
      }
    }
    else {
      if (plVar5[5] != 0) {
        thunk_FUN_1801d3330(plVar5[4],plVar5[5] << 5,8);
      }
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(plVar5[2],lVar1 << 4,8);
      }
      plVar5 = (longlong *)plVar5[6];
      LOCK();
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
        FUN_180187950(local_50 + 6);
      }
    }
  }
  local_50[6] = CONCAT44(iStack_74,local_78);
  local_50[7] = CONCAT44(uStack_6c,uStack_70);
  local_50[4] = CONCAT44(iStack_84,local_88);
  local_50[5] = CONCAT44(iStack_7c,iStack_80);
  local_50[2] = CONCAT44(iStack_94,local_98);
  local_50[3] = CONCAT44(iStack_8c,iStack_90);
  *local_50 = CONCAT44(uStack_a4,local_a8);
  local_50[1] = CONCAT44(iStack_9c,iStack_a0);
  return;
}


