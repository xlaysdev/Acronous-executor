/* FUN_180096d50 @ 180096d50 */

uint FUN_180096d50(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  byte bVar1;
  longlong lVar2;
  undefined *puVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined4 local_94;
  undefined **local_90;
  undefined *local_88;
  undefined *local_80;
  undefined4 **local_78;
  undefined4 *local_70;
  code *local_68;
  undefined8 local_60;
  undefined ***local_58;
  undefined8 local_50;
  longlong local_48;
  
  uVar5 = FUN_1801301b0(param_1 + 8,param_2,param_4);
  puVar3 = PTR_PTR_1802fc5e0;
  if ((uVar5 & 1) == 0) {
    uVar5 = 0;
  }
  else {
    local_94 = (undefined4)param_2;
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      bVar1 = PTR_PTR_1802fc5e0[0x10];
      uVar6 = (uint)bVar1;
      if (((bVar1 - 1 < 2) ||
          ((bVar1 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fc5e0), (char)uVar6 != '\0')))) &&
         (cVar4 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6), cVar4 != '\0')) {
        lVar2 = *(longlong *)puVar3;
        local_48 = lVar2 + 0x30;
        local_70 = &local_94;
        local_68 = FUN_1801310a0;
        local_80 = &DAT_18020f47d;
        local_78 = &local_70;
        local_90 = &local_80;
        local_88 = &DAT_18020f2b0;
        local_60 = 1;
        local_58 = &local_90;
        local_50 = 1;
        FUN_180160ae0(lVar2,&local_60);
      }
    }
    FUN_180095f80(param_1,3,1,param_3,param_4,param_5,param_6);
  }
  return uVar5;
}


