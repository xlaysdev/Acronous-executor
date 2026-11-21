/* Unwind@18006dcf0 @ 18006dcf0 */

void Unwind_18006dcf0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x454);
  if ((*(char *)(param_2 + 0x455) != '\0') &&
     (plVar2 = *(longlong **)(param_2 + 0x418), plVar2 != (longlong *)0x0)) {
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801139f0(param_2 + 0x418);
    }
  }
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x456) = 0;
    return;
  }
  FUN_180042aa0(param_2 + 1000);
  *(undefined1 *)(param_2 + 0x456) = 0;
  return;
}


