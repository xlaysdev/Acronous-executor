/* Unwind@1800096c0 @ 1800096c0 */

void Unwind_1800096c0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(param_2 + 0x6e8);
  uVar2 = *(undefined8 *)(param_2 + 0x6f0);
  uVar3 = *(undefined8 *)(param_2 + 0x6f8);
  *(undefined1 *)(*(longlong *)(param_2 + 0x770) + 0x59) = 0;
  *(undefined8 *)(param_2 + 0x1c0) = uVar3;
  *(undefined8 *)(param_2 + 0x1b8) = uVar2;
  *(undefined8 *)(param_2 + 0x1b0) = uVar1;
  return;
}


