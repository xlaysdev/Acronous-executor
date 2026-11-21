/* Unwind@18017d880 @ 18017d880 */

void Unwind_18017d880(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0xee) != '\0') {
    plVar1 = (longlong *)**(undefined8 **)(param_2 + 0xe0);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_1801e3850(*(undefined8 *)(param_2 + 0xe0));
    }
  }
  return;
}


