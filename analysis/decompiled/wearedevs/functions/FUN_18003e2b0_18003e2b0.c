/* FUN_18003e2b0 @ 18003e2b0 */

void FUN_18003e2b0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  lVar2 = *param_1;
  if (*(longlong *)(lVar2 + 0x38) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(lVar2 + 0x30),*(longlong *)(lVar2 + 0x38) << 3,8);
  }
  if (lVar2 != -1) {
    LOCK();
    plVar1 = (longlong *)(lVar2 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(lVar2,0x70,8);
      return;
    }
  }
  return;
}


