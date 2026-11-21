/* FUN_1800978a0 @ 1800978a0 */

void FUN_1800978a0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  if (*(char *)((longlong)param_1 + 0x29) != '\x03') {
    FUN_18009acf0();
    return;
  }
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] == 0) {
    return;
  }
  thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  return;
}


