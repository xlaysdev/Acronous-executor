/* Unwind@180118700 @ 180118700 */

void Unwind_180118700(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x217);
  if (*(char *)(param_2 + 0x216) == '\0') {
    *(byte *)(param_2 + 0x214) = bVar1 & 1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x1e0) + 0x20))
            (*(undefined8 *)(param_2 + 0x1d8),*(undefined8 *)(param_2 + 0x1d0),
             *(undefined8 *)(param_2 + 0x1c8));
  *(byte *)(param_2 + 0x214) = bVar1 & 1;
  return;
}


