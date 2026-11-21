/* Unwind@180183be0 @ 180183be0 */

void Unwind_180183be0(undefined8 param_1,longlong param_2)

{
  byte bVar1;
  longlong *plVar2;
  
  bVar1 = *(byte *)(param_2 + 0x46e);
  if (*(char *)(param_2 + 0x46f) != '\0') {
    FUN_1801679a0(param_2 + 600);
  }
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 0x475) = 1;
    *(undefined1 *)(param_2 + 0x474) = 1;
    *(undefined1 *)(param_2 + 0x473) = 1;
    return;
  }
  plVar2 = *(longlong **)(param_2 + 0x3a0);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_180163890(param_2 + 0x3a0);
  }
  *(undefined1 *)(param_2 + 0x475) = 1;
  *(undefined1 *)(param_2 + 0x474) = 1;
  *(undefined1 *)(param_2 + 0x473) = 1;
  return;
}


