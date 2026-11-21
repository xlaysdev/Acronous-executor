/* FUN_180150120 @ 180150120 */

longlong * FUN_180150120(longlong *param_1,int *param_2,longlong param_3)

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
LAB_18015027b:
      local_18 = &local_1c;
      local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
    }
    lVar7 = *(longlong *)(param_3 + 8);
    if ((*(int *)(lVar7 + uVar5 * 0x148) == 2) ||
       (lVar4 = uVar5 * 0x148 + lVar7, *(int *)(lVar4 + 300) != local_1c)) goto LAB_18015027b;
    if (*(int *)(lVar4 + 0x10c) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: N::next(&stream).is_none()",0x2c,
                    &PTR_s_C__Users_burne__cargo_registry_s_180257698);
    }
    *param_2 = 0;
  }
  else {
    uVar6 = *(ulonglong *)(param_3 + 0x10);
    if (uVar6 <= uVar5) goto LAB_18015024d;
    lVar7 = *(longlong *)(param_3 + 8);
    if ((*(int *)(lVar7 + uVar5 * 0x148) == 2) ||
       (lVar4 = uVar5 * 0x148 + lVar7, *(int *)(lVar4 + 300) != local_1c)) goto LAB_18015024d;
    uVar1 = *(undefined8 *)(lVar4 + 0x110);
    bVar2 = *(byte *)(lVar4 + 0x10c);
    *(undefined4 *)(lVar4 + 0x10c) = 0;
    if ((bVar2 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180257650);
    }
    *param_2 = 1;
    *(undefined8 *)(param_2 + 1) = uVar1;
  }
  if (uVar5 < uVar6) {
    *(undefined4 *)(lVar7 + 0x78 + uVar5 * 0x148) = 1000000000;
    *param_1 = param_3;
    *(uint *)(param_1 + 1) = uVar3;
    *(int *)((longlong)param_1 + 0xc) = local_1c;
    return param_1;
  }
LAB_18015024d:
  local_18 = &local_1c;
  local_10 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_18,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


