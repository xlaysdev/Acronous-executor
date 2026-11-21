/* FUN_1801f5330 @ 1801f5330 */

void FUN_1801f5330(ulonglong *param_1,longlong param_2)

{
  bool bVar1;
  longlong lVar2;
  undefined7 uVar4;
  char *pcVar3;
  longlong lVar5;
  char *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  char local_2c [15];
  char acStack_1d [5];
  
  uVar7 = *param_1;
  if ((*(uint *)(param_2 + 0x10) & 0x2000000) == 0) {
    if ((*(uint *)(param_2 + 0x10) & 0x4000000) == 0) {
      pcVar3 = local_2c;
      lVar2 = FUN_1801ee2a0(uVar7,pcVar3,0x14);
      lVar5 = 0x14 - lVar2;
      pcVar9 = local_2c + lVar2;
      pcVar6 = (char *)0x1;
      uVar4 = (undefined7)((ulonglong)pcVar3 >> 8);
      uVar8 = 0;
      goto LAB_1801f5418;
    }
    lVar5 = 0;
    pcVar3 = "0123456789ABCDEF";
    do {
      acStack_1d[lVar5] = "0123456789ABCDEF"[(uint)uVar7 & 0xf];
      lVar5 = lVar5 + -1;
      bVar1 = 0xf < uVar7;
      uVar7 = uVar7 >> 4;
    } while (bVar1);
  }
  else {
    lVar5 = 0;
    pcVar3 = "0123456789abcdef";
    do {
      acStack_1d[lVar5] = "0123456789abcdef"[(uint)uVar7 & 0xf];
      lVar5 = lVar5 + -1;
      bVar1 = 0xf < uVar7;
      uVar7 = uVar7 >> 4;
    } while (bVar1);
  }
  pcVar9 = acStack_1d + lVar5 + 1;
  lVar5 = -lVar5;
  pcVar6 = "0x";
  uVar8 = 2;
  uVar4 = (undefined7)((ulonglong)pcVar3 >> 8);
LAB_1801f5418:
  FUN_1801efa20(param_2,CONCAT71(uVar4,1),pcVar6,uVar8,pcVar9,lVar5);
  return;
}


