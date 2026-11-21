/* FUN_18016bb20 @ 18016bb20 */

void FUN_18016bb20(longlong param_1,longlong param_2)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_30;
  undefined8 *local_28;
  
  local_30 = param_2 - param_1 >> 4;
  local_28 = (undefined8 *)(param_1 + 8);
  while (bVar3 = local_30 != 0, local_30 = local_30 + -1, bVar3) {
    plVar1 = local_28 + -1;
    uVar2 = *local_28;
    local_28 = local_28 + 2;
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  return;
}


