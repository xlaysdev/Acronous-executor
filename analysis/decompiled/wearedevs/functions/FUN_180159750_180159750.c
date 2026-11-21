/* FUN_180159750 @ 180159750 */

void FUN_180159750(longlong param_1,longlong *param_2,longlong param_3)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  undefined *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined8 local_68;
  code *local_60;
  longlong local_58;
  undefined ***local_50;
  undefined8 local_48;
  undefined *local_40;
  undefined **local_38;
  undefined *local_30;
  undefined *local_28;
  undefined8 *local_20;
  
  uVar5 = (ulonglong)*(uint *)(param_2 + 1);
  local_68 = param_2[1];
  if (uVar5 < *(ulonglong *)(*param_2 + 0x10)) {
    lVar3 = *(longlong *)(*param_2 + 8);
    lVar6 = uVar5 * 0x148;
    if ((*(int *)(lVar3 + lVar6) != 2) &&
       (lVar3 = lVar3 + lVar6, *(int *)(lVar3 + 300) == *(int *)((longlong)param_2 + 0xc))) {
      uVar2 = *(uint *)(lVar3 + 0x40);
      if (uVar2 < 4) {
        if (uVar2 - 1 < 2) {
          if ((*(byte *)(lVar3 + 0x48) < 2) && (1 < *(byte *)(lVar3 + 0x49))) {
            return;
          }
        }
        else if (uVar2 == 0) {
          return;
        }
        if (*(int *)(lVar3 + 0x78) == 1000000000) {
          if (*(ulonglong *)(param_3 + 0x38) < *(ulonglong *)(param_3 + 0x30)) {
            *(ulonglong *)(param_3 + 0x38) = *(ulonglong *)(param_3 + 0x38) + 1;
            if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
                ((uVar2 = (uint)DAT_1802fd2e0, uVar2 - 1 < 2 ||
                 ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fd2d0), (char)uVar2 != '\0'))))
                )) && (cVar1 = FUN_1801601d0(PTR_DAT_1802fd2d0,uVar2), cVar1 != '\0')) {
              puVar4 = PTR_DAT_1802fd2d0 + 0x30;
              local_68 = FUN_180152e90(param_2);
              local_68 = local_68 + 300;
              local_60 = FUN_18015bcd0;
              local_28 = &DAT_18025a949;
              local_20 = &local_68;
              local_38 = &local_28;
              local_30 = &DAT_180258dd0;
              local_58 = 1;
              local_50 = &local_38;
              local_48 = 1;
              local_40 = puVar4;
              FUN_180160ae0(PTR_DAT_1802fd2d0,&local_58);
            }
            FUN_180151a70(param_1 + 0x78,param_2);
          }
          else if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
                  (((uVar2 = (uint)DAT_1802fd2c8, uVar2 - 1 < 2 ||
                    ((uVar2 != 0 && (uVar2 = FUN_1801faaf0(&PTR_DAT_1802fd2b8), (char)uVar2 != '\0')
                     ))) && (cVar1 = FUN_1801601d0(PTR_DAT_1802fd2b8,uVar2), cVar1 != '\0')))) {
            puVar4 = PTR_DAT_1802fd2b8 + 0x30;
            local_68 = FUN_180152e90(param_2);
            local_68 = local_68 + 300;
            local_60 = FUN_18015bcd0;
            local_28 = &DAT_18025a900;
            local_20 = &local_68;
            local_38 = &local_28;
            local_30 = &DAT_180258dd0;
            local_58 = 1;
            local_50 = &local_38;
            local_48 = 1;
            local_40 = puVar4;
            FUN_180160ae0(PTR_DAT_1802fd2b8,&local_58);
          }
        }
      }
      return;
    }
  }
  local_58 = (longlong)&local_68 + 4;
  local_50 = (undefined ***)FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_58,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


