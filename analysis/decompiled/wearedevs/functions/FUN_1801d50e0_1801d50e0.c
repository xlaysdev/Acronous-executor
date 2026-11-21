/* FUN_1801d50e0 @ 1801d50e0 */

/* WARNING: Removing unreachable block (ram,0x0001801d528d) */

undefined8 * FUN_1801d50e0(undefined8 *param_1,undefined8 param_2,HANDLE param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 unaff_RBX;
  HANDLE hObject;
  longlong lVar4;
  undefined **ppuVar5;
  int local_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined1 uStack_b8;
  undefined2 uStack_b7;
  undefined4 uStack_b5;
  undefined8 local_98;
  undefined8 *local_78;
  undefined **local_70;
  HANDLE local_68;
  longlong local_60;
  HANDLE local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  longlong local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  local_d0 = 0;
  local_c8 = 0;
  local_c0 = 7;
  local_bc = 0;
  uStack_b7 = 0;
  uStack_b5 = 0;
  uStack_b8 = 1;
  uVar1 = FUN_1801d9410(param_2,param_3,&local_d0);
  if ((uVar1 & 1) != 0) {
    param_1[1] = param_3;
    *param_1 = 0x8000000000000000;
    return param_1;
  }
  local_68 = param_3;
  FUN_1801d9510(&local_d0,param_3);
  local_58 = param_3;
  if (local_d0 == 2) {
    if (((uint)local_c8 & 3) == 1) {
      local_60 = local_c8 + -1;
      local_38 = *(longlong *)(local_c8 + -1);
      local_30 = *(undefined8 **)(local_c8 + 7);
      if ((code *)*local_30 != (code *)0x0) {
        (*(code *)*local_30)(local_38);
      }
      if (local_30[1] != 0) {
        thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
      }
      thunk_FUN_1801d3330(local_60,0x18,8);
    }
    lVar4 = 0;
  }
  else {
    lVar4 = 1;
    unaff_RBX = local_98;
  }
  local_50 = (undefined *)0x0;
  uStack_48 = 1;
  local_40 = 0;
  uVar3 = unaff_RBX;
  if (lVar4 == 0) {
    uVar3 = 0;
  }
  lVar2 = FUN_1801ed480(&local_50,uVar3);
  if (lVar2 == -0x7fffffffffffffff) {
    local_38 = local_40;
    ppuVar5 = (undefined **)&local_50;
    local_78 = (undefined8 *)FUN_1801d5950(&local_68,ppuVar5,lVar4,unaff_RBX);
    lVar4 = local_40;
    local_70 = ppuVar5;
    local_30 = local_78;
    FUN_1801f2ab0(&local_d0,uStack_48 + local_38,local_40 - local_38);
    if (CONCAT44(uStack_cc,local_d0) == 0) {
      local_40 = lVar4;
      if (((ulonglong)local_30 & 1) == 0) {
        param_1[2] = lVar4;
        *(undefined4 *)param_1 = (undefined4)local_50;
        *(undefined4 *)((longlong)param_1 + 4) = local_50._4_4_;
        *(undefined4 *)(param_1 + 1) = (undefined4)uStack_48;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_48._4_4_;
        hObject = local_58;
        goto LAB_1801d52eb;
      }
    }
    else {
      if (((ulonglong)local_30 & 1) == 0) {
        ppuVar5 = &PTR_s_stream_did_not_contain_valid_UTF_18028ed80;
      }
      local_40 = local_38;
    }
  }
  else {
    ppuVar5 = (undefined **)0x2600000003;
  }
  hObject = local_58;
  param_1[1] = ppuVar5;
  *param_1 = 0x8000000000000000;
  if (local_50 != (undefined *)0x0) {
    thunk_FUN_1801d3330(uStack_48,local_50,1);
  }
LAB_1801d52eb:
  CloseHandle(hObject);
  return param_1;
}


