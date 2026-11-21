/* Unwind@1801c0960 @ 1801c0960 */

void Unwind_1801c0960(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x98) != '\0') {
    plVar1 = *(longlong **)(param_2 + 0x80);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801c64c0((undefined8 *)(param_2 + 0x80));
    }
  }
  return;
}


