/* FUN_180137950 @ 180137950 */

longlong FUN_180137950(longlong param_1,longlong *param_2)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  int local_14;
  int *local_10;
  code *local_8;
  
  uVar4 = (ulonglong)*(uint *)(param_2 + 1);
  local_14 = *(int *)((longlong)param_2 + 0xc);
  if (uVar4 < *(ulonglong *)(*param_2 + 0x10)) {
    lVar3 = *(longlong *)(*param_2 + 8);
    if ((*(int *)(lVar3 + uVar4 * 0x148) != 2) &&
       (lVar3 = lVar3 + uVar4 * 0x148, *(int *)(lVar3 + 300) == local_14)) {
      uVar1 = *(uint *)(lVar3 + 0x8c);
      if ((int)*(uint *)(lVar3 + 0x8c) < 1) {
        uVar1 = 0;
      }
      uVar4 = (ulonglong)uVar1;
      if (*(ulonglong *)(param_1 + 0x10) < (ulonglong)uVar1) {
        uVar4 = *(ulonglong *)(param_1 + 0x10);
      }
      lVar2 = 0;
      if (*(ulonglong *)(lVar3 + 0x90) <= uVar4) {
        lVar2 = uVar4 - *(ulonglong *)(lVar3 + 0x90);
      }
      return lVar2;
    }
  }
  local_10 = &local_14;
  local_8 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_10,&PTR_s_C__Users_burne__cargo_registry_s_180257040,uVar4,
                *(uint *)(param_2 + 1));
}


