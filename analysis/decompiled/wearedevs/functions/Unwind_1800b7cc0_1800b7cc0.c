/* Unwind@1800b7cc0 @ 1800b7cc0 */

void Unwind_1800b7cc0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2df8);
  uVar2 = *(undefined8 *)(param_2 + 0x2e00);
  uVar3 = *(undefined8 *)(param_2 + 0x2e50);
  FUN_1800b0440(uVar3);
  *(undefined8 *)(param_2 + 0x2ef8) = uVar3;
  *(undefined8 *)(param_2 + 0x2ef0) = uVar1;
  *(undefined8 *)(param_2 + 0x2ee8) = uVar2;
  return;
}


