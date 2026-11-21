/* FUN_1801b3e70 @ 1801b3e70 */

ulonglong FUN_1801b3e70(longlong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  longlong lVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  char cVar6;
  uint uVar7;
  undefined8 unaff_RBX;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  byte local_55;
  uint local_54;
  uint *local_50;
  code *local_48;
  
  uVar1 = *param_2;
  lVar2 = param_2[1];
  pcVar3 = *(code **)(lVar2 + 0x18);
  cVar6 = (*pcVar3)(uVar1,&DAT_180285e18,2);
  uVar8 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if (cVar6 == '\0') {
    lVar4 = param_1[1];
    if (lVar4 != 0) {
      lVar5 = *param_1;
      lVar10 = 0;
      do {
        local_55 = *(byte *)(lVar5 + lVar10);
        uVar7 = (uint)local_55;
        switch(local_55) {
        case 0:
          cVar6 = (*pcVar3)(uVar1,&DAT_180285e28,2);
          break;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xb:
        case 0xc:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x20:
        case 0x21:
          goto switchD_1801b3ee7_caseD_1;
        case 9:
          cVar6 = (*pcVar3)(uVar1,&DAT_180285e2e,2);
          break;
        case 10:
          cVar6 = (*pcVar3)(uVar1,&DAT_180285e32,2);
          break;
        case 0xd:
          cVar6 = (*pcVar3)(uVar1,&DAT_180285e30,2);
          goto joined_r0x0001801b3f87;
        case 0x22:
switchD_1801b3ee7_caseD_22:
          local_50 = &local_54;
          local_48 = FUN_1801edd10;
          puVar9 = &DAT_180285e2a;
          local_54 = uVar7;
          goto LAB_1801b3fe3;
        default:
          if (uVar7 == 0x5c) goto switchD_1801b3ee7_caseD_22;
          goto switchD_1801b3ee7_caseD_1;
        }
        if (cVar6 != '\0') goto LAB_1801b4012;
LAB_1801b3ff1:
        lVar10 = lVar10 + 1;
      } while (lVar4 != lVar10);
    }
    uVar7 = (*pcVar3)(uVar1,&DAT_180285e1a,1);
    uVar8 = (ulonglong)uVar7;
  }
LAB_1801b4012:
  return uVar8 & 0xffffffff;
switchD_1801b3ee7_caseD_1:
  if ((byte)(local_55 - 0x20) < 0x5f) {
    local_50 = &local_54;
    local_48 = FUN_1801edd10;
    puVar9 = &DAT_180285e26;
    local_54 = uVar7;
  }
  else {
    local_50 = (uint *)&local_55;
    local_48 = FUN_1801ee990;
    puVar9 = &DAT_180285e1b;
  }
LAB_1801b3fe3:
  cVar6 = FUN_1801ef150(uVar1,lVar2,puVar9,&local_50);
joined_r0x0001801b3f87:
  if (cVar6 == '\0') goto LAB_1801b3ff1;
  goto LAB_1801b4012;
}


