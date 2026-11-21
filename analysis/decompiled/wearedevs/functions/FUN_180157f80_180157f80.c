/* FUN_180157f80 @ 180157f80 */

undefined8 FUN_180157f80(longlong param_1,uint param_2)

{
  char cVar1;
  undefined8 uVar2;
  uint local_54;
  undefined **local_50;
  undefined *local_48;
  undefined *local_40;
  uint **local_38;
  uint *local_30;
  code *local_28;
  undefined8 local_20;
  undefined8 **local_18;
  undefined8 local_10;
  undefined *local_8;
  
  uVar2 = 0;
  if (((*(char *)(param_1 + 0x28) == '\0') && (*(uint *)(param_1 + 0x2c) <= param_2)) &&
     (uVar2 = 1, *(ulonglong *)PTR_DAT_1802fd448 < 2)) {
    local_54 = param_2;
    if (DAT_1802fd1d8 - 1 < 2) {
LAB_180157fce:
      cVar1 = FUN_1801601d0(PTR_DAT_1802fd1c8);
      if (cVar1 != '\0') {
        local_8 = PTR_DAT_1802fd1c8 + 0x30;
        local_30 = &local_54;
        local_28 = FUN_18015bcd0;
        local_40 = &DAT_180259c60;
        local_38 = &local_30;
        local_50 = &local_40;
        local_48 = &DAT_180258dd0;
        local_20 = 1;
        local_18 = &local_50;
        local_10 = 1;
        FUN_180160ae0(PTR_DAT_1802fd1c8,&local_20);
      }
      return 1;
    }
    if (DAT_1802fd1d8 != 0) {
      cVar1 = FUN_1801faaf0(&PTR_DAT_1802fd1c8);
      uVar2 = 1;
      if (cVar1 != '\0') goto LAB_180157fce;
    }
  }
  return uVar2;
}


