/* FUN_18002d500 @ 18002d500 */

void FUN_18002d500(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  bool bVar5;
  longlong local_30;
  undefined8 *local_28;
  
  local_28 = (undefined8 *)(param_1 + 0x18);
  local_30 = param_2;
  while (bVar5 = local_30 != 0, local_30 = local_30 + -1, bVar5) {
    uVar4 = *local_28;
    plVar1 = local_28 + -3;
    puVar2 = local_28 + -2;
    puVar3 = local_28 + -1;
    local_28 = local_28 + 4;
    (**(code **)(*plVar1 + 0x20))(uVar4,*puVar2,*puVar3);
  }
  return;
}


