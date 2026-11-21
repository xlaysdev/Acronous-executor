/* Unwind@180183e30 @ 180183e30 */

void Unwind_180183e30(undefined8 param_1,longlong param_2)

{
  longlong lVar1;
  byte bVar2;
  byte bVar3;
  longlong *plVar4;
  
  bVar2 = *(byte *)(param_2 + 0x46b);
  bVar3 = *(byte *)(param_2 + 0x46c);
  if ((*(char *)(param_2 + 0x46d) != '\0') &&
     ((**(ulonglong **)(param_2 + 0x518) & 0x7fffffffffffffff) != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(*(longlong *)(param_2 + 0x518) + 8),
                        **(ulonglong **)(param_2 + 0x518),1);
  }
  if ((bVar3 & 1) != 0) {
    FUN_180167aa0(*(undefined8 *)(param_2 + 0x510));
  }
  if ((bVar2 & 1) == 0) {
    plVar4 = *(longlong **)(param_2 + 0x418);
    LOCK();
    *plVar4 = *plVar4 + -1;
    lVar1 = *plVar4;
    UNLOCK();
  }
  else {
    plVar4 = *(longlong **)(param_2 + 0x500);
    LOCK();
    *plVar4 = *plVar4 + -1;
    UNLOCK();
    if (*plVar4 == 0) {
      FUN_180163bb0(param_2 + 0x500);
    }
    FUN_180167c00(*(undefined8 *)(param_2 + 0x3a8));
    plVar4 = *(longlong **)(param_2 + 0x418);
    LOCK();
    *plVar4 = *plVar4 + -1;
    lVar1 = *plVar4;
    UNLOCK();
  }
  if (lVar1 == 0) {
    FUN_1801638e0(param_2 + 0x418);
  }
  return;
}


