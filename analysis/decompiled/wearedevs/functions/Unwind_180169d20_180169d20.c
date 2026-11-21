/* Unwind@180169d20 @ 180169d20 */

void Unwind_180169d20(undefined8 param_1,ulonglong param_2)

{
  param_2 = param_2 & 0xffffffffffffff80;
  FUN_180168230(param_2 + 0xa0);
  if ((*(ulonglong *)(param_2 + 0x78) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x70),*(undefined8 *)(param_2 + 0x78),1);
  }
  *(undefined1 *)(param_2 + 0x6c) = 0;
  *(undefined1 *)(param_2 + 0x6d) = 1;
  *(undefined1 *)(param_2 + 0x6e) = 1;
  return;
}


