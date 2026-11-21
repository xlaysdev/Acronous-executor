/* FUN_1801363a0 @ 1801363a0 */

char * FUN_1801363a0(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  char *pcVar7;
  byte bVar8;
  bool bVar9;
  char *local_60;
  undefined8 local_58;
  undefined **local_50;
  code *local_48;
  char **local_40;
  undefined1 *local_38;
  undefined *local_30;
  ulonglong local_28;
  
  bVar1 = *param_1;
  local_30 = (undefined *)CONCAT71(local_30._1_7_,bVar1);
  local_48 = FUN_1801ee990;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  local_50 = &local_30;
  bVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e321,&local_50);
  bVar5 = bVar1 & 4;
  local_60 = "END_HEADE";
  local_58 = 0xb;
  bVar9 = bVar5 != 0 && bVar4 == 0;
  if (bVar9) {
    local_30 = &DAT_18024e319;
    local_28 = 2;
    local_48 = (code *)&LAB_1800a5660;
    local_40 = &local_60;
    local_38 = &LAB_1800a5660;
    local_50 = &local_30;
    bVar8 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_50);
  }
  else {
    bVar8 = bVar4 | bVar5 >> 2;
  }
  bVar6 = bVar8 | bVar1;
  local_60 = "END_STREAM";
  local_58 = 10;
  if (((bVar1 & 1) != 0) && (bVar8 == 0)) {
    local_30 = &DAT_18024e319;
    if (bVar5 != 0 && bVar4 == 0) {
      local_30 = &DAT_18024e31b;
    }
    local_28 = (ulonglong)bVar9 | 2;
    local_48 = (code *)&LAB_1800a5660;
    local_40 = &local_60;
    local_38 = &LAB_1800a5660;
    local_50 = &local_30;
    bVar6 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_50);
    bVar9 = true;
  }
  local_60 = "PADDED";
  bVar4 = (bVar1 & 8) >> 3 | bVar6;
  local_58 = 6;
  if (((bVar1 & 8) != 0) && ((bVar6 & 1) == 0)) {
    local_30 = &DAT_18024e319;
    if (bVar9 != false) {
      local_30 = &DAT_18024e31b;
    }
    local_28 = (ulonglong)bVar9 | 2;
    local_48 = (code *)&LAB_1800a5660;
    local_40 = &local_60;
    local_38 = &LAB_1800a5660;
    local_50 = &local_30;
    bVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_50);
    bVar9 = true;
  }
  local_60 = "PRIORITY";
  local_58 = 8;
  if ((bVar1 & 0x20) == 0) {
    pcVar7 = "RS";
    bVar4 = bVar4 & 1;
  }
  else {
    if ((bVar4 & 1) != 0) {
      return "RS";
    }
    local_30 = &DAT_18024e319;
    if (bVar9 != false) {
      local_30 = &DAT_18024e31b;
    }
    local_28 = (ulonglong)bVar9 | 2;
    local_48 = (code *)&LAB_1800a5660;
    local_40 = &local_60;
    local_38 = &LAB_1800a5660;
    local_50 = &local_30;
    bVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_50);
    pcVar7 = (char *)0x1;
  }
  if (bVar4 == 0) {
    pcVar7 = (char *)(**(code **)(lVar3 + 0x18))(uVar2,&DAT_18024e318,1);
  }
  return pcVar7;
}


