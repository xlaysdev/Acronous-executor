/* FUN_180177560 @ 180177560 */

void FUN_180177560(undefined8 *param_1,longlong *param_2)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = *(undefined8 **)*param_2;
  uVar1 = (*(code *)*puVar2)(((undefined8 *)*param_2)[1]);
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}


