/* FUN_180131b80 @ 180131b80 */

undefined8 FUN_180131b80(int *param_1,int param_2)

{
  char cVar1;
  uint uVar2;
  undefined8 uVar3;
  int iVar4;
  int local_88;
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
  code *local_18;
  
  iVar4 = param_2 + *param_1;
  uVar3 = 1;
  if (!SCARRY4(param_2,*param_1)) {
    if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
       (((uVar2 = (uint)DAT_1802fbe98, local_88 = iVar4, local_84 = param_2, uVar2 - 1 < 2 ||
         ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_s__1802fbe88), (char)uVar2 != '\0')))) &&
        (cVar1 = FUN_1801601d0(PTR_s__1802fbe88,uVar2), cVar1 != '\0')))) {
      local_48 = PTR_s__1802fbe88 + 0x30;
      local_40 = &local_84;
      local_38 = FUN_1801ee6c0;
      local_28 = &LAB_1801338c0;
      local_20 = &local_88;
      local_18 = FUN_1801ee530;
      local_70 = &DAT_180248f48;
      local_68 = &local_40;
      local_80 = &local_70;
      local_78 = &DAT_180247960;
      local_60 = 1;
      local_58 = &local_80;
      local_50 = 1;
      local_30 = param_1;
      FUN_180160ae0(PTR_s__1802fbe88,&local_60);
      iVar4 = local_88;
    }
    *param_1 = iVar4;
    uVar3 = 0;
  }
  return uVar3;
}


