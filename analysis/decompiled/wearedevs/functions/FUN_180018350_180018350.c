/* FUN_180018350 @ 180018350 */

void FUN_180018350(longlong param_1)

{
  longlong *plVar1;
  
  if (*(char *)(param_1 + 0x39) == '\x03') {
    FUN_18000b8f0(*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18));
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_18003e300(param_1 + 0x30);
    }
    *(undefined1 *)(param_1 + 0x38) = 0;
  }
  return;
}


