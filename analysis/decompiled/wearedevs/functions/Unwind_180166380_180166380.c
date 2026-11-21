/* Unwind@180166380 @ 180166380 */

void Unwind_180166380(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x3e) == '\0') {
    *(undefined1 *)(param_2 + 0x3f) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x28) + 0x18))(*(undefined8 *)(param_2 + 0x20));
  *(undefined1 *)(param_2 + 0x3f) = 0;
  return;
}


