/* Unwind@1800ea570 @ 1800ea570 */

void Unwind_1800ea570(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x5f0);
  *(undefined8 *)(param_2 + 0x5c0) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x5f8);
  *(undefined8 *)(param_2 + 0x5b8) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x5e0);
  *(undefined8 *)(param_2 + 0x5b0) = uVar3;
  uVar4 = *(undefined8 *)(param_2 + 0x5e8);
  *(undefined8 *)(param_2 + 0x5a8) = uVar4;
  FUN_18000b160(param_2 + 400);
  *(undefined8 *)(param_2 + 0x5c0) = uVar1;
  *(undefined8 *)(param_2 + 0x5b8) = uVar2;
  *(undefined8 *)(param_2 + 0x5b0) = uVar3;
  *(undefined8 *)(param_2 + 0x5a8) = uVar4;
  return;
}


