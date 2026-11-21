/* Unwind@18011f9f0 @ 18011f9f0 */

void Unwind_18011f9f0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x1d2b) == '\0') {
    *(char *)(param_2 + 0x1d33) = (char)*(undefined4 *)(param_2 + 0x1d18);
    *(char *)(param_2 + 0x1d32) = (char)*(undefined4 *)(param_2 + 0x1d00);
    *(undefined1 *)(param_2 + 0x1d31) = 0;
    return;
  }
  FUN_18011b920(param_2 + 0x1be0);
  *(char *)(param_2 + 0x1d33) = (char)*(undefined4 *)(param_2 + 0x1d18);
  *(char *)(param_2 + 0x1d32) = (char)*(undefined4 *)(param_2 + 0x1d00);
  *(undefined1 *)(param_2 + 0x1d31) = 0;
  return;
}


