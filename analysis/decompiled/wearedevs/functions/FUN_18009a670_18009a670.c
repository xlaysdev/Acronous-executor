/* FUN_18009a670 @ 18009a670 */

void FUN_18009a670(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong local_40;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x50) << 2,2);
  }
  FUN_1800972e0(param_1 + 0x18);
  lVar4 = *(longlong *)(param_1 + 0x38);
  lVar5 = *(longlong *)(param_1 + 0x40);
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
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar4,*(longlong *)(param_1 + 0x30) * 0x48,8);
  return;
}


