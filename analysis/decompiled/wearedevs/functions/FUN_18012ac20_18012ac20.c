/* FUN_18012ac20 @ 18012ac20 */

undefined4 * FUN_18012ac20(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
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
  ulonglong uVar12;
  ulonglong uVar13;
  longlong lVar14;
  undefined1 local_a8 [24];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined8 local_70;
  longlong local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  
  uVar4 = *(ulonglong *)(param_2 + 0x28);
  if (uVar4 == 0) {
LAB_18012ade2:
    *(undefined1 *)(param_1 + 8) = 2;
    return param_1;
  }
  uVar9 = FUN_180026950(param_2,param_3);
  uVar2 = *(ushort *)(param_2 + 0x58);
  uVar11 = (ulonglong)(uVar9 & uVar2);
  uVar5 = *(ulonglong *)(param_2 + 0x50);
  lVar6 = *(longlong *)(param_2 + 0x20);
  lVar7 = *(longlong *)(param_2 + 0x48);
  uVar13 = 0;
  do {
    if (uVar5 <= uVar11) {
      uVar11 = 0;
    }
    if (uVar5 == 0) {
      do {
                    /* WARNING: Do nothing block with infinite loop */
      } while( true );
    }
    uVar12 = (ulonglong)*(ushort *)(lVar7 + uVar11 * 4);
    if ((uVar12 == 0xffff) ||
       (uVar3 = *(ushort *)(lVar7 + 2 + uVar11 * 4),
       ((int)uVar11 - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar13)) goto LAB_18012ade2;
    if (uVar3 == uVar9) {
      if (uVar4 <= uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar12,uVar4,&PTR_s_C__Users_burne__cargo_registry_s_180242e98);
      }
      lVar14 = uVar12 * 0x68;
      lVar8 = *(longlong *)(lVar6 + 0x40 + lVar14);
      if ((lVar8 != 0) != (*param_3 == 0)) {
        lVar1 = lVar6 + lVar14;
        if (lVar8 == 0) {
          if (*(char *)(lVar1 + 0x48) == (char)param_3[1]) {
LAB_18012ad59:
            if (*(int *)(lVar6 + lVar14) == 1) {
              FUN_18012a0e0(param_2,*(undefined8 *)(lVar6 + lVar14 + 8));
            }
            FUN_180129850(local_a8,param_2,uVar11,uVar12);
            *(undefined8 *)(param_1 + 8) = local_70;
            param_1[4] = local_80;
            param_1[5] = uStack_7c;
            param_1[6] = uStack_78;
            param_1[7] = uStack_74;
            *param_1 = local_90;
            param_1[1] = uStack_8c;
            param_1[2] = uStack_88;
            param_1[3] = uStack_84;
            if (local_68 == 0) {
              return param_1;
            }
            (**(code **)(local_68 + 0x20))(local_50,local_60,local_58);
            return param_1;
          }
        }
        else if ((*(size_t *)(lVar1 + 0x50) == param_3[2]) &&
                (iVar10 = memcmp(*(void **)(lVar1 + 0x48),(void *)param_3[1],
                                 *(size_t *)(lVar1 + 0x50)), iVar10 == 0)) goto LAB_18012ad59;
      }
    }
    uVar13 = uVar13 + 1;
    uVar11 = uVar11 + 1;
  } while( true );
}


