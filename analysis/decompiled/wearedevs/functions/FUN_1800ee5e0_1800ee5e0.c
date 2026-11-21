/* FUN_1800ee5e0 @ 1800ee5e0 */

void FUN_1800ee5e0(int *param_1)

{
  if (*param_1 != 2) {
    FUN_1800eea30();
    return;
  }
  FUN_18007eeb0();
  if (*(longlong *)(param_1 + 8) != -1) {
    FUN_18007b1e0(*(longlong *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
  }
  FUN_1800b0d40(param_1 + 2);
  return;
}


