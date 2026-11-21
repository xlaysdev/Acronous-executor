/* Unwind@180064ac0 @ 180064ac0 */

void Unwind_180064ac0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x74f) == '\0') {
    *(undefined1 *)(param_2 + 0x74e) = 1;
    return;
  }
  FUN_180065b40(param_2 + 0x680);
  *(undefined1 *)(param_2 + 0x74e) = 1;
  return;
}


