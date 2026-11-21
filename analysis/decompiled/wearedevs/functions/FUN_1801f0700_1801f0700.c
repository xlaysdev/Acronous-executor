/* FUN_1801f0700 @ 1801f0700 */

ulonglong FUN_1801f0700(undefined8 *param_1,undefined8 param_2,undefined8 param_3,longlong param_4,
                       longlong param_5,longlong param_6,longlong param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined8 *local_48;
  byte local_40;
  byte local_3f;
  
  lVar3 = param_5;
  if (param_5 != param_7) {
                    /* WARNING: Subroutine does not return */
    FUN_180201c9f(0,&param_5,&param_7,0);
  }
  uVar2 = (**(code **)(param_1[1] + 0x18))(*param_1);
  lVar1 = param_6;
  local_40 = (byte)uVar2;
  local_3f = 0;
  if (lVar3 != 0) {
    lVar7 = 0;
    local_48 = param_1;
    do {
      FUN_1801ef590(&local_48,*(undefined8 *)(param_4 + lVar7),*(undefined8 *)(param_4 + 8 + lVar7),
                    lVar1 + lVar7,&DAT_1802936c8);
      lVar7 = lVar7 + 0x10;
    } while (lVar3 * 0x10 != lVar7);
    if (((~local_3f | local_40) & 1) == 0) {
      if ((*(byte *)((longlong)local_48 + 0x12) & 0x80) == 0) {
        uVar4 = *local_48;
        lVar3 = local_48[1];
        puVar5 = &DAT_1802936be;
        uVar6 = 2;
      }
      else {
        uVar4 = *local_48;
        lVar3 = local_48[1];
        puVar5 = &DAT_1802936bd;
        uVar6 = 1;
      }
      uVar2 = (**(code **)(lVar3 + 0x18))(uVar4,puVar5,uVar6);
    }
    else {
      uVar2 = (ulonglong)(local_3f | local_40);
    }
  }
  return uVar2 & 0xffffffffffffff01;
}


