/* FUN_180159c70 @ 180159c70 */

void FUN_180159c70(longlong param_1,int param_2,longlong *param_3)

{
  int iVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  int local_7c;
  undefined **local_78;
  undefined *local_70;
  undefined *local_68;
  int **local_60;
  int *local_58;
  code *local_50;
  longlong local_48;
  code *local_40;
  undefined8 local_38;
  undefined ***local_30;
  undefined8 local_28;
  undefined *local_20;
  
  local_7c = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar5 = (uint)DAT_1802fd328, uVar5 - 1 < 2 ||
       ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fd318), (char)uVar5 != '\0')))) &&
      (cVar3 = FUN_1801601d0(PTR_DAT_1802fd318,uVar5), cVar3 != '\0')))) {
    local_20 = PTR_DAT_1802fd318 + 0x30;
    local_48 = param_1 + 0x90;
    local_58 = &local_7c;
    local_50 = FUN_1801ee6c0;
    local_40 = FUN_1801ee6c0;
    local_68 = &DAT_18025ac78;
    local_60 = &local_58;
    local_78 = &local_68;
    local_70 = &DAT_180258dd0;
    local_38 = 1;
    local_30 = &local_78;
    local_28 = 1;
    FUN_180160ae0(PTR_DAT_1802fd318,&local_38);
    param_2 = local_7c;
  }
  *(int *)(param_1 + 0x90) = *(int *)(param_1 + 0x90) - param_2;
  iVar4 = *(int *)(param_1 + 0x4c);
  if (!SCARRY4(param_2,iVar4)) {
    *(int *)(param_1 + 0x4c) = param_2 + iVar4;
    iVar4 = param_2 + iVar4;
  }
  iVar1 = *(int *)(param_1 + 0x48);
  if ((iVar1 < iVar4) && (iVar1 / 2 <= iVar4 - iVar1)) {
    lVar2 = *param_3;
    *param_3 = 0;
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 8))(param_3[1]);
    }
  }
  return;
}


