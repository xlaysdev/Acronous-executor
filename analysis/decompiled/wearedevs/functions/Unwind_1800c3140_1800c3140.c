/* Unwind@1800c3140 @ 1800c3140 */

void Unwind_1800c3140(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x24a) == '\0') {
    *(undefined1 *)(param_2 + 0x24f) = 0;
    *(undefined1 *)(param_2 + 0x24e) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x1e0) != 0) {
    FUN_180101c00(param_2 + 0x1e8);
  }
  *(undefined1 *)(param_2 + 0x24f) = 1;
  *(undefined1 *)(param_2 + 0x24e) = 0;
  return;
}


