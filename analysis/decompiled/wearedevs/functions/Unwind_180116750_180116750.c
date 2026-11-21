/* Unwind@180116750 @ 180116750 */

void Unwind_180116750(undefined8 param_1,longlong param_2)

{
  if ((*(char *)(param_2 + 0xe0) == '\x05') && ((*(byte *)(param_2 + 0x10f) & 1) != 0)) {
    (**(code **)(*(longlong *)(param_2 + 0xf8) + 0x20))
              (*(undefined8 *)(param_2 + 0xe8),*(undefined8 *)(param_2 + 0xf0),
               *(undefined8 *)(param_2 + 0x100));
  }
  return;
}


