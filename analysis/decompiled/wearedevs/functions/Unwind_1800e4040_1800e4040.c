/* Unwind@1800e4040 @ 1800e4040 */

void Unwind_1800e4040(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x66a) != '\0') {
    *(undefined1 *)(param_2 + 0x66e) = 1;
    *(undefined1 *)(param_2 + 0x66d) = 1;
    FUN_18003c220(param_2 + 0x5f0);
  }
  *(undefined1 *)(param_2 + 0x66e) = 1;
  *(undefined1 *)(param_2 + 0x66d) = 1;
  return;
}


