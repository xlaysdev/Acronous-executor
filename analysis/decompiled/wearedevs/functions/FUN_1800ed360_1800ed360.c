/* FUN_1800ed360 @ 1800ed360 */

ulonglong FUN_1800ed360(ulonglong param_1)

{
  uint uVar1;
  undefined7 uVar3;
  ulonglong uVar2;
  int iVar4;
  
  uVar1 = (uint)param_1 & 3;
  iVar4 = (int)(param_1 >> 0x20);
  switch(uVar1) {
  case 0:
    return (ulonglong)*(byte *)(param_1 + 0x10);
  case 1:
    uVar2 = (ulonglong)*(byte *)(param_1 + 0xf);
switchD_1800ed3b1_caseD_5:
    return uVar2;
  case 3:
    return param_1 >> 0x20;
  }
  uVar3 = (undefined7)
          ((ulonglong)
           ((longlong)&switchD_1800ed373::switchdataD_180216c48 +
           (longlong)(int)(&switchD_1800ed373::switchdataD_180216c48)[uVar1]) >> 8);
  uVar2 = CONCAT71(uVar3,1);
  if (iVar4 < 0x461) {
    if (iVar4 < 0x150) {
      switch(iVar4) {
      case 2:
      case 3:
      case 0xf:
      case 0x35:
      case 0x43:
        return 0;
      default:
        goto switchD_1800ed3b1_caseD_4;
      case 5:
        goto switchD_1800ed3b1_caseD_5;
      case 8:
      case 0xe:
        return CONCAT71(uVar3,0x26);
      case 0x11:
        return CONCAT71(uVar3,0x1f);
      case 0x13:
        return CONCAT71(uVar3,0x11);
      case 0x27:
      case 0x70:
        return CONCAT71(uVar3,0x18);
      case 0x50:
      case 0xb7:
        return CONCAT71(uVar3,0xc);
      case 0x57:
switchD_1800ed3b1_caseD_57:
        return CONCAT71(uVar3,0x14);
      case 0x6d:
      case 0xe8:
        return CONCAT71(uVar3,0xb);
      case 0x78:
        return CONCAT71(uVar3,0x24);
      case 0x79:
      case 0x102:
        goto switchD_1800ed3b1_caseD_79;
      case 0x7b:
      case 0xa1:
      case 0xce:
        return CONCAT71(uVar3,0x21);
      case 0x84:
        return CONCAT71(uVar3,0x19);
      case 0x91:
        return CONCAT71(uVar3,0x10);
      case 0xaa:
        return CONCAT71(uVar3,0x1c);
      case 0xdf:
        return CONCAT71(uVar3,0x1b);
      case 0x10b:
        return CONCAT71(uVar3,0xe);
      }
    }
    if (iVar4 < 0x3e3) {
      if (iVar4 == 0x150) {
        return CONCAT71(uVar3,0xf);
      }
      if (iVar4 == 0x252) goto switchD_1800ed3b1_caseD_79;
    }
    else if ((iVar4 == 0x3e3) || (iVar4 == 0x41d)) goto switchD_1800ed3b1_caseD_79;
    goto switchD_1800ed3b1_caseD_4;
  }
  if (iVar4 < 0x271d) {
    if (iVar4 < 0x781) {
      if (iVar4 < 0x4cf) {
        if (iVar4 == 0x461) goto switchD_1800ed3b1_caseD_79;
        if (iVar4 == 0x46b) {
          return CONCAT71(uVar3,0x1e);
        }
        if (iVar4 == 0x476) {
          return CONCAT71(uVar3,0x20);
        }
      }
      else if (iVar4 < 0x50f) {
        if (iVar4 == 0x4cf) goto switchD_1800ed3e7_caseD_2743;
        if (iVar4 == 0x4d0) goto switchD_1800ed3e7_caseD_2751;
      }
      else {
        if (iVar4 == 0x50f) goto switchD_1800ed3e7_caseD_2755;
        if (iVar4 == 0x5b4) goto switchD_1800ed3b1_caseD_79;
      }
    }
    else if (iVar4 < 0x1b80) {
      if (iVar4 == 0x781) {
        return CONCAT71(uVar3,0x12);
      }
      if ((iVar4 == 0x1716) || (iVar4 == 0x1b64)) goto switchD_1800ed3b1_caseD_79;
    }
    else if (iVar4 < 0x2022) {
      if ((iVar4 == 0x1b80) || (iVar4 == 0x1f4e)) goto switchD_1800ed3b1_caseD_79;
    }
    else if ((iVar4 == 0x2022) || (iVar4 == 0x25e9)) goto switchD_1800ed3b1_caseD_79;
  }
  else {
    switch(iVar4) {
    case 0x271d:
      goto switchD_1800ed3b1_caseD_5;
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
      goto switchD_1800ed3b1_caseD_57;
    case 0x2733:
      return CONCAT71(uVar3,0xd);
    case 0x2740:
      return CONCAT71(uVar3,8);
    case 0x2741:
      return CONCAT71(uVar3,9);
    case 0x2742:
      return CONCAT71(uVar3,10);
    case 0x2743:
switchD_1800ed3e7_caseD_2743:
      return CONCAT71(uVar3,5);
    case 0x2745:
      return CONCAT71(uVar3,6);
    case 0x2746:
      return CONCAT71(uVar3,3);
    case 0x2749:
      return CONCAT71(uVar3,7);
    case 0x274c:
switchD_1800ed3b1_caseD_79:
      return CONCAT71((int7)(uVar2 >> 8),0x16);
    case 0x274d:
      return CONCAT71(uVar3,2);
    case 0x2751:
switchD_1800ed3e7_caseD_2751:
      return CONCAT71(uVar3,4);
    case 0x2755:
switchD_1800ed3e7_caseD_2755:
      return CONCAT71(uVar3,0x1a);
    default:
      uVar2 = (ulonglong)(iVar4 - 0x3c2aU);
      if ((iVar4 - 0x3c2aU < 2) || (iVar4 == 0x35ed)) goto switchD_1800ed3b1_caseD_79;
    }
  }
switchD_1800ed3b1_caseD_4:
  return CONCAT71((int7)(uVar2 >> 8),0x29);
}


