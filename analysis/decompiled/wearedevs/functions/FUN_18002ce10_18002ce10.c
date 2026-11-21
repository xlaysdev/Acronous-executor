/* FUN_18002ce10 @ 18002ce10 */

void FUN_18002ce10(longlong param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (((uint)param_1 & 3) != 1) {
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + -1);
  puVar2 = *(undefined8 **)(param_1 + 7);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  thunk_FUN_1801d3330(param_1 + -1,0x18,8);
  return;
}


