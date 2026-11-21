/* FUN_180130e50 @ 180130e50 */

undefined8 * FUN_180130e50(undefined8 *param_1,longlong param_2)

{
  int iVar1;
  undefined8 uVar2;
  char cVar3;
  ulonglong uVar4;
  int iVar5;
  uint uVar6;
  undefined8 local_78;
  undefined8 local_70;
  undefined ***local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined **local_50;
  undefined *local_48;
  undefined *local_40;
  undefined8 **local_38;
  undefined8 *local_30;
  code *local_28;
  
  local_78 = 0;
  iVar1 = *(int *)(param_2 + 0x5c);
  iVar5 = iVar1;
  uVar4 = FUN_180131b80(&local_78);
  if ((uVar4 & 1) != 0) {
    local_70 = CONCAT44(local_70._4_4_,iVar5);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("invalid initial window size",0x1b,&local_70,&DAT_180246dd8,
                  &PTR_s_C__Users_burne__cargo_registry_s_180246248);
  }
  if (!SCARRY4(iVar1,local_78._4_4_)) {
    local_78 = CONCAT44(iVar1 + local_78._4_4_,(undefined4)local_78);
  }
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar6 = (uint)DAT_1802fb9e8, uVar6 - 1 < 2 ||
       ((uVar6 != 0 && (uVar6 = FUN_1801faaf0(&PTR_DAT_1802fb9d8), (char)uVar6 != '\0')))) &&
      (cVar3 = FUN_1801601d0(PTR_DAT_1802fb9d8,uVar6), cVar3 != '\0')))) {
    local_58 = PTR_DAT_1802fb9d8 + 0x30;
    local_28 = FUN_180131210;
    local_40 = &DAT_180246260;
    local_38 = &local_30;
    local_50 = &local_40;
    local_48 = &DAT_180245120;
    local_70 = 1;
    local_68 = &local_50;
    local_60 = 1;
    local_30 = &local_78;
    FUN_180160ae0(PTR_DAT_1802fb9d8,&local_70);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x38);
  *(undefined4 *)(param_1 + 2) = 0;
  *(undefined4 *)((longlong)param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  *param_1 = local_78;
  *(undefined4 *)(param_1 + 0xb) = 0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = 0;
  param_1[1] = uVar2;
  return param_1;
}


