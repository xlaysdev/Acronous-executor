/* FUN_180032310 @ 180032310 */

void FUN_180032310(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  
  if (*(char *)(param_1 + 0x1a0) == '\0') {
    FUN_180018190();
    return;
  }
  if (*(char *)(param_1 + 0x1a0) != '\x03') {
    return;
  }
  if (*(int *)(param_1 + 0x110) != 4) {
    FUN_18002f100();
    if (*(longlong *)(param_1 + 0x170) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x178),*(longlong *)(param_1 + 0x170) << 5,8);
    }
    if (*(int *)(param_1 + 0x110) != 3) {
      FUN_18000b470();
    }
  }
  uVar1 = *(undefined8 *)(param_1 + 400);
  puVar2 = *(undefined8 **)(param_1 + 0x198);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  plVar3 = *(longlong **)(param_1 + 0x108);
  if (*plVar3 != 0) {
    thunk_FUN_1801d3330(plVar3[1],*plVar3,1);
  }
  thunk_FUN_1801d3330(plVar3,0x58,8);
  return;
}


