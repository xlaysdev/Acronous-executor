/* FUN_1801eeae0 @ 1801eeae0 */

void FUN_1801eeae0(ushort *param_1,undefined8 param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ushort uVar4;
  char cStack_9;
  
  lVar1 = 0;
  uVar3 = (uint)*param_1;
  do {
    lVar2 = lVar1;
    (&cStack_9)[lVar2] = "0123456789abcdef"[uVar3 & 0xf];
    uVar4 = (ushort)uVar3;
    lVar1 = lVar2 + -1;
    uVar3 = uVar3 >> 4;
  } while (0xf < uVar4);
  FUN_1801efa20(param_2,1,"0x",2,&cStack_9 + lVar2,-(lVar2 + -1));
  return;
}


