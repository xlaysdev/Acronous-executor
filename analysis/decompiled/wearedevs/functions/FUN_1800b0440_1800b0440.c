/* FUN_1800b0440 @ 1800b0440 */

void FUN_1800b0440(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x178) == '\0') {
    uVar1 = *(undefined8 *)(param_1 + 0x90);
    puVar2 = *(undefined8 **)(param_1 + 0x98);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
      return;
    }
  }
  else if (*(char *)(param_1 + 0x178) == '\x03') {
    uVar1 = *(undefined8 *)(param_1 + 0xa8);
    puVar2 = *(undefined8 **)(param_1 + 0xb0);
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
    *(undefined1 *)(param_1 + 0x179) = 0;
  }
  return;
}


