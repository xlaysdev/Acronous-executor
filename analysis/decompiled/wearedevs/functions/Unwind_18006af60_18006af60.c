/* Unwind@18006af60 @ 18006af60 */

void Unwind_18006af60(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xb8) != 0 && *(short *)(param_2 + 0xde) == 3) {
    (**(code **)(*(longlong *)(param_2 + 0xb8) + 0x20))
              (*(undefined8 *)(param_2 + 0xd0),*(undefined8 *)(param_2 + 200),
               *(undefined8 *)(param_2 + 0xc0));
  }
  return;
}


