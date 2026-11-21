/* FUN_1801e9d70 @ 1801e9d70 */

ulonglong FUN_1801e9d70(longlong *param_1)

{
  ulonglong uVar1;
  char cVar2;
  uint uVar3;
  ulonglong uVar4;
  undefined8 unaff_RDI;
  undefined7 uVar5;
  
  if (*param_1 == 0) {
    if (param_1[4] != 0) {
      uVar4 = FUN_1801edcb0("?",1);
      return uVar4;
    }
  }
  else {
    uVar4 = param_1[2];
    uVar5 = (undefined7)((ulonglong)unaff_RDI >> 8);
    if (uVar4 < (ulonglong)param_1[1]) {
      cVar2 = *(char *)(*param_1 + uVar4);
      param_1[2] = uVar4 + 1;
      if (cVar2 == 'N') {
        if (param_1[4] != 0) {
          cVar2 = FUN_1801edcb0("!null",5);
          goto LAB_1801e9eaf;
        }
      }
      else if (cVar2 == 'O') {
        uVar3 = (int)param_1[3] + 1;
        *(uint *)(param_1 + 3) = uVar3;
        if (uVar3 < 0x1f5) {
          cVar2 = FUN_1801e9d70(param_1);
          uVar4 = CONCAT71(uVar5,1);
          while (cVar2 == '\0') {
            if (*param_1 == 0) {
              if (param_1[4] == 0) goto LAB_1801e9e23;
              cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
              goto LAB_1801e9e1b;
            }
            uVar1 = param_1[2];
            if ((uVar1 < (ulonglong)param_1[1]) && (*(char *)(*param_1 + uVar1) == 'E')) {
              param_1[2] = uVar1 + 1;
              *(int *)(param_1 + 3) = (int)param_1[3] + -1;
              goto LAB_1801e9eb3;
            }
            if ((param_1[4] != 0) && (cVar2 = FUN_1801edcb0(" | ",3), cVar2 != '\0')) break;
            cVar2 = FUN_1801e9d70(param_1);
          }
          goto LAB_1801e9eb5;
        }
        if (param_1[4] != 0) {
          cVar2 = FUN_1801edcb0("{recursion limit reached}",0x19);
          uVar4 = CONCAT71(uVar5,1);
          if (cVar2 != '\0') goto LAB_1801e9eb5;
        }
        *param_1 = 0;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        if (cVar2 != 'R') goto LAB_1801e9dfe;
        cVar2 = FUN_1801e81c8(param_1,0);
        uVar4 = CONCAT71(uVar5,1);
        if ((cVar2 != '\0') ||
           ((param_1[4] != 0 && (cVar2 = FUN_1801edcb0("..=",3), cVar2 != '\0'))))
        goto LAB_1801e9eb5;
        cVar2 = FUN_1801e81c8(param_1,0);
LAB_1801e9eaf:
        uVar4 = CONCAT71(uVar5,1);
        if (cVar2 != '\0') goto LAB_1801e9eb5;
      }
    }
    else {
LAB_1801e9dfe:
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
LAB_1801e9e1b:
        uVar4 = CONCAT71(uVar5,1);
        if (cVar2 != '\0') goto LAB_1801e9eb5;
      }
LAB_1801e9e23:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
LAB_1801e9eb3:
  uVar4 = 0;
LAB_1801e9eb5:
  return uVar4 & 0xffffffff;
}


