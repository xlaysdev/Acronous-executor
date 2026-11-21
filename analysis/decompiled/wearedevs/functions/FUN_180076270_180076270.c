/* FUN_180076270 @ 180076270 */

void FUN_180076270(int *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  longlong local_48;
  longlong lStack_40;
  undefined1 local_38;
  undefined8 *local_30;
  int *local_28;
  int *local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_20 = param_1;
  if (*param_1 == 2) {
    local_28 = param_1 + 2;
    local_48 = *(longlong *)(param_1 + 0x134) + 0x10;
    lStack_40 = *(longlong *)(param_1 + 0x136) + 0x10;
    local_38 = 0;
    FUN_18008a8c0(&local_48,1);
    lVar2 = 0x3c8;
    FUN_180079110(local_28);
  }
  else {
    if (param_1[0x14c] != 1000000000) {
      local_28 = *(int **)(param_1 + 0x156);
      local_30 = *(undefined8 **)(param_1 + 0x158);
      if ((code *)*local_30 != (code *)0x0) {
        (*(code *)*local_30)(local_28);
      }
      if (local_30[1] != 0) {
        thunk_FUN_1801d3330(local_28,local_30[1],local_30[2]);
      }
      plVar1 = *(longlong **)(local_20 + 0x15a);
      if (plVar1 != (longlong *)0x0) {
        LOCK();
        *plVar1 = *plVar1 + -1;
        UNLOCK();
        if (*plVar1 == 0) {
          FUN_18003cc40(local_20 + 0x15a);
        }
      }
    }
    plVar1 = *(longlong **)(local_20 + 0x160);
    LOCK();
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      FUN_180114260(local_20 + 0x160);
    }
    local_48 = *(longlong *)(local_20 + 0x132) + 0x10;
    lStack_40 = *(longlong *)(local_20 + 0x134) + 0x10;
    local_38 = 0;
    FUN_18008a8c0(&local_48,1);
    lVar2 = 0x3c0;
    FUN_180079110(local_20);
  }
  FUN_180076570((longlong)local_20 + lVar2);
  return;
}


