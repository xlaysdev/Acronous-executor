/* FUN_180044660 @ 180044660 */

void FUN_180044660(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(longlong *)(param_1 + 0x10) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    puVar2 = *(undefined8 **)(param_1 + 0x20);
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


