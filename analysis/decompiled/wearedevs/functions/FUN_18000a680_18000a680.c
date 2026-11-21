/* FUN_18000a680 @ 18000a680 */

void FUN_18000a680(longlong *param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  longlong local_38;
  
  lVar4 = param_1[1];
  lVar5 = param_1[2];
  puVar7 = (undefined8 *)(lVar4 + 0x38);
  local_38 = 0;
  while (lVar5 != local_38) {
    local_38 = local_38 + 1;
    uVar6 = *puVar7;
    plVar1 = puVar7 + -3;
    puVar2 = puVar7 + -2;
    puVar3 = puVar7 + -1;
    puVar7 = puVar7 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar6,*puVar2,*puVar3);
  }
  if (*param_1 == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar4,*param_1 * 0x48,8);
  return;
}


