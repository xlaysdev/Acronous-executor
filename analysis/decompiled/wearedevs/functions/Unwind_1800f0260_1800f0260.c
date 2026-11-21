/* Unwind@1800f0260 @ 1800f0260 */

void Unwind_1800f0260(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x148);
  *(undefined8 *)(param_2 + 0x138) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(param_2 + 0x130) = uVar2;
  FUN_1800b0d40(*(undefined8 *)(param_2 + 0x140));
  *(undefined8 *)(param_2 + 0x138) = uVar1;
  *(undefined8 *)(param_2 + 0x130) = uVar2;
  return;
}


