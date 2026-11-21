/* FUN_18009b8a0 @ 18009b8a0 */

undefined8 FUN_18009b8a0(undefined8 *param_1,longlong *param_2)

{
  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 *local_48;
  undefined8 local_40;
  code *local_38;
  undefined8 local_30;
  undefined ***local_28;
  undefined8 local_20;
  longlong local_18;
  
  cVar5 = FUN_18010cd90(param_2 + 5);
  puVar4 = PTR_PTR_1802fb598;
  if (cVar5 == '\0') {
    bVar3 = *(longlong *)(*param_2 + 0x10) == 1;
    if ((char)param_2[2] == '\x02') {
      bVar3 = *(longlong *)(*param_2 + 0x10) != 3;
    }
    if (bVar3) {
      lVar8 = param_2[7];
      uVar7 = FUN_1801df680(param_1[1],lVar8,(int)param_2[8]);
      puVar4 = PTR_PTR_1802fb5a0;
      uVar2 = *(ulonglong *)param_1[2];
      if (uVar7 == uVar2) {
        if ((uint)lVar8 <= (uint)((ulonglong *)param_1[2])[1]) {
          return 1;
        }
      }
      else if (uVar7 <= uVar2) {
        return 1;
      }
      if (*(longlong *)PTR_DAT_1802fd448 != 0) {
        return 0;
      }
      bVar1 = PTR_PTR_1802fb5a0[0x10];
      uVar6 = (uint)bVar1;
      if (1 < bVar1 - 1) {
        if (bVar1 == 0) {
          return 0;
        }
        uVar6 = FUN_1801faaf0(PTR_PTR_1802fb5a0);
        if ((char)uVar6 == '\0') {
          return 0;
        }
      }
      cVar5 = FUN_1801601d0(*(undefined8 *)puVar4,uVar6);
      if (cVar5 == '\0') {
        return 0;
      }
      lVar8 = *(longlong *)puVar4;
      local_40 = *param_1;
      local_50 = &DAT_18020f2d0;
      goto LAB_18009b96e;
    }
  }
  if (*(longlong *)PTR_DAT_1802fd448 != 0) {
    return 0;
  }
  bVar1 = PTR_PTR_1802fb598[0x10];
  uVar6 = (uint)bVar1;
  if (1 < bVar1 - 1) {
    if (bVar1 == 0) {
      return 0;
    }
    uVar6 = FUN_1801faaf0(PTR_PTR_1802fb598);
    if ((char)uVar6 == '\0') {
      return 0;
    }
  }
  cVar5 = FUN_1801601d0(*(undefined8 *)puVar4,uVar6);
  if (cVar5 == '\0') {
    return 0;
  }
  lVar8 = *(longlong *)puVar4;
  local_40 = *param_1;
  local_50 = &DAT_18020f288;
LAB_18009b96e:
  local_38 = FUN_180041870;
  local_18 = lVar8 + 0x30;
  local_48 = &local_40;
  local_60 = &local_50;
  local_58 = &DAT_18020f2b0;
  local_30 = 1;
  local_28 = &local_60;
  local_20 = 1;
  FUN_180160ae0(lVar8,&local_30);
  return 0;
}


