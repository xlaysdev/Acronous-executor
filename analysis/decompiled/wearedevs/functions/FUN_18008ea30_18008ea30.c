/* FUN_18008ea30 @ 18008ea30 */

void FUN_18008ea30(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(int *)(param_1 + 0x1e0) != 3) {
    FUN_18008f650(param_1 + 0x1e0);
  }
  FUN_1800429a0(param_1 + 0x1a8);
  FUN_18000bd70(param_1);
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


