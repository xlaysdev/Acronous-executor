/* Unwind@180050920 @ 180050920 */

void Unwind_180050920(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1bf) == '\0') {
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x158) + 0x20))
            (*(undefined8 *)(param_2 + 0x170),*(undefined8 *)(param_2 + 0x160),
             *(undefined8 *)(param_2 + 0x168));
  return;
}


