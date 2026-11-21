/* FUN_18007a9b0 @ 18007a9b0 */

void FUN_18007a9b0(byte param_1,longlong *param_2,undefined8 param_3,undefined8 param_4)

{
  if (param_1 < 2) {
    return;
  }
  (**(code **)(*param_2 + 0x20))
            (param_2[3],param_2[1],param_2[2],param_4,param_2,0xfffffffffffffffe);
  thunk_FUN_1801d3330(param_2,0x20,8);
  return;
}


