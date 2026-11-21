/* FUN_1801f3b30 @ 1801f3b30 */

undefined8 FUN_1801f3b30(longlong param_1,ulonglong param_2,undefined8 *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  longlong lVar4;
  char cVar5;
  undefined8 uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  longlong lVar11;
  
  pbVar1 = (byte *)(param_1 + param_2);
  uVar6 = *param_3;
  lVar4 = param_3[1];
  uVar8 = 0;
LAB_1801f3b58:
  if (uVar8 == param_2) {
    uVar8 = param_2;
LAB_1801f3ca1:
    if (uVar8 == 0) {
      uVar6 = FUN_1801f0810(param_3,param_1 + uVar8,param_2 - uVar8);
      return uVar6;
    }
                    /* WARNING: Could not recover jumptable at 0x0001801f3cc6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar6 = (**(code **)(lVar4 + 0x18))(uVar6,param_1 + uVar8,param_2 - uVar8);
    return uVar6;
  }
  pbVar10 = (byte *)(param_1 + uVar8 + 1);
  uVar7 = uVar8;
  pbVar9 = (byte *)(param_1 + uVar8);
  do {
    bVar3 = *pbVar9;
    lVar11 = 1;
    if ((char)bVar3 < '\0') {
      if (bVar3 < 0xe0) {
        lVar11 = 2;
        pbVar9 = pbVar10 + (pbVar10 != pbVar1);
      }
      else if (bVar3 == 0xed) {
        pbVar2 = pbVar10 + (pbVar10 != pbVar1);
        lVar11 = 3;
        pbVar9 = pbVar2 + (pbVar2 != pbVar1);
        if ((pbVar10 != pbVar1 && pbVar2 != pbVar1) && (0x9f < *pbVar10)) break;
      }
      else {
        pbVar9 = pbVar10 + (pbVar10 != pbVar1) + (pbVar10 + (pbVar10 != pbVar1) != pbVar1);
        lVar11 = 3;
        if (0xef < bVar3) {
          lVar11 = 4;
          pbVar9 = pbVar9 + (pbVar9 != pbVar1);
        }
      }
    }
    else {
      pbVar9 = pbVar10;
    }
    uVar7 = uVar7 + lVar11;
    pbVar10 = pbVar9 + (pbVar9 != pbVar1);
    if (pbVar9 == pbVar1) goto LAB_1801f3ca1;
  } while( true );
  if ((uVar7 < uVar8) || (param_2 < uVar7)) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar8,uVar7,param_2,&PTR_s_library_core_src_wtf8_rs_180294558);
  }
  cVar5 = (**(code **)(lVar4 + 0x18))(uVar6,(byte *)(param_1 + uVar8),uVar7 - uVar8);
  if (cVar5 == '\0') {
    cVar5 = (**(code **)(lVar4 + 0x20))(uVar6,0xfffd);
    if (cVar5 == '\0') {
      uVar8 = uVar7 + 3;
      if (param_2 < uVar8) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar8,param_2,param_2,&PTR_s_library_core_src_wtf8_rs_180293a58);
      }
      goto LAB_1801f3b58;
    }
  }
  return 1;
}


