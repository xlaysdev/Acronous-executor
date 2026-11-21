/* Unwind@18009cf80 @ 18009cf80 */

void Unwind_18009cf80(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0xb8) + 0x20))
              (*(undefined8 *)(param_2 + 0xb0),*(undefined8 *)(param_2 + 0xa0),
               *(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


