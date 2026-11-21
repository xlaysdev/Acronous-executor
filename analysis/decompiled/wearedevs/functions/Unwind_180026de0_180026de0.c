/* Unwind@180026de0 @ 180026de0 */

void Unwind_180026de0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x50) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x50) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_2 + 0x48) + 0x18),*(undefined8 *)(param_2 + 0x38)
               ,*(undefined8 *)(param_2 + 0x40));
  }
  return;
}


