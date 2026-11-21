/* FUN_18015ecd0 @ 18015ecd0 */

void FUN_18015ecd0(int *param_1)

{
  longlong *plVar1;
  longlong local_20;
  
  if (*param_1 == 3) {
    FUN_1800430f0(param_1 + 2);
    local_20 = *(longlong *)(param_1 + 0x1a);
    if (local_20 == 0) {
      return;
    }
    FUN_18002a190();
  }
  else {
    if ((10 < *(byte *)(param_1 + 0x2e)) && (*(longlong *)(param_1 + 0x32) != 0)) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x30),*(longlong *)(param_1 + 0x32),1);
    }
    if (1 < *(byte *)(param_1 + 0x18)) {
      plVar1 = *(longlong **)(param_1 + 0x1a);
      (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
      thunk_FUN_1801d3330(plVar1,0x20,8);
    }
    (**(code **)(*(longlong *)(param_1 + 0x1c) + 0x20))
              (*(undefined8 *)(param_1 + 0x22),*(undefined8 *)(param_1 + 0x1e),
               *(undefined8 *)(param_1 + 0x20));
    (**(code **)(*(longlong *)(param_1 + 0x24) + 0x20))
              (*(undefined8 *)(param_1 + 0x2a),*(undefined8 *)(param_1 + 0x26),
               *(undefined8 *)(param_1 + 0x28));
    FUN_1800430f0(param_1);
    local_20 = *(longlong *)(param_1 + 0x34);
    if (local_20 == 0) {
      return;
    }
    FUN_18002a190();
  }
  thunk_FUN_1801d3330(local_20,0x20,8);
  return;
}


