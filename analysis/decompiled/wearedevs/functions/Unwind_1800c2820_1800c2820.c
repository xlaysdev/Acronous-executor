/* Unwind@1800c2820 @ 1800c2820 */

void Unwind_1800c2820(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x46a) == '\0') {
    *(undefined1 *)(param_2 + 0x46e) = 0;
    *(undefined1 *)(param_2 + 0x46d) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x3f0) != 0) {
    FUN_180101c00(param_2 + 0x3f8);
  }
  *(undefined1 *)(param_2 + 0x46e) = 1;
  *(undefined1 *)(param_2 + 0x46d) = 0;
  return;
}


