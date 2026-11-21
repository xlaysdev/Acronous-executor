/* FUN_1801f0450 @ 1801f0450 */

ulonglong FUN_1801f0450(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  longlong lVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *local_40;
  byte local_38;
  byte local_37;
  
  local_38 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_37 = 0;
  local_40 = param_1;
  FUN_1801ef590(&local_40,param_4,param_5,param_6,param_7);
  if (((~local_37 | local_38) & 1) == 0) {
    if ((*(byte *)((longlong)local_40 + 0x12) & 0x80) == 0) {
      uVar3 = *local_40;
      lVar2 = local_40[1];
      puVar4 = &DAT_1802936be;
      uVar5 = 2;
    }
    else {
      uVar3 = *local_40;
      lVar2 = local_40[1];
      puVar4 = &DAT_1802936bd;
      uVar5 = 1;
    }
    uVar1 = (**(code **)(lVar2 + 0x18))(uVar3,puVar4,uVar5);
  }
  else {
    uVar1 = (ulonglong)(local_37 | local_38);
  }
  return uVar1 & 0xffffffffffffff01;
}


