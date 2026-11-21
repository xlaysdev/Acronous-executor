/* FUN_1801ce2e0 @ 1801ce2e0 */

longlong FUN_1801ce2e0(undefined8 *param_1,longlong param_2)

{
  undefined8 *puVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  longlong lVar9;
  char *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong lVar13;
  longlong lVar14;
  
  lVar11 = *(longlong *)(param_2 + 8);
  lVar14 = *(longlong *)(param_2 + 0x10);
  uVar12 = *param_1;
  lVar9 = param_1[3];
  param_1[3] = lVar9 + 1;
  *(undefined1 *)(param_1 + 4) = 0;
  lVar8 = FUN_1801cbac0(uVar12,"[",1);
  if (lVar8 == 0) {
    if (lVar14 == 0) {
      param_1[3] = lVar9;
      lVar8 = FUN_1801cbac0(uVar12,"]",1);
joined_r0x0001801ce53c:
      if (lVar8 == 0) {
        return 0;
      }
    }
    else {
      lVar14 = lVar14 * 0x20 + lVar11;
      bVar6 = true;
      do {
        puVar1 = (undefined8 *)*param_1;
        if (bVar6) {
          uVar12 = 1;
          pcVar10 = "\n";
        }
        else {
          uVar12 = 2;
          pcVar10 = ",\n";
        }
        lVar8 = FUN_1801cbac0(puVar1,pcVar10,uVar12);
        if (lVar8 != 0) goto switchD_1801ce401_caseD_2;
        lVar9 = param_1[3];
        if (lVar9 != 0) {
          uVar12 = param_1[1];
          lVar2 = param_1[2];
          lVar13 = 0;
          do {
            if (lVar2 != 0) {
              uVar3 = *puVar1;
              while (cVar7 = FUN_1801f0c50(uVar3,uVar12,lVar2), cVar7 != '\0') {
                lVar8 = FUN_1801d6710(0x28,"fmt error\n",9);
                switch((uint)lVar8 & 3) {
                case 0:
                  if (*(char *)(lVar8 + 0x10) != '#') goto switchD_1801ce401_caseD_2;
                  break;
                case 1:
                  if (*(char *)(lVar8 + 0xf) != '#') goto switchD_1801ce401_caseD_2;
                  uVar5 = *(undefined8 *)(lVar8 + -1);
                  puVar4 = *(undefined8 **)(lVar8 + 7);
                  if ((code *)*puVar4 != (code *)0x0) {
                    (*(code *)*puVar4)(uVar5);
                  }
                  if (puVar4[1] != 0) {
                    thunk_FUN_1801d3330(uVar5,puVar4[1],puVar4[2]);
                  }
                  thunk_FUN_1801d3330(lVar8 + -1,0x18,8);
                  break;
                case 2:
                  goto switchD_1801ce401_caseD_2;
                case 3:
                  if ((int)((ulonglong)lVar8 >> 0x20) != 0x23) goto switchD_1801ce401_caseD_2;
                }
              }
            }
            lVar13 = lVar13 + 1;
          } while (lVar13 != lVar9);
        }
        lVar9 = FUN_1801ce980(lVar11,param_1);
        if (lVar9 != 0) {
          return lVar9;
        }
        lVar11 = lVar11 + 0x20;
        *(undefined1 *)(param_1 + 4) = 1;
        bVar6 = false;
      } while (lVar11 != lVar14);
      uVar12 = *param_1;
      lVar11 = param_1[3];
      param_1[3] = lVar11 + -1;
      lVar8 = FUN_1801cbac0(uVar12,"\n",1);
      if (lVar8 == 0) {
        uVar3 = param_1[1];
        uVar5 = param_1[2];
        do {
          lVar11 = lVar11 + -1;
          if (lVar11 == 0) {
            lVar8 = FUN_1801cbac0(uVar12,"]",1);
            goto joined_r0x0001801ce53c;
          }
          lVar8 = FUN_1801cbac0(uVar12,uVar3,uVar5);
        } while (lVar8 == 0);
      }
    }
  }
switchD_1801ce401_caseD_2:
  lVar11 = FUN_1801ff6a0(lVar8);
  return lVar11;
}


