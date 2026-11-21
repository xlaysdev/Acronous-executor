/* Unwind@18004aae0 @ 18004aae0 */

void Unwind_18004aae0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xd93) == '\0') {
    *(undefined1 *)(param_2 + 0xdbd) = 0;
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xcf0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(param_2 + 0xcf0);
  }
  FUN_180043510(param_2 + 0x3e0);
  FUN_180041bb0(param_2 + 0xd00);
  *(undefined1 *)(param_2 + 0xdbd) = 0;
  return;
}


