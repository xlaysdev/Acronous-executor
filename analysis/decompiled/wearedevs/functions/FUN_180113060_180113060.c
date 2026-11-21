/* FUN_180113060 @ 180113060 */

/* WARNING: Removing unreachable block (ram,0x0001801132de) */
/* WARNING: Removing unreachable block (ram,0x000180113307) */

ulonglong FUN_180113060(longlong *param_1,ushort *param_2,ulonglong param_3,ulonglong param_4)

{
  char cVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  byte bVar6;
  ulonglong uVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  byte bVar11;
  ulonglong uVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  
  uVar7 = 0;
  uVar12 = param_1[2];
  do {
    if (uVar7 < param_3 - 1) {
      if (uVar7 == 0) {
        uVar3 = FUN_180112aa0(param_1);
        if ((uVar3 & 1) != 0) {
          uVar2 = (ushort)(uVar3 >> 0x10);
          *param_2 = (ushort)uVar3 & 0xff00 | uVar2 & 0xff;
LAB_18011346f:
          param_2[uVar7 + 1] = (ushort)(byte)(uVar3 >> 0x20) | uVar2 & 0xff00;
          return uVar7 + 2;
        }
LAB_1801130e6:
        param_1[2] = uVar12;
        goto LAB_1801130ea;
      }
      uVar3 = param_1[1];
      if (uVar12 != uVar3) {
        if (uVar3 <= uVar12) goto LAB_1801134b7;
        if (*(char *)(*param_1 + uVar12) == ':') {
          param_1[2] = uVar12 + 1;
          uVar3 = FUN_180112aa0(param_1);
          if ((uVar3 & 1) != 0) {
            if (7 < uVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar7,8,&PTR_s_C__Users_burne__cargo_registry_s_18023f058);
            }
            uVar2 = (ushort)(uVar3 >> 0x10);
            param_2[uVar7] = (ushort)uVar3 & 0xff00 | uVar2 & 0xff;
            if (uVar7 == 7) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(8,8,&PTR_s_C__Users_burne__cargo_registry_s_18023f070);
            }
            goto LAB_18011346f;
          }
          goto LAB_1801130e6;
        }
      }
      param_1[2] = uVar12;
LAB_1801130f3:
      if (uVar12 == uVar3) goto LAB_180113416;
      if (uVar3 <= uVar12) {
LAB_1801134b7:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar12,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
      }
      lVar8 = *param_1;
      if (*(char *)(lVar8 + uVar12) != ':') goto LAB_180113416;
      uVar4 = uVar12 + 1;
      param_1[2] = uVar4;
      bVar13 = uVar4 < uVar3;
      if (uVar4 != uVar3) goto LAB_18011312b;
LAB_180113180:
      param_1[2] = uVar4;
      bVar13 = false;
      uVar5 = uVar4;
LAB_18011315d:
LAB_180113289:
      bVar14 = bVar13;
      if (!bVar14) goto LAB_180113295;
    }
    else {
LAB_1801130ea:
      uVar3 = param_1[1];
      if (uVar7 != 0) goto LAB_1801130f3;
      lVar8 = *param_1;
      bVar13 = uVar12 < uVar3;
      uVar4 = uVar12;
      if (uVar12 == uVar3) goto LAB_180113180;
LAB_18011312b:
      if (!bVar13) goto LAB_1801134c9;
      bVar6 = *(byte *)(lVar8 + uVar4);
      uVar5 = uVar4 + 1;
      param_1[2] = uVar5;
      param_4 = (ulonglong)(bVar6 - 0x30);
      if ((byte)(bVar6 - 0x30) < 10) {
LAB_180113157:
        bVar13 = true;
      }
      else {
        if ((byte)(bVar6 + 0x9f) < 6) {
          param_4 = (ulonglong)(byte)(bVar6 + 0xa9);
          goto LAB_180113157;
        }
        bVar13 = (byte)(bVar6 + 0xbf) < 6;
        if (!bVar13) goto LAB_180113180;
        param_4 = (ulonglong)(byte)(bVar6 - 0x37);
        if (!bVar13) goto LAB_18011315d;
      }
      if (uVar5 == uVar3) {
LAB_180113192:
        param_1[2] = uVar5;
        param_4 = param_4 & 0xff;
LAB_180113284:
        goto LAB_180113289;
      }
      if (uVar3 <= uVar5) {
        uVar4 = uVar5;
LAB_1801134c9:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
      }
      cVar1 = *(char *)(lVar8 + uVar5);
      uVar10 = uVar4 + 2;
      param_1[2] = uVar10;
      bVar6 = cVar1 - 0x30;
      if (9 < bVar6) {
        if ((byte)(cVar1 + 0x9fU) < 6) {
          bVar6 = cVar1 + 0xa9;
        }
        else {
          if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_180113192;
          bVar6 = cVar1 - 0x37;
        }
      }
      bVar11 = 1;
      if (uVar10 == uVar3) {
LAB_1801131fb:
        param_1[2] = uVar10;
        bVar14 = false;
        uVar5 = uVar10;
      }
      else {
        if (uVar3 <= uVar10) goto LAB_1801134d5;
        cVar1 = *(char *)(lVar8 + uVar10);
        uVar5 = uVar4 + 3;
        param_1[2] = uVar5;
        bVar11 = cVar1 - 0x30;
        if (9 < bVar11) {
          if (5 < (byte)(cVar1 + 0x9fU)) {
            bVar11 = cVar1 + 0xbf;
            bVar14 = bVar11 < 6;
            if (!bVar14) goto LAB_1801131fb;
            bVar11 = cVar1 - 0x37;
            goto LAB_18011323c;
          }
          bVar11 = cVar1 + 0xa9;
        }
        bVar14 = true;
      }
LAB_18011323c:
      uVar9 = (uint)bVar6 + ((uint)param_4 & 0xff) * 0x10;
      param_4 = (ulonglong)uVar9;
      if (!bVar14) goto LAB_180113284;
      uVar9 = (uint)bVar11 + uVar9 * 0x10;
      param_4 = (ulonglong)uVar9;
      bVar14 = false;
      if (uVar9 < 0x10000) {
        if (uVar5 == uVar3) {
LAB_1801132ce:
          param_1[2] = uVar5;
          goto LAB_180113284;
        }
        if (uVar3 <= uVar5) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar5,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
        }
        cVar1 = *(char *)(lVar8 + uVar5);
        uVar10 = uVar5 + 1;
        param_1[2] = uVar10;
        bVar6 = cVar1 - 0x30;
        if (9 < bVar6) {
          if ((byte)(cVar1 + 0x9fU) < 6) {
            bVar6 = cVar1 + 0xa9;
          }
          else {
            if (5 < (byte)(cVar1 + 0xbfU)) goto LAB_1801132ce;
            bVar6 = cVar1 - 0x37;
          }
        }
        uVar9 = (uint)bVar6 + uVar9 * 0x10;
        param_4 = (ulonglong)uVar9;
        if (uVar9 < 0x10000) {
          if (uVar10 == uVar3) {
LAB_18011338e:
            param_1[2] = uVar10;
            bVar15 = false;
            uVar5 = uVar10;
          }
          else {
            if (uVar3 <= uVar10) {
LAB_1801134d5:
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(uVar10,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_18023f118);
            }
            cVar1 = *(char *)(lVar8 + uVar10);
            uVar5 = uVar5 + 2;
            param_1[2] = uVar5;
            bVar15 = true;
            if ((5 < (byte)(cVar1 + 0x9fU) && 9 < (byte)(cVar1 - 0x30U)) &&
               (bVar15 = (byte)(cVar1 + 0xbfU) < 6, !bVar15)) goto LAB_18011338e;
          }
          if (!bVar15) goto LAB_180113289;
        }
      }
LAB_180113295:
      param_1[2] = uVar4;
      uVar5 = uVar4;
    }
    if (!bVar14) {
LAB_180113416:
      param_1[2] = uVar12;
      return uVar7;
    }
    if (uVar7 == 8) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(8,8,&PTR_s_C__Users_burne__cargo_registry_s_18023f088);
    }
    param_2[uVar7] = (ushort)param_4;
    uVar7 = uVar7 + 1;
    uVar12 = uVar5;
    if (param_3 == uVar7) {
      return param_3;
    }
  } while( true );
}


