/* Unwind@180059ac0 @ 180059ac0 */

void Unwind_180059ac0(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0xb8);
  *(undefined8 *)(lVar1 + 0x138) = 2;
  *(undefined8 *)(lVar1 + 0x140) = *(undefined8 *)(param_2 + 0xc0);
  *(undefined8 *)(lVar1 + 0x148) = *(undefined8 *)(param_2 + 0xd8);
  *(undefined8 *)(lVar1 + 0x150) = *(undefined8 *)(param_2 + 0xe0);
  *(undefined8 *)(lVar1 + 0x158) = *(undefined8 *)(param_2 + 0xe8);
  uVar2 = *(undefined8 *)(param_2 + 0xa8);
  *(undefined8 *)(lVar1 + 0x160) = *(undefined8 *)(param_2 + 0xa0);
  *(undefined8 *)(lVar1 + 0x168) = uVar2;
  *(undefined8 *)(lVar1 + 0x170) = *(undefined8 *)(param_2 + 0xd0);
  uVar2 = *(undefined8 *)(param_2 + 0x88);
  *(undefined8 *)(lVar1 + 0x178) = *(undefined8 *)(param_2 + 0x80);
  *(undefined8 *)(lVar1 + 0x180) = uVar2;
  *(undefined8 *)(lVar1 + 0x188) = *(undefined8 *)(param_2 + 0x90);
  *(undefined8 *)(lVar1 + 400) = *(undefined8 *)(param_2 + 200);
  *(undefined1 *)(lVar1 + 0x198) = *(undefined1 *)(param_2 + 0xf7);
  return;
}


