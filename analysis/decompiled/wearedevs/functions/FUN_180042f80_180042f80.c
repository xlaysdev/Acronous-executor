/* FUN_180042f80 @ 180042f80 */

void FUN_180042f80(int *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  
  FUN_18000adf0(param_1 + 0x2e);
  uVar1 = *(ulonglong *)(param_1 + 0x22);
  uVar2 = 2;
  if ((longlong)uVar1 < 0) {
    uVar2 = uVar1 ^ 0x8000000000000000;
  }
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      (**(code **)(*(longlong *)(param_1 + 0x24) + 0x20))
                (*(undefined8 *)(param_1 + 0x2a),*(undefined8 *)(param_1 + 0x26),
                 *(undefined8 *)(param_1 + 0x28));
    }
    else {
      if (uVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x24),uVar1,1);
      }
      if (*(longlong *)(param_1 + 0x28) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x2a),*(longlong *)(param_1 + 0x28),1);
      }
    }
  }
  if ((char)param_1[0x20] != '\x02') {
    (**(code **)(*(longlong *)(param_1 + 0x18) + 0x20))
              (*(undefined8 *)(param_1 + 0x1e),*(undefined8 *)(param_1 + 0x1a),
               *(undefined8 *)(param_1 + 0x1c));
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_1800430f0();
  return;
}


