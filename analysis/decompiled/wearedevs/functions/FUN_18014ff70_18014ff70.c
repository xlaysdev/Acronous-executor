/* FUN_18014ff70 @ 18014ff70 */

longlong * FUN_18014ff70(longlong *param_1,int *param_2,longlong *param_3)

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
  lVar4 = *param_3;
  if ((uVar3 == param_2[3]) && (local_1c == param_2[4])) {
    uVar6 = *(ulonglong *)(lVar4 + 0x10);
    if (uVar6 <= uVar5) {
LAB_1801500ed:
      local_18 = &local_1c;
      local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    if ((*(int *)(*(longlong *)(lVar4 + 8) + uVar5 * 0x148) == 2) ||
       (lVar7 = *(longlong *)(lVar4 + 8) + uVar5 * 0x148, *(int *)(lVar7 + 300) != local_1c))
    goto LAB_1801500ed;
    if (*(int *)(lVar7 + 0xdc) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: N::next(&stream).is_none()",0x2c,
                    &PTR_s_C__Users_burne__cargo_registry_s_180257698);
    }
    *param_2 = 0;
  }
  else {
    if (*(ulonglong *)(lVar4 + 0x10) <= uVar5) goto LAB_1801500bf;
    if ((*(int *)(*(longlong *)(lVar4 + 8) + uVar5 * 0x148) == 2) ||
       (lVar7 = *(longlong *)(lVar4 + 8) + uVar5 * 0x148, *(int *)(lVar7 + 300) != local_1c))
    goto LAB_1801500bf;
    uVar1 = *(undefined8 *)(lVar7 + 0xe0);
    bVar2 = *(byte *)(lVar7 + 0xdc);
    *(undefined4 *)(lVar7 + 0xdc) = 0;
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180257650);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 1) = uVar1;
    uVar6 = *(ulonglong *)(lVar4 + 0x10);
  }
  if (uVar5 < uVar6) {
    if ((*(int *)(*(longlong *)(lVar4 + 8) + uVar5 * 0x148) != 2) &&
       (lVar7 = *(longlong *)(lVar4 + 8) + uVar5 * 0x148, *(int *)(lVar7 + 300) == local_1c)) {
      *(undefined1 *)(lVar7 + 0x13a) = 0;
      *param_1 = lVar4;
      *(uint *)(param_1 + 1) = uVar3;
      *(int *)((longlong)param_1 + 0xc) = local_1c;
      return param_1;
    }
  }
LAB_1801500bf:
  local_18 = &local_1c;
  local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


