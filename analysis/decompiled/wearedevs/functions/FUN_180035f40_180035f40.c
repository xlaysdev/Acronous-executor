/* FUN_180035f40 @ 180035f40 */

longlong * FUN_180035f40(longlong *param_1)

{
  code *pcVar1;
  longlong *local_78;
  code *local_70;
  longlong local_68;
  code *pcStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  code *local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  if (DAT_1802fb000 != 2) {
    FUN_1801f6970(&DAT_1802fb000);
  }
  if (SBORROW8(0,DAT_1802fb008)) {
    pcVar1 = (code *)&DAT_1802fb010;
  }
  else {
    FUN_1801ed500(&local_48,&DAT_1802fb008);
    pcVar1 = local_40;
    if (!SBORROW8(0,local_48)) {
      *param_1 = local_48;
      param_1[1] = (longlong)local_40;
      param_1[2] = CONCAT44(uStack_34,local_38);
      return param_1;
    }
  }
  FUN_1800293e0(&local_68,pcVar1,&DAT_18020698a,0xb);
  if (local_68 == -0x7fffffffffffffef) {
    (*pcStack_60)(0,0);
    FUN_1800293e0(&local_68,pcVar1,&DAT_180206995,6);
    if (local_68 == -0x7fffffffffffffef) {
      (*pcStack_60)();
      *param_1 = -0x8000000000000000;
      return param_1;
    }
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    local_48 = local_68;
    local_40 = pcStack_60;
    local_78 = &local_48;
    local_70 = FUN_1801b4540;
    FUN_1801ec780(&local_68,&DAT_18020699b,&local_78);
  }
  else {
    local_38 = local_58;
    uStack_34 = uStack_54;
    uStack_30 = uStack_50;
    uStack_2c = uStack_4c;
    local_48 = local_68;
    local_40 = pcStack_60;
    local_78 = &local_48;
    local_70 = FUN_1801b4540;
    FUN_1801ec780(&local_68,&DAT_1802069be,&local_78);
  }
  FUN_180036700(&local_48);
  *param_1 = local_68;
  param_1[1] = (longlong)pcStack_60;
  param_1[2] = CONCAT44(uStack_54,local_58);
  return param_1;
}


