/* Unwind@18017b8a0 @ 18017b8a0 */

void Unwind_18017b8a0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = *(byte *)(param_2 + 0x46e);
  bVar2 = *(byte *)(param_2 + 0x46f);
  if ((bVar1 & 1) != 0) {
    FUN_18000b8c0(param_2 + 0x3c8);
  }
  if ((bVar2 & 1) == 0) {
    *(byte *)(param_2 + 0x46d) = bVar1;
    *(undefined1 *)(param_2 + 0x46c) = 0;
    return;
  }
  FUN_180179fd0(param_2 + 0x210);
  *(byte *)(param_2 + 0x46d) = bVar1;
  *(undefined1 *)(param_2 + 0x46c) = 0;
  return;
}


