/* FUN_1801ee780 @ 1801ee780 */

void FUN_1801ee780(uint *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined7 uVar4;
  char *pcVar3;
  longlong lVar5;
  uint uVar6;
  char *pcVar7;
  undefined8 uVar8;
  char *pcVar9;
  char local_22 [7];
  char acStack_1b [3];
  
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
      pcVar3 = local_22;
      lVar2 = FUN_1801ee0e0(*param_1,pcVar3,10);
      lVar5 = 10 - lVar2;
      pcVar9 = local_22 + lVar2;
      pcVar7 = (char *)0x1;
      uVar4 = (undefined7)((ulonglong)pcVar3 >> 8);
      uVar8 = 0;
      goto LAB_1801ee867;
    }
    lVar5 = 0;
    pcVar3 = "0123456789ABCDEF";
    uVar6 = *param_1;
    do {
      acStack_1b[lVar5] = "0123456789ABCDEF"[uVar6 & 0xf];
      lVar5 = lVar5 + -1;
      bVar1 = 0xf < uVar6;
      uVar6 = uVar6 >> 4;
    } while (bVar1);
  }
  else {
    lVar5 = 0;
    pcVar3 = "0123456789abcdef";
    uVar6 = *param_1;
    do {
      acStack_1b[lVar5] = "0123456789abcdef"[uVar6 & 0xf];
      lVar5 = lVar5 + -1;
      bVar1 = 0xf < uVar6;
      uVar6 = uVar6 >> 4;
    } while (bVar1);
  }
  pcVar9 = acStack_1b + lVar5 + 1;
  lVar5 = -lVar5;
  pcVar7 = "0x";
  uVar8 = 2;
  uVar4 = (undefined7)((ulonglong)pcVar3 >> 8);
LAB_1801ee867:
  FUN_1801efa20(param_2,CONCAT71(uVar4,1),pcVar7,uVar8,pcVar9,lVar5);
  return;
}


