/* FUN_18014af70 @ 18014af70 */

void FUN_18014af70(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong local_40;
  
  if (*(char *)(param_1 + 0x48) != '\r') {
    FUN_1800663c0(param_1 + 0x48);
  }
  FUN_18015fd60(param_1);
  FUN_180032b40(param_1 + 0x28);
  lVar4 = *(longlong *)(param_1 + 0x18);
  lVar5 = *(longlong *)(param_1 + 0x20);
  puVar7 = (undefined8 *)(lVar4 + 0x38);
  local_40 = 0;
  while (lVar5 != local_40) {
    local_40 = local_40 + 1;
    uVar6 = *puVar7;
    plVar1 = puVar7 + -3;
    puVar2 = puVar7 + -2;
    puVar3 = puVar7 + -1;
    puVar7 = puVar7 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar6,*puVar2,*puVar3);
  }
  if (*(longlong *)(param_1 + 0x10) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar4,*(longlong *)(param_1 + 0x10) * 0x48,8);
  return;
}


