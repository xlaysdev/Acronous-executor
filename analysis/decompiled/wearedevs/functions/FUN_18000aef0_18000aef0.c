/* FUN_18000aef0 @ 18000aef0 */

void FUN_18000aef0(char *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_1 == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 8);
    puVar2 = *(undefined8 **)(param_1 + 0x10);
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


