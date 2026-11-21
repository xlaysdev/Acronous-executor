/* FUN_180066120 @ 180066120 */

void FUN_180066120(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x1b0);
  puVar2 = *(undefined8 **)(param_1 + 0x1b8);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_180065d80(param_1 + 0x48);
  FUN_1801b2a70(param_1 + 0x1d0);
  return;
}


