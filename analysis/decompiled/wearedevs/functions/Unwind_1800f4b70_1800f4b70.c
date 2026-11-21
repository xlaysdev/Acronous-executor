/* Unwind@1800f4b70 @ 1800f4b70 */

void Unwind_1800f4b70(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x12e0);
  uVar2 = *(undefined8 *)(param_2 + 0x12e8);
  uVar3 = *(undefined8 *)(param_2 + 0x12f0);
  *(undefined2 *)(*(longlong *)(param_2 + 0x1340) + 0xa58) = 2;
  *(undefined8 *)(param_2 + 0x12d8) = uVar3;
  *(undefined8 *)(param_2 + 0x12d0) = uVar2;
  *(undefined8 *)(param_2 + 0x12c8) = uVar1;
  return;
}


