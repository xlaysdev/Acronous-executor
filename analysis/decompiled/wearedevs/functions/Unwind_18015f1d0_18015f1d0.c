/* Unwind@18015f1d0 @ 18015f1d0 */

void Unwind_18015f1d0(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0x40) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x40) + 0x20))
              (*(undefined8 *)(*(longlong *)(param_2 + 0x28) + 0x18),*(undefined8 *)(param_2 + 0x30)
               ,*(undefined8 *)(param_2 + 0x38));
  }
  return;
}


