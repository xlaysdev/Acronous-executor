/* FUN_18012f140 @ 18012f140 */

void FUN_18012f140(longlong param_1,undefined8 param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  undefined4 local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  int iStack_54;
  uint local_50;
  int local_4c;
  int *local_48;
  code *pcStack_40;
  
  FUN_1801505d0(&local_60,param_1 + 0x38,param_2);
  lVar1 = CONCAT44(uStack_5c,local_60);
  if (lVar1 != 0) {
    local_48 = &local_4c;
    do {
      local_50 = uStack_58;
      local_4c = iStack_54;
      if (*(ulonglong *)(lVar1 + 0x10) <= (ulonglong)uStack_58) {
LAB_18012f208:
        pcStack_40 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_48,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      lVar2 = (ulonglong)uStack_58 * 0x148;
      if ((*(int *)(*(longlong *)(lVar1 + 8) + lVar2) == 2) ||
         (lVar2 = *(longlong *)(lVar1 + 8) + lVar2, *(int *)(lVar2 + 300) != iStack_54))
      goto LAB_18012f208;
      FUN_1801537a0(param_3,&local_48,*(int *)(lVar2 + 0x78) != 1000000000);
      FUN_1801505d0(&local_60,param_1 + 0x38,param_2);
      lVar1 = CONCAT44(uStack_5c,local_60);
    } while (lVar1 != 0);
  }
  return;
}


