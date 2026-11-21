/* Unwind@1800137e0 @ 1800137e0 */

void Unwind_1800137e0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  FUN_18002ccb0(param_2 + 0x490);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  return;
}


