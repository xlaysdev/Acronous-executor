/* FUN_180133130 @ 180133130 */

char * FUN_180133130(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  longlong lVar3;
  char cVar4;
  char *pcVar5;
  undefined *local_60;
  undefined8 local_58;
  undefined **local_50;
  code *local_48;
  char **local_40;
  undefined1 *local_38;
  char *local_30;
  undefined8 local_28;
  
  bVar1 = *param_1;
  local_60 = (undefined *)CONCAT71(local_60._1_7_,bVar1);
  local_48 = FUN_1801ee990;
  uVar2 = *param_2;
  lVar3 = param_2[1];
  local_50 = &local_60;
  cVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e321,&local_50);
  local_30 = "ACK";
  local_28 = 3;
  if ((bVar1 & 1) != 0) {
    if (cVar4 != '\0') {
      return "ble_size";
    }
    local_60 = &DAT_18024e319;
    local_58 = 2;
    local_48 = (code *)&LAB_1800a5660;
    local_40 = &local_30;
    local_38 = &LAB_1800a5660;
    local_50 = &local_60;
    cVar4 = FUN_1801ef150(uVar2,lVar3,&DAT_18024e31e,&local_50);
  }
  pcVar5 = (char *)0x1;
  if (cVar4 == '\0') {
    pcVar5 = (char *)(**(code **)(lVar3 + 0x18))(uVar2,&DAT_18024e318,1);
  }
  return pcVar5;
}


