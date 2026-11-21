/* FUN_180033d10 @ 180033d10 */

void FUN_180033d10(int *param_1)

{
  FUN_18002f100();
  if (*(longlong *)(param_1 + 0x18) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1a),*(longlong *)(param_1 + 0x18) << 5,8);
  }
  if (*param_1 == 3) {
    return;
  }
  FUN_18000b470(param_1);
  return;
}


