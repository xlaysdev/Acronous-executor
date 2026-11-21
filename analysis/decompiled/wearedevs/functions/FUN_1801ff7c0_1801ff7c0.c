/* FUN_1801ff7c0 @ 1801ff7c0 */

void FUN_1801ff7c0(longlong param_1,undefined8 param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar4 = *(longlong *)(param_1 + 0x28) + 1;
  if (*(ulonglong *)(param_1 + 0x20) <= uVar4) {
    uVar4 = *(ulonglong *)(param_1 + 0x20);
  }
  lVar3 = lVar2;
  uVar1 = (**(code **)PTR_PTR_1802fd598)(10,lVar2,lVar2 + uVar4);
  if ((uVar1 & 1) == 0) {
    lVar3 = 0;
  }
  else {
    lVar3 = (lVar3 - lVar2) + 1;
  }
  lVar2 = (**(code **)PTR_PTR_1802fd590)(10,lVar2,lVar2 + lVar3);
  FUN_1801ff730(param_2,lVar2 + 1,uVar4 - lVar3);
  return;
}


