/* Unwind@18005ab20 @ 18005ab20 */

void Unwind_18005ab20(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(int *)(param_2 + 0x440) != 2) {
    plVar1 = *(longlong **)(param_2 + 0x248);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      *(undefined1 *)(param_2 + 0x44f) = 0;
      FUN_18003e300(param_2 + 0x248);
    }
    *(undefined1 *)(param_2 + 0x44f) = 0;
    FUN_180050de0(param_2 + 0x140);
  }
  *(undefined1 *)(param_2 + 0x44f) = 0;
  return;
}


