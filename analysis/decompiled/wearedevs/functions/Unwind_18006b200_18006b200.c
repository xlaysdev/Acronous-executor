/* Unwind@18006b200 @ 18006b200 */

void Unwind_18006b200(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xe0) != 0 && *(short *)(param_2 + 0xee) == 3) {
    (**(code **)(*(longlong *)(param_2 + 0xe0) + 0x20))
              (*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xd0),
               *(undefined8 *)(param_2 + 200));
  }
  return;
}


