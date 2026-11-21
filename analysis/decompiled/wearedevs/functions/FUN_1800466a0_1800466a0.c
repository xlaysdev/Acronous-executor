/* FUN_1800466a0 @ 1800466a0 */

void FUN_1800466a0(longlong *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  longlong local_28;
  undefined1 local_20 [24];
  
  if (*param_1 == 0) {
    pcVar2 = "Custom";
    uVar1 = 6;
  }
  else {
    if ((int)*param_1 == 1) {
      local_28 = param_1[1];
      FUN_1801ef930(local_20,param_2,"Limit",5);
      uVar1 = FUN_1801ef320(local_20,&local_28,&DAT_180208580);
      FUN_1801ef450(uVar1);
      return;
    }
    pcVar2 = "None";
    uVar1 = 4;
  }
  FUN_1801f0810(param_2,pcVar2,uVar1);
  return;
}


