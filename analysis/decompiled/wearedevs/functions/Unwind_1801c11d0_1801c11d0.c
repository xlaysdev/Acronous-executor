/* Unwind@1801c11d0 @ 1801c11d0 */

void Unwind_1801c11d0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x148);
  *(undefined8 *)(lVar1 + 0x58) = *(undefined8 *)(param_2 + 0x160);
  uVar2 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(lVar1 + 0x68) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x108);
  uVar3 = *(undefined8 *)(param_2 + 0x110);
  uVar4 = *(undefined8 *)(param_2 + 0x118);
  *(undefined8 *)(lVar1 + 0x70) = *(undefined8 *)(param_2 + 0x100);
  *(undefined8 *)(lVar1 + 0x78) = uVar2;
  *(undefined8 *)(lVar1 + 0x80) = uVar3;
  *(undefined8 *)(lVar1 + 0x88) = uVar4;
  return;
}


