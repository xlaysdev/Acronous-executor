/* Unwind@1800dd950 @ 1800dd950 */

void Unwind_1800dd950(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x18c8);
  uVar2 = *(undefined8 *)(param_2 + 0x18d0);
  uVar3 = *(undefined8 *)(param_2 + 0x18d8);
  uVar4 = *(undefined8 *)(param_2 + 0x18e0);
  *(undefined2 *)(*(longlong *)(param_2 + 0x19a8) + 0xbe5) = 0;
  *(undefined8 *)(param_2 + 0x1910) = uVar4;
  *(undefined8 *)(param_2 + 0x1908) = uVar3;
  *(undefined8 *)(param_2 + 0x1900) = uVar2;
  *(undefined8 *)(param_2 + 0x18f8) = uVar1;
  return;
}


