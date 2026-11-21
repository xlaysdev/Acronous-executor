/* Unwind@1800dd660 @ 1800dd660 */

void Unwind_1800dd660(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(param_2 + 0x1748);
  uVar2 = *(undefined8 *)(param_2 + 0x1750);
  uVar3 = *(undefined8 *)(param_2 + 0x1758);
  uVar4 = *(undefined8 *)(param_2 + 0x1760);
  *(undefined1 *)(*(longlong *)(param_2 + 0x19a8) + 0xbe4) = 0;
  *(undefined8 *)(param_2 + 0x18e0) = uVar4;
  *(undefined8 *)(param_2 + 0x18d8) = uVar3;
  *(undefined8 *)(param_2 + 0x18d0) = uVar2;
  *(undefined8 *)(param_2 + 0x18c8) = uVar1;
  return;
}


