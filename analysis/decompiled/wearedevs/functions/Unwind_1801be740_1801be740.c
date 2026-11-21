/* Unwind@1801be740 @ 1801be740 */

void Unwind_1801be740(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  undefined8 uVar2;
  
  lVar1 = *(longlong *)(param_2 + 0x68);
  *(undefined8 *)(lVar1 + 0x88) = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(lVar1 + 0x90) = 0;
  *(undefined8 *)(lVar1 + 0x98) = 0;
  *(undefined8 *)(lVar1 + 0xa0) = 0;
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(lVar1 + 0xa8) = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(lVar1 + 0xc0) = 0;
  return;
}


