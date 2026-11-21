/* FUN_1801ad690 @ 1801ad690 */

void FUN_1801ad690(undefined1 *param_1,byte *param_2,longlong param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  char cVar5;
  char cVar6;
  char cVar7;
  char cVar8;
  char cVar9;
  char cVar10;
  undefined1 uVar11;
  char cVar12;
  char cVar13;
  char local_74;
  char local_70;
  char local_6c;
  
  if (param_3 == 0) {
    cVar2 = '\0';
LAB_1801ad6da:
    cVar8 = '\0';
LAB_1801ad6dd:
    cVar9 = '\0';
LAB_1801ad6e0:
    cVar5 = '\0';
LAB_1801ad6e2:
    cVar4 = '\0';
LAB_1801ad6e4:
    cVar13 = '\0';
LAB_1801ad6e7:
    cVar1 = '\0';
LAB_1801ad6e9:
    cVar3 = '\0';
    local_6c = '\0';
    local_70 = '\0';
    local_74 = '\0';
    cVar12 = '\0';
    cVar6 = '\0';
    cVar10 = '\0';
    cVar7 = '\0';
  }
  else {
    cVar2 = (&DAT_180283dd1)[*param_2];
    uVar11 = 1;
    if (cVar2 == '\0') goto LAB_1801ad75d;
    if (param_3 == 1) goto LAB_1801ad6da;
    cVar8 = (&DAT_180283dd1)[param_2[1]];
    if (cVar8 == '\0') goto LAB_1801ad75d;
    if (param_3 == 2) goto LAB_1801ad6dd;
    cVar9 = (&DAT_180283dd1)[param_2[2]];
    if (cVar9 == '\0') goto LAB_1801ad75d;
    if (param_3 == 3) goto LAB_1801ad6e0;
    cVar5 = (&DAT_180283dd1)[param_2[3]];
    if (cVar5 == '\0') goto LAB_1801ad75d;
    if (param_3 == 4) goto LAB_1801ad6e2;
    cVar4 = (&DAT_180283dd1)[param_2[4]];
    if (cVar4 == '\0') goto LAB_1801ad75d;
    if (param_3 == 5) goto LAB_1801ad6e4;
    cVar13 = (&DAT_180283dd1)[param_2[5]];
    if (cVar13 == '\0') goto LAB_1801ad75d;
    if (param_3 == 6) goto LAB_1801ad6e7;
    cVar1 = (&DAT_180283dd1)[param_2[6]];
    if (cVar1 == '\0') goto LAB_1801ad75d;
    if (param_3 == 7) goto LAB_1801ad6e9;
    cVar3 = (&DAT_180283dd1)[param_2[7]];
    if (cVar3 == '\0') goto LAB_1801ad75d;
    if (param_3 == 8) {
      local_6c = '\0';
LAB_1801ad89c:
      local_70 = '\0';
LAB_1801ad8a4:
      local_74 = '\0';
      cVar12 = '\0';
      cVar6 = '\0';
      cVar10 = '\0';
LAB_1801ad8b5:
      cVar7 = '\0';
    }
    else {
      local_6c = (&DAT_180283dd1)[param_2[8]];
      if (local_6c == '\0') goto LAB_1801ad75d;
      if (param_3 == 9) goto LAB_1801ad89c;
      local_70 = (&DAT_180283dd1)[param_2[9]];
      if (local_70 == '\0') goto LAB_1801ad75d;
      if (param_3 == 10) goto LAB_1801ad8a4;
      local_74 = (&DAT_180283dd1)[param_2[10]];
      if (local_74 == '\0') goto LAB_1801ad75d;
      if (param_3 == 0xb) {
        cVar12 = '\0';
        cVar6 = '\0';
        cVar10 = '\0';
        goto LAB_1801ad8b5;
      }
      cVar12 = (&DAT_180283dd1)[param_2[0xb]];
      if (cVar12 == '\0') goto LAB_1801ad75d;
      if (param_3 == 0xc) {
        cVar6 = '\0';
        cVar10 = '\0';
        goto LAB_1801ad8b5;
      }
      cVar6 = (&DAT_180283dd1)[param_2[0xc]];
      if (cVar6 == '\0') goto LAB_1801ad75d;
      if (param_3 == 0xd) {
        cVar10 = '\0';
        goto LAB_1801ad8b5;
      }
      cVar10 = (&DAT_180283dd1)[param_2[0xd]];
      if (cVar10 == '\0') goto LAB_1801ad75d;
      if (param_3 == 0xe) goto LAB_1801ad8b5;
      cVar7 = (&DAT_180283dd1)[param_2[0xe]];
      if (cVar7 == '\0') goto LAB_1801ad75d;
      if (param_3 != 0xf) {
        if ((&DAT_180283dd1)[param_2[0xf]] != '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(0xf,0xf,&PTR_s_C__Users_burne__cargo_registry_s_180283f30);
        }
        goto LAB_1801ad75d;
      }
    }
  }
  param_1[1] = cVar2;
  param_1[2] = cVar8;
  param_1[3] = cVar9;
  param_1[4] = cVar5;
  param_1[5] = cVar4;
  param_1[6] = cVar13;
  param_1[7] = cVar1;
  param_1[8] = cVar3;
  param_1[9] = local_6c;
  param_1[10] = local_70;
  param_1[0xb] = local_74;
  param_1[0xc] = cVar12;
  param_1[0xd] = cVar6;
  param_1[0xe] = cVar10;
  param_1[0xf] = cVar7;
  param_1[0x10] = (char)param_3;
  uVar11 = 0;
LAB_1801ad75d:
  *param_1 = uVar11;
  return;
}


