/* FUN_1801e9959 @ 1801e9959 */

ulonglong FUN_1801e9959(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  undefined4 uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  char *pcVar9;
  undefined8 unaff_RDI;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (uVar7 = param_1[2], uVar7 < (ulonglong)param_1[1])) {
    if (*(char *)(lVar1 + uVar7) == 'B') {
      param_1[2] = uVar7 + 1;
      FUN_1801e71c0(&local_38,param_1);
      if (CONCAT44(uStack_34,local_38) == 0) {
        if (param_1[4] != 0) {
          pcVar9 = "{invalid syntax}";
          if ((byte)uStack_30 != 0) {
            pcVar9 = "{recursion limit reached}";
          }
          cVar5 = FUN_1801edcb0(pcVar9,(ulonglong)(byte)uStack_30 * 9 + 0x10);
          if (cVar5 != '\0') {
            uVar7 = CONCAT71((int7)((ulonglong)&local_38 >> 8),2);
            goto LAB_1801e9a45;
          }
        }
        param_1[2] = CONCAT44(uStack_24,local_28);
        param_1[3] = CONCAT44(uStack_1c,uStack_20);
        *param_1 = CONCAT44(uStack_34,local_38);
        param_1[1] = CONCAT44(uStack_2c,uStack_30);
      }
      else if (param_1[4] != 0) {
        lVar1 = *param_1;
        lVar2 = param_1[1];
        lVar3 = param_1[2];
        lVar4 = param_1[3];
        *(undefined4 *)param_1 = local_38;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_34;
        *(undefined4 *)(param_1 + 1) = uStack_30;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_2c;
        *(undefined4 *)(param_1 + 2) = local_28;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_24;
        *(undefined4 *)(param_1 + 3) = uStack_20;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_1c;
        uVar7 = FUN_1801e9959(param_1);
        *param_1 = lVar1;
        param_1[1] = lVar2;
        param_1[2] = lVar3;
        param_1[3] = lVar4;
        return uVar7;
      }
      uVar7 = 0;
      goto LAB_1801e9a45;
    }
    if (*(char *)(lVar1 + uVar7) == 'I') {
      param_1[2] = uVar7 + 1;
      cVar5 = FUN_1801e7288(param_1,0);
      uVar7 = CONCAT71((int7)((ulonglong)unaff_RDI >> 8),2);
      if ((cVar5 == '\0') && ((param_1[4] == 0 || (cVar5 = FUN_1801edcb0("<",1), cVar5 == '\0')))) {
        uVar8 = FUN_1801e8e2f(param_1);
        uVar7 = CONCAT71((int7)((ulonglong)uVar8 >> 8),(char)uVar8 + '\x01');
      }
      goto LAB_1801e9a45;
    }
  }
  uVar6 = FUN_1801e7288(param_1,0);
  uVar7 = (ulonglong)CONCAT31((int3)((uint)uVar6 >> 8),(char)uVar6 * '\x02');
LAB_1801e9a45:
  return uVar7 & 0xffffffff;
}


