/* Unwind@1800c3c70 @ 1800c3c70 */

void Unwind_1800c3c70(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x10e);
  bVar2 = *(byte *)(param_2 + 0x10f);
  if (*(char *)(param_2 + 0x10d) == '\0') {
    *(byte *)(param_2 + 0x10c) = bVar2 & 1;
    *(byte *)(param_2 + 0x10b) = bVar1 & 1;
    return;
  }
  (**(code **)(*(longlong *)(param_2 + 0x70) + 0x20))
            (*(undefined8 *)(param_2 + 0x88),*(undefined8 *)(param_2 + 0x78),
             *(undefined8 *)(param_2 + 0x80));
  *(byte *)(param_2 + 0x10c) = bVar2 & 1;
  *(byte *)(param_2 + 0x10b) = bVar1 & 1;
  return;
}


