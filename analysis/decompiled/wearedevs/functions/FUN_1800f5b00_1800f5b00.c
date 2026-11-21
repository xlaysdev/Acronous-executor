/* FUN_1800f5b00 @ 1800f5b00 */

void FUN_1800f5b00(ulonglong *param_1,longlong param_2,undefined1 *param_3,longlong *param_4,
                  undefined1 (*param_5) [16])

{
  byte bVar1;
  byte *pbVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  ulonglong uVar5;
  ulonglong uVar6;
  char cVar7;
  undefined1 (*pauVar8) [16];
  longlong lVar9;
  undefined1 (*pauVar10) [16];
  longlong lVar11;
  undefined1 *puVar12;
  longlong lVar13;
  undefined1 *puVar14;
  ulonglong uVar15;
  bool bVar16;
  byte *pbVar17;
  byte *pbVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  ulonglong local_d0;
  undefined1 (*pauStack_c8) [16];
  ulonglong local_c0;
  undefined1 (*pauStack_b8) [16];
  undefined1 *local_b0;
  ulonglong *local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  longlong local_88;
  undefined8 local_80;
  
  local_80 = 0xfffffffffffffffe;
  local_d0 = 0x8000000000000002;
  pbVar2 = (byte *)param_4[1];
  local_90 = *param_5 + 2;
  puVar14 = param_3;
  puVar20 = *param_5 + 1;
LAB_1800f5b80:
  while( true ) {
    uVar6 = local_c0;
    pauVar10 = pauStack_c8;
    uVar5 = local_d0;
    if (puVar14 <= puVar20) {
      param_1[2] = local_c0;
      param_1[3] = (ulonglong)pauStack_b8;
      *param_1 = local_d0;
      param_1[1] = (ulonglong)pauStack_c8;
      return;
    }
    pbVar17 = (byte *)*param_4;
    if (pbVar17 == pbVar2) break;
    lVar9 = param_4[2];
    lVar13 = 0;
    while( true ) {
      bVar1 = pbVar17[lVar13];
      if ((ulonglong)bVar1 == 0x20) break;
      if ((&DAT_180217260)[bVar1] == '\0') {
        pbVar17 = pbVar17 + lVar13 + 1;
        *param_4 = (longlong)pbVar17;
        local_b0 = (undefined1 *)(lVar9 + lVar13);
        local_a0 = (undefined1 *)(lVar9 + 1 + lVar13);
        param_4[2] = (longlong)local_a0;
        if ((local_b0 <= puVar20) || (bVar1 != 0x3d)) goto LAB_1800f614a;
        bVar16 = false;
        goto LAB_1800f5c75;
      }
      lVar11 = lVar13 + 1;
      lVar13 = lVar13 + 1;
      if (pbVar17 + lVar11 == pbVar2) {
        *param_4 = (longlong)pbVar2;
        param_4[2] = (longlong)(pbVar2 + (lVar9 - (longlong)pbVar17));
        goto LAB_1800f60cd;
      }
    }
    *param_4 = (longlong)(pbVar17 + lVar13 + 1);
    param_4[2] = lVar9 + lVar13 + 1;
    if ((undefined1 *)(lVar9 + lVar13) != puVar20) {
LAB_1800f614a:
      *(undefined1 *)(param_1 + 1) = 3;
      *(byte *)((longlong)param_1 + 9) = bVar1;
      param_1[2] = lVar9 + lVar13;
      goto LAB_1800f60d1;
    }
    puVar20 = puVar20 + 1;
  }
LAB_1800f60cd:
  *(undefined1 *)(param_1 + 1) = 1;
  goto LAB_1800f60d1;
LAB_1800f5c75:
  lVar11 = 0;
  pbVar18 = pbVar17;
  puVar19 = local_a0;
  do {
    puVar22 = puVar14;
    local_a8 = param_1;
    local_98 = puVar14;
    local_88 = param_2;
    if (bVar16) {
      if (pbVar18 == pbVar2) {
        *(undefined1 *)(param_1 + 1) = 2;
        goto LAB_1800f60d1;
      }
      *param_4 = (longlong)(pbVar18 + 1);
      bVar1 = *pbVar18;
      param_4[2] = (longlong)(puVar19 + 1);
      if ((bVar1 == 0x22) && (local_a0 < puVar19)) {
        pbVar17 = pbVar18 + 1;
        puVar12 = puVar19;
        break;
      }
      if ((bVar1 < 0x20) || (bVar1 == 0x7f)) {
        *(undefined1 *)(param_1 + 1) = 3;
        *(byte *)((longlong)param_1 + 9) = bVar1;
        goto LAB_1800f6133;
      }
    }
    else {
      if (pbVar18 == pbVar2) {
        puVar19 = puVar14;
        goto LAB_1800f5d6c;
      }
      pbVar17 = pbVar18 + 1;
      *param_4 = (longlong)pbVar17;
      bVar1 = *pbVar18;
      param_4[2] = (longlong)(puVar19 + 1);
      if ((ulonglong)bVar1 == 0x22) goto LAB_1800f5cf8;
      if ((&DAT_180217260)[bVar1] == '\0') {
        if ((bVar1 != 0x3b) || (puVar22 = puVar19 + 1, puVar19 <= local_a0)) goto LAB_1800f6173;
        goto LAB_1800f5d6c;
      }
    }
    pbVar18 = pbVar18 + 1;
    puVar19 = puVar19 + 1;
    lVar11 = lVar11 + -1;
  } while( true );
  while( true ) {
    *param_4 = (longlong)(pbVar17 + 1);
    bVar1 = *pbVar17;
    param_4[2] = (longlong)(puVar21 + 2);
    pbVar17 = pbVar17 + 1;
    puVar12 = puVar21 + 1;
    if (bVar1 != 0x20) break;
    puVar21 = puVar12;
    if (pbVar17 == pbVar2) {
      goto LAB_1800f5d6c;
    }
  }
  if (bVar1 != 0x3b) {
    *(undefined1 *)(param_1 + 1) = 3;
    *(byte *)((longlong)param_1 + 9) = bVar1;
    param_1[2] = (ulonglong)(puVar21 + 1);
LAB_1800f60d1:
    *param_1 = 0x8000000000000003;
    if ((longlong)local_d0 < 0) {
      return;
    }
    if (local_d0 == 0) {
      return;
    }
    thunk_FUN_1801d3330(pauStack_c8,local_d0 << 5,8);
    return;
  }
  puVar22 = puVar21 + 2;
LAB_1800f5d6c:
  uVar15 = local_d0 ^ 0x8000000000000000;
  if (-1 < (longlong)local_d0) {
    uVar15 = 1;
  }
  if (uVar15 == 0) {
    FUN_180027490();
    pauVar8 = (undefined1 (*) [16])thunk_FUN_1801d32d0(0x40,8);
    if (pauVar8 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x40);
    }
    auVar3._8_4_ = (int)pauVar10;
    auVar3._0_8_ = pauVar10;
    auVar3._12_4_ = (int)((ulonglong)pauVar10 >> 0x20);
    auVar4._8_4_ = (int)(*pauVar10 + 9);
    auVar4._0_8_ = *pauVar10 + 2;
    auVar4._12_4_ = (int)((ulonglong)(*pauVar10 + 9) >> 0x20);
    *pauVar8 = auVar4;
    *(undefined1 **)pauVar8[1] = *pauVar10 + 10;
    *(longlong *)(pauVar8[1] + 8) = auVar3._8_8_ + 0xf;
    *(undefined1 **)pauVar8[2] = puVar20;
    *(undefined1 **)(pauVar8[2] + 8) = local_b0;
    *(undefined1 **)pauVar8[3] = local_a0;
    *(undefined1 **)(pauVar8[3] + 8) = puVar19;
    if ((-1 < (longlong)local_d0) && (local_d0 != 0)) {
      thunk_FUN_1801d3330(pauStack_c8,local_d0 << 5,8);
    }
    local_d0 = 2;
    local_c0 = 2;
    pauStack_c8 = pauVar8;
  }
  else {
    if (uVar15 == 1) {
      if (local_c0 == local_d0) {
        FUN_1801f8ca0(&local_d0);
      }
      *(undefined1 **)pauStack_c8[uVar6 * 2] = puVar20;
      *(undefined1 **)(pauStack_c8[uVar6 * 2] + 8) = local_b0;
      *(undefined1 **)pauStack_c8[uVar6 * 2 + 1] = local_a0;
      *(undefined1 **)(pauStack_c8[uVar6 * 2 + 1] + 8) = puVar19;
      local_c0 = uVar6 + 1;
      goto LAB_1800f60ad;
    }
    if (local_90 == puVar20) {
      if ((local_90 != (undefined1 *)0x0) && ((char)local_90[param_2] < -0x40)) {
LAB_1800f61a3:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_2,puVar14,local_90,local_b0,
                      &PTR_s_C__Users_burne__cargo_registry_s_1802173c8);
      }
      if (local_b0 < puVar14) {
        if (*(char *)(lVar13 + param_2 + lVar9) < -0x40) goto LAB_1800f61a3;
      }
      else if (local_b0 != param_3) goto LAB_1800f61a3;
      if (((((lVar9 + (-9 - (longlong)param_5) + lVar13 == 0) &&
            ((byte)(((byte)(local_90[param_2] + 0xbf) < 0x1a) << 5 | local_90[param_2]) == 99)) &&
           ((byte)(((byte)(local_90[param_2 + 1] + 0xbf) < 0x1a) << 5 | local_90[param_2 + 1]) ==
            0x68)) &&
          (((byte)(((byte)(local_90[param_2 + 2] + 0xbf) < 0x1a) << 5 | local_90[param_2 + 2]) ==
            0x61 && ((byte)(((byte)(local_90[param_2 + 3] + 0xbf) < 0x1a) << 5 |
                           local_90[param_2 + 3]) == 0x72)))) &&
         (((byte)(((byte)(local_90[param_2 + 4] + 0xbf) < 0x1a) << 5 | local_90[param_2 + 4]) ==
           0x73 && (((byte)(((byte)(local_90[param_2 + 5] + 0xbf) < 0x1a) << 5 |
                           local_90[param_2 + 5]) == 0x65 &&
                    ((byte)(((byte)(local_90[param_2 + 6] + 0xbf) < 0x1a) << 5 |
                           local_90[param_2 + 6]) == 0x74)))))) {
        puVar12 = puVar19;
        lVar9 = FUN_1800f5ac0(local_a0,puVar19,param_2,puVar14);
        if (lVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(local_88,local_98,local_a0,puVar19,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802173e0);
        }
        cVar7 = FUN_1800f59b0(&PTR_s_utf_8_1802173f8,lVar9,puVar12);
        if (cVar7 != '\0') {
          if (0 < (longlong)uVar5) {
            thunk_FUN_1801d3330(pauStack_c8,uVar5 << 5,8);
          }
          local_d0 = 0x8000000000000000;
          pauStack_c8 = param_5;
          goto LAB_1800f60ad;
        }
      }
    }
    FUN_180027490();
    pauVar10 = (undefined1 (*) [16])thunk_FUN_1801d32d0(0x20,8);
    if (pauVar10 == (undefined1 (*) [16])0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    *(undefined1 **)*pauVar10 = puVar20;
    *(undefined1 **)(*pauVar10 + 8) = local_b0;
    *(undefined1 **)pauVar10[1] = local_a0;
    *(undefined1 **)(pauVar10[1] + 8) = puVar19;
    if ((-1 < (longlong)local_d0) && (local_d0 != 0)) {
      thunk_FUN_1801d3330(pauStack_c8,local_d0 << 5,8);
    }
    local_d0 = 1;
    local_c0 = 1;
    pauStack_c8 = pauVar10;
  }
  pauStack_b8 = param_5;
LAB_1800f60ad:
  param_1 = local_a8;
  param_2 = local_88;
  puVar14 = local_98;
  puVar20 = puVar22;
  goto LAB_1800f5b80;
LAB_1800f5cf8:
  local_a0 = puVar19 + 1;
  bVar16 = true;
  if (lVar11 != 0) {
LAB_1800f6173:
    *(undefined1 *)(param_1 + 1) = 3;
    *(byte *)((longlong)param_1 + 9) = bVar1;
LAB_1800f6133:
    param_1[2] = (ulonglong)puVar19;
    goto LAB_1800f60d1;
  }
  goto LAB_1800f5c75;
}


