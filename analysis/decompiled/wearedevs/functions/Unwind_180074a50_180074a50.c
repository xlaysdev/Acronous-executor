/* Unwind@180074a50 @ 180074a50 */

void Unwind_180074a50(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x244) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x247) = 1;
    return;
  }
  FUN_180076810(param_2 + 0x210);
  *(undefined1 *)(param_2 + 0x247) = 1;
  return;
}


