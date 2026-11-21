/* Unwind@18018af40 @ 18018af40 */

void Unwind_18018af40(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x97) & 1) == 0) {
    return;
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x80),*(undefined8 *)(param_2 + 0x88),1);
  }
  return;
}


