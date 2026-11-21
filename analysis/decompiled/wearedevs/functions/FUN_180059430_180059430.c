/* FUN_180059430 @ 180059430 */

void FUN_180059430(longlong param_1,undefined8 param_2)

{
  longlong lVar1;
  byte bVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  ulonglong uVar6;
  undefined8 *puVar7;
  ulonglong *local_78;
  code *local_70;
  ulonglong local_68;
  undefined8 local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar5 = (ulonglong *)(param_1 + 0x1a0);
  local_68 = *(ulonglong *)(param_1 + 0x1a0);
  local_60 = param_2;
  if (0x8000000000000001 < local_68) {
    local_70 = FUN_180114980;
    local_78 = puVar5;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180209280,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_180209480);
  }
  bVar2 = FUN_1800c9f80(puVar5,param_2,param_1 + 0x10);
  uVar6 = (ulonglong)bVar2 ^ 0x8000000000000005;
  uVar4 = *puVar5;
  if (-1 < (longlong)uVar4) {
    lVar1 = *(longlong *)(param_1 + 0x1b0);
    if (lVar1 != 0) {
      local_50 = *(longlong *)(param_1 + 0x1a8);
      puVar7 = (undefined8 *)(local_50 + 0x18);
      lVar3 = 1;
      local_58 = lVar1;
      local_40 = uVar6;
      local_38 = param_1;
      local_30 = puVar5;
      do {
        local_48 = lVar3;
        if (puVar7[-3] != 0) {
          (**(code **)(puVar7[-3] + 0x20))(*puVar7,puVar7[-2],puVar7[-1]);
        }
        lVar3 = local_48 + 1;
        puVar7 = puVar7 + 4;
      } while (local_48 != lVar1);
      uVar4 = *local_30;
      param_1 = local_38;
      puVar5 = local_30;
      uVar6 = local_40;
    }
    if (uVar4 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1a8),uVar4 << 5,8);
    }
  }
  *puVar5 = uVar6;
  return;
}


