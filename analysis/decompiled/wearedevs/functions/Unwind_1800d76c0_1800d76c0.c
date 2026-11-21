/* Unwind@1800d76c0 @ 1800d76c0 */

void Unwind_1800d76c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x990);
  uVar2 = *(undefined8 *)(param_2 + 0x998);
  uVar3 = *(undefined8 *)(param_2 + 0x9a0);
  *(undefined2 *)(*(longlong *)(param_2 + 0x9c8) + 0x1f8) = 2;
  *(undefined8 *)(param_2 + 0x980) = uVar3;
  *(undefined8 *)(param_2 + 0x978) = uVar2;
  *(undefined8 *)(param_2 + 0x970) = uVar1;
  return;
}


