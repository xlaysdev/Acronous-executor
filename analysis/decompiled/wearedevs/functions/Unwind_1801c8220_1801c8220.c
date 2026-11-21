/* Unwind@1801c8220 @ 1801c8220 */

void Unwind_1801c8220(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x1de) != '\0') {
    plVar1 = (longlong *)**(undefined8 **)(param_2 + 0x1d0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3850(*(undefined8 *)(param_2 + 0x1d0));
    }
  }
  return;
}


