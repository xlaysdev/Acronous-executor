/* FUN_1801eecc0 @ 1801eecc0 */

void FUN_1801eecc0(ulonglong *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong uVar4;
  char cStack_9;
  
  lVar2 = 0;
  uVar4 = *param_1;
  do {
    lVar3 = lVar2;
    (&cStack_9)[lVar3] = "0123456789ABCDEF"[(uint)uVar4 & 0xf];
    bVar1 = 0xf < uVar4;
    lVar2 = lVar3 + -1;
    uVar4 = uVar4 >> 4;
  } while (bVar1);
  FUN_1801efa20(param_2,1,"0x",2,&cStack_9 + lVar3,-(lVar3 + -1));
  return;
}


