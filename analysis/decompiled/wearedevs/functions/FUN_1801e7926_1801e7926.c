/* FUN_1801e7926 @ 1801e7926 */

ulonglong FUN_1801e7926(longlong *param_1,longlong param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  char *pcVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 unaff_RBX;
  char *pcVar8;
  undefined7 uVar9;
  char local_38;
  byte local_37;
  longlong local_30;
  
  pcVar8 = (char *)*param_1;
  if (pcVar8 == (char *)0x0) {
    if (param_1[4] != 0) {
      pcVar4 = "?";
LAB_1801e7985:
      uVar5 = FUN_1801edcb0(pcVar4);
      return uVar5;
    }
    goto LAB_1801e79c0;
  }
  uVar5 = param_1[2];
  uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
  if ((ulonglong)param_1[1] <= uVar5) {
    if (param_1[4] != 0) {
      cVar1 = FUN_1801edcb0("{invalid syntax}",0x10);
      pcVar8 = (char *)CONCAT71(uVar9,1);
LAB_1801e79b1:
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
LAB_1801e79b5:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_1801e79c0;
  }
  cVar1 = pcVar8[uVar5];
  param_1[2] = uVar5 + 1;
  pcVar4 = (char *)FUN_1801e6dde(CONCAT71((int7)((ulonglong)unaff_RBX >> 8),cVar1) & 0xffffffff);
  if (pcVar4 != (char *)0x0) {
    if (param_1[4] != 0) goto LAB_1801e7985;
    goto LAB_1801e79c0;
  }
  uVar3 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar3;
  if (500 < uVar3) {
    if (param_1[4] != 0) {
      cVar1 = FUN_1801edcb0("{recursion limit reached}",0x19);
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_1801e79c0;
  }
  switch(cVar1) {
  case 'A':
  case 'S':
    if (param_1[4] != 0) {
      cVar2 = FUN_1801edcb0("[",1);
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar2 != '\0') goto LAB_1801e79c2;
    }
    cVar2 = FUN_1801e7926(param_1);
    uVar9 = (undefined7)((ulonglong)pcVar8 >> 8);
    pcVar8 = (char *)CONCAT71(uVar9,1);
    if (cVar2 != '\0') goto LAB_1801e79c2;
    if (cVar1 == 'A') {
      if ((param_1[4] != 0) && (cVar1 = FUN_1801edcb0("; ",2), cVar1 != '\0')) goto LAB_1801e79c2;
      pcVar8 = (char *)CONCAT71(uVar9,1);
      cVar1 = FUN_1801e81c8(param_1,1);
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
    pcVar8 = (char *)CONCAT71(uVar9,1);
    if (param_1[4] != 0) {
      cVar1 = FUN_1801edcb0("]",1);
      break;
    }
    goto LAB_1801e7df7;
  case 'B':
    cVar1 = FUN_1801e88fd(param_1);
    break;
  default:
    param_1[2] = uVar5;
    cVar1 = FUN_1801e7288(param_1,0);
    break;
  case 'D':
    if (param_1[4] != 0) {
      cVar1 = FUN_1801edcb0("dyn ",4);
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
    cVar1 = FUN_1801e9c05(param_1);
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
    if (cVar1 != '\0') goto LAB_1801e79c2;
    if (((*param_1 == 0) || (uVar5 = param_1[2], (ulonglong)param_1[1] <= uVar5)) ||
       (*(char *)(*param_1 + uVar5) != 'L')) {
      if (param_1[4] != 0) {
        cVar1 = FUN_1801edcb0("{invalid syntax}",0x10);
        goto LAB_1801e79b1;
      }
      goto LAB_1801e79b5;
    }
    param_1[2] = uVar5 + 1;
    FUN_1801e6e06(&local_38,param_1);
    if (local_38 == '\0') {
      if (local_30 == 0) goto LAB_1801e7df7;
      if ((param_1[4] != 0) && (cVar1 = FUN_1801edcb0(" + ",3), cVar1 != '\0')) goto LAB_1801e79c2;
      cVar1 = FUN_1801e96ba(param_1,local_30);
      goto LAB_1801e7def;
    }
    if (param_1[4] != 0) {
      pcVar4 = "{invalid syntax}";
      bVar7 = local_37;
      if (local_37 != 0) {
        pcVar4 = "{recursion limit reached}";
      }
LAB_1801e7ba1:
      cVar1 = FUN_1801edcb0(pcVar4,(ulonglong)bVar7 * 9 + 0x10);
      pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
      local_37 = bVar7;
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
LAB_1801e7bb1:
    *param_1 = 0;
    *(byte *)(param_1 + 1) = local_37;
    goto LAB_1801e79c0;
  case 'F':
    cVar1 = FUN_1801e9a9b(param_1);
    break;
  case 'O':
  case 'P':
    if (param_1[4] != 0) {
      cVar2 = FUN_1801edcb0("*",1);
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar2 != '\0') goto LAB_1801e79c2;
    }
    if (cVar1 == 'P') {
      if (param_1[4] == 0) goto LAB_1801e7de4;
      pcVar4 = "const ";
      uVar6 = 6;
    }
    else {
LAB_1801e7dbf:
      if (param_1[4] == 0) goto LAB_1801e7de4;
      pcVar4 = "mut ";
      uVar6 = 4;
    }
    cVar1 = FUN_1801edcb0(pcVar4,uVar6);
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
    if (cVar1 != '\0') goto LAB_1801e79c2;
    goto LAB_1801e7de4;
  case 'Q':
  case 'R':
    if (param_1[4] == 0) {
LAB_1801e7b3f:
      uVar5 = param_1[2];
      if ((uVar5 < (ulonglong)param_1[1]) && (pcVar8[uVar5] == 'L')) {
        param_1[2] = uVar5 + 1;
        pcVar8 = &local_38;
        FUN_1801e6e06(pcVar8,param_1);
        if (local_38 != '\0') {
          if (param_1[4] != 0) {
            pcVar4 = "{invalid syntax}";
            bVar7 = local_37;
            if (local_37 != 0) {
              pcVar4 = "{recursion limit reached}";
            }
            goto LAB_1801e7ba1;
          }
          goto LAB_1801e7bb1;
        }
        if (local_30 != 0) {
          cVar2 = FUN_1801e96ba(param_1);
          pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
          if ((cVar2 != '\0') ||
             ((param_1[4] != 0 && (cVar2 = FUN_1801edcb0(" ",1), cVar2 != '\0'))))
          goto LAB_1801e79c2;
        }
      }
    }
    else {
      cVar2 = FUN_1801edcb0("&",1);
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar2 != '\0') goto LAB_1801e79c2;
      pcVar8 = (char *)*param_1;
      if (pcVar8 != (char *)0x0) goto LAB_1801e7b3f;
    }
    if (cVar1 != 'R') goto LAB_1801e7dbf;
LAB_1801e7de4:
    cVar1 = FUN_1801e7926(param_1);
    break;
  case 'T':
    if (param_1[4] != 0) {
      param_2 = 1;
      cVar1 = FUN_1801edcb0("(");
      pcVar8 = (char *)CONCAT71(uVar9,1);
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
    uVar5 = FUN_1801e913f(param_1);
    pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
    if ((uVar5 & 1) != 0) goto LAB_1801e79c2;
    if (param_2 == 1) {
      if (param_1[4] == 0) goto LAB_1801e7df7;
      cVar1 = FUN_1801edcb0(",",1);
      if (cVar1 != '\0') goto LAB_1801e79c2;
    }
    if (param_1[4] == 0) goto LAB_1801e7df7;
    cVar1 = FUN_1801edcb0(")",1);
    goto LAB_1801e7def;
  case 'W':
    cVar1 = FUN_1801e7926(param_1);
    pcVar8 = (char *)CONCAT71(uVar9,1);
    if ((cVar1 != '\0') || ((param_1[4] != 0 && (cVar1 = FUN_1801edcb0(" is ",4), cVar1 != '\0'))))
    goto LAB_1801e79c2;
    cVar1 = FUN_1801e9d70(param_1);
    goto LAB_1801e7def;
  }
  pcVar8 = (char *)CONCAT71((int7)((ulonglong)pcVar8 >> 8),1);
LAB_1801e7def:
  if (cVar1 == '\0') {
LAB_1801e7df7:
    if (*param_1 != 0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    }
LAB_1801e79c0:
    pcVar8 = (char *)0x0;
  }
LAB_1801e79c2:
  return (ulonglong)pcVar8 & 0xffffffff;
}


