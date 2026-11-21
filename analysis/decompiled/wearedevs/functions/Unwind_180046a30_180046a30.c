/* Unwind@180046a30 @ 180046a30 */

void Unwind_180046a30(undefined8 param_1,longlong param_2)

{
  if (*(char *)(param_2 + 0xbe) == '\0') {
    *(undefined1 *)(param_2 + 0xbf) = 0;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x48) + 0x20))
            (*(undefined8 *)(param_2 + 0x60),*(undefined8 *)(param_2 + 0x50),
             *(undefined8 *)(param_2 + 0x58));
  *(undefined1 *)(param_2 + 0xbf) = 0;
  return;
}


