/* FUN_1801accb0 @ 1801accb0 */

void FUN_1801accb0(undefined1 *param_1,longlong param_2,longlong param_3)

{
  bool bVar1;
  longlong lVar2;
  undefined1 uVar3;
  uint uVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  
  if (param_3 == 0) {
    param_1[1] = 10;
  }
  else {
    uVar4 = 0;
    bVar5 = false;
    bVar7 = false;
    bVar1 = false;
    lVar2 = 0;
    lVar6 = param_3;
    do {
      switch((&DAT_1802837f8)[*(byte *)(param_2 + lVar2)]) {
      case 0x23:
      case 0x2f:
      case 0x3f:
        goto switchD_1801acd17_caseD_23;
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
        if (7 < uVar4) {
          uVar3 = 2;
          goto LAB_1801acdbd;
        }
        uVar4 = uVar4 + 1;
        break;
      case 0x40:
        lVar6 = lVar2;
        goto LAB_1801acced;
      case 0x5b:
        uVar3 = 2;
        if ((bVar1) || (bVar5 != false)) goto LAB_1801acdbd;
        bVar5 = true;
        bVar1 = false;
        break;
      case 0x5d:
        uVar3 = 2;
        if ((!bVar5) || (bVar7)) goto LAB_1801acdbd;
        bVar7 = true;
        bVar5 = true;
LAB_1801acced:
        bVar1 = false;
        uVar4 = 0;
        break;
      default:
        if (((&DAT_1802837f8)[*(byte *)(param_2 + lVar2)] == '\0') &&
           (bVar1 = true, *(byte *)(param_2 + lVar2) != 0x25)) {
          uVar3 = 0;
          goto LAB_1801acdbd;
        }
      }
      lVar2 = lVar2 + 1;
    } while (param_3 != lVar2);
    lVar2 = param_3;
switchD_1801acd17_caseD_23:
    uVar3 = 2;
    if ((uVar4 < 2 && bVar5 == bVar7) && (!(bool)((lVar6 == lVar2 + -1 && lVar2 != 0) | bVar1))) {
      *(longlong *)(param_1 + 8) = lVar2;
      uVar3 = 0;
      goto LAB_1801acdc3;
    }
LAB_1801acdbd:
    param_1[1] = uVar3;
  }
  uVar3 = 1;
LAB_1801acdc3:
  *param_1 = uVar3;
  return;
}


