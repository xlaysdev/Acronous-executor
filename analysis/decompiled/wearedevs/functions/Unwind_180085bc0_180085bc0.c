/* Unwind@180085bc0 @ 180085bc0 */

void Unwind_180085bc0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x40) + 0x20))
              (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x48),
               *(undefined8 *)(param_2 + 0x50));
  }
  return;
}


