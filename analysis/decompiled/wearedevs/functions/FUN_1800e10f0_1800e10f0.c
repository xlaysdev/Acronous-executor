/* FUN_1800e10f0 @ 1800e10f0 */

void FUN_1800e10f0(longlong param_1)

{
  if (*(char *)(param_1 + 0x1f0) == '\0') {
    FUN_18007eeb0();
    FUN_1800ba880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    FUN_1800c8d30(param_1);
    return;
  }
  if (*(char *)(param_1 + 0x1f0) == '\x03') {
    FUN_1800e33e0(param_1 + 0x40);
    return;
  }
  return;
}


