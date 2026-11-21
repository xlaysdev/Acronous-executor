/* Unwind@18004dae0 @ 18004dae0 */

void Unwind_18004dae0(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x1428) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x144c) = 0;
    *(undefined1 *)(param_2 + 0x144b) = *(undefined1 *)(param_2 + 0x1430);
    *(undefined1 *)(param_2 + 0x144a) = *(undefined1 *)(param_2 + 0x1430);
    return;
  }
  FUN_18000adf0(param_2 + 0x12d0);
  *(undefined1 *)(param_2 + 0x144c) = 0;
  *(undefined1 *)(param_2 + 0x144b) = *(undefined1 *)(param_2 + 0x1430);
  *(undefined1 *)(param_2 + 0x144a) = *(undefined1 *)(param_2 + 0x1430);
  return;
}


