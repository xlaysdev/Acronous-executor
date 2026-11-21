/* FUN_1800672e0 @ 1800672e0 */

void FUN_1800672e0(longlong param_1,ulonglong **param_2)

{
  char cVar1;
  char cVar2;
  longlong lVar3;
  ulonglong **ppuVar4;
  ulonglong **ppuVar5;
  ulonglong **ppuVar6;
  ulonglong **local_38;
  ulonglong **local_30;
  undefined8 ***local_28;
  ulonglong **local_20;
  undefined8 ***local_18;
  undefined1 *local_10;
  
  cVar1 = *(char *)(param_1 + 0x32);
  cVar2 = *(char *)(param_1 + 0x33);
  ppuVar6 = (ulonglong **)(ulonglong)(byte)(cVar2 - cVar1);
  local_30 = *(ulonglong ***)(param_1 + 0x10);
  ppuVar4 = (ulonglong **)0xffffffffffffffff;
  if (!CARRY8((ulonglong)ppuVar6,(ulonglong)local_30)) {
    ppuVar4 = (ulonglong **)((longlong)ppuVar6 + (longlong)local_30);
  }
  if (ppuVar4 == (ulonglong **)0x0) {
    local_20 = *(ulonglong ***)(param_1 + 0x40);
    lVar3 = (longlong)local_20 - (longlong)param_2;
    if (param_2 <= local_20) goto LAB_180067344;
    goto LAB_180067399;
  }
  ppuVar5 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar4);
  if (param_2 < ppuVar4 || ppuVar5 == (ulonglong **)0x0) {
    local_38 = param_2;
    if (cVar2 != cVar1) {
      local_38 = (ulonglong **)((longlong)param_2 - (longlong)ppuVar6);
      if (param_2 < ppuVar6 || local_38 == (ulonglong **)0x0) {
        *(char *)(param_1 + 0x32) = cVar1 + (char)param_2;
        return;
      }
      *(char *)(param_1 + 0x32) = cVar2;
    }
    if (local_38 <= local_30) {
      *(longlong *)(param_1 + 0x10) = (longlong)local_30 - (longlong)local_38;
      *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)local_38;
      return;
    }
    goto LAB_1800673fa;
  }
  if (cVar2 == cVar1) {
joined_r0x000180067383:
    local_38 = ppuVar4;
    if (local_30 < local_38) {
LAB_1800673fa:
      local_28 = &local_38;
      local_20 = (ulonglong **)&LAB_1800273d0;
      local_18 = &local_30;
      local_10 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18020a5c5,&local_28,&PTR_s_C__Users_burne__cargo_registry_s_18020a650);
    }
    *(longlong *)(param_1 + 0x10) = (longlong)local_30 - (longlong)local_38;
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + (longlong)local_38;
    local_20 = *(ulonglong ***)(param_1 + 0x40);
    lVar3 = (longlong)local_20 - (longlong)ppuVar5;
  }
  else {
    if (ppuVar6 <= ppuVar4 &&
        (ulonglong **)((longlong)ppuVar4 - (longlong)ppuVar6) != (ulonglong **)0x0) {
      *(char *)(param_1 + 0x32) = cVar2;
      ppuVar4 = (ulonglong **)((longlong)ppuVar4 - (longlong)ppuVar6);
      goto joined_r0x000180067383;
    }
    *(char *)(param_1 + 0x32) = cVar1 + (char)ppuVar4;
    local_20 = *(ulonglong ***)(param_1 + 0x40);
    lVar3 = (longlong)local_20 - (longlong)ppuVar5;
  }
  param_2 = ppuVar5;
  if (ppuVar5 <= local_20) {
LAB_180067344:
    *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + (longlong)param_2;
    *(longlong *)(param_1 + 0x40) = lVar3;
    return;
  }
LAB_180067399:
  local_28 = (undefined8 ***)param_2;
                    /* WARNING: Subroutine does not return */
  FUN_1801fc980(&local_28);
}


