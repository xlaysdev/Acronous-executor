/* FUN_18007d0a0 @ 18007d0a0 */

longlong FUN_18007d0a0(undefined8 param_1,longlong param_2)

{
  short local_38 [16];
  
  if (param_2 != 0) {
    do {
      FUN_18009e970(local_38,param_1);
      if (local_38[0] == 2) {
        return param_2;
      }
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return 0;
}


