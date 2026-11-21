/* FUN_180159f90 @ 180159f90 */

undefined8 *
FUN_180159f90(undefined8 *param_1,longlong param_2,uint param_3,undefined8 param_4,longlong param_5)

{
  char cVar1;
  uint uVar2;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined ***pppuStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined **local_68;
  undefined *local_60;
  undefined *local_58;
  uint **local_50;
  uint *local_48;
  code *local_40;
  uint *local_38;
  code *local_30;
  
  local_98 = param_3;
  if (*(int *)(param_2 + 0x30) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_18025b020,0x28,&PTR_s_C__Users_burne__cargo_registry_s_18025b048);
  }
  local_48 = (uint *)CONCAT71(local_48._1_7_,*(undefined1 *)(param_5 + 0x68));
  FUN_18014a310(&local_90,&local_48);
  if ((char)local_90 == '\x03') {
    if (*(int *)(param_2 + 0x28) != 1) {
      local_94 = *(uint *)(param_2 + 0x2c);
      if (local_94 <= param_3) {
        *(uint *)(param_2 + 0x28) = param_3 + 2 >> 0x1f;
        *(uint *)(param_2 + 0x2c) = param_3 + 2;
        if (*(ulonglong *)(param_5 + 0x28) < *(ulonglong *)(param_5 + 0x20)) {
          *(undefined4 *)((longlong)param_1 + 4) = 1;
          *(uint *)(param_1 + 1) = param_3;
        }
        else {
          *(undefined4 *)(param_2 + 0x30) = 1;
          *(uint *)(param_2 + 0x34) = param_3;
          *(undefined4 *)((longlong)param_1 + 4) = 0;
        }
        *(undefined1 *)param_1 = 3;
        return param_1;
      }
      if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
         (((uVar2 = (uint)DAT_1802fd358, uVar2 - 1 < 2 ||
           ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fd348), (char)uVar2 != '\0')))) &&
          (cVar1 = FUN_1801601d0(PTR_DAT_1802fd348,uVar2), cVar1 != '\0')))) {
        puStack_78 = PTR_DAT_1802fd348 + 0x30;
        local_48 = &local_98;
        local_40 = FUN_18015bcd0;
        local_38 = &local_94;
        local_30 = FUN_18015bcd0;
        local_58 = &DAT_18025b060;
        local_68 = &local_58;
        local_60 = &DAT_180258dd0;
        local_90 = 1;
        pppuStack_88 = &local_68;
        local_80 = 1;
        local_50 = &local_48;
        FUN_180160ae0(PTR_DAT_1802fd348,&local_90);
      }
    }
    *(undefined2 *)param_1 = 0x101;
    *(undefined4 *)((longlong)param_1 + 4) = 1;
    param_1[1] = &PTR_LAB_180258e00;
    param_1[2] = 1;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  else {
    param_1[4] = local_70;
    param_1[2] = local_80;
    param_1[3] = puStack_78;
    *param_1 = local_90;
    param_1[1] = pppuStack_88;
  }
  return param_1;
}


