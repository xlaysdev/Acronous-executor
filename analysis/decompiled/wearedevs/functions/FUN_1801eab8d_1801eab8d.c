/* FUN_1801eab8d @ 1801eab8d */

longlong FUN_1801eab8d(longlong param_1,longlong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 local_a8 [104];
  longlong local_40;
  longlong local_38;
  
  FUN_1801f2540(local_a8,param_1,param_2,param_3,param_4);
  do {
    FUN_1801ebfed(&local_40,local_a8);
  } while (local_40 == 0);
  if ((int)local_40 != 1) {
    local_38 = param_2;
  }
  return param_1 + local_38;
}


