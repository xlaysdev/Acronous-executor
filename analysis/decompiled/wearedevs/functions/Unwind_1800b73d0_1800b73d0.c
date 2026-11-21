/* Unwind@1800b73d0 @ 1800b73d0 */

void Unwind_1800b73d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(longlong *)(param_2 + 0x2f50) != 0) {
    plVar1 = *(longlong **)(param_2 + 0x2f50);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(param_2 + 0x898);
    }
  }
  *(undefined1 *)(param_2 + 0x2f7d) = 0;
  *(undefined1 *)(param_2 + 0x2f7c) = 0;
  return;
}


