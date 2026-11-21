/* Unwind@180054ec0 @ 180054ec0 */

void Unwind_180054ec0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xc0) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0xc0) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_2 + 0xb8) + 0x18),*(undefined8 *)(param_2 + 0xa0)
               ,*(undefined8 *)(param_2 + 0xa8));
  }
  return;
}


