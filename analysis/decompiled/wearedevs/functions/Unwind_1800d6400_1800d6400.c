/* Unwind@1800d6400 @ 1800d6400 */

void Unwind_1800d6400(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 0x828) + 0x68) == '\0') {
    plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x820);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003dca0(*(undefined8 *)(param_2 + 0x820));
    }
  }
  return;
}


