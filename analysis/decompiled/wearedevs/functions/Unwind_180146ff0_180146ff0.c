/* Unwind@180146ff0 @ 180146ff0 */

void Unwind_180146ff0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x60) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x60) + 0x20))
              (*(undefined8 *)(param_2 + 0x50),*(undefined8 *)(param_2 + 0x40),
               *(undefined8 *)(param_2 + 0x48));
  }
  return;
}


