/* FUN_18003b580 @ 18003b580 */

void FUN_18003b580(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  uVar1 = *param_1;
  puVar2 = (undefined8 *)param_1[1];
  if ((code *)*puVar2 != (code *)0x0) {
    (*(code *)*puVar2)(uVar1);
  }
  if (puVar2[1] != 0) {
    thunk_FUN_1801d3330(uVar1,puVar2[1],puVar2[2]);
  }
  FUN_18003c840(param_1[2]);
  return;
}


