/* Unwind@1800d09e0 @ 1800d09e0 */

void Unwind_1800d09e0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xf5) == '\0') {
    *(undefined1 *)(param_2 + 0xf4) = 0;
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0xc0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003d670(param_2 + 0xc0);
  }
  *(undefined1 *)(param_2 + 0xf4) = 1;
  return;
}


