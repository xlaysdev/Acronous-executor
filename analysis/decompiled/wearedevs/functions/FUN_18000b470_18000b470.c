/* FUN_18000b470 @ 18000b470 */

void FUN_18000b470(longlong param_1)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined8 *puVar9;
  longlong local_40;
  longlong local_30;
  
  if (*(longlong *)(param_1 + 0x50) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x48),*(longlong *)(param_1 + 0x50) << 2,2);
  }
  lVar5 = *(longlong *)(param_1 + 0x20);
  lVar6 = *(longlong *)(param_1 + 0x28);
  local_40 = 0;
  while (local_40 != lVar6) {
    lVar8 = local_40 * 0x68;
    lVar4 = lVar5 + lVar8;
    local_40 = local_40 + 1;
    lVar8 = *(longlong *)(lVar5 + 0x40 + lVar8);
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x20))
                (*(undefined8 *)(lVar4 + 0x58),*(undefined8 *)(lVar4 + 0x48),
                 *(undefined8 *)(lVar4 + 0x50));
    }
    (**(code **)(*(longlong *)(lVar4 + 0x18) + 0x20))
              (*(undefined8 *)(lVar4 + 0x30),*(undefined8 *)(lVar4 + 0x20),
               *(undefined8 *)(lVar4 + 0x28));
  }
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1801d3330(lVar5,*(longlong *)(param_1 + 0x18) * 0x68,8);
  }
  lVar5 = *(longlong *)(param_1 + 0x38);
  lVar6 = *(longlong *)(param_1 + 0x40);
  puVar9 = (undefined8 *)(lVar5 + 0x38);
  local_30 = 0;
  while (lVar6 != local_30) {
    local_30 = local_30 + 1;
    uVar7 = *puVar9;
    plVar1 = puVar9 + -3;
    puVar2 = puVar9 + -2;
    puVar3 = puVar9 + -1;
    puVar9 = puVar9 + 9;
    (**(code **)(*plVar1 + 0x20))(uVar7,*puVar2,*puVar3);
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar5,*(longlong *)(param_1 + 0x30) * 0x48,8);
  return;
}


