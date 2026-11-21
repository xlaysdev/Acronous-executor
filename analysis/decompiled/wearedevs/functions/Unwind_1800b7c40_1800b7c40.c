/* Unwind@1800b7c40 @ 1800b7c40 */

void Unwind_1800b7c40(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2e88);
  uVar2 = *(undefined8 *)(param_2 + 0x2e90);
  uVar3 = *(undefined8 *)(param_2 + 0x2e98);
  *(undefined2 *)(*(longlong *)(param_2 + 0x2f90) + 0x410) = 2;
  *(undefined8 *)(param_2 + 0x2e50) = uVar3;
  *(undefined8 *)(param_2 + 0x2e00) = uVar2;
  *(undefined8 *)(param_2 + 0x2df8) = uVar1;
  return;
}


