/* FUN_180101d00 @ 180101d00 */

longlong FUN_180101d00(longlong param_1,longlong param_2,longlong param_3)

{
  longlong local_48;
  longlong local_40;
  undefined2 local_38;
  undefined4 local_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  local_40 = param_3 + param_2;
  local_38 = 0;
  local_30 = 1;
  local_48 = param_2;
  FUN_1801020a0(&local_28,&local_48);
  if ((*(ulonglong *)(param_1 + 0x10) & 0x7fffffffffffffff) != 0) {
    thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x18),*(ulonglong *)(param_1 + 0x10) * 2,2);
  }
  *(undefined8 *)(param_1 + 0x20) = local_18;
  *(undefined8 *)(param_1 + 0x10) = local_28;
  *(undefined8 *)(param_1 + 0x18) = uStack_20;
  return param_1;
}


