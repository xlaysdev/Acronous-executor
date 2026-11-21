/* Unwind@1800ea830 @ 1800ea830 */

void Unwind_1800ea830(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x518);
  uVar2 = *(undefined8 *)(param_2 + 0x520);
  uVar3 = *(undefined8 *)(param_2 + 0x528);
  uVar4 = *(undefined8 *)(param_2 + 0x530);
  *(undefined2 *)(*(longlong *)(param_2 + 0x600) + 0xf38) = 0x200;
  *(undefined8 *)(param_2 + 0x4e0) = uVar4;
  *(undefined8 *)(param_2 + 0x4d8) = uVar3;
  *(undefined8 *)(param_2 + 0x4d0) = uVar2;
  *(undefined8 *)(param_2 + 0x4c8) = uVar1;
  return;
}


