/* FUN_1800e4a00 @ 1800e4a00 */

void FUN_1800e4a00(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_18010e630(param_1,param_3,param_4);
  uVar1 = *param_2;
  puVar2 = (undefined8 *)param_2[1];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  *param_2 = uVar3;
  param_2[1] = param_3;
  return;
}


