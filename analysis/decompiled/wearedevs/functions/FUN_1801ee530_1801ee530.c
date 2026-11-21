/* FUN_1801ee530 @ 1801ee530 */

void FUN_1801ee530(int *param_1,undefined8 param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined8 unaff_RBX;
  undefined1 local_2a [10];
  
  iVar1 = *param_1;
  iVar2 = -iVar1;
  if (-iVar1 < 0) {
    iVar2 = iVar1;
  }
  lVar3 = FUN_1801ee0e0(iVar2,local_2a,10);
  FUN_1801efa20(param_2,CONCAT71((int7)((ulonglong)unaff_RBX >> 8),-1 < iVar1) & 0xffffffff,1,0,
                local_2a + lVar3,10 - lVar3);
  return;
}


