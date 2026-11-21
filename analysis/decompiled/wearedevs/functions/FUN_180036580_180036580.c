/* FUN_180036580 @ 180036580 */

bool FUN_180036580(undefined8 *param_1,undefined8 *param_2)

{
  longlong local_b0;
  longlong local_a8;
  longlong local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  longlong local_30;
  undefined8 local_28;
  undefined8 *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1801de240(&local_58,*(undefined8 *)(*(longlong *)*param_1 + 8),
                *(undefined8 *)(*(longlong *)*param_1 + 0x10),*param_2,param_2[1]);
  local_38 = local_50;
  FUN_1801d9f10(&local_b0,local_50,local_48);
  if ((local_b0 == 2) && (((uint)local_a8 & 3) == 1)) {
    local_30 = local_a8 + -1;
    local_28 = *(undefined8 *)(local_a8 + -1);
    local_20 = *(undefined8 **)(local_a8 + 7);
    if ((code *)*local_20 != (code *)0x0) {
      (*(code *)*local_20)(local_28);
    }
    if (local_20[1] != 0) {
      thunk_FUN_1801d3330(local_28,local_20[1],local_20[2]);
    }
    thunk_FUN_1801d3330(local_30,0x18,8);
  }
  if (local_58 != 0) {
    thunk_FUN_1801d3330(local_38,local_58,1);
  }
  return (int)local_b0 == 2;
}


