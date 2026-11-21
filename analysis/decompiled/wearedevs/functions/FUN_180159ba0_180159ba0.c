/* FUN_180159ba0 @ 180159ba0 */

void FUN_180159ba0(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined4 local_60;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (*(int *)(param_1 + 0x78) != 0) {
    uVar1 = param_2;
    local_68 = FUN_1801df8c0();
    local_60 = (undefined4)uVar1;
    local_58 = *(undefined8 *)(param_1 + 0x38);
    local_50 = *(undefined4 *)(param_1 + 0x40);
    FUN_180152330(&local_78,param_1 + 0x78,param_2,&local_68,&local_58);
    if (CONCAT44(uStack_74,local_78) != 0) {
      do {
        local_48 = local_78;
        uStack_44 = uStack_74;
        uStack_40 = uStack_70;
        uStack_3c = uStack_6c;
        FUN_1801537a0(param_3,&local_48,1);
        FUN_180152330(&local_78,param_1 + 0x78,param_2,&local_68,&local_58);
      } while (CONCAT44(uStack_74,local_78) != 0);
    }
  }
  return;
}


