/* Unwind@1800d7b10 @ 1800d7b10 */

void Unwind_1800d7b10(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x9c0);
  *(undefined8 *)(param_2 + 0x9a0) = uVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x9b8);
  *(undefined8 *)(param_2 + 0x998) = uVar2;
  uVar3 = *(undefined8 *)(param_2 + 0x9a8);
  *(undefined8 *)(param_2 + 0x990) = uVar3;
  FUN_1800c8d30(*(undefined8 *)(param_2 + 0x9b0));
  *(undefined8 *)(param_2 + 0x9a0) = uVar1;
  *(undefined8 *)(param_2 + 0x998) = uVar2;
  *(undefined8 *)(param_2 + 0x990) = uVar3;
  return;
}


