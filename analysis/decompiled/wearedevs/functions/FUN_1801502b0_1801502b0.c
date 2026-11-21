/* FUN_1801502b0 @ 1801502b0 */

longlong * FUN_1801502b0(longlong *param_1,int *param_2,longlong param_3)

{
  undefined8 uVar1;
  byte bVar2;
  uint uVar3;
  longlong lVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  int local_1c;
  int *local_18;
  code *local_10;
  
  if (*param_2 != 1) {
    *param_1 = 0;
    return param_1;
  }
  uVar3 = param_2[1];
  uVar5 = (ulonglong)uVar3;
  local_1c = param_2[2];
  if ((uVar3 == param_2[3]) && (local_1c == param_2[4])) {
    uVar6 = *(ulonglong *)(param_3 + 0x10);
    if (uVar6 <= uVar5) {
LAB_18015040b:
      local_18 = &local_1c;
      local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar7 = *(longlong *)(param_3 + 8);
    if ((*(int *)(lVar7 + uVar5 * 0x148) == 2) ||
       (lVar4 = uVar5 * 0x148 + lVar7, *(int *)(lVar4 + 300) != local_1c)) goto LAB_18015040b;
    if (*(int *)(lVar4 + 0x100) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: N::next(&stream).is_none()",0x2c,
                    &PTR_s_C__Users_burne__cargo_registry_s_180257698);
    }
    *param_2 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(param_3 + 0x10);
    if (uVar6 <= uVar5) goto LAB_1801503dd;
    lVar7 = *(longlong *)(param_3 + 8);
    if ((*(int *)(lVar7 + uVar5 * 0x148) == 2) ||
       (lVar4 = uVar5 * 0x148 + lVar7, *(int *)(lVar4 + 300) != local_1c)) goto LAB_1801503dd;
    uVar1 = *(undefined8 *)(lVar4 + 0x104);
    bVar2 = *(byte *)(lVar4 + 0x100);
    *(undefined4 *)(lVar4 + 0x100) = 0;
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180257650);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 1) = uVar1;
  }
  if (uVar5 < uVar6) {
    *(undefined1 *)(lVar7 + 0x13f + uVar5 * 0x148) = 0;
    *param_1 = param_3;
    *(uint *)(param_1 + 1) = uVar3;
    *(int *)((longlong)param_1 + 0xc) = local_1c;
    return param_1;
  }
LAB_1801503dd:
  local_18 = &local_1c;
  local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


