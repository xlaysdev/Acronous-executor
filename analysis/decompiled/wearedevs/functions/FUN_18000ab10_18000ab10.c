/* FUN_18000ab10 @ 18000ab10 */

void FUN_18000ab10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  FUN_18000a460(param_1 + 0x1e0);
  FUN_18000a7c0(param_1);
  if (*(char *)(param_1 + 0x2e0) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x2e8);
    puVar2 = *(undefined8 **)(param_1 + 0x2f0);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  return;
}


