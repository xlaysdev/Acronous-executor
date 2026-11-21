/* Unwind@1800e9970 @ 1800e9970 */

void Unwind_1800e9970(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x548) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_2 + 0x540) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_2 + 0x538) = uVar3;
  FUN_18000c570(*(longlong *)(param_2 + 0x600) + 0xae8);
  *(undefined8 *)(param_2 + 0x548) = uVar1;
  *(undefined8 *)(param_2 + 0x540) = uVar2;
  *(undefined8 *)(param_2 + 0x538) = uVar3;
  return;
}


