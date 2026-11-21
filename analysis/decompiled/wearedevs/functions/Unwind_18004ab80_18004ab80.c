/* Unwind@18004ab80 @ 18004ab80 */

void Unwind_18004ab80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xdbd) == '\0') {
    *(undefined1 *)(param_2 + 0xdca) = 0;
    *(undefined1 *)(param_2 + 0xdc9) = 0;
    return;
  }
  FUN_180043510(param_2 + 0xb90);
  *(undefined1 *)(param_2 + 0xdca) = 1;
  *(undefined1 *)(param_2 + 0xdc9) = 0;
  return;
}


