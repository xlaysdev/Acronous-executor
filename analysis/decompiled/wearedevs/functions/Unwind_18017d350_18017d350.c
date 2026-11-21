/* Unwind@18017d350 @ 18017d350 */

void Unwind_18017d350(undefined8 param_1,longlong param_2)

{
  if (*(longlong *)(param_2 + 0xf0) == 0) {
    FUN_18017dcf0(param_2 + 0x20);
    *(undefined1 *)(param_2 + 0x103) = 1;
    *(undefined1 *)(param_2 + 0x102) = 0;
    return;
  }
  *(undefined1 *)(param_2 + 0x103) = 0;
  *(undefined1 *)(param_2 + 0x102) = 0;
  return;
}


