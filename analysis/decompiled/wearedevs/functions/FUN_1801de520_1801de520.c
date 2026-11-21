/* FUN_1801de520 @ 1801de520 */

bool FUN_1801de520(undefined8 param_1,undefined8 param_2)

{
  int local_80 [2];
  longlong local_78;
  uint local_34;
  uint local_30;
  longlong local_28;
  undefined8 local_20;
  undefined8 *local_18;
  undefined8 local_10;
  
  local_10 = 0xfffffffffffffffe;
  FUN_1801d9f10(local_80,param_1,param_2);
  if (local_80[0] != 2) {
    return ((local_30 & 0x20000000) == 0 || (local_34 & 0x400) == 0) && (local_34 & 0x10) == 0;
  }
  if (((uint)local_78 & 3) == 1) {
    local_28 = local_78 + -1;
    local_20 = *(undefined8 *)(local_78 + -1);
    local_18 = *(undefined8 **)(local_78 + 7);
    if ((code *)*local_18 != (code *)0x0) {
      (*(code *)*local_18)(local_20);
    }
    if (local_18[1] != 0) {
      thunk_FUN_1801d3330(local_20,local_18[1],local_18[2]);
    }
    thunk_FUN_1801d3330(local_28,0x18,8);
  }
  return false;
}


