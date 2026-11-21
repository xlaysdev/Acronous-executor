/* FUN_1801526e0 @ 1801526e0 */

void FUN_1801526e0(undefined2 *param_1,longlong param_2,int *param_3,undefined8 param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  ulonglong uVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong lVar10;
  int *piVar11;
  int local_74;
  undefined2 *local_70;
  int *local_68;
  code *local_60;
  ulonglong local_58;
  longlong local_50;
  ulonglong local_48;
  
  uVar4 = *(ulonglong *)(param_2 + 0x58);
  local_70 = param_1;
  if (uVar4 != 0) {
    local_48 = *(ulonglong *)(param_2 + 0x38);
    local_50 = *(longlong *)(param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 8);
    local_58 = *(ulonglong *)(param_2 + 0x10);
    iVar1 = *param_3;
    uVar9 = 0;
    uVar8 = uVar4;
    do {
      if (local_48 <= uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180257b08);
      }
      iVar2 = *(int *)(local_50 + 8 + uVar9 * 0x10);
      uVar3 = *(uint *)(local_50 + 0xc + uVar9 * 0x10);
      if (((local_58 <= uVar3) || (lVar10 = (ulonglong)uVar3 * 0x148, *(int *)(lVar5 + lVar10) == 2)
          ) || (piVar11 = (int *)(lVar10 + lVar5), piVar11[0x4b] != iVar2)) {
LAB_180152831:
        local_68 = &local_74;
        local_60 = FUN_180152d10;
        local_74 = iVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_180257058,
                      param_4,uVar3);
      }
      iVar7 = iVar1;
      local_74 = iVar2;
      uVar6 = FUN_180131b80(piVar11 + 0x2a);
      if ((uVar6 & 1) != 0) {
LAB_1801527f9:
        *(undefined8 *)(local_70 + 0xc) = 0;
        *(undefined8 *)(local_70 + 0x10) = 0;
        *local_70 = 0x101;
        *(int *)(local_70 + 2) = iVar7;
        *(undefined ***)(local_70 + 4) = &PTR_LAB_180257080;
        *(undefined8 *)(local_70 + 8) = 1;
        return;
      }
      if ((*piVar11 == 2) || (piVar11[0x4b] != iVar2)) goto LAB_180152831;
      if (SCARRY4(piVar11[0x2b],iVar1)) {
        iVar7 = 3;
        goto LAB_1801527f9;
      }
      uVar9 = (uVar9 + 1) - (ulonglong)(uVar4 < uVar8);
      piVar11[0x2b] = piVar11[0x2b] + iVar1;
      uVar8 = uVar8 - (uVar4 < uVar8);
      local_74 = iVar2;
    } while (uVar9 < uVar8);
  }
  *(undefined1 *)local_70 = 3;
  return;
}


