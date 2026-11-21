/* Unwind@1801c1180 @ 1801c1180 */

void Unwind_1801c1180(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x150) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x120);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801c64c0(param_2 + 0x120);
    }
  }
  return;
}


