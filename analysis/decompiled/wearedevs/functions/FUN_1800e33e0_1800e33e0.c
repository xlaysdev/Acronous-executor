/* FUN_1800e33e0 @ 1800e33e0 */

void FUN_1800e33e0(longlong param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x168);
  if (cVar1 == '\0') {
    FUN_18007eeb0();
    FUN_1800ba880(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
    FUN_1800c8d30(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x170) != 2) {
      FUN_18007eeb0();
      FUN_1800ba880(*(undefined8 *)(param_1 + 0x188),*(undefined8 *)(param_1 + 400));
      FUN_1800c8d30(param_1 + 0x170);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_1800dfa10(*(undefined8 *)(param_1 + 0x170));
    if (*(int *)(param_1 + 0x40) != 3) {
      *(undefined1 *)(param_1 + 0x169) = 0;
    }
  }
  *(undefined1 *)(param_1 + 0x169) = 0;
  return;
}


