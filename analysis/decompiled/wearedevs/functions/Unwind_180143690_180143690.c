/* Unwind@180143690 @ 180143690 */

void Unwind_180143690(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x107) == '\0') {
    *(undefined1 *)(param_2 + 0xd2) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0xa0) + 0x20))
            (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(param_2 + 0xa8),
             *(undefined8 *)(param_2 + 0xb0));
  *(undefined1 *)(param_2 + 0xd2) = 1;
  return;
}


