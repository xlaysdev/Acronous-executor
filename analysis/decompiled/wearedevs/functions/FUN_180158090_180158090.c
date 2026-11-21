/* FUN_180158090 @ 180158090 */

undefined8 FUN_180158090(longlong param_1,uint param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  char cVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  longlong lVar11;
  uint local_94;
  undefined8 local_90;
  code *local_88;
  longlong local_80;
  undefined ***local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined **local_60;
  undefined *local_58;
  undefined *local_50;
  undefined8 *local_48;
  
  local_94 = param_2;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar9 = (uint)DAT_1802fd1f0, uVar9 - 1 < 2 ||
       ((uVar9 != 0 && (uVar9 = FUN_1801faaf0(&PTR_s__1802fd1e0), (char)uVar9 != '\0')))) &&
      (cVar6 = FUN_1801601d0(PTR_s__1802fd1e0,uVar9), cVar6 != '\0')))) {
    local_68 = PTR_s__1802fd1e0 + 0x30;
    local_90 = &local_94;
    local_88 = FUN_1801ee6c0;
    local_50 = &DAT_180259d80;
    local_48 = &local_90;
    local_60 = &local_50;
    local_58 = &DAT_180258dd0;
    local_80 = 1;
    local_78 = &local_60;
    local_70 = 1;
    FUN_180160ae0(PTR_s__1802fd1e0,&local_80);
  }
  lVar4 = *param_3;
  puVar1 = (uint *)(param_3 + 1);
  uVar10 = (ulonglong)*puVar1;
  iVar3 = *(int *)((longlong)param_3 + 0xc);
  uVar5 = *(undefined8 *)puVar1;
  local_90 = *(uint **)puVar1;
  if (uVar10 < *(ulonglong *)(lVar4 + 0x10)) {
    lVar11 = uVar10 * 0x148;
    if ((*(int *)(*(longlong *)(lVar4 + 8) + lVar11) != 2) &&
       (lVar8 = *(longlong *)(lVar4 + 8) + lVar11, *(int *)(lVar8 + 300) == iVar3)) {
      if (*(uint *)(lVar8 + 0x134) < local_94) {
        return 4;
      }
      FUN_180159c70(param_1,local_94,param_4);
      if (((uVar10 < *(ulonglong *)(lVar4 + 0x10)) &&
          (*(int *)(*(longlong *)(lVar4 + 8) + lVar11) != 2)) &&
         (lVar8 = *(longlong *)(lVar4 + 8) + lVar11, *(int *)(lVar8 + 300) == iVar3)) {
        piVar2 = (int *)(lVar8 + 0x134);
        *piVar2 = *piVar2 - local_94;
        uVar7 = *(ulonglong *)(lVar4 + 0x10);
        if (((uVar10 < uVar7) && (*(int *)(*(longlong *)(lVar4 + 8) + lVar11) != 2)) &&
           (lVar8 = *(longlong *)(lVar4 + 8) + lVar11, *(int *)(lVar8 + 300) == iVar3)) {
          if (!SCARRY4(*(int *)(lVar8 + 0xac),local_94)) {
            *(uint *)(lVar8 + 0xac) = *(int *)(lVar8 + 0xac) + local_94;
            uVar7 = *(ulonglong *)(lVar4 + 0x10);
          }
          if (((uVar10 < uVar7) && (*(int *)(*(longlong *)(lVar4 + 8) + lVar11) != 2)) &&
             (lVar11 = *(longlong *)(lVar4 + 8) + lVar11, *(int *)(lVar11 + 300) == iVar3)) {
            iVar3 = *(int *)(lVar11 + 0xa8);
            if (*(int *)(lVar11 + 0xac) <= iVar3) {
              return 0xd;
            }
            if (*(int *)(lVar11 + 0xac) - iVar3 < iVar3 / 2) {
              return 0xd;
            }
            local_90 = (uint *)uVar5;
            FUN_1801508f0(param_1 + 0x50,param_3);
            lVar4 = *param_4;
            *param_4 = 0;
            if (lVar4 != 0) {
              (**(code **)(lVar4 + 8))(param_4[1]);
            }
            return 0xd;
          }
          goto LAB_1801582ff;
        }
      }
      local_90 = *(uint **)puVar1;
      local_78 = (undefined ***)FUN_180152d10;
      local_80 = (longlong)&local_90 + 4;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_80,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
    }
  }
LAB_1801582ff:
  local_90 = *(uint **)puVar1;
  local_78 = (undefined ***)FUN_180152d10;
  local_80 = (longlong)&local_90 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_80,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


