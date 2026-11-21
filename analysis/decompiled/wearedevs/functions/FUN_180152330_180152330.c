/* FUN_180152330 @ 180152330 */

undefined8 *
FUN_180152330(undefined8 *param_1,int *param_2,longlong param_3,undefined8 param_4,
             ulonglong *param_5)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  bool bVar4;
  bool bVar5;
  int local_34;
  int *local_30;
  code *local_28;
  
  if (*param_2 != 1) {
LAB_1801523b7:
    *param_1 = 0;
    return param_1;
  }
  uVar2 = param_2[1];
  local_34 = param_2[2];
  if ((ulonglong)uVar2 < *(ulonglong *)(param_3 + 0x10)) {
    lVar3 = (ulonglong)uVar2 * 0x148;
    if ((*(int *)(*(longlong *)(param_3 + 8) + lVar3) != 2) &&
       (lVar3 = *(longlong *)(param_3 + 8) + lVar3, *(int *)(lVar3 + 300) == local_34)) {
      if (*(int *)(lVar3 + 0x78) == 1000000000) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("reset_at must be set if in queueC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\h2-0.4.18\\src\\proto\\streams\\recv.rs"
                      ,0x20,&DAT_180257130);
      }
      uVar2 = (uint)*(undefined8 *)(lVar3 + 0x70);
      uVar1 = FUN_1801df680(param_4);
      bVar4 = uVar1 < *param_5;
      bVar5 = false;
      if (uVar1 == *param_5) {
        bVar4 = uVar2 < (uint)param_5[1];
        bVar5 = uVar2 == (uint)param_5[1];
      }
      if (!bVar4 && !bVar5) {
        FUN_180150120(param_1,param_2,param_3);
        return param_1;
      }
      goto LAB_1801523b7;
    }
  }
  local_30 = &local_34;
  local_28 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_30,&PTR_s_C__Users_burne__cargo_registry_s_180257040,param_4,
                uVar2);
}


