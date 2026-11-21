/* FUN_180069770 @ 180069770 */

undefined4 * FUN_180069770(undefined4 *param_1,longlong param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 local_b8 [24];
  ulonglong *local_a0;
  undefined1 *local_98;
  ulonglong *local_90;
  undefined1 *local_88;
  ulonglong local_80;
  ulonglong local_78;
  undefined *local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  ulonglong local_50;
  undefined8 local_48;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar1 = *(undefined8 *)(param_2 + 0x88);
  lVar4 = *(longlong *)(param_2 + 0x90);
  lVar5 = *(longlong *)(param_2 + 0x98);
  uVar3 = *(ulonglong *)(param_2 + 0xa8);
  local_38 = param_2;
  if ((uVar3 & 1) == 0) {
    local_70 = PTR_PTR_1802fd530;
    local_58 = uVar3;
    uVar6 = *(undefined4 *)(param_2 + 0x78);
    uVar7 = *(undefined4 *)(param_2 + 0x7c);
    uVar8 = *(undefined4 *)(param_2 + 0x80);
    uVar9 = *(undefined4 *)(param_2 + 0x84);
  }
  else {
    uVar3 = uVar3 >> 5;
    local_48 = (longlong *)*(undefined8 *)(param_2 + 0x78);
    uStack_40 = *(undefined4 *)(param_2 + 0x80);
    uStack_3c = *(undefined4 *)(param_2 + 0x84);
    FUN_1801b1ef0(local_b8,lVar4,lVar5,*(undefined8 *)(param_2 + 0xa0),uVar3);
    FUN_1801b3d40(&local_70,local_b8);
    lVar5 = local_60 - uVar3;
    local_78 = uVar3;
    if (local_60 < uVar3) {
      local_50 = local_60;
      local_80 = local_60;
      local_a0 = &local_78;
      local_98 = &LAB_1800273d0;
      local_90 = &local_80;
      local_88 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020c397,&local_a0,&PTR_s_C__Users_burne__cargo_registry_s_18020c420);
    }
    lVar4 = uVar3 + local_68;
    uVar6 = (undefined4)local_48;
    uVar7 = local_48._4_4_;
    uVar8 = uStack_40;
    uVar9 = uStack_3c;
  }
  lVar2 = local_38;
  *param_1 = uVar6;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  *(undefined8 *)(param_1 + 4) = uVar1;
  *(undefined **)(param_1 + 6) = local_70;
  *(longlong *)(param_1 + 8) = lVar4;
  *(longlong *)(param_1 + 10) = lVar5;
  *(ulonglong *)(param_1 + 0xc) = local_58;
  if (*(longlong *)(local_38 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(local_38 + 0x18),*(longlong *)(local_38 + 0x10),1);
  }
  local_48 = (longlong *)(lVar2 + 0x30);
  FUN_18007f870();
  if (*local_48 != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(local_38 + 0x38),*local_48 * 0x50,8);
  }
  return param_1;
}


