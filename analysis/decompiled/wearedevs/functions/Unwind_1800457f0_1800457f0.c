/* Unwind@1800457f0 @ 1800457f0 */

void Unwind_1800457f0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x11f);
  if (*(char *)(param_2 + 0x11e) == '\0') {
    *(byte *)(param_2 + 0x11d) = bVar1 & 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0xe0);
  (**(code **)(*plVar2 + 0x20))(plVar2[3],plVar2[1],plVar2[2]);
  *(byte *)(param_2 + 0x11d) = bVar1 & 1;
  return;
}


