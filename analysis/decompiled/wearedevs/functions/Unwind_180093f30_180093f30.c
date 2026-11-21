/* Unwind@180093f30 @ 180093f30 */

void Unwind_180093f30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x506) == '\0') {
    *(undefined1 *)(param_2 + 0x507) = 0;
    return;
  }
  if (*(int *)(param_2 + 0x3a8) != 3) {
    FUN_180091e90(param_2 + 0x3a8);
  }
  *(undefined1 *)(param_2 + 0x507) = 0;
  return;
}


