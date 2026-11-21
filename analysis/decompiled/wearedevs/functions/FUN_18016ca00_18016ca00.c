/* FUN_18016ca00 @ 18016ca00 */

void FUN_18016ca00(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  bool bVar3;
  longlong local_30;
  undefined8 *local_28;
  
  local_30 = *(longlong *)(param_1 + 0x200);
  local_28 = (undefined8 *)(param_1 + 8);
  while (bVar3 = local_30 != 0, local_30 = local_30 + -1, bVar3) {
    plVar1 = local_28 + -1;
    uVar2 = *local_28;
    local_28 = local_28 + 2;
    (**(code **)(*plVar1 + 0x18))(uVar2);
  }
  return;
}


