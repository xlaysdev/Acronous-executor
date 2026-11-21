/* Unwind@18004d910 @ 18004d910 */

void Unwind_18004d910(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1448) == '\0') {
    *(undefined1 *)(param_2 + 0x144f) = 0;
    *(undefined1 *)(param_2 + 0x144e) = 0;
    *(undefined1 *)(param_2 + 0x144d) = 0;
    return;
  }
  FUN_180043e90(param_2 + 0x30);
  *(undefined1 *)(param_2 + 0x144f) = 0;
  *(undefined1 *)(param_2 + 0x144e) = 0;
  *(undefined1 *)(param_2 + 0x144d) = 1;
  return;
}


