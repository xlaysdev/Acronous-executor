/* FUN_1801e81c8 @ 1801e81c8 */

ulonglong FUN_1801e81c8(longlong *param_1,char param_2)

{
  ulonglong uVar1;
  char cVar2;
  char cVar3;
  byte bVar4;
  ulonglong uVar5;
  char *pcVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined8 uVar9;
  longlong *unaff_RDI;
  undefined7 uVar10;
  uint uVar11;
  undefined8 unaff_R14;
  longlong local_40;
  byte local_38;
  undefined7 uStack_37;
  char local_29;
  
  lVar7 = *param_1;
  local_29 = param_2;
  if (lVar7 == 0) {
LAB_1801e8603:
    if (param_1[4] != 0) {
      uVar5 = FUN_1801edcb0("?",1);
      return uVar5;
    }
    goto LAB_1801e8771;
  }
  uVar5 = param_1[1];
  uVar1 = param_1[2];
  if (uVar5 <= uVar1) goto switchD_1801e826d_caseD_53;
  cVar2 = *(char *)(lVar7 + uVar1);
  uVar8 = uVar1 + 1;
  param_1[2] = uVar8;
  uVar11 = (int)param_1[3] + 1;
  *(uint *)(param_1 + 3) = uVar11;
  uVar10 = (undefined7)((ulonglong)unaff_RDI >> 8);
  if (500 < uVar11) {
    if (param_1[4] != 0) {
      cVar2 = FUN_1801edcb0("{recursion limit reached}",0x19);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    goto LAB_1801e8771;
  }
  switch(cVar2) {
  case 'Q':
switchD_1801e826d_caseD_51:
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      cVar3 = FUN_1801edcb0(&DAT_1802923e3,1);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar3 != '\0') goto LAB_1801e8773;
    }
    if (param_1[4] != 0) {
      cVar3 = FUN_1801edcb0("&",1);
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar3 != '\0') goto LAB_1801e8773;
    }
    if ((cVar2 != 'R') && (param_1[4] != 0)) {
      cVar2 = FUN_1801edcb0("mut ",4);
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    cVar2 = FUN_1801e81c8(param_1,1);
    break;
  case 'R':
    if ((uVar5 <= uVar8) || (*(char *)(lVar7 + uVar8) != 'e')) goto switchD_1801e826d_caseD_51;
    param_1[2] = uVar1 + 2;
    cVar2 = FUN_1801e9382(param_1);
    goto LAB_1801e82b3;
  case 'S':
  case 'U':
  case 'W':
  case 'X':
  case 'Y':
  case 'Z':
  case '[':
  case '\\':
  case ']':
  case '^':
  case '_':
  case '`':
  case 'd':
  case 'f':
  case 'g':
  case 'k':
  case 'q':
  case 'r':
  case 'u':
  case 'v':
  case 'w':
    goto switchD_1801e826d_caseD_53;
  case 'T':
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      uVar8 = 1;
      cVar2 = FUN_1801edcb0(&DAT_1802923e3);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    if (param_1[4] != 0) {
      uVar8 = 1;
      cVar2 = FUN_1801edcb0("(");
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    uVar5 = FUN_1801e8ac1(param_1);
    unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    if ((uVar5 & 1) != 0) goto LAB_1801e8773;
    if (uVar8 == 1) {
      if (param_1[4] == 0) goto LAB_1801e8705;
      cVar2 = FUN_1801edcb0(",",1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
LAB_1801e8551:
    if (param_1[4] == 0) goto LAB_1801e8705;
    pcVar6 = ")";
LAB_1801e86f7:
    uVar9 = 1;
LAB_1801e86fc:
    cVar2 = FUN_1801edcb0(pcVar6,uVar9);
    break;
  case 'V':
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      cVar2 = FUN_1801edcb0(&DAT_1802923e3,1);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    cVar2 = FUN_1801e7288(param_1,1);
    if (cVar2 != '\0') goto LAB_1801e8773;
    if (*param_1 == 0) goto LAB_1801e8603;
    uVar5 = param_1[2];
    if ((ulonglong)param_1[1] <= uVar5) {
LAB_1801e85e0:
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
        goto LAB_1801e84ac;
      }
      goto LAB_1801e84b4;
    }
    cVar2 = *(char *)(*param_1 + uVar5);
    param_1[2] = uVar5 + 1;
    if (cVar2 == 'S') {
      if (((param_1[4] != 0) && (cVar2 = FUN_1801edcb0(&DAT_1802923e4,3), cVar2 != '\0')) ||
         (uVar5 = FUN_1801e8f68(param_1), (uVar5 & 1) != 0)) goto LAB_1801e8773;
      if (param_1[4] == 0) goto LAB_1801e8705;
      pcVar6 = &DAT_1802923e7;
      uVar9 = 2;
      goto LAB_1801e86fc;
    }
    if (cVar2 == 'T') {
      if (((param_1[4] != 0) && (cVar2 = FUN_1801edcb0("(",1), cVar2 != '\0')) ||
         (uVar5 = FUN_1801e8b55(param_1), (uVar5 & 1) != 0)) goto LAB_1801e8773;
      goto LAB_1801e8551;
    }
    if (cVar2 != 'U') goto LAB_1801e85e0;
    goto LAB_1801e8705;
  case 'a':
  case 'i':
  case 'l':
  case 'n':
  case 's':
  case 'x':
    if (((uVar8 < uVar5) && (*(char *)(lVar7 + uVar8) == 'n')) &&
       (param_1[2] = uVar1 + 2, param_1[4] != 0)) {
      cVar3 = FUN_1801edcb0(&DAT_1802923d2,1);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar3 != '\0') goto LAB_1801e8773;
    }
  case 'h':
  case 'j':
  case 'm':
  case 'o':
  case 't':
  case 'y':
    cVar2 = FUN_1801e91d1(param_1,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),cVar2) & 0xffffffff);
    goto LAB_1801e82b3;
  case 'b':
    unaff_RDI = &local_40;
    FUN_1801e6eaa(unaff_RDI,param_1);
    if (local_40 == 0) {
LAB_1801e8730:
      if (param_1[4] != 0) {
        pcVar6 = "{invalid syntax}";
        if (local_38 != 0) {
          pcVar6 = "{recursion limit reached}";
        }
        cVar2 = FUN_1801edcb0(pcVar6,(ulonglong)local_38 * 9 + 0x10);
        unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)&local_40 >> 8),1);
        if (cVar2 != '\0') goto LAB_1801e8773;
      }
      *param_1 = 0;
      *(byte *)(param_1 + 1) = local_38;
      goto LAB_1801e8771;
    }
    lVar7 = CONCAT71(uStack_37,local_38);
    uVar5 = FUN_1801e6ccd();
    if ((uVar5 & 1) == 0) goto switchD_1801e826d_caseD_53;
    if (lVar7 == 0) {
      if (param_1[4] == 0) goto LAB_1801e82be;
      pcVar6 = &DAT_1802923da;
      uVar9 = 5;
      goto LAB_1801e8726;
    }
    if (lVar7 != 1) goto switchD_1801e826d_caseD_53;
    if (param_1[4] != 0) {
      pcVar6 = &DAT_1802923df;
      uVar9 = 4;
      goto LAB_1801e8726;
    }
    goto LAB_1801e82be;
  case 'c':
    unaff_RDI = &local_40;
    FUN_1801e6eaa(unaff_RDI,param_1);
    if (local_40 == 0) goto LAB_1801e8730;
    uVar5 = CONCAT71(uStack_37,local_38);
    bVar4 = FUN_1801e6ccd();
    uVar11 = 0x110000;
    if (0xffef07ff < ((uint)uVar5 ^ 0xd800) - 0x110000) {
      uVar11 = (uint)uVar5;
    }
    if (((uVar5 >> 0x20 == 0 & bVar4) == 1) && (uVar11 != 0x110000)) {
      cVar2 = FUN_1801e979d(param_1);
      goto LAB_1801e82b3;
    }
    goto switchD_1801e826d_caseD_53;
  case 'e':
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      cVar2 = FUN_1801edcb0(&DAT_1802923e3,1);
      unaff_RDI = (longlong *)CONCAT71(uVar10,1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    if (param_1[4] != 0) {
      cVar2 = FUN_1801edcb0("*",1);
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
    cVar2 = FUN_1801e9382(param_1);
    unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
    break;
  case 'p':
    if (param_1[4] == 0) goto LAB_1801e82be;
    pcVar6 = &DAT_1802922c4;
    goto LAB_1801e8721;
  default:
    if (cVar2 == 'A') {
      if ((param_2 == '\0') && (param_1[4] != 0)) {
        cVar2 = FUN_1801edcb0(&DAT_1802923e3,1);
        unaff_RDI = (longlong *)CONCAT71(uVar10,1);
        if (cVar2 != '\0') goto LAB_1801e8773;
      }
      if (param_1[4] != 0) {
        cVar2 = FUN_1801edcb0("[",1);
        unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
        if (cVar2 != '\0') goto LAB_1801e8773;
      }
      uVar5 = FUN_1801e8b55(param_1);
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if ((uVar5 & 1) != 0) goto LAB_1801e8773;
      if (param_1[4] == 0) goto LAB_1801e8705;
      pcVar6 = "]";
      goto LAB_1801e86f7;
    }
    if (cVar2 == 'B') {
      cVar2 = FUN_1801e8817(param_1,&local_29);
      goto LAB_1801e82b3;
    }
switchD_1801e826d_caseD_53:
    if (param_1[4] != 0) {
      cVar2 = FUN_1801edcb0("{invalid syntax}",0x10);
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
LAB_1801e84ac:
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
LAB_1801e84b4:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_1801e8771;
  }
  if (cVar2 == '\0') {
LAB_1801e8705:
    if ((param_2 == '\0') && (param_1[4] != 0)) {
      pcVar6 = "}";
LAB_1801e8721:
      uVar9 = 1;
LAB_1801e8726:
      cVar2 = FUN_1801edcb0(pcVar6,uVar9);
LAB_1801e82b3:
      unaff_RDI = (longlong *)CONCAT71((int7)((ulonglong)unaff_RDI >> 8),1);
      if (cVar2 != '\0') goto LAB_1801e8773;
    }
LAB_1801e82be:
    if (*param_1 != 0) {
      *(int *)(param_1 + 3) = (int)param_1[3] + -1;
    }
LAB_1801e8771:
    unaff_RDI = (longlong *)0x0;
  }
LAB_1801e8773:
  return (ulonglong)unaff_RDI & 0xffffffff;
}


