/* Unwind@1800ce4d0 @ 1800ce4d0 */

void Unwind_1800ce4d0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x2ad0);
  uVar2 = *(undefined8 *)(param_2 + 0x2ad8);
  uVar3 = *(undefined8 *)(param_2 + 0x2ae0);
  *(undefined2 *)(*(longlong *)(param_2 + 0x2b30) + 0x1558) = 2;
  *(undefined8 *)(param_2 + 0x2ac8) = uVar3;
  *(undefined8 *)(param_2 + 0x2ac0) = uVar2;
  *(undefined8 *)(param_2 + 0x2ab8) = uVar1;
  return;
}


