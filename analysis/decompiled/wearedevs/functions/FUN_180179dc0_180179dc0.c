/* FUN_180179dc0 @ 180179dc0 */

void FUN_180179dc0(longlong param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *(longlong *)(param_1 + 8);
  if (SBORROW8(0,lVar2)) {
    plVar1 = *(longlong **)(param_1 + 0x10);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180163980(param_1 + 0x10);
      return;
    }
  }
  else {
    if (*(longlong *)(param_1 + 0x28) != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x20),*(longlong *)(param_1 + 0x28) << 5,8);
      lVar2 = *(longlong *)(param_1 + 8);
    }
    if (lVar2 != 0) {
      thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x10),lVar2 << 4,8);
    }
    plVar1 = *(longlong **)(param_1 + 0x30);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180187950(param_1 + 0x30);
      return;
    }
  }
  return;
}


