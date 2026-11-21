/* FUN_1801ffc40 @ 1801ffc40 */

void FUN_1801ffc40(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  longlong lVar3;
  longlong lVar4;
  
  uVar1 = *(ulonglong *)(param_1 + 0x28);
  if (*(ulonglong *)(param_1 + 0x20) < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(0,uVar1,*(ulonglong *)(param_1 + 0x20),
                  &PTR_s_C__Users_burne__cargo_registry_s_180289040);
  }
  lVar3 = *(longlong *)(param_1 + 0x18);
  lVar4 = lVar3;
  uVar2 = (**(code **)PTR_PTR_1802fd598)(10,lVar3,lVar3 + uVar1);
  if ((uVar2 & 1) == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = (lVar4 - lVar3) + 1;
  }
  lVar3 = (**(code **)PTR_PTR_1802fd590)(10,lVar3,lVar3 + lVar4);
  FUN_1801ff730(param_2,lVar3 + 1,uVar1 - lVar4);
  return;
}


