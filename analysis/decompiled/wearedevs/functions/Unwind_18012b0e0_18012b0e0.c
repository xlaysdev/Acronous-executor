/* Unwind@18012b0e0 @ 18012b0e0 */

void Unwind_18012b0e0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x60) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_2 + 0x58) + 0x18),*(undefined8 *)(param_2 + 0x38)
               ,*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


