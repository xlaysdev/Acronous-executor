/* Unwind@1800c2670 @ 1800c2670 */

void Unwind_1800c2670(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x46b);
  if (*(longlong *)(param_2 + 0x410) != 0) {
    FUN_180101150(param_2 + 0x3c8);
  }
  *(undefined8 *)(param_2 + 0x418) = *(undefined8 *)(param_2 + 0x420);
  *(byte *)(param_2 + 0x46c) = bVar1 & 1;
  return;
}


