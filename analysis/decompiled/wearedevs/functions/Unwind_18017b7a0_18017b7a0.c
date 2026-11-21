/* Unwind@18017b7a0 @ 18017b7a0 */

void Unwind_18017b7a0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x46b) != '\0') {
    if ((*(ulonglong *)(param_2 + 0x428) & 0x7fffffffffffffff) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_2 + 0x458),*(ulonglong *)(param_2 + 0x428),1);
    }
    *(undefined1 *)(param_2 + 0x46a) = 0;
    FUN_180167aa0(param_2 + 0x3c8);
    plVar1 = *(longlong **)(param_2 + 0x440);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      *(undefined1 *)(param_2 + 0x46a) = 0;
      FUN_180163bb0(param_2 + 0x440);
    }
    *(undefined1 *)(param_2 + 0x46a) = 0;
    FUN_180167c00(param_2 + 0x120);
  }
  *(undefined1 *)(param_2 + 0x46a) = 0;
  return;
}


