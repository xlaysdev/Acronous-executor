/* FUN_18009f210 @ 18009f210 */

void FUN_18009f210(byte *param_1)

{
  longlong *plVar1;
  
  if (1 < *param_1) {
    plVar1 = *(longlong **)(param_1 + 8);
    (**(code **)(*plVar1 + 0x20))(plVar1[3],plVar1[1],plVar1[2]);
    thunk_FUN_1801d3330(plVar1,0x20,8);
  }
  (**(code **)(*(longlong *)(param_1 + 0x10) + 0x20))
            (*(undefined8 *)(param_1 + 0x28),*(undefined8 *)(param_1 + 0x18),
             *(undefined8 *)(param_1 + 0x20));
  FUN_18007f440();
  if (*(longlong *)(param_1 + 0x30) == 0) {
    return;
  }
  thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x38),*(longlong *)(param_1 + 0x30) << 3,8);
  return;
}


