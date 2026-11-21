/* FUN_180035e50 @ 180035e50 */

undefined8 FUN_180035e50(void)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (DAT_1802fb000 != 2) {
    FUN_1801f6970(&DAT_1802fb000);
  }
  if (SBORROW8(0,DAT_1802fb008)) {
    puVar3 = &DAT_1802fb010;
  }
  else {
    FUN_1801ed500(&local_48,&DAT_1802fb008);
    lVar1 = CONCAT44(uStack_44,local_48);
    if (!SBORROW8(0,lVar1)) {
      if (lVar1 != 0) {
        thunk_FUN_1801d3330(CONCAT44(uStack_3c,uStack_40),lVar1,1);
      }
      return 0;
    }
    puVar3 = (undefined *)CONCAT44(uStack_3c,uStack_40);
  }
  FUN_1800293e0(&local_48,puVar3,&DAT_180206980,10);
  if (CONCAT44(uStack_44,local_48) == -0x7fffffffffffffef) {
                    /* WARNING: Could not recover jumptable at 0x000180035ee2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)CONCAT44(uStack_3c,uStack_40))();
    return uVar2;
  }
  local_28 = local_48;
  uStack_24 = uStack_44;
  uStack_20 = uStack_40;
  uStack_1c = uStack_3c;
  local_18 = local_38;
  uStack_14 = uStack_34;
  uStack_10 = uStack_30;
  uStack_c = uStack_2c;
  if (CONCAT44(uStack_44,local_48) == -0x7fffffffffffffef) {
                    /* WARNING: Could not recover jumptable at 0x000180035f09. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*(code *)CONCAT44(uStack_3c,uStack_40))();
    return uVar2;
  }
  FUN_180036700(&local_28);
  return 0;
}


