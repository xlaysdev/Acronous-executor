/* Unwind@18008c520 @ 18008c520 */

void Unwind_18008c520(undefined8 param_1,longlong param_2)

{
  if ((*(byte *)(param_2 + 0x56f) & 1) == 0) {
    *(undefined1 *)(param_2 + 0x56b) = 0;
    return;
  }
  if (*(longlong *)(param_2 + 0x520) != 0) {
    (**(code **)(*(longlong *)(param_2 + 0x520) + 0x20))
              (*(undefined8 *)(param_2 + 0x538),*(undefined8 *)(param_2 + 0x528),
               *(undefined8 *)(param_2 + 0x530));
  }
  *(undefined1 *)(param_2 + 0x56b) = 1;
  return;
}


