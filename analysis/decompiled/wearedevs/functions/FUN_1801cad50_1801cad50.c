/* FUN_1801cad50 @ 1801cad50 */

void FUN_1801cad50(undefined1 *param_1,longlong *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  undefined8 local_50 [3];
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  if (uVar1 < uVar2) {
    param_1[1] = *(undefined1 *)(*param_2 + uVar1);
    *param_1 = 0;
  }
  else {
    local_50[0] = 4;
    if (uVar2 < uVar1) {
      local_31 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201a30(0,uVar1,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180289040);
    }
    lVar3 = *param_2;
    local_31 = 1;
    lVar5 = lVar3;
    uVar2 = (**(code **)PTR_PTR_1802fd598)(10,lVar3,lVar3 + uVar1);
    if ((uVar2 & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = (lVar5 - lVar3) + 1;
    }
    local_31 = 1;
    lVar3 = (**(code **)PTR_PTR_1802fd590)(10,lVar3,lVar3 + lVar5);
    local_31 = 0;
    uVar4 = FUN_1801ff730(local_50,lVar3 + 1,uVar1 - lVar5);
    *(undefined8 *)(param_1 + 8) = uVar4;
    *param_1 = 1;
  }
  return;
}


