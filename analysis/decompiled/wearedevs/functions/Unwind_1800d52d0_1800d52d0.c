/* Unwind@1800d52d0 @ 1800d52d0 */

void Unwind_1800d52d0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x29e) == '\0') {
    *(undefined1 *)(param_2 + 0x29d) = 0;
    return;
  }
  if (*(char *)(param_2 + 0x288) == '\0') {
    plVar1 = *(longlong **)(param_2 + 0x278);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(param_2 + 0x278);
    }
  }
  *(undefined1 *)(param_2 + 0x29d) = 1;
  return;
}


