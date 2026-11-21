/* FUN_180036130 @ 180036130 */

longlong FUN_180036130(undefined8 param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  undefined *puVar3;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  longlong local_30;
  undefined1 *local_28;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  FUN_1801ed660(&local_50,param_1,param_2);
  local_30 = CONCAT44(uStack_4c,local_50);
  if (!SBORROW8(0,local_30)) {
    if (local_30 == 0) {
      return 0;
    }
    local_28 = (undefined1 *)CONCAT44(uStack_44,uStack_48);
    goto LAB_18003626a;
  }
  local_28 = (undefined1 *)CONCAT44(uStack_44,uStack_48);
  local_30 = CONCAT44(uStack_3c,local_40);
  if (DAT_1802fb000 != 2) {
    FUN_1801f6970(&DAT_1802fb000);
  }
  if (SBORROW8(0,DAT_1802fb008)) {
    puVar3 = &DAT_1802fb010;
LAB_1800361ca:
    FUN_1800293e0(&local_50,puVar3,"Executefailed to write whole buffer",7);
    if (CONCAT44(uStack_4c,local_50) != -0x7fffffffffffffef) {
      local_78 = local_50;
      uStack_74 = uStack_4c;
      uStack_70 = uStack_48;
      uStack_6c = uStack_44;
      local_68 = local_40;
      uStack_64 = uStack_3c;
      uStack_60 = uStack_38;
      uStack_5c = uStack_34;
      if (CONCAT44(uStack_4c,local_50) != -0x7fffffffffffffef) {
        lVar2 = FUN_180036700(&local_78);
        goto LAB_180036254;
      }
    }
    lVar1 = (*(code *)CONCAT44(uStack_44,uStack_48))(local_28,0,0);
    *local_28 = 0;
    if (local_30 == 0) {
      return lVar1;
    }
  }
  else {
    FUN_1801ed500(&local_50,&DAT_1802fb008);
    lVar1 = CONCAT44(uStack_4c,local_50);
    lVar2 = -lVar1;
    if (SBORROW8(0,lVar1)) {
      puVar3 = (undefined *)CONCAT44(uStack_44,uStack_48);
      goto LAB_1800361ca;
    }
    if (lVar1 != 0) {
      lVar2 = thunk_FUN_1801d3330(CONCAT44(uStack_44,uStack_48),lVar1,1);
    }
LAB_180036254:
    *local_28 = 0;
    if (local_30 == 0) {
      return lVar2;
    }
  }
LAB_18003626a:
  lVar1 = thunk_FUN_1801d3330(local_28,local_30,1);
  return lVar1;
}


