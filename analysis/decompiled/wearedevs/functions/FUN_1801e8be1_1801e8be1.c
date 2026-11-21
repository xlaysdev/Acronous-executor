/* FUN_1801e8be1 @ 1801e8be1 */

undefined8 FUN_1801e8be1(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  byte bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined8 uVar6;
  longlong lVar7;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  lVar4 = *param_1;
  if (lVar4 != 0) {
    lVar7 = 0;
    do {
      uVar1 = param_1[2];
      if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(lVar4 + uVar1) == 'E')) {
        param_1[2] = uVar1 + 1;
        return 0;
      }
      if ((((lVar7 != 0) && (param_1[4] != 0)) && (cVar2 = FUN_1801edcb0(" + ",3), cVar2 != '\0'))
         || (bVar3 = FUN_1801e9959(param_1), bVar3 == 2)) {
        return 1;
      }
      while (((*param_1 != 0 && (uVar1 = param_1[2], uVar1 < (ulonglong)param_1[1])) &&
             (*(char *)(*param_1 + uVar1) == 'p'))) {
        param_1[2] = uVar1 + 1;
        if ((bVar3 & 1) == 0) {
          if (param_1[4] != 0) {
            uVar6 = 1;
            pcVar5 = "<";
            goto LAB_1801e8cc2;
          }
        }
        else if (param_1[4] != 0) {
          uVar6 = 2;
          pcVar5 = ", ";
LAB_1801e8cc2:
          cVar2 = FUN_1801edcb0(pcVar5,uVar6);
          if (cVar2 != '\0') {
            return 1;
          }
        }
        if (*param_1 == 0) {
          if (param_1[4] == 0) goto LAB_1801e8daa;
          pcVar5 = "?";
          goto LAB_1801e8da1;
        }
        FUN_1801e6fcb(&local_60,param_1);
        if (CONCAT44(uStack_5c,local_60) == 0) {
          if (param_1[4] != 0) {
            pcVar5 = "{invalid syntax}";
            if ((byte)uStack_58 != 0) {
              pcVar5 = "{recursion limit reached}";
            }
            cVar2 = FUN_1801edcb0(pcVar5,(ulonglong)(byte)uStack_58 * 9 + 0x10);
            if (cVar2 != '\0') {
              return 1;
            }
          }
          *param_1 = 0;
          *(byte *)(param_1 + 1) = (byte)uStack_58;
          return 0;
        }
        local_78 = local_50;
        uStack_74 = uStack_4c;
        uStack_70 = uStack_48;
        uStack_6c = uStack_44;
        local_88 = local_60;
        uStack_84 = uStack_5c;
        uStack_80 = uStack_58;
        uStack_7c = uStack_54;
        if (param_1[4] != 0) {
          cVar2 = FUN_1801eaf33(&local_88);
          if (cVar2 != '\0') {
            return 1;
          }
          if ((param_1[4] != 0) && (cVar2 = FUN_1801edcb0(&DAT_1802923eb,3), cVar2 != '\0')) {
            return 1;
          }
        }
        cVar2 = FUN_1801e7926(param_1);
        bVar3 = 1;
        if (cVar2 != '\0') {
          return 1;
        }
      }
      if (((bVar3 & 1) != 0) && (param_1[4] != 0)) {
        pcVar5 = ">";
LAB_1801e8da1:
        cVar2 = FUN_1801edcb0(pcVar5,1);
        if (cVar2 != '\0') {
          return 1;
        }
      }
LAB_1801e8daa:
      lVar4 = *param_1;
      lVar7 = lVar7 + 1;
    } while (lVar4 != 0);
  }
  return 0;
}


