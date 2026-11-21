/* Unwind@1800f26f0 @ 1800f26f0 */

void Unwind_1800f26f0(undefined8 param_1,longlong param_2)

{
  longlong *plVar1;
  
  if (*(char *)(*(longlong *)(param_2 + 1000) + 0x252) == '\0') {
    return;
  }
  plVar1 = *(longlong **)(param_2 + 0x3c8);
  LOCK();
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    FUN_18003dca0(param_2 + 0x3c8);
  }
  return;
}


