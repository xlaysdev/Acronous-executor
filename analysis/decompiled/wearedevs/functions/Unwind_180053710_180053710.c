/* Unwind@180053710 @ 180053710 */

void Unwind_180053710(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x10f);
  if (*(char *)(param_2 + 0x10e) == '\0') {
    *(byte *)(param_2 + 0x10c) = bVar1 & 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0xd8);
  (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
  *(byte *)(param_2 + 0x10c) = bVar1 & 1;
  return;
}


