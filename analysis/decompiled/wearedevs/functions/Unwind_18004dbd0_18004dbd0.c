/* Unwind@18004dbd0 @ 18004dbd0 */

void Unwind_18004dbd0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1446) == '\0') {
    *(undefined1 *)(param_2 + 0x144c) = 1;
    *(undefined1 *)(param_2 + 0x144b) = 1;
    *(undefined1 *)(param_2 + 0x144a) = 1;
    return;
  }
  if (*(longlong *)(param_2 + 0x728) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x728) + 0x20))
              (*(undefined8 *)(param_2 + 0x740),*(undefined8 *)(param_2 + 0x730),
               *(undefined8 *)(param_2 + 0x738));
  }
  *(undefined1 *)(param_2 + 0x144c) = 1;
  *(undefined1 *)(param_2 + 0x144b) = 1;
  *(undefined1 *)(param_2 + 0x144a) = 1;
  return;
}


