/* Unwind@1800142f0 @ 1800142f0 */

void Unwind_1800142f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x728) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x760);
  *(undefined8 *)(param_2 + 0x720) = uVar2;
  FUN_180028bb0(param_2 + 0x460);
  *(undefined8 *)(param_2 + 0x728) = uVar1;
  *(undefined8 *)(param_2 + 0x720) = uVar2;
  return;
}


