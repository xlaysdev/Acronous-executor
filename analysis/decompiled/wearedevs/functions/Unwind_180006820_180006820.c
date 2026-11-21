/* Unwind@180006820 @ 180006820 */

void Unwind_180006820(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  FUN_180028bb0(param_2 + 0x460);
  *(undefined8 *)(param_2 + 0x738) = uVar1;
  *(undefined8 *)(param_2 + 0x730) = uVar2;
  return;
}


