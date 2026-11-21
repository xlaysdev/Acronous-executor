/* FUN_180159dd0 @ 180159dd0 */

undefined8 FUN_180159dd0(longlong param_1,uint param_2,longlong *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint local_88;
  undefined4 local_84;
  undefined **local_80;
  undefined *local_78;
  undefined *local_70;
  uint **local_68;
  undefined8 local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined *local_48;
  uint *local_40;
  code *local_38;
  undefined4 *local_30;
  undefined1 *local_28;
  longlong local_20;
  code *local_18;
  
  local_88 = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar5 = (uint)DAT_1802fd340, uVar5 - 1 < 2 ||
       ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fd330), (char)uVar5 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fd330,uVar5), cVar2 != '\0')))) {
    local_48 = PTR_DAT_1802fd330 + 0x30;
    local_84 = *(undefined4 *)(param_1 + 0x4c);
    local_20 = param_1 + 0x90;
    local_40 = &local_88;
    local_38 = FUN_1801ee6c0;
    local_30 = &local_84;
    local_28 = &LAB_1801338c0;
    local_18 = FUN_1801ee6c0;
    local_70 = &DAT_18025ada8;
    local_68 = &local_40;
    local_80 = &local_70;
    local_78 = &DAT_180258dd0;
    local_60 = 1;
    local_58 = &local_80;
    local_50 = 1;
    FUN_180160ae0(PTR_DAT_1802fd330,&local_60);
  }
  iVar4 = *(int *)(param_1 + 0x4c);
  uVar5 = *(int *)(param_1 + 0x90) + iVar4;
  uVar3 = 1;
  if (!SCARRY4(*(int *)(param_1 + 0x90),iVar4)) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("negative Window",0x1f,&DAT_1802493a0);
    }
    iVar6 = local_88 - uVar5;
    if (local_88 < uVar5 || iVar6 == 0) {
      iVar6 = -(uVar5 - local_88);
      if (SBORROW4(iVar4,uVar5 - local_88)) {
        return 1;
      }
    }
    else if (SCARRY4(iVar4,iVar6)) {
      return 1;
    }
    iVar4 = iVar4 + iVar6;
    *(int *)(param_1 + 0x4c) = iVar4;
    iVar6 = *(int *)(param_1 + 0x48);
    uVar3 = 0;
    if ((iVar6 < iVar4) && (iVar6 / 2 <= iVar4 - iVar6)) {
      lVar1 = *param_3;
      *param_3 = 0;
      if (lVar1 != 0) {
        (**(code **)(lVar1 + 8))(param_3[1]);
        uVar3 = 0;
      }
    }
  }
  return uVar3;
}


