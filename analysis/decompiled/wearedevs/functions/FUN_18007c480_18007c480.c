/* FUN_18007c480 @ 18007c480 */

void FUN_18007c480(char *param_1)

{
  longlong *plVar1;
  
  if ((*param_1 != '\0') && (plVar1 = *(longlong **)(param_1 + 8), plVar1 != (longlong *)0x0)) {
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(param_1 + 8);
      return;
    }
  }
  return;
}


