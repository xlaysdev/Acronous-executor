/* FUN_180067440 @ 180067440 */

void FUN_180067440(longlong *param_1,ulonglong **param_2)

{
  ulonglong **ppuVar1;
  longlong lVar2;
  ulonglong **ppuVar3;
  ulonglong **ppuVar4;
  ulonglong **local_30;
  ulonglong **local_28;
  undefined8 ***local_20;
  ulonglong **local_18;
  undefined8 ***local_10;
  undefined1 *local_8;
  
  ppuVar1 = (ulonglong **)param_1[1];
  local_28 = (ulonglong **)param_1[4];
  ppuVar4 = (ulonglong **)0xffffffffffffffff;
  if (!CARRY8((ulonglong)ppuVar1,(ulonglong)local_28)) {
    ppuVar4 = (ulonglong **)((longlong)ppuVar1 + (longlong)local_28);
  }
  if (ppuVar4 == (ulonglong **)0x0) {
    local_18 = (ulonglong **)param_1[7];
    lVar2 = (longlong)local_18 - (longlong)param_2;
    if (param_2 <= local_18) goto LAB_1800674c5;
    goto LAB_180067523;
  }
  ppuVar3 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar4);
  if (param_2 < ppuVar4 || ppuVar3 == (ulonglong **)0x0) {
    if (ppuVar1 != (ulonglong **)0x0) {
      if (param_2 <= ppuVar1) {
        *param_1 = *param_1 + (longlong)param_2;
        param_1[1] = (longlong)ppuVar1 - (longlong)param_2;
        return;
      }
      *param_1 = *param_1 + (longlong)ppuVar1;
      param_1[1] = 0;
      param_2 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar1);
    }
    local_30 = param_2;
    if (param_2 <= local_28) {
      param_1[4] = (longlong)local_28 - (longlong)param_2;
      param_1[3] = param_1[3] + (longlong)param_2;
      return;
    }
    goto LAB_180067546;
  }
  if (ppuVar1 == (ulonglong **)0x0) {
LAB_18006748f:
    local_30 = ppuVar4;
    if (local_28 < ppuVar4) {
LAB_180067546:
      local_20 = &local_30;
      local_18 = (ulonglong **)&LAB_1800273d0;
      local_10 = &local_28;
      local_8 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020a5c5,&local_20,&PTR_s_C__Users_burne__cargo_registry_s_18020a650);
    }
    param_1[4] = (longlong)local_28 - (longlong)ppuVar4;
    param_1[3] = param_1[3] + (longlong)ppuVar4;
    local_18 = (ulonglong **)param_1[7];
    lVar2 = (longlong)local_18 - (longlong)ppuVar3;
  }
  else {
    if (ppuVar1 < ppuVar4) {
      *param_1 = *param_1 + (longlong)ppuVar1;
      param_1[1] = 0;
      ppuVar4 = (ulonglong **)((longlong)ppuVar4 - (longlong)ppuVar1);
      goto LAB_18006748f;
    }
    *param_1 = *param_1 + (longlong)ppuVar4;
    param_1[1] = (longlong)ppuVar1 - (longlong)ppuVar4;
    local_18 = (ulonglong **)param_1[7];
    lVar2 = (longlong)local_18 - (longlong)ppuVar3;
  }
  param_2 = ppuVar3;
  if (ppuVar3 <= local_18) {
LAB_1800674c5:
    param_1[6] = param_1[6] + (longlong)param_2;
    param_1[7] = lVar2;
    return;
  }
LAB_180067523:
  local_20 = (undefined8 ***)param_2;
                    /* WARNING: Subroutine does not return */
  FUN_1801fc980(&local_20);
}


