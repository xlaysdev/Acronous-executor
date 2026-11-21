/* Unwind@18017abf0 @ 18017abf0 */

void Unwind_18017abf0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x3ad) == '\0') {
    *(undefined1 *)(param_2 + 0x3af) = 0;
    return;
  }
  FUN_180167aa0(param_2 + 0x200);
  plVar1 = *(longlong **)(param_2 + 0x3a0);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163bb0(param_2 + 0x370);
  }
  FUN_180167c00(param_2 + 0xe0);
  FUN_180179dc0(param_2 + 0x1c0);
  *(undefined1 *)(param_2 + 0x3af) = 0;
  return;
}


