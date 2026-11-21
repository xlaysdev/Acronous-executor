/* Unwind@1801166f0 @ 1801166f0 */

void Unwind_1801166f0(undefined8 param_1,longlong param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0xa8);
  (**(code **)(*(longlong *)(param_2 + 0xf8) + 0x20))
            (*(undefined8 *)(param_2 + 0xe8),*(undefined8 *)(param_2 + 0xf0),uVar1);
  *(undefined8 *)(param_2 + 0x100) = uVar1;
  *(undefined1 *)(param_2 + 0x10f) = 0;
  return;
}


