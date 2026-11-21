/* Unwind@1801206d0 @ 1801206d0 */

void Unwind_1801206d0(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 0x1d0c);
  (**(code **)(*(longlong *)(param_2 + 0x1c70) + 0x20))
            (*(undefined8 *)(param_2 + 0x1c88),*(undefined8 *)(param_2 + 0x1c78),
             *(undefined8 *)(param_2 + 0x1c80));
  *(undefined1 *)(param_2 + 0x1d30) = uVar1;
  *(undefined1 *)(param_2 + 0x1d2f) = 0;
  return;
}


