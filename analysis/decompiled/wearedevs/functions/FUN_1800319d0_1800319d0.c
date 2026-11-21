/* FUN_1800319d0 @ 1800319d0 */

void FUN_1800319d0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  longlong local_38;
  
  lVar2 = *(longlong *)(param_1 + 0x10);
  lVar3 = *(longlong *)(param_1 + 0x18);
  puVar5 = (undefined8 *)(lVar2 + 8);
  local_38 = 0;
  while (lVar3 != local_38) {
    local_38 = local_38 + 1;
    plVar1 = puVar5 + -1;
    uVar4 = *puVar5;
    puVar5 = puVar5 + 2;
    (**(code **)(*plVar1 + 0x18))(uVar4);
  }
  if (*(longlong *)(param_1 + 8) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar2,*(longlong *)(param_1 + 8) << 4,8);
  return;
}


