/* FUN_1800e5390 @ 1800e5390 */

longlong * FUN_1800e5390(longlong *param_1,undefined8 *param_2)

{
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  
  (**(code **)(param_2[1] + 0x18))(&local_68,*param_2);
  if (local_68 == 4) {
    *param_1 = 4;
    param_1[1] = lStack_60;
    param_1[2] = local_58;
    return param_1;
  }
  if ((int)local_68 == 5) {
    *param_1 = 5;
    return param_1;
  }
  if ((int)local_68 == 6) {
    *param_1 = 6;
    return param_1;
  }
  param_1[10] = local_18;
  param_1[0xb] = lStack_10;
  param_1[8] = local_28;
  param_1[9] = lStack_20;
  param_1[6] = local_38;
  param_1[7] = lStack_30;
  param_1[4] = local_48;
  param_1[5] = lStack_40;
  param_1[2] = local_58;
  param_1[3] = lStack_50;
  *param_1 = local_68;
  param_1[1] = lStack_60;
  return param_1;
}


