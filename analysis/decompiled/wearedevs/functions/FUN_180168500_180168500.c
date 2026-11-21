/* FUN_180168500 @ 180168500 */

void FUN_180168500(int *param_1)

{
  longlong lVar1;
  longlong *plVar2;
  
  FUN_180170e20();
  if (*(longlong *)(param_1 + 0x10) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x12),*(longlong *)(param_1 + 0x10) << 3,8);
  }
  if (*param_1 != 3) {
    lVar1 = *(longlong *)(param_1 + 2);
    if (SBORROW8(0,lVar1)) {
      plVar2 = *(longlong **)(param_1 + 4);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180163980(param_1 + 4);
      }
    }
    else {
      if (*(longlong *)(param_1 + 10) != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 8),*(longlong *)(param_1 + 10) << 5,8);
      }
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 4),lVar1 << 4,8);
      }
      plVar2 = *(longlong **)(param_1 + 0xc);
      LOCK();
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
        FUN_180187950(param_1 + 0xc);
      }
    }
  }
  thunk_FUN_1801d3330(param_1,0x98,8);
  return;
}


