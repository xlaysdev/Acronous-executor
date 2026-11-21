/* Unwind@1800b7b00 @ 1800b7b00 */

void Unwind_1800b7b00(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2f38);
  uVar2 = *(undefined8 *)(param_2 + 0x2f40);
  uVar3 = *(undefined8 *)(param_2 + 0x2f48);
  **(undefined1 **)(param_2 + 0x2f30) = 2;
  *(undefined8 *)(param_2 + 0x2f28) = uVar3;
  *(undefined8 *)(param_2 + 0x2f20) = uVar2;
  *(undefined8 *)(param_2 + 0x2f18) = uVar1;
  return;
}


