/* FUN_18012b2c0 @ 18012b2c0 */

undefined8 * FUN_18012b2c0(undefined8 *param_1,longlong param_2,longlong *param_3)

{
  ushort uVar1;
  ushort uVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar7;
  ushort uVar8;
  int iVar9;
  longlong lVar10;
  undefined8 uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong unaff_R15;
  
  uVar3 = *(ulonglong *)(param_2 + 0x28);
  if (uVar3 != 0) {
    uVar8 = FUN_180026950(param_2,param_3);
    uVar1 = *(ushort *)(param_2 + 0x58);
    uVar12 = (ulonglong)(uVar8 & uVar1);
    uVar4 = *(ulonglong *)(param_2 + 0x50);
    lVar5 = *(longlong *)(param_2 + 0x20);
    lVar6 = *(longlong *)(param_2 + 0x48);
    uVar11 = 0;
    uVar13 = 0;
    do {
      if (uVar4 <= uVar12) {
        uVar12 = 0;
      }
      if (uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      unaff_R15 = (ulonglong)*(ushort *)(lVar6 + uVar12 * 4);
      if ((unaff_R15 == 0xffff) ||
         (uVar2 = *(ushort *)(lVar6 + 2 + uVar12 * 4),
         ((int)uVar12 - (uint)(uVar2 & uVar1) & (uint)uVar1) < uVar13)) goto LAB_18012b411;
      if (uVar2 == uVar8) {
        if (uVar3 <= unaff_R15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(unaff_R15,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_180242e98);
        }
        lVar7 = *(longlong *)(lVar5 + 0x40 + unaff_R15 * 0x68);
        if ((lVar7 != 0) != (*param_3 == 0)) {
          lVar10 = unaff_R15 * 0x68 + lVar5;
          if (lVar7 == 0) {
            if (*(char *)(lVar10 + 0x48) == (char)param_3[1]) goto LAB_18012b3f6;
          }
          else if ((*(size_t *)(lVar10 + 0x50) == param_3[2]) &&
                  (iVar9 = memcmp(*(void **)(lVar10 + 0x48),(void *)param_3[1],
                                  *(size_t *)(lVar10 + 0x50)), iVar9 == 0)) goto LAB_18012b3f6;
        }
      }
      uVar13 = uVar13 + 1;
      uVar12 = uVar12 + 1;
    } while( true );
  }
  uVar11 = 0;
LAB_18012b411:
  param_1[2] = param_2;
  *param_1 = uVar11;
  param_1[1] = unaff_R15;
  return param_1;
LAB_18012b3f6:
  uVar11 = 1;
  goto LAB_18012b411;
}


