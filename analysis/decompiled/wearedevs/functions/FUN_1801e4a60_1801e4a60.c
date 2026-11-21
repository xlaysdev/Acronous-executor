/* FUN_1801e4a60 @ 1801e4a60 */

void FUN_1801e4a60(longlong *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  uint uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined1 local_68 [16];
  undefined8 local_58;
  uint uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801ef980(local_68,param_2,"File",4);
  lVar1 = *param_1;
  local_58 = lVar1;
  FUN_1801ef590(local_68,"handle",6,&local_58,&DAT_180291108);
  FUN_1801d9ad0(&local_88,lVar1);
  if (SBORROW8(0,CONCAT44(uStack_84,local_88))) {
    lVar1 = CONCAT44(uStack_7c,uStack_80);
    if ((uStack_80 & 3) != 1) goto LAB_1801e4b87;
    local_38 = lVar1 + -1;
    local_30 = *(undefined8 *)(lVar1 + -1);
    local_28 = *(undefined8 **)(lVar1 + 7);
    if ((code *)*local_28 != (code *)0x0) {
      (*(code *)*local_28)(local_30);
    }
    if (local_28[1] != 0) {
      thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
    }
    uVar3 = 8;
    lVar1 = local_38;
    lVar2 = 0x18;
  }
  else {
    local_48 = local_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    uStack_3c = uStack_6c;
    local_58 = CONCAT44(uStack_84,local_88);
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    FUN_1801ef590(local_68,"path",4,&local_58,&PTR_LAB_180290c08);
    if (local_58 == 0) goto LAB_1801e4b87;
    lVar1 = CONCAT44(uStack_4c,uStack_50);
    uVar3 = 1;
    lVar2 = local_58;
  }
  thunk_FUN_1801d3330(lVar1,lVar2,uVar3);
LAB_1801e4b87:
  FUN_1801ef720(local_68);
  return;
}


