/* FUN_180054c80 @ 180054c80 */

undefined4 * FUN_180054c80(undefined4 *param_1,longlong param_2,longlong *param_3)

{
  longlong lVar1;
  ushort uVar2;
  ushort uVar3;
  ulonglong uVar4;
  longlong lVar5;
  longlong lVar6;
  ushort uVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  char cVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined1 local_f8 [24];
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined8 local_c0;
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  longlong local_90;
  longlong local_88;
  ulonglong local_80;
  void *local_78;
  size_t local_70;
  undefined4 *local_68;
  longlong *local_60;
  longlong local_58;
  ushort local_4c;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (*(ulonglong *)(param_2 + 0x28) != 0) {
    local_80 = *(ulonglong *)(param_2 + 0x28);
    local_68 = param_1;
    uVar7 = FUN_180026950(param_2,param_3);
    uVar2 = *(ushort *)(param_2 + 0x58);
    uVar11 = (ulonglong)(uVar7 & uVar2);
    uVar4 = *(ulonglong *)(param_2 + 0x50);
    lVar9 = *(longlong *)(param_2 + 0x20);
    lVar5 = *(longlong *)(param_2 + 0x48);
    local_58 = *param_3;
    local_78 = (void *)param_3[1];
    cVar12 = (char)param_3[1];
    local_70 = param_3[2];
    uVar14 = 0;
    uVar10 = local_80;
    local_88 = param_2;
    local_60 = param_3;
    do {
      if (uVar4 <= uVar11) {
        uVar11 = 0;
      }
      if (uVar4 == 0) {
        do {
                    /* WARNING: Do nothing block with infinite loop */
        } while( true );
      }
      uVar13 = (ulonglong)*(ushort *)(lVar5 + uVar11 * 4);
      if ((uVar13 == 0xffff) ||
         (uVar3 = *(ushort *)(lVar5 + 2 + uVar11 * 4),
         ((int)uVar11 - (uint)(uVar3 & uVar2) & (uint)uVar2) < uVar14)) {
        lVar9 = local_58;
        param_1 = local_68;
        param_3 = local_60;
        goto LAB_180054e73;
      }
      if (uVar3 == uVar7) {
        if (uVar10 <= uVar13) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar13,uVar10,&PTR_s_C__Users_burne__cargo_registry_s_180208f98);
        }
        lVar15 = uVar13 * 0x68;
        lVar6 = *(longlong *)(lVar9 + 0x40 + lVar15);
        if ((local_58 == 0) != (lVar6 != 0)) {
          lVar1 = lVar9 + lVar15;
          if (lVar6 == 0) {
            if (*(char *)(lVar1 + 0x48) == cVar12) goto LAB_180054dec;
          }
          else if (*(size_t *)(lVar1 + 0x50) == local_70) {
            local_90 = lVar9;
            local_4c = uVar7;
            local_49 = cVar12;
            iVar8 = memcmp(*(void **)(lVar1 + 0x48),local_78,local_70);
            uVar10 = local_80;
            lVar9 = local_90;
            cVar12 = local_49;
            uVar7 = local_4c;
            if (iVar8 == 0) goto LAB_180054dec;
          }
        }
      }
      uVar14 = uVar14 + 1;
      uVar11 = uVar11 + 1;
    } while( true );
  }
  lVar9 = *param_3;
LAB_180054e73:
  *(undefined1 *)(param_1 + 8) = 2;
LAB_180054e77:
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x20))(param_3[3],param_3[1],param_3[2]);
  }
  return param_1;
LAB_180054dec:
  param_1 = local_68;
  lVar5 = local_88;
  if (*(int *)(lVar9 + lVar15) == 1) {
    FUN_180054460(local_88,*(undefined8 *)(lVar9 + lVar15 + 8));
  }
  FUN_180053a00(local_f8,lVar5,uVar11,uVar13);
  *(undefined8 *)(param_1 + 8) = local_c0;
  param_1[4] = local_d0;
  param_1[5] = uStack_cc;
  param_1[6] = uStack_c8;
  param_1[7] = uStack_c4;
  *param_1 = local_e0;
  param_1[1] = uStack_dc;
  param_1[2] = uStack_d8;
  param_1[3] = uStack_d4;
  if (local_b8 != 0) {
    (**(code **)(local_b8 + 0x20))(local_a0,local_b0,local_a8);
  }
  lVar9 = local_58;
  param_3 = local_60;
  goto LAB_180054e77;
}


