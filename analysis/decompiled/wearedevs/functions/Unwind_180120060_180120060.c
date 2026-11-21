/* Unwind@180120060 @ 180120060 */

void Unwind_180120060(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x1d35);
  if (*(char *)(param_2 + 0x1d34) == '\0') {
    *(byte *)(param_2 + 0x1d0a) = bVar1 & 1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x1cd0) + 0x20))
            (*(undefined8 *)(param_2 + 0x1cc8),*(undefined8 *)(param_2 + 0x1cc0),
             *(undefined8 *)(param_2 + 0x1cf8));
  *(byte *)(param_2 + 0x1d0a) = bVar1 & 1;
  return;
}


