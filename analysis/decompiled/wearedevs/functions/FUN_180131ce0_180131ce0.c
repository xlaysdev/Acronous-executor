/* FUN_180131ce0 @ 180131ce0 */

bool FUN_180131ce0(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  bool bVar3;
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
  
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    uVar2 = (uint)DAT_1802fbeb0;
    local_84 = param_2;
    if (((uVar2 - 1 < 2) ||
        ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fbea0), (char)uVar2 != '\0')))) &&
       (cVar1 = FUN_1801601d0(PTR_DAT_1802fbea0,uVar2), cVar1 != '\0')) {
      local_48 = PTR_DAT_1802fbea0 + 0x30;
      local_20 = param_1 + 1;
      local_40 = &local_84;
      local_38 = FUN_1801ee6c0;
      local_28 = &LAB_1801338c0;
      local_18 = &LAB_1801338c0;
      local_70 = &DAT_180249060;
      local_68 = &local_40;
      local_80 = &local_70;
      local_78 = &DAT_180247960;
      local_60 = 1;
      local_58 = &local_80;
      local_50 = 1;
      local_30 = param_1;
      FUN_180160ae0(PTR_DAT_1802fbea0,&local_60);
      param_2 = local_84;
    }
  }
  if (SBORROW4(*param_1,param_2)) {
    bVar3 = true;
  }
  else {
    *param_1 = *param_1 - param_2;
    bVar3 = SBORROW4(param_1[1],param_2);
    if (!bVar3) {
      param_1[1] = param_1[1] - param_2;
    }
  }
  return bVar3;
}


