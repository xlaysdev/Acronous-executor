/* Unwind@1800c1e70 @ 1800c1e70 */

void Unwind_1800c1e70(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x25a) == '\0') {
    *(undefined1 *)(param_2 + 0x25e) = 0;
    *(undefined1 *)(param_2 + 0x25d) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x1f0) != 0) {
    FUN_180101c00(param_2 + 0x1f8);
  }
  *(undefined1 *)(param_2 + 0x25e) = 1;
  *(undefined1 *)(param_2 + 0x25d) = 0;
  return;
}


