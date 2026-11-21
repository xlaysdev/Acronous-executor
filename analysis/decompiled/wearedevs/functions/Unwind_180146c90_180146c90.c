/* Unwind@180146c90 @ 180146c90 */

void Unwind_180146c90(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0xff);
  if (*(char *)(param_2 + 0xfe) == '\0') {
    *(byte *)(param_2 + 0xfd) = bVar1 & 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0xb0);
  (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
  *(byte *)(param_2 + 0xfd) = bVar1 & 1;
  return;
}


