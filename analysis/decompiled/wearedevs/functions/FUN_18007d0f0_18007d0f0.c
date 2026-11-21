/* FUN_18007d0f0 @ 18007d0f0 */

undefined2 * FUN_18007d0f0(undefined2 *param_1,undefined8 param_2,longlong param_3)

{
  short local_40 [16];
  
  if (param_3 != 0) {
    do {
      FUN_18009e970(local_40,param_2);
      if (local_40[0] == 2) {
        *param_1 = 2;
        return param_1;
      }
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  FUN_18009e970(param_1,param_2);
  return param_1;
}


