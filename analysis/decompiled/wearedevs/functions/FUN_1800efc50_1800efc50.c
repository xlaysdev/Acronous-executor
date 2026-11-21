/* FUN_1800efc50 @ 1800efc50 */

void FUN_1800efc50(undefined8 *param_1)

{
  if (*(char *)(param_1 + 8) == '\0') {
    FUN_18007b1e0(*param_1,param_1[1]);
    return;
  }
  if (*(char *)(param_1 + 8) != '\x03') {
    return;
  }
  FUN_18007eeb0();
  if (param_1[5] != -1) {
    FUN_18007b1e0(param_1[5],param_1[6]);
  }
  FUN_1800b0d40(param_1 + 2);
  return;
}


