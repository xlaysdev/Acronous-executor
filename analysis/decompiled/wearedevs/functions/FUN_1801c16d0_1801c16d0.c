/* FUN_1801c16d0 @ 1801c16d0 */

ulonglong FUN_1801c16d0(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  uint7 uVar4;
  ulonglong uVar3;
  int iVar5;
  
  if (*param_1 != 2) {
    return 0;
  }
  lVar1 = *(longlong *)(param_1 + 2);
  uVar2 = (uint)lVar1 & 3;
  iVar5 = (int)((ulonglong)lVar1 >> 0x20);
  switch(uVar2) {
  case 0:
    uVar3 = (ulonglong)*(byte *)(lVar1 + 0x10);
switchD_1801c1732_caseD_5:
    return CONCAT71((int7)(uVar3 >> 8),(char)uVar3 == '$');
  case 1:
    return (ulonglong)(*(char *)(lVar1 + 0xf) == '$');
  case 3:
    return CONCAT71((uint7)((ulonglong)lVar1 >> 0x28),(char)((ulonglong)lVar1 >> 0x20) == '$');
  }
  uVar4 = (uint7)((ulonglong)
                  ((longlong)&switchD_1801c16ec::switchdataD_1802873b0 +
                  (longlong)(int)(&switchD_1801c16ec::switchdataD_1802873b0)[uVar2]) >> 8);
  uVar3 = CONCAT71(uVar4,1);
  if (iVar5 < 0x461) {
    if (iVar5 < 0x150) {
      switch(iVar5) {
      case 2:
      case 3:
      case 0xf:
      case 0x35:
      case 0x43:
        return 0;
      default:
        goto switchD_1801c1732_caseD_4;
      case 5:
        goto switchD_1801c1732_caseD_5;
      case 8:
      case 0xe:
        return (ulonglong)uVar4 << 8;
      case 0x11:
        return (ulonglong)uVar4 << 8;
      case 0x13:
        return (ulonglong)uVar4 << 8;
      case 0x27:
      case 0x70:
        return (ulonglong)uVar4 << 8;
      case 0x50:
      case 0xb7:
        return (ulonglong)uVar4 << 8;
      case 0x57:
switchD_1801c1732_caseD_57:
        return (ulonglong)uVar4 << 8;
      case 0x6d:
      case 0xe8:
        return (ulonglong)uVar4 << 8;
      case 0x78:
        return CONCAT71(uVar4,1);
      case 0x79:
      case 0x102:
        goto switchD_1801c1732_caseD_79;
      case 0x7b:
      case 0xa1:
      case 0xce:
        return (ulonglong)uVar4 << 8;
      case 0x84:
        return (ulonglong)uVar4 << 8;
      case 0x91:
        return (ulonglong)uVar4 << 8;
      case 0xaa:
        return (ulonglong)uVar4 << 8;
      case 0xdf:
        return (ulonglong)uVar4 << 8;
      case 0x10b:
        return (ulonglong)uVar4 << 8;
      }
    }
    if (iVar5 < 0x3e3) {
      if (iVar5 == 0x150) {
        return (ulonglong)uVar4 << 8;
      }
      if (iVar5 == 0x252) goto switchD_1801c1732_caseD_79;
    }
    else if ((iVar5 == 0x3e3) || (iVar5 == 0x41d)) goto switchD_1801c1732_caseD_79;
    goto switchD_1801c1732_caseD_4;
  }
  if (iVar5 < 0x271d) {
    if (iVar5 < 0x781) {
      if (iVar5 < 0x4cf) {
        if (iVar5 == 0x461) goto switchD_1801c1732_caseD_79;
        if (iVar5 == 0x46b) {
          return (ulonglong)uVar4 << 8;
        }
        if (iVar5 == 0x476) {
          return (ulonglong)uVar4 << 8;
        }
      }
      else if (iVar5 < 0x50f) {
        if (iVar5 == 0x4cf) goto switchD_1801c1777_caseD_2743;
        if (iVar5 == 0x4d0) goto switchD_1801c1777_caseD_2751;
      }
      else {
        if (iVar5 == 0x50f) goto switchD_1801c1777_caseD_2755;
        if (iVar5 == 0x5b4) goto switchD_1801c1732_caseD_79;
      }
    }
    else if (iVar5 < 0x1b80) {
      if (iVar5 == 0x781) {
        return (ulonglong)uVar4 << 8;
      }
      if ((iVar5 == 0x1716) || (iVar5 == 0x1b64)) goto switchD_1801c1732_caseD_79;
    }
    else if (iVar5 < 0x2022) {
      if ((iVar5 == 0x1b80) || (iVar5 == 0x1f4e)) goto switchD_1801c1732_caseD_79;
    }
    else if ((iVar5 == 0x2022) || (iVar5 == 0x25e9)) goto switchD_1801c1732_caseD_79;
  }
  else {
    switch(iVar5) {
    case 0x271d:
      goto switchD_1801c1732_caseD_5;
    case 0x271e:
    case 0x271f:
    case 0x2720:
    case 0x2721:
    case 0x2722:
    case 0x2723:
    case 0x2724:
    case 0x2725:
    case 0x2727:
    case 0x2728:
    case 0x2729:
    case 0x272a:
    case 0x272b:
    case 0x272c:
    case 0x272d:
    case 0x272e:
    case 0x272f:
    case 0x2730:
    case 0x2731:
    case 0x2732:
    case 0x2734:
    case 0x2735:
    case 0x2736:
    case 0x2737:
    case 0x2738:
    case 0x2739:
    case 0x273a:
    case 0x273b:
    case 0x273c:
    case 0x273d:
    case 0x273e:
    case 0x273f:
    case 0x2744:
    case 0x2747:
    case 0x2748:
    case 0x274a:
    case 0x274b:
    case 0x274e:
    case 0x274f:
    case 0x2750:
    case 0x2752:
    case 0x2753:
    case 0x2754:
      break;
    case 0x2726:
      goto switchD_1801c1732_caseD_57;
    case 0x2733:
      return (ulonglong)uVar4 << 8;
    case 0x2740:
      return (ulonglong)uVar4 << 8;
    case 0x2741:
      return (ulonglong)uVar4 << 8;
    case 0x2742:
      return (ulonglong)uVar4 << 8;
    case 0x2743:
switchD_1801c1777_caseD_2743:
      return (ulonglong)uVar4 << 8;
    case 0x2745:
      return (ulonglong)uVar4 << 8;
    case 0x2746:
      return (ulonglong)uVar4 << 8;
    case 0x2749:
      return (ulonglong)uVar4 << 8;
    case 0x274c:
switchD_1801c1732_caseD_79:
      return uVar3 & 0xffffffffffffff00;
    case 0x274d:
      return (ulonglong)uVar4 << 8;
    case 0x2751:
switchD_1801c1777_caseD_2751:
      return (ulonglong)uVar4 << 8;
    case 0x2755:
switchD_1801c1777_caseD_2755:
      return (ulonglong)uVar4 << 8;
    default:
      uVar3 = (ulonglong)(iVar5 - 0x3c2aU);
      if ((iVar5 - 0x3c2aU < 2) || (iVar5 == 0x35ed)) goto switchD_1801c1732_caseD_79;
    }
  }
switchD_1801c1732_caseD_4:
  return uVar3 & 0xffffffffffffff00;
}


