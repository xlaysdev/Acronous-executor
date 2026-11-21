/* FUN_180136820 @ 180136820 */

undefined8 FUN_180136820(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  byte extraout_AL;
  undefined8 uVar5;
  byte bVar6;
  undefined **local_68;
  code *local_60;
  char **local_58;
  undefined1 *local_50;
  char *local_48;
  undefined8 local_40;
  undefined *local_38;
  ulonglong local_30;
  
  bVar1 = *param_1;
  local_38 = (undefined *)CONCAT71(local_38._1_7_,bVar1);
  local_60 = FUN_1801ee990;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  local_68 = &local_38;
  bVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e321,&local_68);
  local_48 = "END_HEADE";
  local_40 = 0xb;
  bVar6 = (bVar1 & 4) == 0 | bVar4;
  if (bVar6 == 0) {
    local_38 = &DAT_18024e319;
    local_30 = 2;
    local_60 = (code *)&LAB_1800a5660;
    local_58 = &local_48;
    local_50 = &LAB_1800a5660;
    local_68 = &local_38;
    FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_68);
    bVar4 = extraout_AL;
  }
  else {
    bVar4 = bVar4 | (bVar1 & 4) >> 2;
  }
  local_48 = "PADDED";
  local_40 = 6;
  if ((bVar1 & 8) != 0) {
    if (bVar4 != 0) {
      return 1;
    }
    local_38 = &DAT_18024e31b;
    if (bVar6 != 0) {
      local_38 = &DAT_18024e319;
    }
    local_30 = (ulonglong)bVar6 ^ 3;
    local_60 = (code *)&LAB_1800a5660;
    local_58 = &local_48;
    local_50 = &LAB_1800a5660;
    local_68 = &local_38;
    bVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_68);
  }
  uVar5 = 1;
  if (bVar4 == 0) {
    uVar5 = (**(code **)(lVar3 + 0x18))(uVar2,&DAT_18024e318,1);
  }
  return uVar5;
}


