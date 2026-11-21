/* Unwind@1800e9dc0 @ 1800e9dc0 */

void Unwind_1800e9dc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x538);
  uVar2 = *(undefined8 *)(param_2 + 0x540);
  uVar3 = *(undefined8 *)(param_2 + 0x548);
  FUN_1800ee3c0(*(longlong *)(param_2 + 0x600) + 0x730);
  *(undefined8 *)(param_2 + 1000) = uVar3;
  *(undefined8 *)(param_2 + 0x3e0) = uVar2;
  *(undefined8 *)(param_2 + 0x3d8) = uVar1;
  return;
}


