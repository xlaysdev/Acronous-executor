/* FUN_1801e37a0 @ 1801e37a0 */

void FUN_1801e37a0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x18) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x20),*(longlong *)(lVar2 + 0x18),1);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x30,8);
      return;
    }
  }
  return;
}


