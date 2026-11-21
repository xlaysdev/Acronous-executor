/* Unwind@180090120 @ 180090120 */

void Unwind_180090120(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_2 + 0x146);
  if (*(char *)(param_2 + 0x147) != '\0') {
    FUN_1800430f0(*(undefined8 *)(param_2 + 0x130));
  }
  if ((bVar1 & 1) != 0) {
    FUN_18003b820(*(undefined8 *)(*(longlong *)(param_2 + 0x130) + 0x60));
  }
  return;
}


