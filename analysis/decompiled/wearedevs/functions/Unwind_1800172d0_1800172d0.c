/* Unwind@1800172d0 @ 1800172d0 */

void Unwind_1800172d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x768);
  *(undefined8 *)(param_2 + 0x6f8) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x758);
  *(undefined8 *)(param_2 + 0x6f0) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x750);
  *(undefined8 *)(param_2 + 0x6e8) = uVar3;
  FUN_180028bb0(param_2 + 0x460);
  *(undefined8 *)(param_2 + 0x6f8) = uVar1;
  *(undefined8 *)(param_2 + 0x6f0) = uVar2;
  *(undefined8 *)(param_2 + 0x6e8) = uVar3;
  return;
}


