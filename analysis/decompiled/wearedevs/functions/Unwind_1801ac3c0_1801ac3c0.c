/* Unwind@1801ac3c0 @ 1801ac3c0 */

void Unwind_1801ac3c0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x105) == '\0') {
    *(undefined1 *)(param_2 + 0x107) = 1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x60) + 0x20))
            (*(undefined8 *)(param_2 + 0x78),*(undefined8 *)(param_2 + 0x68),
             *(undefined8 *)(param_2 + 0x70));
  *(undefined1 *)(param_2 + 0x107) = 1;
  return;
}


