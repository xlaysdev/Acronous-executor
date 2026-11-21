/* Unwind@180056460 @ 180056460 */

void Unwind_180056460(undefined8 param_1,longlong param_2)

{
  char cVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_2 + 0x120);
  cVar1 = *(char *)(param_2 + 0x137);
  FUN_180050ff0(lVar2 + 0x60);
  if (cVar1 != '\0') {
    FUN_1800430f0(lVar2);
  }
  FUN_18003b820(*(undefined8 *)(lVar2 + 0xd0));
  return;
}


