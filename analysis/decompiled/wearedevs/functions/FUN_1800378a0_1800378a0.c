/* FUN_1800378a0 @ 1800378a0 */

void FUN_1800378a0(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  ulonglong uVar1;
  char cVar2;
  ulonglong uVar3;
  longlong lVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  byte bVar7;
  ulonglong uVar8;
  bool bVar9;
  undefined8 local_30;
  undefined8 local_28;
  
  uVar3 = *(ulonglong *)(param_2 + 0x20);
  uVar6 = *(ulonglong *)(param_2 + 0x28);
  if (uVar6 < uVar3) {
    lVar4 = *(longlong *)(param_2 + 0x18);
    cVar2 = *(char *)(lVar4 + uVar6);
    uVar1 = uVar6 + 1;
    *(ulonglong *)(param_2 + 0x28) = uVar1;
    if (cVar2 == '0') {
      if ((uVar3 <= uVar1) || (9 < (byte)(*(char *)(lVar4 + uVar1) - 0x30U))) {
        uVar8 = 0;
        goto LAB_1800379b3;
      }
      local_30 = 0xd;
      uVar5 = FUN_1801f6b20(param_2,&local_30);
      goto LAB_1800379db;
    }
    if ((byte)(cVar2 - 0x31U) < 9) {
      uVar8 = (ulonglong)(byte)(cVar2 - 0x30);
      if (uVar1 < uVar3) {
        uVar6 = uVar6 + 2;
        do {
          bVar7 = *(char *)(lVar4 + -1 + uVar6) - 0x30;
          if (9 < bVar7) break;
          if ((0x1999999999999998 < uVar8) && ((uVar8 != 0x1999999999999999 || (5 < bVar7)))) {
            FUN_1801ff890(&local_30);
            if ((int)local_30 == 1) {
              param_1[1] = local_28;
              uVar5 = 3;
            }
            else {
              param_1[1] = local_28;
              uVar5 = 0;
            }
            *param_1 = uVar5;
            return;
          }
          *(ulonglong *)(param_2 + 0x28) = uVar6;
          uVar8 = (ulonglong)bVar7 + uVar8 * 10;
          bVar9 = uVar6 != uVar3;
          uVar6 = uVar6 + 1;
        } while (bVar9);
      }
LAB_1800379b3:
      FUN_180037560(param_1,param_2,param_3,uVar8);
      return;
    }
    local_30 = 0xd;
  }
  else {
    local_30 = 5;
  }
  uVar5 = FUN_1801f6b90(param_2,&local_30);
LAB_1800379db:
  param_1[1] = uVar5;
  *param_1 = 3;
  return;
}


