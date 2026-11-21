/* FUN_1801f05f0 @ 1801f05f0 */

ulonglong FUN_1801f05f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                       ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                       undefined8 param_9,undefined8 param_10,undefined8 param_11,
                       undefined8 param_12,undefined8 param_13,undefined8 param_14,
                       undefined8 param_15)

{
  longlong lVar2;
  ulonglong uVar1;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *local_50;
  byte local_48;
  byte local_47;
  
  local_48 = (**(code **)(param_1[1] + 0x18))(*param_1);
  local_47 = 0;
  local_50 = param_1;
  FUN_1801ef590(&local_50,param_4,param_5,param_6,param_7);
  FUN_1801ef590(&local_50,param_8,param_9,param_10,param_11);
  FUN_1801ef590(&local_50,param_12,param_13,param_14,param_15);
  if (((~local_47 | local_48) & 1) == 0) {
    if ((*(byte *)((longlong)local_50 + 0x12) & 0x80) == 0) {
      uVar3 = *local_50;
      lVar2 = local_50[1];
      puVar4 = &DAT_1802936be;
      uVar5 = 2;
    }
    else {
      uVar3 = *local_50;
      lVar2 = local_50[1];
      puVar4 = &DAT_1802936bd;
      uVar5 = 1;
    }
    uVar1 = (**(code **)(lVar2 + 0x18))(uVar3,puVar4,uVar5);
  }
  else {
    uVar1 = (ulonglong)(local_47 | local_48);
  }
  return uVar1 & 0xffffffffffffff01;
}


