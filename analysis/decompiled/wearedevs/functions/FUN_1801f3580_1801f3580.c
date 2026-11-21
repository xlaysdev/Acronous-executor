/* FUN_1801f3580 @ 1801f3580 */

ulonglong FUN_1801f3580(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  undefined8 uVar4;
  longlong lVar5;
  code *pcVar6;
  char cVar7;
  uint uVar8;
  byte *pbVar9;
  undefined8 uVar10;
  byte *pbVar11;
  longlong lVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  short *local_60;
  code *local_58;
  code *local_50;
  short local_42;
  
  uVar4 = *param_3;
  lVar5 = param_3[1];
  pcVar6 = *(code **)(lVar5 + 0x20);
  uVar10 = uVar4;
  cVar7 = (*pcVar6)(uVar4,0x22);
  uVar14 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  if (cVar7 != '\0') {
LAB_1801f375d:
    return uVar14 & 0xffffffff;
  }
  pbVar1 = (byte *)(param_1 + param_2);
  uVar14 = 0;
  local_50 = pcVar6;
LAB_1801f35c4:
  if (uVar14 != param_2) {
    pbVar11 = (byte *)(param_1 + uVar14 + 1);
    pbVar9 = (byte *)(param_1 + uVar14);
    uVar13 = uVar14;
    do {
      bVar3 = *pbVar9;
      lVar12 = 1;
      if ((char)bVar3 < '\0') {
        if (bVar3 < 0xe0) {
          lVar12 = 2;
          pbVar9 = pbVar11 + (pbVar11 != pbVar1);
        }
        else if (bVar3 == 0xed) {
          pbVar2 = pbVar11 + (pbVar11 != pbVar1);
          lVar12 = 3;
          pbVar9 = pbVar2 + (pbVar2 != pbVar1);
          if ((pbVar11 != pbVar1 && pbVar2 != pbVar1) && (0x9f < *pbVar11)) goto LAB_1801f369b;
        }
        else {
          pbVar9 = pbVar11 + (pbVar11 != pbVar1) + (pbVar11 + (pbVar11 != pbVar1) != pbVar1);
          lVar12 = 3;
          if (0xef < bVar3) {
            lVar12 = 4;
            pbVar9 = pbVar9 + (pbVar9 != pbVar1);
          }
        }
      }
      else {
        pbVar9 = pbVar11;
      }
      uVar13 = uVar13 + lVar12;
      pbVar11 = pbVar9 + (pbVar9 != pbVar1);
      if (pbVar9 == pbVar1) goto LAB_1801f3730;
    } while( true );
  }
  uVar14 = param_2;
LAB_1801f3730:
  uVar10 = uVar4;
  cVar7 = FUN_1801f3790(uVar4,lVar5,param_1 + uVar14,param_2 - uVar14);
  uVar14 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  if (cVar7 == '\0') {
    uVar8 = (*local_50)(uVar4,0x22);
    uVar14 = (ulonglong)uVar8;
  }
  goto LAB_1801f375d;
LAB_1801f369b:
  local_42 = (*pbVar2 & 0x3f) + (*pbVar11 & 0x1f) * 0x40 + -0x2800;
  if ((uVar13 < uVar14) || (param_2 < uVar13)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar14,uVar13,param_2,&PTR_s_library_core_src_wtf8_rs_180294540);
  }
  uVar10 = uVar4;
  cVar7 = FUN_1801f3790(uVar4,lVar5,(byte *)(param_1 + uVar14),uVar13 - uVar14);
  if (cVar7 == '\0') {
    local_60 = &local_42;
    local_58 = FUN_1801eeae0;
    uVar10 = uVar4;
    cVar7 = FUN_1801ef150(uVar4,lVar5,&DAT_180294537,&local_60);
    if (cVar7 == '\0') {
      uVar14 = uVar13 + 3;
      if (param_2 < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar14,param_2,param_2,&PTR_s_library_core_src_wtf8_rs_180293a58);
      }
      goto LAB_1801f35c4;
    }
  }
  uVar14 = CONCAT71((int7)((ulonglong)uVar10 >> 8),1);
  goto LAB_1801f375d;
}


