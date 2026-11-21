/* FUN_18005a290 @ 18005a290 */

void FUN_18005a290(ulonglong *param_1)

{
  longlong *plVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong *plVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  bool bVar16;
  
  plVar1 = (longlong *)param_1[8];
  uVar2 = param_1[4];
  uVar14 = *param_1;
  uVar3 = param_1[3];
  do {
    if ((uVar14 & 1) == 0) {
      plVar5 = (longlong *)param_1[6];
      if (plVar5 == plVar1) {
LAB_18005a3aa:
        param_1[4] = 0;
        return;
      }
      param_1[6] = (ulonglong)(plVar5 + 0xd);
      if (*plVar5 == 2) goto LAB_18005a3aa;
      lVar6 = plVar5[8];
      lVar7 = plVar5[9];
      lVar8 = plVar5[10];
      lVar9 = plVar5[0xb];
      uVar4 = plVar5[1];
      lVar15 = plVar5[3];
      lVar12 = plVar5[4];
      lVar13 = plVar5[5];
      lVar11 = plVar5[6];
      uVar14 = (ulonglong)((uint)*plVar5 & 1);
      *param_1 = uVar14;
      param_1[1] = uVar4;
      if (lVar6 != 0) {
        (**(code **)(lVar6 + 0x20))(lVar9,lVar7,lVar8);
      }
    }
    else {
      uVar4 = param_1[1];
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar4,uVar2,&PTR_s_C__Users_burne__cargo_registry_s_180209a48);
      }
      bVar16 = *(char *)(uVar3 + 0x10 + uVar4 * 0x48) != '\0';
      if (bVar16) {
        uVar10 = *(ulonglong *)(uVar3 + uVar4 * 0x48 + 0x18);
      }
      else {
        uVar10 = uVar4;
      }
      uVar14 = (ulonglong)bVar16;
      *param_1 = uVar14;
      param_1[1] = uVar10;
      lVar15 = *(longlong *)(uVar3 + 0x20 + uVar4 * 0x48);
      lVar12 = *(longlong *)(uVar3 + 0x28 + uVar4 * 0x48);
      lVar13 = *(longlong *)(uVar3 + 0x30 + uVar4 * 0x48);
      lVar11 = *(longlong *)(uVar3 + 0x38 + uVar4 * 0x48);
    }
    (**(code **)(lVar15 + 0x20))(lVar11,lVar12,lVar13);
  } while( true );
}


