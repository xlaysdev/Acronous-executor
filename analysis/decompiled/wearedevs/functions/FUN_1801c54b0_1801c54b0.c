/* FUN_1801c54b0 @ 1801c54b0 */

void FUN_1801c54b0(longlong param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  lVar1 = *(longlong *)(param_1 + 0x10);
  if ((!SBORROW8(0,lVar1)) && (lVar1 != 0)) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),lVar1,1);
  }
  plVar2 = *(longlong **)(param_1 + 0x38);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(param_1 + 0x38);
  }
  plVar2 = *(longlong **)(param_1 + 0x28);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c68a0(param_1 + 0x28);
  }
  plVar2 = *(longlong **)(param_1 + 0x58);
  LOCK();
  *plVar2 = *plVar2 + -1;
  UNLOCK();
  if (*plVar2 == 0) {
    FUN_1801c64c0(param_1 + 0x58);
    return;
  }
  return;
}


