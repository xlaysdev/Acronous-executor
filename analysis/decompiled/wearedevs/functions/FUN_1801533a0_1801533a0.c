/* FUN_1801533a0 @ 1801533a0 */

void FUN_1801533a0(undefined8 param_1,longlong *param_2,longlong param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  ulonglong uVar5;
  longlong local_a8;
  code *pcStack_a0;
  undefined4 local_98;
  undefined8 local_88;
  undefined8 uStack_80;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  int iStack_44;
  
  uVar2 = (ulonglong)*(uint *)(param_2 + 1);
  local_88 = (int *)param_2[1];
  local_a8 = (longlong)&local_88 + 4;
  if (uVar2 < *(ulonglong *)(*param_2 + 0x10)) {
    lVar1 = *(longlong *)(*param_2 + 8);
    lVar3 = uVar2 * 0x148;
    if ((*(int *)(lVar1 + lVar3) != 2) &&
       (lVar1 = lVar1 + lVar3, *(int *)(lVar1 + 300) == *(int *)((longlong)param_2 + 0xc))) {
      uVar4 = *(uint *)(lVar1 + 0x78);
      uVar5 = (ulonglong)uVar4;
      FUN_1801394d0(param_2,param_3,param_1);
      uVar2 = (ulonglong)*(uint *)(param_2 + 1);
      local_88 = (int *)param_2[1];
      if (uVar2 < *(ulonglong *)(*param_2 + 0x10)) {
        lVar1 = *(longlong *)(*param_2 + 8);
        lVar3 = uVar2 * 0x148;
        if ((*(int *)(lVar1 + lVar3) != 2) &&
           (lVar1 = lVar1 + lVar3, *(int *)(lVar1 + 300) == *(int *)((longlong)param_2 + 0xc))) {
          if (*(longlong *)(lVar1 + 0x80) != 0) {
LAB_1801535ac:
            local_a8 = *param_2;
            pcStack_a0 = (code *)param_2[1];
            FUN_1801537a0(param_1,&local_a8,uVar4 != 1000000000);
            return;
          }
          local_6c = uVar4;
          FUN_180159480(param_3,param_2,param_3 + 0x140,param_1);
          uVar2 = (ulonglong)*(uint *)(param_2 + 1);
          local_88 = (int *)param_2[1];
          if (uVar2 < *(ulonglong *)(*param_2 + 0x10)) {
            lVar1 = *(longlong *)(*param_2 + 8);
            lVar3 = uVar2 * 0x148;
            if ((*(int *)(lVar1 + lVar3) != 2) &&
               (lVar1 = lVar1 + lVar3, *(int *)(lVar1 + 300) == *(int *)((longlong)param_2 + 0xc)))
            {
              local_a8 = *(longlong *)(lVar1 + 0x118);
              pcStack_a0 = *(code **)(lVar1 + 0x120);
              local_98 = *(undefined4 *)(lVar1 + 0x128);
              *(undefined4 *)(lVar1 + 0x118) = 0;
              FUN_18014fde0(&local_50,&local_a8,*param_2);
              if (CONCAT44(uStack_4c,local_50) != 0) {
                do {
                  local_68 = local_50;
                  uStack_64 = uStack_4c;
                  uStack_60 = uStack_48;
                  iStack_5c = iStack_44;
                  local_58 = uStack_48;
                  local_54 = iStack_44;
                  if (*(ulonglong *)(CONCAT44(uStack_4c,local_50) + 0x10) <= (ulonglong)uStack_48) {
LAB_1801535e0:
                    local_88 = &local_54;
                    uStack_80 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
                    FUN_180201ee0(&DAT_180256fac,&local_88,
                                  &PTR_s_C__Users_burne__cargo_registry_s_180257040);
                  }
                  lVar1 = *(longlong *)(CONCAT44(uStack_4c,local_50) + 8);
                  lVar3 = (ulonglong)uStack_48 * 0x148;
                  if ((*(int *)(lVar1 + lVar3) == 2) ||
                     (lVar1 = lVar1 + lVar3, *(int *)(lVar1 + 300) != iStack_44))
                  goto LAB_1801535e0;
                  uVar5 = CONCAT71((int7)(uVar5 >> 8),*(int *)(lVar1 + 0x78) != 1000000000);
                  FUN_1801394d0(&local_68,param_3,param_1);
                  local_88 = (int *)CONCAT44(uStack_64,local_68);
                  uStack_80 = (code *)CONCAT44(iStack_5c,uStack_60);
                  FUN_1801537a0(param_1,&local_88,uVar5);
                  FUN_18014fde0(&local_50,&local_a8,*param_2);
                } while (CONCAT44(uStack_4c,local_50) != 0);
              }
              uVar4 = local_6c;
              goto LAB_1801535ac;
            }
          }
          pcStack_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
        }
      }
    }
  }
  pcStack_a0 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


