/* FUN_18018efd0 @ 18018efd0 */

void FUN_18018efd0(longlong param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if ((param_1 != 0) || (((uint)param_2 & 3) != 1)) {
    return;
  }
  uVar1 = *(undefined8 *)(param_2 + -1);
  puVar2 = *(undefined8 **)(param_2 + 7);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  thunk_FUN_1801d3330(param_2 + -1,0x18,8);
  return;
}


