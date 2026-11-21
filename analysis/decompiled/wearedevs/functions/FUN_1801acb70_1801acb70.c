/* FUN_1801acb70 @ 1801acb70 */

longlong * FUN_1801acb70(longlong *param_1,longlong *param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong lVar3;
  bool bVar4;
  longlong lVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong lVar9;
  bool bVar10;
  
  lVar2 = param_2[1];
  lVar3 = param_2[2];
  if (lVar3 == 0) {
    uVar7 = 10;
  }
  else {
    uVar8 = 0;
    bVar6 = false;
    bVar10 = false;
    bVar4 = false;
    lVar5 = 0;
    lVar9 = lVar3;
    do {
      bVar1 = *(byte *)(lVar2 + lVar5);
      switch((&DAT_1802837f8)[bVar1]) {
      case 0x23:
      case 0x2f:
      case 0x3f:
        goto switchD_1801acbdd_caseD_23;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
      case 0x28:
      case 0x29:
      case 0x2a:
      case 0x2b:
      case 0x2c:
      case 0x2d:
      case 0x2e:
      case 0x30:
      case 0x31:
      case 0x32:
      case 0x33:
      case 0x34:
      case 0x35:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
      case 0x3b:
      case 0x3c:
      case 0x3d:
      case 0x3e:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
      case 0x54:
      case 0x55:
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
      case 0x5a:
      case 0x5c:
        break;
      case 0x3a:
        if (7 < uVar8) {
          uVar7 = 2;
          goto LAB_1801acc83;
        }
        uVar8 = uVar8 + 1;
        break;
      case 0x40:
        lVar9 = lVar5;
        goto LAB_1801acbb9;
      case 0x5b:
        uVar7 = 2;
        if ((bVar4) || (bVar6 != false)) goto LAB_1801acc83;
        bVar6 = true;
        bVar4 = false;
        break;
      case 0x5d:
        uVar7 = 2;
        if ((!bVar6) || (bVar10)) goto LAB_1801acc83;
        bVar10 = true;
        bVar6 = true;
LAB_1801acbb9:
        bVar4 = false;
        uVar8 = 0;
        break;
      default:
        if (((&DAT_1802837f8)[bVar1] == '\0') && (bVar4 = true, bVar1 != 0x25)) goto LAB_1801acc7c;
      }
      lVar5 = lVar5 + 1;
    } while (lVar3 != lVar5);
    lVar5 = lVar3;
switchD_1801acbdd_caseD_23:
    uVar7 = 2;
    if ((uVar8 < 2 && bVar6 == bVar10) && (!(bool)((lVar9 == lVar5 + -1 && lVar5 != 0) | bVar4))) {
      if (lVar5 == lVar3) {
        lVar2 = *param_2;
        lVar3 = param_2[1];
        lVar5 = param_2[3];
        param_1[2] = param_2[2];
        param_1[3] = lVar5;
        *param_1 = lVar2;
        param_1[1] = lVar3;
        return param_1;
      }
LAB_1801acc7c:
      uVar7 = 0;
    }
  }
LAB_1801acc83:
  *(undefined1 *)(param_1 + 1) = uVar7;
  *param_1 = 0;
  (**(code **)(*param_2 + 0x20))(param_2[3],lVar2);
  return param_1;
}


