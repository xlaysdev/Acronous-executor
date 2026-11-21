/* FUN_180159a30 @ 180159a30 */

void FUN_180159a30(undefined2 *param_1,longlong param_2,uint param_3)

{
  char cVar1;
  ulonglong uVar2;
  uint uVar3;
  uint uVar4;
  uint local_88;
  uint local_84;
  undefined **local_80;
  undefined *local_78;
  undefined *local_70;
  uint **local_68;
  uint *local_60;
  undefined1 *local_58;
  uint *local_50;
  undefined1 *local_48;
  undefined8 local_40;
  undefined ***local_38;
  undefined8 local_30;
  undefined *local_28;
  
  uVar4 = 0;
  if (0 < (int)*(uint *)(param_2 + 0x48)) {
    uVar4 = *(uint *)(param_2 + 0x48);
  }
  local_88 = param_3;
  if (uVar4 < param_3) {
    if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
       (((uVar3 = (uint)DAT_1802fd2f8, uVar3 - 1 < 2 ||
         ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fd2e8), (char)uVar3 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_DAT_1802fd2e8,uVar3), cVar1 != '\0')))) {
      local_28 = PTR_DAT_1802fd2e8 + 0x30;
      local_60 = &local_84;
      local_58 = &LAB_180096fe0;
      local_50 = &local_88;
      local_48 = &LAB_180096fe0;
      local_70 = &DAT_18025aa58;
      local_68 = &local_60;
      local_80 = &local_70;
      local_78 = &DAT_180258dd0;
      local_40 = 1;
      local_38 = &local_80;
      local_30 = 1;
      local_84 = uVar4;
      FUN_180160ae0(PTR_DAT_1802fd2e8,&local_40);
    }
    *param_1 = 0x101;
    *(undefined4 *)(param_1 + 2) = 3;
  }
  else {
    uVar4 = param_3;
    uVar2 = FUN_180131f80(param_2 + 0x48);
    if ((uVar2 & 1) == 0) {
      *(int *)(param_2 + 0x90) = *(int *)(param_2 + 0x90) + param_3;
      *(undefined1 *)param_1 = 3;
      return;
    }
    *param_1 = 0x101;
    *(uint *)(param_1 + 2) = uVar4;
  }
  *(undefined ***)(param_1 + 4) = &PTR_LAB_180258e00;
  *(undefined8 *)(param_1 + 8) = 1;
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  return;
}


