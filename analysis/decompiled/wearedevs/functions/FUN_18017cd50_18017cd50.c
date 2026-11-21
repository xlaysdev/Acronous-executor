/* FUN_18017cd50 @ 18017cd50 */

void FUN_18017cd50(undefined8 *param_1)

{
  char cVar1;
  longlong *plVar2;
  
  cVar1 = *(char *)(param_1 + 1);
  *(undefined1 *)(param_1 + 1) = 2;
  if (cVar1 == '\x01') {
    plVar2 = (longlong *)*param_1;
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180163980();
    }
  }
  return;
}


