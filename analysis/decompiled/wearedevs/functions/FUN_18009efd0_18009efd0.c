/* FUN_18009efd0 @ 18009efd0 */

void FUN_18009efd0(byte *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong local_38;
  
  if (1 < *param_1) {
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  lVar2 = *(longlong *)(param_1 + 0x38);
  lVar3 = *(longlong *)(param_1 + 0x40);
  local_38 = 0;
  while (local_38 != lVar3) {
    FUN_18003c220(lVar2 + local_38 * 0x48 + 0x18);
    FUN_180097000(lVar2 + local_38 * 0x48);
    local_38 = local_38 + 1;
  }
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  thunk_FUN_1801d3330(lVar2,*(longlong *)(param_1 + 0x30) * 0x48,8);
  return;
}


