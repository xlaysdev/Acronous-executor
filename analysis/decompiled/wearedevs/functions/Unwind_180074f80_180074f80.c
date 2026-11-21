/* Unwind@180074f80 @ 180074f80 */

void Unwind_180074f80(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x201) == '\x02') {
    *(undefined1 *)(param_2 + 0x245) = 0;
    return;
  }
  if ((*(byte *)(param_2 + 0x247) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x245) = 0;
    return;
  }
  FUN_1800758e0(param_2 + 0x1d0);
  *(undefined1 *)(param_2 + 0x245) = 0;
  return;
}


