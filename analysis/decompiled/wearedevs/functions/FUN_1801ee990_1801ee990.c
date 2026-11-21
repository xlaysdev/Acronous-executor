/* FUN_1801ee990 @ 1801ee990 */

void FUN_1801ee990(byte *param_1,undefined8 param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  byte bVar4;
  char cStack_9;
  
  lVar2 = 0;
  bVar4 = *param_1;
  do {
    lVar3 = lVar2;
    (&cStack_9)[lVar3] = "0123456789abcdef"[bVar4 & 0xf];
    bVar1 = 0xf < bVar4;
    lVar2 = lVar3 + -1;
    bVar4 = bVar4 >> 4;
  } while (bVar1);
  FUN_1801efa20(param_2,1,"0x",2,&cStack_9 + lVar3,-(lVar3 + -1));
  return;
}


