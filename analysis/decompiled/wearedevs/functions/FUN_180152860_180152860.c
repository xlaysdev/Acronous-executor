/* FUN_180152860 @ 180152860 */

void FUN_180152860(undefined2 *param_1,longlong param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong lVar8;
  undefined4 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  int local_54;
  int *local_50;
  code *local_48;
  
  uVar2 = *(ulonglong *)(param_2 + 0x58);
  if (uVar2 != 0) {
    uVar3 = *(ulonglong *)(param_2 + 0x38);
    lVar4 = *(longlong *)(param_2 + 0x30);
    lVar5 = *(longlong *)(param_2 + 8);
    uVar6 = *(ulonglong *)(param_2 + 0x10);
    uVar1 = *param_3;
    uVar11 = 0;
    uVar10 = uVar2;
    do {
      if (uVar3 <= uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180257b08);
      }
      local_54 = *(int *)(lVar4 + 8 + uVar11 * 0x10);
      uVar7 = (ulonglong)*(uint *)(lVar4 + 0xc + uVar11 * 0x10);
      if (((uVar6 <= uVar7) || (lVar8 = uVar7 * 0x148, *(int *)(lVar5 + lVar8) == 2)) ||
         (lVar8 = lVar8 + lVar5, *(int *)(lVar8 + 300) != local_54)) {
        local_50 = &local_54;
        local_48 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_50,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
      }
      uVar9 = uVar1;
      uVar7 = FUN_180131ce0(lVar8 + 0xa8);
      if ((uVar7 & 1) != 0) {
        *(undefined8 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *param_1 = 0x101;
        *(undefined4 *)(param_1 + 2) = uVar9;
        *(undefined ***)(param_1 + 4) = &PTR_LAB_180257080;
        *(undefined8 *)(param_1 + 8) = 1;
        return;
      }
      uVar11 = (uVar11 + 1) - (ulonglong)(uVar2 < uVar10);
      uVar10 = uVar10 - (uVar2 < uVar10);
    } while (uVar11 < uVar10);
  }
  *(undefined1 *)param_1 = 3;
  return;
}


