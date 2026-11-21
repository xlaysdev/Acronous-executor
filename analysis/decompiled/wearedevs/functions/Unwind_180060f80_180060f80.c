/* Unwind@180060f80 @ 180060f80 */

void Unwind_180060f80(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x670) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x670) + 0x20))
              (*(undefined8 *)(param_2 + 0x688),*(undefined8 *)(param_2 + 0x678),
               *(undefined8 *)(param_2 + 0x680));
  }
  return;
}


