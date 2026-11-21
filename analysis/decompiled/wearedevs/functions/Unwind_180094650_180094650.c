/* Unwind@180094650 @ 180094650 */

void Unwind_180094650(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0x29e) == '\0') {
    *(undefined1 *)(param_2 + 0x29f) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x278) + 0x20))
            (*(undefined8 *)(param_2 + 0x270),*(undefined8 *)(param_2 + 0x268),
             *(undefined8 *)(param_2 + 0x280));
  *(undefined1 *)(param_2 + 0x29f) = 0;
  return;
}


