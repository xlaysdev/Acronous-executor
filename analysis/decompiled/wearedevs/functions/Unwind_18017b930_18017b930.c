/* Unwind@18017b930 @ 18017b930 */

void Unwind_18017b930(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(param_2 + 0x46a) == '\0') {
    *(undefined1 *)(param_2 + 0x46d) = 1;
    *(undefined1 *)(param_2 + 0x46c) = 0;
    return;
  }
  FUN_180167aa0(param_2 + 0x3c8);
  plVar1 = *(longlong **)(param_2 + 0x448);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_180163bb0(param_2 + 0x448);
  }
  FUN_180167c00(param_2 + 0x120);
  FUN_180179dc0(param_2 + 0xe0);
  *(undefined1 *)(param_2 + 0x46d) = 1;
  *(undefined1 *)(param_2 + 0x46c) = 0;
  return;
}


