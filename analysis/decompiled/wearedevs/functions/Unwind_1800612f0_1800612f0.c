/* Unwind@1800612f0 @ 1800612f0 */

void Unwind_1800612f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x8d5) == '\0') {
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x8a0) + 0x20))
            (*(undefined8 *)(param_2 + 0x8b8),*(undefined8 *)(param_2 + 0x8a8),
             *(undefined8 *)(param_2 + 0x8b0));
  return;
}


