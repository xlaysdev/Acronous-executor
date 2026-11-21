/* Unwind@1800614e0 @ 1800614e0 */

void Unwind_1800614e0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x8d7) == '\0') {
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x440) + 0x20))
            (*(undefined8 *)(param_2 + 0x458),*(undefined8 *)(param_2 + 0x448),
             *(undefined8 *)(param_2 + 0x450));
  return;
}


