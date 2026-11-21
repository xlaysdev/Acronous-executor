/* FUN_180131e40 @ 180131e40 */

bool FUN_180131e40(int *param_1,int param_2)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  int local_84;
  undefined **local_80;
  undefined *local_78;
  undefined *local_70;
  int **local_68;
  undefined8 local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined *local_48;
  int *local_40;
  code *local_38;
  int *local_30;
  undefined1 *local_28;
  int *local_20;
  undefined1 *local_18;
  
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar3 = (uint)DAT_1802fbec8, local_84 = param_2, uVar3 - 1 < 2 ||
       ((uVar3 != 0 && (uVar3 = FUN_1801faaf0(&PTR_DAT_1802fbeb8), (char)uVar3 != '\0')))) &&
      (cVar2 = FUN_1801601d0(PTR_DAT_1802fbeb8,uVar3), cVar2 != '\0')))) {
    local_48 = PTR_DAT_1802fbeb8 + 0x30;
    local_20 = param_1 + 1;
    local_40 = &local_84;
    local_38 = FUN_1801ee6c0;
    local_28 = &LAB_1801338c0;
    local_18 = &LAB_1801338c0;
    local_70 = &DAT_180249188;
    local_68 = &local_40;
    local_80 = &local_70;
    local_78 = &DAT_180247960;
    local_60 = 1;
    local_58 = &local_80;
    local_50 = 1;
    local_30 = param_1;
    FUN_180160ae0(PTR_DAT_1802fbeb8,&local_60);
    param_2 = local_84;
  }
  iVar1 = *param_1;
  if (!SBORROW4(iVar1,param_2)) {
    *param_1 = iVar1 - param_2;
  }
  return SBORROW4(iVar1,param_2);
}


