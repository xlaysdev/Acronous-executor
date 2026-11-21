/* FUN_18012b130 @ 18012b130 */

undefined8 * FUN_18012b130(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong lVar8;
  ushort uVar9;
  int iVar10;
  ulonglong uVar11;
  longlong lVar12;
  undefined8 uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong unaff_R15;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 != 0) {
    uVar9 = FUN_180026950(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x58);
    uVar14 = (ulonglong)(uVar9 & uVar1);
    uVar5 = *(ulonglong *)(param_2 + 0x50);
    lVar6 = *(longlong *)(param_2 + 0x20);
    lVar7 = *(longlong *)(param_2 + 0x48);
    uVar13 = 0;
    uVar15 = 0;
    do {
      if (uVar5 <= uVar14) {
        uVar14 = 0;
      }
      if (uVar5 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar2 = *(ushort *)(lVar7 + uVar14 * 4);
      unaff_R15 = (ulonglong)uVar2;
      if ((unaff_R15 == 0xffff) ||
         (uVar3 = *(ushort *)(lVar7 + 2 + uVar14 * 4),
         ((int)uVar14 - (uint)(uVar3 & uVar1) & (uint)uVar1) < uVar15)) goto LAB_18012b291;
      if (uVar3 == uVar9) {
        if (uVar4 <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(unaff_R15,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242e98);
        }
        uVar11 = (ulonglong)((uint)uVar2 * 0x60);
        lVar8 = *(longlong *)(lVar6 + 0x38 + uVar11);
        if ((lVar8 != 0) != (*param_3 == 0)) {
          lVar12 = uVar11 + lVar6;
          if (lVar8 == 0) {
            if (*(char *)(lVar12 + 0x40) == (char)param_3[1]) goto LAB_18012b269;
          }
          else if ((*(size_t *)(lVar12 + 0x48) == param_3[2]) &&
                  (iVar10 = memcmp(*(void **)(lVar12 + 0x40),(void *)param_3[1],
                                   *(size_t *)(lVar12 + 0x48)), iVar10 == 0)) goto LAB_18012b269;
        }
      }
      uVar15 = uVar15 + 1;
      uVar14 = uVar14 + 1;
    } while( true );
  }
  uVar13 = 0;
LAB_18012b291:
  param_1[2] = param_2;
  *param_1 = uVar13;
  param_1[1] = unaff_R15;
  return param_1;
LAB_18012b269:
  uVar13 = 1;
  goto LAB_18012b291;
}


