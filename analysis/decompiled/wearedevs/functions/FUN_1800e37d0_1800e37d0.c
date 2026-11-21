/* FUN_1800e37d0 @ 1800e37d0 */

void FUN_1800e37d0(int *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*param_1 != 2) {
    FUN_180043680();
    return;
  }
  uVar1 = *(undefined8 *)(param_1 + 2);
  puVar2 = *(undefined8 **)(param_1 + 4);
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  return;
}


