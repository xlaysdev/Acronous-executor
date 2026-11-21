/* FUN_1801dd610 @ 1801dd610 */

void FUN_1801dd610(longlong *param_1,longlong *param_2)

{
  ulonglong uVar1;
  byte bVar2;
  ulonglong uVar3;
  longlong lVar4;
  char *pcVar5;
  longlong lVar6;
  byte bVar7;
  char *pcVar8;
  longlong lVar9;
  
  uVar3 = FUN_1801dd4d0(param_2);
  uVar1 = param_2[1];
  if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar3,uVar1,uVar1,&PTR_s_library_std_src_path_rs_180290110);
  }
  lVar4 = *param_2;
  pcVar8 = (char *)(lVar4 + uVar3);
  if (uVar3 - uVar1 == 0) {
    bVar7 = *(byte *)(param_2 + 2);
    lVar6 = 0;
  }
  else {
    bVar7 = *(byte *)(param_2 + 2);
    lVar9 = (uVar3 - uVar1) + 1;
    pcVar5 = (char *)(uVar1 + lVar4 + -1);
    lVar6 = 0;
    if (bVar7 < 3) {
      do {
        if (*pcVar5 == '\\') goto LAB_1801dd6ab;
        lVar9 = lVar9 + 1;
        pcVar5 = pcVar5 + -1;
      } while (lVar9 != 1);
    }
    else {
      do {
        if ((*pcVar5 == '/') || (*pcVar5 == '\\')) goto LAB_1801dd6ab;
        lVar9 = lVar9 + 1;
        pcVar5 = pcVar5 + -1;
      } while (lVar9 != 1);
    }
  }
LAB_1801dd6c5:
  lVar4 = uVar1 - uVar3;
  if (lVar4 == 0) {
    bVar2 = 10;
  }
  else if (lVar4 == 2) {
    bVar2 = (pcVar8[1] == '.' && *pcVar8 == '.') ^ 9;
  }
  else {
    bVar2 = 9;
    if ((lVar4 == 1) && (*pcVar8 == '.')) {
      bVar2 = (2 < bVar7) * '\x03' + 7;
    }
  }
  *param_1 = lVar6 + lVar4;
  *(byte *)(param_1 + 1) = bVar2;
  param_1[2] = (longlong)pcVar8;
  param_1[3] = lVar4;
  return;
LAB_1801dd6ab:
  uVar3 = (uVar3 - lVar9) + 1;
  if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_180201a30(uVar3,uVar1,uVar1,&PTR_s_library_std_src_path_rs_1802900f8);
  }
  pcVar8 = (char *)(lVar4 + uVar3);
  lVar6 = 1;
  goto LAB_1801dd6c5;
}


