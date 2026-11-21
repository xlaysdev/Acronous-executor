/* Unwind@1800e42b0 @ 1800e42b0 */

void Unwind_1800e42b0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x66f) == '\0') {
    *(undefined1 *)(param_2 + 0x66e) = 0;
    *(undefined1 *)(param_2 + 0x66d) = 0;
    return;
  }
  FUN_18003c220(param_2 + 0x630);
  *(undefined1 *)(param_2 + 0x66e) = 1;
  *(undefined1 *)(param_2 + 0x66d) = 0;
  return;
}


