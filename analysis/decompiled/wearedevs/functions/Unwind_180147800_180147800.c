/* Unwind@180147800 @ 180147800 */

void Unwind_180147800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x68) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x68) + 0x20))
              (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x60),
               *(undefined8 *)(param_2 + 0x50));
  }
  *(undefined1 *)(param_2 + 0x77) = 1;
  return;
}


