/* FUN_1801bf7f0 @ 1801bf7f0 */

void FUN_1801bf7f0(undefined8 *param_1,undefined4 param_2)

{
  BOOL BVar1;
  longlong local_10;
  undefined4 local_8;
  
  BVar1 = CloseHandle((HANDLE)*param_1);
  if (BVar1 == 0) {
    local_10 = FUN_1801c9650();
    if (local_10 != 0) {
      local_8 = param_2;
      FUN_180111960(&local_10);
      return;
    }
  }
  return;
}


