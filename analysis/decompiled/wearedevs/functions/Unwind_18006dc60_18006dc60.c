/* Unwind@18006dc60 @ 18006dc60 */

void Unwind_18006dc60(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x465);
  bVar2 = *(byte *)(param_2 + 0x466);
  if (*(char *)(param_2 + 0x467) == '\0') {
    *(byte *)(param_2 + 0x455) = bVar2 & 1;
    *(byte *)(param_2 + 0x454) = bVar1 & 1;
    return;
  }
  FUN_18007b300(param_2 + 0x130);
  *(byte *)(param_2 + 0x455) = bVar2 & 1;
  *(byte *)(param_2 + 0x454) = bVar1 & 1;
  return;
}


