/* FUN_1800afc60 @ 1800afc60 */

void FUN_1800afc60(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x53) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    puVar2 = *(undefined8 **)(param_1 + 0x38);
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


