/* Unwind@1801448b0 @ 1801448b0 */

void Unwind_1801448b0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xe8) != 0 && *(longlong *)(param_2 + 0xe0) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0xe8) + 0x20))
              (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x68),
               *(undefined8 *)(param_2 + 0x60));
  }
  return;
}


