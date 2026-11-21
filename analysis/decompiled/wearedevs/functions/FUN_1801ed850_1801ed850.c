/* FUN_1801ed850 @ 1801ed850 */

ulonglong FUN_1801ed850(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  code *pcVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  undefined8 unaff_R14;
  ulonglong uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined4 local_88 [3];
  byte local_7c;
  byte local_7b;
  longlong local_78;
  longlong local_70;
  code *local_68;
  longlong local_60;
  undefined8 local_58;
  longlong local_50;
  ulonglong local_48;
  
  uVar8 = *param_3;
  lVar13 = param_3[1];
  pcVar6 = *(code **)(lVar13 + 0x20);
  cVar2 = (*pcVar6)(uVar8,0x22);
  uVar12 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
  if (cVar2 == '\0') {
    if (param_2 == 0) {
      uVar11 = 0;
      uVar14 = 0;
    }
    else {
      uVar14 = 0;
      uVar5 = param_2;
      uVar10 = 0;
      local_70 = lVar13;
      local_68 = pcVar6;
      local_58 = uVar8;
      local_50 = param_1;
      local_48 = param_2;
      do {
        while( true ) {
          lVar13 = param_1 + uVar5;
          uVar7 = 0;
          while (((cVar2 = *(char *)(param_1 + uVar7), 0xa0 < (byte)(cVar2 + 0x81U) &&
                  (cVar2 != '\"')) && (cVar2 != '\\'))) {
            uVar7 = uVar7 + 1;
            if (uVar5 == uVar7) {
              uVar11 = uVar10 + uVar5;
              goto LAB_1801edb14;
            }
          }
          uVar11 = uVar7 + uVar10;
          bVar1 = *(byte *)(param_1 + uVar7);
          uVar3 = (uint)bVar1;
          local_60 = lVar13;
          if ((char)bVar1 < '\0') break;
          lVar9 = param_1 + uVar7 + 1;
LAB_1801ed9c0:
          local_78 = lVar9;
          FUN_1801f2cc0(local_88,uVar3,0x10001);
          bVar1 = local_7b;
          uVar12 = 0;
          uVar5 = (ulonglong)local_7c;
          if ((byte)(local_7b - local_7c) != '\x01') {
            if (uVar11 < uVar14) goto LAB_1801edbb2;
            if (uVar14 != 0) {
              if (uVar14 < local_48) {
                if (*(char *)(local_50 + uVar14) < -0x40) goto LAB_1801edbb2;
              }
              else if (uVar14 != local_48) goto LAB_1801edbb2;
            }
            if (uVar11 != 0) {
              if (uVar11 < local_48) {
                if (*(char *)(uVar7 + local_50 + uVar10) < -0x40) {
LAB_1801edbb2:
                    /* WARNING: Subroutine does not return */
                  FUN_1802018d0(local_50,local_48,uVar14,uVar10 + uVar7,
                                &PTR_s_library_core_src_fmt_mod_rs_180293510);
                }
              }
              else if (uVar11 != param_2) goto LAB_1801edbb2;
            }
            pcVar6 = *(code **)(local_70 + 0x18);
            cVar2 = (*pcVar6)(local_58,uVar14 + local_50,(uVar10 - uVar14) + uVar7);
            if (cVar2 == '\0') {
              if (bVar1 < 0x81) {
                cVar2 = (*pcVar6)(local_58,(longlong)local_88 + uVar5,bVar1 - uVar5);
              }
              else {
                cVar2 = (*local_68)(local_58,local_88[0]);
              }
              if (cVar2 == '\0') {
                lVar13 = 1;
                if ((0x7f < uVar3) && (lVar13 = 2, 0x7ff < uVar3)) {
                  lVar13 = 4 - (ulonglong)(uVar3 < 0x10000);
                }
                uVar14 = lVar13 + uVar10 + uVar7;
                goto LAB_1801edac6;
              }
            }
            uVar12 = 1;
            goto LAB_1801edb99;
          }
LAB_1801edac6:
          lVar13 = 1;
          if ((0x7f < uVar3) && (lVar13 = 2, 0x7ff < uVar3)) {
            lVar13 = 4 - (ulonglong)(uVar3 < 0x10000);
          }
          uVar11 = uVar10 + uVar7 + lVar13;
          uVar5 = local_60 - local_78;
          param_1 = local_78;
          uVar10 = uVar11;
          if (uVar5 == 0) goto LAB_1801edb14;
        }
        uVar4 = bVar1 & 0x1f;
        uVar3 = *(byte *)(param_1 + 1 + uVar7) & 0x3f;
        if (bVar1 < 0xe0) {
          lVar9 = param_1 + uVar7 + 2;
          uVar3 = uVar4 << 6 | uVar3;
          goto LAB_1801ed9c0;
        }
        uVar3 = *(byte *)(param_1 + 2 + uVar7) & 0x3f | uVar3 << 6;
        if (bVar1 < 0xf0) {
          lVar9 = param_1 + uVar7 + 3;
          uVar3 = uVar3 | uVar4 << 0xc;
          goto LAB_1801ed9c0;
        }
        lVar9 = param_1 + uVar7 + 4;
        uVar3 = *(byte *)(param_1 + 3 + uVar7) & 0x3f | uVar3 << 6 | (bVar1 & 7) << 0x12;
        if (uVar3 != 0x110000) goto LAB_1801ed9c0;
        uVar5 = lVar13 - lVar9;
        param_1 = lVar9;
        uVar10 = uVar11;
      } while (uVar5 != 0);
LAB_1801edb14:
      if (uVar11 < uVar14) goto LAB_1801edbd8;
      uVar12 = CONCAT71((int7)(uVar12 >> 8),1);
      if (uVar14 == 0) {
        uVar14 = 0;
      }
      else if (uVar14 < local_48) {
        if (*(char *)(local_50 + uVar14) < -0x40) goto LAB_1801edbd8;
      }
      else if (uVar14 != local_48) goto LAB_1801edbd8;
      param_1 = local_50;
      pcVar6 = local_68;
      uVar8 = local_58;
      lVar13 = local_70;
      if (uVar11 == 0) {
        uVar11 = 0;
      }
      else if (uVar11 < local_48) {
        if (*(char *)(local_50 + uVar11) < -0x40) {
LAB_1801edbd8:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(local_50,local_48,uVar14,uVar11,&PTR_s_library_core_src_fmt_mod_rs_180293528
                       );
        }
      }
      else if (uVar11 != local_48) goto LAB_1801edbd8;
    }
    cVar2 = (**(code **)(lVar13 + 0x18))(uVar8,param_1 + uVar14,uVar11 - uVar14);
    if (cVar2 == '\0') {
      uVar3 = (*pcVar6)(uVar8,0x22);
      uVar12 = (ulonglong)uVar3;
    }
  }
LAB_1801edb99:
  return uVar12 & 0xffffffff;
}


