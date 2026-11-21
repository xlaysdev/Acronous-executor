/* FUN_18012c3c0 @ 18012c3c0 */

void FUN_18012c3c0(undefined1 *param_1,longlong *param_2)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  undefined1 uVar7;
  longlong lVar8;
  char *pcVar9;
  longlong lVar10;
  
  pcVar2 = (char *)param_2[1];
  pcVar3 = (char *)param_2[2];
  if (pcVar3 < pcVar2) {
    lVar6 = -(longlong)pcVar3;
    bVar5 = false;
    do {
      pcVar9 = pcVar3 + 1;
      cVar1 = *pcVar3;
      switch(cVar1) {
      case '\t':
      case ' ':
        goto switchD_18012c436_caseD_9;
      case '\n':
        param_2[2] = (longlong)pcVar9;
        goto LAB_18012c43c;
      case '\r':
        param_2[2] = (longlong)pcVar9;
        if (pcVar2 <= pcVar9) goto LAB_18012c470;
        cVar1 = *pcVar9;
        pcVar9 = pcVar3 + 2;
        param_2[2] = (longlong)pcVar9;
        if (cVar1 != '\n') goto LAB_18012c4a1;
LAB_18012c43c:
        lVar4 = *param_2;
        *param_2 = (longlong)pcVar9;
        uVar7 = 0;
        lVar8 = 1;
        if (!bVar5) {
          lVar8 = lVar4;
        }
        lVar10 = 0;
        if (!bVar5) {
          lVar10 = -(lVar6 + lVar4);
        }
        *(longlong *)(param_1 + 8) = lVar8;
        *(longlong *)(param_1 + 0x10) = lVar10;
        goto LAB_18012c47a;
      }
      if (-1 < cVar1 && 0x5d < (byte)(cVar1 - 0x21U)) {
        param_2[2] = (longlong)pcVar9;
LAB_18012c4a1:
        param_1[1] = 3;
        uVar7 = 1;
        goto LAB_18012c47a;
      }
switchD_18012c436_caseD_9:
      if (cVar1 < '\0') {
        bVar5 = true;
      }
      lVar6 = lVar6 + -1;
      pcVar3 = pcVar9;
    } while (pcVar9 != pcVar2);
    param_2[2] = (longlong)pcVar2;
  }
LAB_18012c470:
  *(undefined8 *)(param_1 + 8) = 0;
  uVar7 = 0;
LAB_18012c47a:
  *param_1 = uVar7;
  return;
}


