/* FUN_1800ee020 @ 1800ee020 */

void FUN_1800ee020(longlong param_1)

{
  longlong *plVar1;
  
  switch(*(undefined1 *)(param_1 + 0xa58)) {
  case 0:
    if (*(longlong *)(param_1 + 0xb0) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0xb0) << 5,4);
    }
    FUN_1800edf20(param_1);
    return;
  default:
    goto code_r0x0001800ee178;
  case 3:
    FUN_1800ee3c0(param_1 + 0xa60);
    goto LAB_1800ee14b;
  case 4:
  case 5:
    if (*(char *)(param_1 + 0x9a0) == '\0') goto LAB_1800ee0d2;
LAB_1800ee06b:
    plVar1 = *(longlong **)(param_1 + 0x9a8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180162f80();
    }
    break;
  case 6:
    FUN_1800ee690(param_1 + 0xa70);
    *(undefined1 *)(param_1 + 0xa59) = 0;
    if (*(char *)(param_1 + 0x9a0) != '\0') goto LAB_1800ee06b;
LAB_1800ee0d2:
    plVar1 = *(longlong **)(param_1 + 0x9a8);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801635e0();
    }
  }
  FUN_18000c570(param_1 + 0x9b0);
  FUN_1800ee3c0(param_1 + 0x5f8);
  FUN_1800ee3c0(param_1 + 0x250);
  if (*(longlong *)(param_1 + 0x230) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x220),*(longlong *)(param_1 + 0x230) << 5,4);
  }
  *(undefined1 *)(param_1 + 0xa5a) = 0;
LAB_1800ee14b:
  if (*(longlong *)(param_1 + 0x188) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x178),*(longlong *)(param_1 + 0x188) << 5,4);
    return;
  }
code_r0x0001800ee178:
  return;
}


