/* FUN_18012c4b0 @ 18012c4b0 */

undefined1 *
FUN_18012c4b0(undefined1 *param_1,longlong param_2,longlong param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined4 local_44;
  undefined8 local_40;
  undefined8 uStack_38;
  ulonglong local_30;
  undefined1 local_28;
  undefined7 uStack_27;
  longlong local_20;
  longlong local_18;
  longlong local_10;
  
  uStack_38 = param_5;
  local_18 = param_3 + param_2;
  local_44 = 0;
  local_40 = param_4;
  local_20 = param_2;
  local_10 = param_2;
  FUN_18012c560(&local_30,&local_40,&local_20,&local_44);
  if (local_30 == 2) {
    param_1[1] = local_28;
    *param_1 = 1;
    return param_1;
  }
  if ((local_30 & 1) == 0) {
    *(ulonglong *)(param_1 + 8) = CONCAT71(uStack_27,local_28);
    *(undefined8 *)(param_1 + 0x10) = local_40;
    *(undefined8 *)(param_1 + 0x18) = uStack_38;
    *param_1 = 0;
    return param_1;
  }
  *(undefined8 *)(param_1 + 0x10) = 0;
  *param_1 = 0;
  return param_1;
}


