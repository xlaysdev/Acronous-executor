/* Unwind@1801e07d0 @ 1801e07d0 */

void Unwind_1801e07d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if ((*(char *)(param_2 + 0x77) != '\0') && (*(longlong *)(param_2 + 0x40) != 0)) {
    FUN_1801e4d70(param_2 + 0x48);
    plVar1 = *(longlong **)(param_2 + 0x48);
    if (plVar1 != (longlong *)0x0) {
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        *(undefined1 *)(param_2 + 0x76) = 1;
        FUN_1801e38e0(param_2 + 0x48);
      }
    }
  }
  *(undefined1 *)(param_2 + 0x76) = 1;
  return;
}


