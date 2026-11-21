/* FUN_180136f10 @ 180136f10 */

void FUN_180136f10(longlong *param_1,longlong *param_2)

{
  undefined4 uVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong local_50;
  code *local_48;
  uint *local_40;
  code *local_38;
  uint local_2c;
  longlong *local_28;
  longlong *local_20;
  undefined1 local_11;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_2c = *(uint *)(param_2 + 4);
  local_20 = param_2;
  if (((int)param_1[5] == 1) && (*(uint *)((longlong)param_1 + 0x2c) < local_2c)) {
    local_50 = (longlong)param_1 + 0x2c;
    local_48 = FUN_1801392c0;
    local_40 = &local_2c;
    local_38 = FUN_1801392c0;
    local_11 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_18024bdf8,&local_50,&PTR_s_C__Users_burne__cargo_registry_s_18024beb8);
  }
  uVar1 = *(undefined4 *)((longlong)param_2 + 0x24);
  *(undefined4 *)(param_1 + 5) = 1;
  *(uint *)((longlong)param_1 + 0x2c) = local_2c;
  *(undefined4 *)(param_1 + 6) = uVar1;
  local_28 = param_1;
  if (*param_1 != 0) {
    (**(code **)(*param_1 + 0x20))(param_1[3],param_1[1],param_1[2]);
  }
  local_28[4] = local_20[4];
  lVar2 = *local_20;
  lVar3 = local_20[1];
  lVar4 = local_20[3];
  local_28[2] = local_20[2];
  local_28[3] = lVar4;
  *local_28 = lVar2;
  local_28[1] = lVar3;
  return;
}


