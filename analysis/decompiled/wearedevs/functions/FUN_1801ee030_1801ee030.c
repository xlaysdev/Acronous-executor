/* FUN_1801ee030 @ 1801ee030 */

void FUN_1801ee030(ulonglong param_1,longlong param_2)

{
  ulonglong uVar1;
  bool bVar2;
  longlong lVar3;
  uint uVar4;
  longlong lVar5;
  char cStack_19;
  
  uVar1 = *(ulonglong *)(param_2 + 0x10);
  uVar4 = (uint)uVar1;
  if ((uVar1 & 0x800000) != 0) {
    if ((uVar1 & 0x8000000) == 0) {
      uVar4 = uVar4 | 0x9000000;
      *(undefined2 *)(param_2 + 0x14) = 0x12;
    }
    else {
      uVar4 = uVar4 | 0x1000000;
    }
  }
  *(uint *)(param_2 + 0x10) = uVar4 | 0x800000;
  lVar3 = 0;
  do {
    lVar5 = lVar3;
    (&cStack_19)[lVar5] = "0123456789abcdef"[(uint)param_1 & 0xf];
    bVar2 = 0xf < param_1;
    lVar3 = lVar5 + -1;
    param_1 = param_1 >> 4;
  } while (bVar2);
  FUN_1801efa20(param_2,"9293949596979899library\\core\\src\\fmt\\num.rs","0x",2,&cStack_19 + lVar5,
                -(lVar5 + -1));
  *(ulonglong *)(param_2 + 0x10) = uVar1;
  return;
}


