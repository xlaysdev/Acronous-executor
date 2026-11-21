/* FUN_1800c8540 @ 1800c8540 */

void FUN_1800c8540(int *param_1)

{
  if ((char)param_1[0x17c] == '\0') {
    if (*param_1 == 2) {
      FUN_18007eeb0();
      FUN_1800ba880(*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 10));
      FUN_1800c8d30(param_1 + 2);
      return;
    }
    FUN_1800c7620();
    return;
  }
  if ((char)param_1[0x17c] == '\x03') {
    FUN_1800c8ba0(param_1 + 0x50);
    return;
  }
  return;
}


