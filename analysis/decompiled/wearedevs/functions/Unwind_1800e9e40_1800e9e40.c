/* Unwind@1800e9e40 @ 1800e9e40 */

void Unwind_1800e9e40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x3d8);
  uVar2 = *(undefined8 *)(param_2 + 0x3e0);
  uVar3 = *(undefined8 *)(param_2 + 1000);
  FUN_1800ee3c0(*(longlong *)(param_2 + 0x600) + 0x388);
  *(undefined8 *)(param_2 + 0x3d0) = uVar3;
  *(undefined8 *)(param_2 + 0x3c8) = uVar2;
  *(undefined8 *)(param_2 + 0x3c0) = uVar1;
  return;
}


