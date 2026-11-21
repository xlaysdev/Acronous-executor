/* Unwind@1801433c0 @ 1801433c0 */

void Unwind_1801433c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xd4) == '\0') {
    *(undefined1 *)(param_2 + 0xe5) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0xf8) + 0x20))
            (*(undefined8 *)(param_2 + 0xd8),*(undefined8 *)(param_2 + 0xf0),
             *(undefined8 *)(param_2 + 0xe8));
  *(undefined1 *)(param_2 + 0xe5) = 0;
  return;
}


