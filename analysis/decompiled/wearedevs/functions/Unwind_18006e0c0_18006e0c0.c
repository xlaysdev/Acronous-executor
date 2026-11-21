/* Unwind@18006e0c0 @ 18006e0c0 */

void Unwind_18006e0c0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  bool bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x463);
  bVar2 = *(longlong *)(param_2 + 0x3f0) != 3;
  if (*(char *)(param_2 + 0x464) == '\0') {
    *(byte *)(param_2 + 0x45d) = bVar1 & 1;
    *(undefined1 *)(param_2 + 0x45c) = *(undefined1 *)(param_2 + 0x457);
    *(bool *)(param_2 + 0x45b) = bVar2;
    return;
  }
  if (*(longlong *)(param_2 + 0x420) != 0) {
    FUN_1800755d0(param_2 + 0x420);
  }
  *(byte *)(param_2 + 0x45d) = bVar1 & 1;
  *(undefined1 *)(param_2 + 0x45c) = *(undefined1 *)(param_2 + 0x457);
  *(bool *)(param_2 + 0x45b) = bVar2;
  return;
}


