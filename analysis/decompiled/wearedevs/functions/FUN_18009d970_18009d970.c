/* FUN_18009d970 @ 18009d970 */

ulonglong * FUN_18009d970(ulonglong *param_1,undefined8 *param_2)

{
  undefined4 *puVar1;
  ulonglong *puVar2;
  ushort uVar3;
  undefined4 uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ulonglong uVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ushort uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uVar15;
  longlong lVar16;
  longlong lVar17;
  ulonglong uVar18;
  ushort uVar19;
  longlong local_120 [3];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  code *local_d0;
  ushort *local_c8;
  undefined8 local_c0;
  code *local_b8;
  ulonglong *local_b0;
  ulonglong local_a8;
  ushort *puStack_a0;
  ulonglong local_98;
  ushort local_90;
  undefined4 uStack_8e;
  ushort uStack_8a;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  ushort local_74;
  ushort local_72;
  ulonglong local_70;
  ushort local_66;
  uint local_64;
  undefined8 local_60;
  undefined8 *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_60 = *param_2;
  local_58 = (undefined8 *)param_2[1];
  local_d0 = (code *)local_58[3];
  local_49 = 1;
  (*local_d0)(&local_90);
  uVar12 = local_72;
  uVar19 = local_74;
  uVar5 = uStack_8a;
  uVar4 = uStack_8e;
  uVar3 = local_90;
  if (local_90 == 2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    if ((code *)*local_58 != (code *)0x0) {
      (*(code *)*local_58)(local_60);
    }
    if (local_58[1] == 0) {
      return param_1;
    }
    thunk_FUN_1801d3330(local_60,local_58[1],local_58[2]);
    return param_1;
  }
  uVar13 = (uint)local_74;
  local_c8 = (ushort *)param_2[2];
  local_c0 = param_2[3];
  uVar15 = (uint)*local_c8;
  local_49 = 1;
  FUN_1801ac510(local_120);
  uVar8 = uVar15;
  if (local_120[0] == 0) {
    uVar6 = uVar5;
    if ((uVar3 & 1) != 0) {
      uVar6 = uVar19;
    }
    if (uVar6 != 0) {
      uVar8 = (uint)uVar19;
    }
    if (uVar6 == 0 && (uVar3 & 1) == 0) goto LAB_18009da77;
  }
  else if ((uVar3 & 1) == 0) goto LAB_18009da77;
  uVar15 = (uint)uVar5;
  uVar13 = uVar8;
LAB_18009da77:
  local_e8 = local_88;
  uStack_e4 = uStack_84;
  uStack_e0 = uStack_80;
  uStack_dc = uStack_7c;
  local_d8 = local_78;
  local_b8 = (code *)local_58[4];
  local_49 = 1;
  (*local_b8)(&local_90,local_60);
  local_70 = CONCAT44(local_70._4_4_,uVar13);
  uVar9 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,local_90)) + 1;
  uVar11 = 0xffffffffffffffff;
  if (uVar9 != 0) {
    uVar11 = uVar9;
  }
  uVar14 = 4;
  uVar9 = 4;
  if (4 < uVar11) {
    uVar9 = uVar11;
  }
  uVar18 = uVar9 * 0x20;
  local_64 = uVar15;
  if (uVar18 < 0x7ffffffffffffffd && uVar11 >> 0x3b == 0) {
    local_66 = uVar12;
    local_b0 = param_1;
    FUN_180027490();
    puVar10 = (ushort *)thunk_FUN_1801d32d0(uVar18,4);
    if (puVar10 != (ushort *)0x0) {
      *puVar10 = uVar3;
      *(undefined4 *)(puVar10 + 1) = uVar4;
      puVar10[3] = (ushort)local_64;
      *(undefined4 *)(puVar10 + 4) = local_e8;
      *(undefined4 *)(puVar10 + 6) = uStack_e4;
      *(undefined4 *)(puVar10 + 8) = uStack_e0;
      *(undefined4 *)(puVar10 + 10) = uStack_dc;
      *(undefined4 *)(puVar10 + 0xc) = local_d8;
      puVar10[0xe] = (ushort)local_70;
      puVar10[0xf] = local_66;
      local_70 = 1;
      lVar17 = 0x20;
      local_a8 = uVar9;
      puStack_a0 = puVar10;
      do {
        local_98 = local_70;
        (*local_d0)(&local_90,local_60);
        uVar19 = local_74;
        uVar5 = uStack_8a;
        uVar4 = uStack_8e;
        uVar3 = local_90;
        if (local_90 == 2) {
          if ((code *)*local_58 != (code *)0x0) {
            (*(code *)*local_58)(local_60);
          }
          puVar2 = local_b0;
          if (local_58[1] != 0) {
            thunk_FUN_1801d3330(local_60,local_58[1],local_58[2]);
          }
          puVar2[2] = local_98;
          *puVar2 = local_a8;
          puVar2[1] = (ulonglong)puStack_a0;
          return puVar2;
        }
        local_64 = CONCAT22(local_64._2_2_,local_72);
        uVar12 = *local_c8;
        FUN_1801ac510(local_120,local_c0);
        if (local_120[0] == 0) {
          uVar6 = uVar5;
          if ((uVar3 & 1) != 0) {
            uVar6 = uVar19;
          }
          uVar7 = uVar12;
          if (uVar6 != 0) {
            uVar7 = uVar19;
          }
          if (uVar6 != 0 || (uVar3 & 1) != 0) {
            uVar19 = uVar7;
            goto LAB_18009dc41;
          }
        }
        else if ((uVar3 & 1) != 0) {
          uVar19 = uVar12;
LAB_18009dc41:
          uVar12 = uVar5;
        }
        local_108 = local_88;
        uStack_104 = uStack_84;
        uStack_100 = uStack_80;
        uStack_fc = uStack_7c;
        local_f8 = local_78;
        if (local_70 == local_a8) {
          (*local_b8)(&local_90,local_60);
          lVar16 = CONCAT26(uStack_8a,CONCAT42(uStack_8e,local_90)) + 1;
          if (lVar16 == 0) {
            lVar16 = -1;
          }
          FUN_1801f6a80(&local_a8,local_70,lVar16,4,0x20);
          puVar10 = puStack_a0;
        }
        *(ushort *)((longlong)puVar10 + lVar17) = uVar3;
        *(undefined4 *)((longlong)puVar10 + lVar17 + 2) = uVar4;
        *(ushort *)((longlong)puVar10 + lVar17 + 6) = uVar12;
        puVar1 = (undefined4 *)((longlong)puVar10 + lVar17 + 8);
        *puVar1 = local_108;
        puVar1[1] = uStack_104;
        puVar1[2] = uStack_100;
        puVar1[3] = uStack_fc;
        *(undefined4 *)((longlong)puVar10 + lVar17 + 0x18) = local_f8;
        *(ushort *)((longlong)puVar10 + lVar17 + 0x1c) = uVar19;
        *(undefined2 *)((longlong)puVar10 + lVar17 + 0x1e) = (undefined2)local_64;
        local_70 = local_70 + 1;
        lVar17 = lVar17 + 0x20;
      } while( true );
    }
  }
  else {
    uVar14 = 0;
  }
  local_49 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_18020171e(uVar14,uVar18);
}


