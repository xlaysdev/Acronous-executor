/* FUN_18012be30 @ 18012be30 */

int * FUN_18012be30(ulonglong *param_1)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  int *piVar4;
  
  if (*param_1 == 2) {
    return (int *)0x0;
  }
  if ((*param_1 & 1) == 0) {
    uVar1 = param_1[5];
    uVar2 = *(ulonglong *)(param_1[4] + 0x28);
    if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar1,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
    }
    piVar4 = (int *)(uVar1 * 0x68 + *(longlong *)(param_1[4] + 0x20));
    if (param_1[2] == 0) {
      *param_1 = 2;
      param_1[2] = 2;
      return piVar4 + 6;
    }
    if (*piVar4 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0(&DAT_1802430d8,0x28,&PTR_s_C__Users_burne__cargo_registry_s_180243100);
    }
    uVar1 = *(ulonglong *)(piVar4 + 2);
    *param_1 = 1;
    param_1[1] = uVar1;
    return piVar4 + 6;
  }
  uVar1 = param_1[1];
  uVar2 = *(ulonglong *)(param_1[4] + 0x40);
  if (uVar2 <= uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201d02(uVar1,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180243118);
  }
  lVar3 = uVar1 * 0x48 + *(longlong *)(param_1[4] + 0x38);
  if (((int)param_1[2] == 1) && (uVar1 == param_1[3])) {
    *param_1 = 2;
    param_1[2] = 2;
    return (int *)(lVar3 + 0x20);
  }
  if (*(char *)(lVar3 + 0x10) == '\0') {
    *param_1 = 2;
    return (int *)(lVar3 + 0x20);
  }
  uVar1 = *(ulonglong *)(lVar3 + 0x18);
  *param_1 = 1;
  param_1[1] = uVar1;
  return (int *)(lVar3 + 0x20);
}


