/* FUN_18002cd70 @ 18002cd70 */

void FUN_18002cd70(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  
  if (*param_1 != 3) {
    lVar2 = *(longlong *)(param_1 + 2);
    if (SBORROW8(0,lVar2)) {
      plVar1 = *(longlong **)(param_1 + 4);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180163980(param_1 + 4);
        return;
      }
    }
    else {
      if (*(longlong *)(param_1 + 10) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 10) << 5,8);
        lVar2 = *(longlong *)(param_1 + 2);
      }
      if (lVar2 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 4),lVar2 << 4,8);
      }
      plVar1 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        FUN_180187950(param_1 + 0xc);
        return;
      }
    }
  }
  return;
}


