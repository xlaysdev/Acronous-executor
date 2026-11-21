/* FUN_180155080 @ 180155080 */

longlong * FUN_180155080(longlong *param_1,undefined8 param_2,undefined4 param_3)

{
  longlong local_50;
  longlong lStack_48;
  longlong local_40;
  longlong lStack_38;
  longlong local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_180159a30(&local_50);
  if ((char)local_50 == '\x03') {
    local_50 = 0;
    FUN_180159c70(param_2,param_3,&local_50);
    if (local_50 != 0) {
      (**(code **)(local_50 + 0x18))(lStack_48);
    }
    *(undefined1 *)param_1 = 3;
  }
  else {
    param_1[4] = local_30;
    param_1[2] = local_40;
    param_1[3] = lStack_38;
    *param_1 = local_50;
    param_1[1] = lStack_48;
  }
  return param_1;
}


