/* FUN_1801eaa68 @ 1801eaa68 */

void FUN_1801eaa68(longlong param_1,longlong param_2,undefined8 param_3)

{
  undefined1 local_48 [16];
  longlong local_38;
  
  FUN_1801ef8f0(local_48,param_3);
  if (param_2 != 0) {
    do {
      local_38 = param_1;
      FUN_1801ef790(local_48,&local_38,&DAT_1802925e8);
      param_2 = param_2 + -1;
      param_1 = param_1 + 1;
    } while (param_2 != 0);
  }
  FUN_1801ef8b0(local_48);
  return;
}


