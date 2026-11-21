/* Unwind@180124780 @ 180124780 */

void Unwind_180124780(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0xa8);
  bVar1 = *(byte *)(param_2 + 0xb6);
  if (*(char *)(param_2 + 0xb7) != '\0') {
    FUN_1800430f0(lVar2);
  }
  if ((bVar1 & 1) != 0) {
    FUN_18000b400(*(undefined8 *)(lVar2 + 0x60));
  }
  return;
}


