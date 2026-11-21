/* FUN_1800c1560 @ 1800c1560 */

undefined8 * FUN_1800c1560(undefined8 *param_1,void *param_2)

{
  char cVar1;
  int local_60 [2];
  longlong local_58;
  longlong local_48;
  void *local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_21 = 1;
  local_40 = param_2;
  FUN_1800be470(local_60);
  if (local_60[0] == 2) {
    cVar1 = FUN_1800b9780(local_58);
    if (cVar1 == '\r') {
      memcpy(param_1 + 1,local_40,0x120);
      *param_1 = 1;
      if (((uint)local_58 & 3) == 1) {
        local_48 = local_58 + -1;
        local_38 = *(undefined8 *)(local_58 + -1);
        local_30 = *(undefined8 **)(local_58 + 7);
        if ((code *)*local_30 != (code *)0x0) {
          (*(code *)*local_30)(local_38);
        }
        if (local_30[1] != 0) {
          thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
        }
        thunk_FUN_1801d3330(local_48,0x18,8);
      }
    }
    else {
      param_1[1] = 2;
      param_1[2] = local_58;
      *param_1 = 1;
      FUN_1800ba150(local_40);
    }
  }
  else {
    memcpy(param_1 + 1,local_40,0x120);
    *param_1 = 0;
  }
  return param_1;
}


