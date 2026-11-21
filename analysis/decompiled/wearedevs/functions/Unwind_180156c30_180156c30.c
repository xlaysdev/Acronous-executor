/* Unwind@180156c30 @ 180156c30 */

void Unwind_180156c30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x6be) == '\0') {
    *(undefined1 *)(param_2 + 0x6bb) = 0;
    return;
  }
  FUN_1800430f0(param_2 + 0x260);
  *(undefined1 *)(param_2 + 0x6bb) = 1;
  return;
}


