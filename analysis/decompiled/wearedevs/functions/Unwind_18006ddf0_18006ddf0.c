/* Unwind@18006ddf0 @ 18006ddf0 */

void Unwind_18006ddf0(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x458) == '\0') {
    *(undefined1 *)(param_2 + 0x45a) = 0;
    *(undefined1 *)(param_2 + 0x459) = *(undefined1 *)(param_2 + 0x440);
    return;
  }
  FUN_1800755d0(param_2 + 0x400);
  *(undefined1 *)(param_2 + 0x45a) = 1;
  *(undefined1 *)(param_2 + 0x459) = *(undefined1 *)(param_2 + 0x440);
  return;
}


