/* Unwind@180053020 @ 180053020 */

void Unwind_180053020(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0xff);
  if (*(char *)(param_2 + 0xfe) == '\0') {
    *(byte *)(param_2 + 0xfc) = bVar1 & 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 200);
  (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
  *(byte *)(param_2 + 0xfc) = bVar1 & 1;
  return;
}


