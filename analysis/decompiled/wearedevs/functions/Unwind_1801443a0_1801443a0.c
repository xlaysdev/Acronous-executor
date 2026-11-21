/* Unwind@1801443a0 @ 1801443a0 */

void Unwind_1801443a0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1cd) == '\0') {
    *(undefined1 *)(param_2 + 0x1ce) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0xf8) + 0x20))
            (*(undefined8 *)(param_2 + 0x110),*(undefined8 *)(param_2 + 0x100),
             *(undefined8 *)(param_2 + 0x108));
  *(undefined1 *)(param_2 + 0x1ce) = 0;
  return;
}


