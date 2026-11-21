/* Unwind@180144410 @ 180144410 */

void Unwind_180144410(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1ce) == '\0') {
    *(undefined1 *)(param_2 + 0x1cf) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x140) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x140) + 0x20))
              (*(undefined8 *)(param_2 + 0x158),*(undefined8 *)(param_2 + 0x148),
               *(undefined8 *)(param_2 + 0x150));
  }
  *(undefined1 *)(param_2 + 0x1cf) = 0;
  return;
}


