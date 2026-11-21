/* FUN_1801b4f50 @ 1801b4f50 */

void FUN_1801b4f50(longlong *param_1,undefined4 param_2)

{
  longlong *plVar1;
  BOOL BVar2;
  longlong local_28;
  undefined4 local_20;
  longlong local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  local_18 = *param_1;
  BVar2 = CloseHandle(*(HANDLE *)(local_18 + 0x10));
  if (BVar2 == 0) {
    local_28 = FUN_1801c9650();
    local_20 = param_2;
    if (local_28 != 0) {
      FUN_180111960(&local_28);
    }
  }
  if (local_18 != -1) {
    LOCK();
    plVar1 = (longlong *)(local_18 + 8);
    *plVar1 = *plVar1 + -1;
    UNLOCK();
    if (*plVar1 == 0) {
      thunk_FUN_1801d3330(local_18,0x18,8);
      return;
    }
  }
  return;
}


