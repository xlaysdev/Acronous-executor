/* Unwind@1801fe570 @ 1801fe570 */

void Unwind_1801fe570(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  puVar2 = *(undefined8 **)(param_2 + 0x20);
  if (*(char *)(param_2 + 0x37) != '\0') {
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(uVar1);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
    }
  }
  return;
}


