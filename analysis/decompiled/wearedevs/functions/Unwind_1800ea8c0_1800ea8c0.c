/* Unwind@1800ea8c0 @ 1800ea8c0 */

void Unwind_1800ea8c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x4d0);
  uVar2 = *(undefined8 *)(param_2 + 0x4d8);
  uVar3 = *(undefined8 *)(param_2 + 0x4e0);
  FUN_1800ee3c0(*(undefined8 *)(param_2 + 0x4c8));
  *(undefined8 *)(param_2 + 0x4c0) = uVar3;
  *(undefined8 *)(param_2 + 0x4b8) = uVar2;
  *(undefined8 *)(param_2 + 0x4b0) = uVar1;
  return;
}


