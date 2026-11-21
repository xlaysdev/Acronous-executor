/* Unwind@180120800 @ 180120800 */

void Unwind_180120800(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x1ca0) == 0) {
    return;
  }
  if ((*(byte *)(param_2 + 0x1d0d) & 1) == 0) {
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x1ca0) + 0x20))
            (*(undefined8 *)(param_2 + 0x1c68),*(undefined8 *)(param_2 + 0x1c60),
             *(undefined8 *)(param_2 + 0x1c58));
  return;
}


