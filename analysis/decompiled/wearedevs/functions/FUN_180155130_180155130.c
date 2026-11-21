/* FUN_180155130 @ 180155130 */

void FUN_180155130(longlong param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  FUN_1801502b0(&local_58,param_1 + 0x50);
  if (CONCAT44(uStack_54,local_58) != 0) {
    do {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      FUN_1801531c0(param_4,&local_48);
      FUN_1801502b0(&local_58,param_1 + 0x50,param_3);
    } while (CONCAT44(uStack_54,local_58) != 0);
  }
  FUN_180150120(&local_58,param_1 + 0x78,param_3);
  if (CONCAT44(uStack_54,local_58) != 0) {
    do {
      local_48 = local_58;
      uStack_44 = uStack_54;
      uStack_40 = uStack_50;
      uStack_3c = uStack_4c;
      FUN_1801537a0(param_4,&local_48,1);
      FUN_180150120(&local_58,param_1 + 0x78,param_3);
    } while (CONCAT44(uStack_54,local_58) != 0);
  }
  if (param_2 != '\0') {
    FUN_18014fde0(&local_58,param_1 + 100,param_3);
    if (CONCAT44(uStack_54,local_58) != 0) {
      do {
        local_48 = local_58;
        uStack_44 = uStack_54;
        uStack_40 = uStack_50;
        uStack_3c = uStack_4c;
        FUN_1801537a0(param_4,&local_48,0);
        FUN_18014fde0(&local_58,param_1 + 100);
      } while (CONCAT44(uStack_54,local_58) != 0);
    }
  }
  return;
}


