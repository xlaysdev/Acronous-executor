/* Unwind@1800f49d0 @ 1800f49d0 */

void Unwind_1800f49d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1298);
  uVar2 = *(undefined8 *)(param_2 + 0x12a0);
  uVar3 = *(undefined8 *)(param_2 + 0x12a8);
  FUN_1800eee30(**(undefined8 **)(param_2 + 0x1290));
  *(undefined8 *)(param_2 + 0x12f0) = uVar3;
  *(undefined8 *)(param_2 + 0x12e8) = uVar2;
  *(undefined8 *)(param_2 + 0x12e0) = uVar1;
  return;
}


