/* Unwind@1800d64c0 @ 1800d64c0 */

void Unwind_1800d64c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x7f8);
  uVar2 = *(undefined8 *)(param_2 + 0x800);
  uVar3 = *(undefined8 *)(param_2 + 0x808);
  *(undefined2 *)(*(longlong *)(param_2 + 0x828) + 0x1e8) = 2;
  *(undefined8 *)(param_2 + 0x7e8) = uVar3;
  *(undefined8 *)(param_2 + 0x7e0) = uVar2;
  *(undefined8 *)(param_2 + 0x7d8) = uVar1;
  return;
}


