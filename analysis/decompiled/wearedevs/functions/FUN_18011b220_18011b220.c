/* FUN_18011b220 @ 18011b220 */

void FUN_18011b220(undefined8 param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  undefined **ppuVar3;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  char cStack_5e;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_1a;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_48 = 0;
  uStack_40 = 0;
  local_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0x18;
  uStack_4c = 0;
  FUN_180129000(&local_90,param_1,&local_58);
  if (cStack_5e == '\x03') {
    ppuVar3 = &PTR_s_C__Users_burne__cargo_registry_s_180240db8;
LAB_18011b2eb:
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("size overflows MAX_SIZE",0x17,&local_1a,&DAT_180240ba8,ppuVar3);
  }
  local_38 = local_70;
  uStack_34 = uStack_6c;
  uStack_30 = uStack_68;
  uStack_2c = uStack_64;
  local_48 = CONCAT44(uStack_7c,local_80);
  uStack_40 = CONCAT44(uStack_74,uStack_78);
  local_58 = local_90;
  uStack_54 = uStack_8c;
  uStack_50 = uStack_88;
  uStack_4c = uStack_84;
  if (cStack_5e == '\x02') {
    uVar1 = *(ulonglong *)(CONCAT44(uStack_8c,local_90) + 0x28);
    if (uVar1 <= local_48) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_48,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180242dd8);
    }
  }
  else {
    local_19 = 1;
    FUN_1801b1d00(&local_90,param_2);
    local_19 = 0;
    lVar2 = FUN_18012bba0(&local_58,&local_90);
    if (lVar2 == 0) {
      ppuVar3 = &PTR_s_C__Users_burne__cargo_registry_s_180240dd0;
      goto LAB_18011b2eb;
    }
  }
  return;
}


