/* FUN_180042270 @ 180042270 */

void FUN_180042270(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)(param_1 + 0x2b8) == '\0') {
    FUN_180041c30();
    FUN_1800447c0(param_1 + 0x1a8);
    return;
  }
  if (*(char *)(param_1 + 0x2b8) != '\x03') {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x2a8);
  puVar2 = *(undefined8 **)(param_1 + 0x2b0);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_180041c30(param_1);
  return;
}


