/* Unwind@180005200 @ 180005200 */

void Unwind_180005200(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x728) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_2 + 0x720) = uVar2;
  FUN_18002ccb0(param_2 + 0x490);
  *(undefined8 *)(param_2 + 0x728) = uVar1;
  *(undefined8 *)(param_2 + 0x720) = uVar2;
  return;
}


