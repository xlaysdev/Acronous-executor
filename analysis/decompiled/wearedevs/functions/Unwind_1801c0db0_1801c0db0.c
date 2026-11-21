/* Unwind@1801c0db0 @ 1801c0db0 */

void Unwind_1801c0db0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x168);
  *(undefined8 *)(lVar1 + 0x60) = *(undefined8 *)(param_2 + 0x170);
  uVar2 = *(undefined8 *)(param_2 + 0x158);
  *(undefined8 *)(lVar1 + 0x68) = *(undefined8 *)(param_2 + 0x150);
  *(undefined8 *)(lVar1 + 0x70) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x118);
  uVar3 = *(undefined8 *)(param_2 + 0x120);
  uVar4 = *(undefined8 *)(param_2 + 0x128);
  *(undefined8 *)(lVar1 + 0x78) = *(undefined8 *)(param_2 + 0x110);
  *(undefined8 *)(lVar1 + 0x80) = uVar2;
  *(undefined8 *)(lVar1 + 0x88) = uVar3;
  *(undefined8 *)(lVar1 + 0x90) = uVar4;
  return;
}


