/* FUN_1801bb990 @ 1801bb990 */

void FUN_1801bb990(LPVOID param_1,undefined4 param_2)

{
  BOOL BVar1;
  undefined4 uVar2;
  longlong local_40;
  undefined4 local_38;
  longlong local_30;
  HANDLE local_28;
  undefined4 local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = GetProcessHeap();
  if ((longlong)local_28 - 1U < 0xfffffffffffffffe) {
    local_30 = 0;
    uVar2 = 0;
    BVar1 = HeapFree(local_28,0,param_1);
    if (BVar1 != 0) {
      return;
    }
    local_40 = FUN_1801c9650();
    local_38 = uVar2;
    if (local_40 != 0) {
      FUN_180111960(&local_40);
    }
    if (local_30 == 0) {
      return;
    }
  }
  else {
    local_28 = (HANDLE)FUN_1801c9650();
    local_30 = 1;
    local_20 = param_2;
  }
  if (local_28 == (HANDLE)0x0) {
    return;
  }
  FUN_180111960(&local_28);
  return;
}


