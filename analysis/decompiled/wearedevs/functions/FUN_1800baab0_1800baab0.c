/* FUN_1800baab0 @ 1800baab0 */

void FUN_1800baab0(ulonglong *param_1)

{
  ulonglong uVar1;
  undefined8 *puVar2;
  
  uVar1 = param_1[3];
  puVar2 = (undefined8 *)param_1[4];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  if ((*param_1 & 0x7fffffffffffffff) == 0) {
    return;
  }
  thunk_FUN_1801d3330(param_1[1],*param_1,1);
  return;
}


