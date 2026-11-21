/* FUN_180195ca0 @ 180195ca0 */

/* WARNING: Removing unreachable block (ram,0x000180195db6) */
/* WARNING: Type propagation algorithm not settling */

void FUN_180195ca0(ulonglong *param_1,ulonglong *param_2,byte *param_3,byte *param_4,byte param_5,
                  longlong param_6)

{
  byte *pbVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  char cVar11;
  uint uVar12;
  uint *puVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  ulonglong *puVar16;
  uint uVar17;
  byte *pbVar18;
  void *pvVar19;
  ulonglong uVar20;
  byte *pbVar21;
  uint uVar22;
  byte *pbVar23;
  ulonglong uVar24;
  undefined4 uVar25;
  undefined8 in_stack_fffffffffffffee0;
  undefined4 uVar26;
  undefined4 uVar27;
  longlong local_d8;
  short *local_d0;
  longlong local_c8;
  byte *local_c0;
  ulonglong *local_b8;
  void *local_b0;
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  uint local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  ulonglong local_68;
  byte *local_60;
  ulonglong *local_58;
  byte local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  uVar10 = uStack_9c;
  uVar27 = uStack_a0;
  uVar25 = uStack_a4;
  iVar4 = local_a8;
  uVar26 = (undefined4)((ulonglong)in_stack_fffffffffffffee0 >> 0x20);
  local_48 = 0xfffffffffffffffe;
  pbVar23 = param_3;
  do {
    local_58 = param_2;
    if (pbVar23 == param_4) {
LAB_180195fb0:
      if (*(int *)(param_6 + 0x20) == 1) {
        uVar20 = (ulonglong)*(uint *)(param_6 + 0x24);
        pvVar19 = *(void **)(param_6 + 8);
        if (uVar20 == 0) {
          uVar24 = param_2[2];
          uVar20 = 0;
          goto LAB_1801965a5;
        }
        uVar24 = *(ulonglong *)(param_6 + 0x10);
        if (uVar20 < uVar24) {
          if (*(char *)((longlong)pvVar19 + uVar20) < -0x40) goto LAB_180196ac4;
        }
        else if (uVar24 != uVar20) {
LAB_180196ac4:
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pvVar19,uVar24,0,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_1802670d0);
        }
      }
      else {
        pvVar19 = *(void **)(param_6 + 8);
        uVar20 = *(ulonglong *)(param_6 + 0x10);
      }
      uVar24 = param_2[2];
      if (*param_2 - uVar24 < uVar20) {
        local_49 = 1;
        FUN_1801f6a80(param_2,uVar24,uVar20,1,1);
        uVar24 = local_58[2];
      }
LAB_1801965a5:
      puVar16 = local_58;
      memcpy((void *)(local_58[1] + uVar24),pvVar19,uVar20);
      puVar16[2] = uVar24 + uVar20;
      param_1[2] = uVar24 + uVar20;
      uVar20 = puVar16[1];
      *param_1 = *puVar16;
      param_1[1] = uVar20;
      *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_6 + 0x50);
      uVar20 = *(ulonglong *)(param_6 + 0x48);
      param_1[8] = *(ulonglong *)(param_6 + 0x40);
      param_1[9] = uVar20;
      uVar25 = *(undefined4 *)(param_6 + 0x3c);
      param_1[3] = *(ulonglong *)(param_6 + 0x18);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_6 + 0x28);
      uVar15 = *(undefined8 *)(param_6 + 0x34);
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_6 + 0x2c);
      *(undefined8 *)((longlong)param_1 + 0x34) = uVar15;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar25;
      return;
    }
    bVar2 = *pbVar23;
    uVar12 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      pbVar18 = pbVar23 + 1;
      if (bVar2 < 0xe0) {
        pbVar23 = pbVar23 + 2;
        uVar12 = (uVar12 & 0x1f) << 6 | *pbVar18 & 0x3f;
      }
      else {
        uVar17 = pbVar23[2] & 0x3f | (*pbVar18 & 0x3f) << 6;
        if (bVar2 < 0xf0) {
          pbVar23 = pbVar23 + 3;
          uVar12 = uVar17 | (uVar12 & 0x1f) << 0xc;
        }
        else {
          uVar12 = pbVar23[3] & 0x3f | uVar17 << 6 | (uVar12 & 7) << 0x12;
          if (uVar12 == 0x110000) goto LAB_180195fb0;
          pbVar23 = pbVar23 + 4;
        }
      }
    }
    else {
      pbVar23 = pbVar23 + 1;
    }
  } while (((uVar12 < 0xe) && ((0x2600U >> (uVar12 & 0x1f) & 1) != 0)) || (uVar12 == 0x110000));
  if (uVar12 < 0x3f) {
    if (uVar12 == 0x23) {
      local_68 = param_2[8];
      local_a8 = (int)*param_2;
      uStack_a4 = *(undefined4 *)((longlong)param_2 + 4);
      uStack_a0 = (undefined4)param_2[1];
      uStack_9c = *(undefined4 *)((longlong)param_2 + 0xc);
      local_98 = (uint)param_2[2];
      uStack_94 = *(undefined4 *)((longlong)param_2 + 0x14);
      uStack_90 = (undefined4)param_2[3];
      uStack_8c = *(undefined4 *)((longlong)param_2 + 0x1c);
      local_88 = (undefined4)param_2[4];
      uStack_84 = *(undefined4 *)((longlong)param_2 + 0x24);
      uStack_80 = (undefined4)param_2[5];
      uStack_7c = *(undefined4 *)((longlong)param_2 + 0x2c);
      local_78 = (undefined4)param_2[6];
      uStack_74 = *(undefined4 *)((longlong)param_2 + 0x34);
      uStack_70 = (undefined4)param_2[7];
      uStack_6c = *(undefined4 *)((longlong)param_2 + 0x3c);
      local_49 = 0;
      FUN_180195790(param_1,&local_a8,param_6,param_3,param_4);
      return;
    }
    if (uVar12 == 0x2f) {
LAB_180195e0e:
      uVar12 = 0;
      pbVar18 = param_3;
      local_60 = param_3;
joined_r0x000180195e1f:
      if (pbVar18 != param_4) {
        do {
          bVar2 = *pbVar18;
          uVar17 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            pbVar21 = pbVar18 + 1;
            if (bVar2 < 0xe0) {
              pbVar18 = pbVar18 + 2;
              uVar17 = (uVar17 & 0x1f) << 6 | *pbVar21 & 0x3f;
              goto joined_r0x000180195ec5;
            }
            uVar22 = pbVar18[2] & 0x3f | (*pbVar21 & 0x3f) << 6;
            if (0xef < bVar2) {
              uVar17 = pbVar18[3] & 0x3f | uVar22 << 6 | (uVar17 & 7) << 0x12;
              if (uVar17 != 0x110000) {
                pbVar18 = pbVar18 + 4;
                goto joined_r0x000180195ec5;
              }
              break;
            }
            pbVar18 = pbVar18 + 3;
            uVar17 = uVar22 | (uVar17 & 0x1f) << 0xc;
            if (uVar17 < 0xe) goto LAB_180195f00;
LAB_180195e30:
            uVar22 = uVar17;
          }
          else {
            pbVar18 = pbVar18 + 1;
joined_r0x000180195ec5:
            if (0xd < uVar17) goto LAB_180195e30;
LAB_180195f00:
            uVar22 = 0x110000;
            if ((0x2600U >> (uVar17 & 0x1f) & 1) == 0) goto LAB_180195e30;
          }
          if (uVar22 == 0x110000) goto joined_r0x000180195e1f;
          if ((uVar22 != 0x5c) && (uVar22 != 0x2f)) break;
          uVar12 = uVar12 + 1;
          local_60 = pbVar18;
          if (pbVar18 == param_4) break;
        } while( true );
      }
      if (uVar12 < 2) {
        uVar12 = *(uint *)(param_6 + 0x3c);
        uVar20 = (ulonglong)uVar12;
        pvVar19 = *(void **)(param_6 + 8);
        if (uVar20 != 0) {
          uVar24 = *(ulonglong *)(param_6 + 0x10);
          if (uVar20 < uVar24) {
            if (*(char *)((longlong)pvVar19 + uVar20) < -0x40) goto LAB_180196011;
          }
          else if (uVar24 != uVar20) {
LAB_180196011:
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(pvVar19,uVar24,0,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_180267668)
            ;
          }
        }
        uVar24 = param_2[2];
        if (*param_2 - uVar24 < uVar20) {
          local_4a = param_5;
          local_49 = 1;
          FUN_1801f6a80(param_2,uVar24,uVar20,1,1);
          uVar24 = local_58[2];
          param_5 = local_4a;
        }
        memcpy((void *)(local_58[1] + uVar24),pvVar19,uVar20);
        uVar24 = uVar24 + uVar20;
        local_58[2] = uVar24;
        uVar14 = uVar24;
        if (*local_58 == uVar24) {
          local_49 = 1;
          FUN_1801f6a80(local_58,uVar24,1,1,1);
          uVar14 = local_58[2];
        }
        *(undefined1 *)(local_58[1] + uVar14) = 0x2f;
        local_58[2] = uVar24 + 1;
        local_a8 = CONCAT31(local_a8._1_3_,1);
        local_49 = 1;
        uVar14 = (ulonglong)param_5;
        uVar15 = FUN_180194060(local_58,uVar14,&local_a8,uVar20,pbVar23,param_4);
        local_68 = local_58[8];
        local_a8 = (int)*local_58;
        uStack_a4 = *(undefined4 *)((longlong)local_58 + 4);
        uStack_a0 = (undefined4)local_58[1];
        uStack_9c = *(undefined4 *)((longlong)local_58 + 0xc);
        local_98 = (uint)local_58[2];
        uStack_94 = *(undefined4 *)((longlong)local_58 + 0x14);
        uStack_90 = (undefined4)local_58[3];
        uStack_8c = *(undefined4 *)((longlong)local_58 + 0x1c);
        local_88 = (undefined4)local_58[4];
        uStack_84 = *(undefined4 *)((longlong)local_58 + 0x24);
        uStack_80 = (undefined4)local_58[5];
        uStack_7c = *(undefined4 *)((longlong)local_58 + 0x2c);
        local_78 = (undefined4)local_58[6];
        uStack_74 = *(undefined4 *)((longlong)local_58 + 0x34);
        uStack_70 = (undefined4)local_58[7];
        uStack_6c = *(undefined4 *)((longlong)local_58 + 0x3c);
        local_49 = 0;
        FUN_180198070(param_1,&local_a8,CONCAT71((int7)(uVar24 + 1 >> 8),param_5) & 0xffffffff,
                      *(undefined4 *)(param_6 + 0x2c),*(undefined4 *)(param_6 + 0x30),
                      *(undefined4 *)(param_6 + 0x34),*(undefined4 *)(param_6 + 0x38),param_6 + 0x40
                      ,*(undefined2 *)(param_6 + 0x28),*(undefined2 *)(param_6 + 0x2a),uVar12,uVar15
                      ,uVar14);
        return;
      }
      local_4a = param_5;
      uVar20 = param_2[6];
      local_a8 = (int)param_3;
      iVar6 = local_a8;
      uStack_a4 = (undefined4)((ulonglong)param_3 >> 0x20);
      uVar7 = uStack_a4;
      uStack_a0 = SUB84(param_4,0);
      uVar8 = uStack_a0;
      uStack_9c = (undefined4)((ulonglong)param_4 >> 0x20);
      uVar9 = uStack_9c;
      if (uVar20 != 0) {
        uVar24 = param_2[7];
        local_98 = local_98 & 0xffffff00;
        local_49 = 1;
        FUN_18019dcf0(&local_d8,&local_a8);
        if (local_c8 == 2) {
          sVar3 = *local_d0;
          if (local_d8 != 0) {
            thunk_FUN_1801d3330(local_d0,local_d8,1);
          }
          iVar4 = local_a8;
          uVar25 = uStack_a4;
          uVar27 = uStack_a0;
          uVar10 = uStack_9c;
          if (sVar3 == 0x2f2f) goto LAB_180196262;
        }
        else if (local_d8 != 0) {
          thunk_FUN_1801d3330(local_d0,local_d8,1);
        }
        local_49 = 1;
        (**(code **)(uVar24 + 0x28))(uVar20,3);
        iVar4 = local_a8;
        uVar25 = uStack_a4;
        uVar27 = uStack_a0;
        uVar10 = uStack_9c;
      }
LAB_180196262:
      uStack_9c = uVar10;
      uStack_a0 = uVar27;
      uStack_a4 = uVar25;
      local_a8 = iVar4;
      iVar4 = *(int *)(param_6 + 0x2c);
      pvVar19 = *(void **)(param_6 + 8);
      uVar20 = (ulonglong)(iVar4 + 1U);
      if (iVar4 + 1U != 0) {
        uVar24 = *(ulonglong *)(param_6 + 0x10);
        if (uVar20 < uVar24) {
          if (*(char *)((longlong)pvVar19 + uVar20) < -0x40) goto LAB_180196284;
        }
        else if (uVar24 != uVar20) {
LAB_180196284:
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pvVar19,uVar24,0,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
        }
      }
      uVar24 = local_58[2];
      if (*local_58 - uVar24 < uVar20) {
        local_49 = 1;
        local_b0 = pvVar19;
        FUN_1801f6a80(local_58,uVar24,uVar20,1,1);
        uVar24 = local_58[2];
        pvVar19 = local_b0;
      }
      puVar16 = local_58;
      memcpy((void *)(local_58[1] + uVar24),pvVar19,uVar20);
      puVar16[2] = uVar24 + uVar20;
      local_a8 = iVar6;
      uStack_a4 = uVar7;
      uStack_a0 = uVar8;
      uStack_9c = uVar9;
      cVar11 = FUN_180199fe0(&DAT_1802670e8,2,&local_a8);
      if (cVar11 == '\0') {
        local_68 = puVar16[8];
        local_a8 = (int)*puVar16;
        uStack_a4 = *(undefined4 *)((longlong)puVar16 + 4);
        uStack_a0 = (undefined4)puVar16[1];
        uStack_9c = *(undefined4 *)((longlong)puVar16 + 0xc);
        local_98 = (uint)puVar16[2];
        uStack_94 = *(undefined4 *)((longlong)puVar16 + 0x14);
        uStack_90 = (undefined4)puVar16[3];
        uStack_8c = *(undefined4 *)((longlong)puVar16 + 0x1c);
        local_88 = (undefined4)puVar16[4];
        uStack_84 = *(undefined4 *)((longlong)puVar16 + 0x24);
        uStack_80 = (undefined4)puVar16[5];
        uStack_7c = *(undefined4 *)((longlong)puVar16 + 0x2c);
        local_78 = (undefined4)puVar16[6];
        uStack_74 = *(undefined4 *)((longlong)puVar16 + 0x34);
        uStack_70 = (undefined4)puVar16[7];
        uStack_6c = *(undefined4 *)((longlong)puVar16 + 0x3c);
        local_49 = 0;
        FUN_180196de0(param_1,&local_a8,local_60,param_4,local_4a,CONCAT44(uVar26,iVar4));
        return;
      }
      uVar15 = CONCAT44(uStack_a4,local_a8);
      uVar5 = CONCAT44(uStack_9c,uStack_a0);
      local_68 = puVar16[8];
      local_a8 = (int)*puVar16;
      uStack_a4 = *(undefined4 *)((longlong)puVar16 + 4);
      uStack_a0 = (undefined4)puVar16[1];
      uStack_9c = *(undefined4 *)((longlong)puVar16 + 0xc);
      local_98 = (uint)puVar16[2];
      uStack_94 = *(undefined4 *)((longlong)puVar16 + 0x14);
      uStack_90 = (undefined4)puVar16[3];
      uStack_8c = *(undefined4 *)((longlong)puVar16 + 0x1c);
      local_88 = (undefined4)puVar16[4];
      uStack_84 = *(undefined4 *)((longlong)puVar16 + 0x24);
      uStack_80 = (undefined4)puVar16[5];
      uStack_7c = *(undefined4 *)((longlong)puVar16 + 0x2c);
      local_78 = (undefined4)puVar16[6];
      uStack_74 = *(undefined4 *)((longlong)puVar16 + 0x34);
      uStack_70 = (undefined4)puVar16[7];
      uStack_6c = *(undefined4 *)((longlong)puVar16 + 0x3c);
      local_49 = 0;
      FUN_180196de0(param_1,&local_a8,uVar15,uVar5,local_4a,CONCAT44(uVar26,iVar4));
      return;
    }
  }
  else {
    if (uVar12 == 0x3f) {
      local_4a = param_5;
      if (*(char *)(param_6 + 0x18) == '\0') {
        if (*(char *)(param_6 + 0x20) != '\0') {
          uVar12 = *(uint *)(param_6 + 0x24);
          pvVar19 = *(void **)(param_6 + 8);
          goto joined_r0x000180196128;
        }
        pvVar19 = *(void **)(param_6 + 8);
        uVar20 = *(ulonglong *)(param_6 + 0x10);
      }
      else {
        uVar12 = *(uint *)(param_6 + 0x1c);
        pvVar19 = *(void **)(param_6 + 8);
joined_r0x000180196128:
        uVar24 = (ulonglong)uVar12;
        if (uVar24 == 0) {
          uVar24 = param_2[2];
          uVar20 = 0;
          goto LAB_1801964b5;
        }
        uVar20 = *(ulonglong *)(param_6 + 0x10);
        if (uVar24 < uVar20) {
          if (*(char *)((longlong)pvVar19 + uVar24) < -0x40) goto LAB_180196aa4;
          uVar20 = uVar24;
        }
        else if (uVar20 != uVar24) {
LAB_180196aa4:
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pvVar19,uVar20,0,uVar24,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
        }
      }
      uVar24 = param_2[2];
      if (*param_2 - uVar24 < uVar20) {
        local_49 = 1;
        FUN_1801f6a80(param_2,uVar24,uVar20,1,1);
        uVar24 = local_58[2];
      }
LAB_1801964b5:
      puVar16 = local_58;
      memcpy((void *)(local_58[1] + uVar24),pvVar19,uVar20);
      puVar16[2] = uVar24 + uVar20;
      uVar25 = *(undefined4 *)(param_6 + 0x2c);
      local_49 = 1;
      FUN_1801985c0(&local_a8,puVar16,local_4a,uVar25,param_3,param_4);
      if (local_a8 != 2) {
        param_1[2] = local_58[2];
        uVar20 = local_58[1];
        *param_1 = *local_58;
        param_1[1] = uVar20;
        uVar20 = *(ulonglong *)(param_6 + 0x48);
        param_1[8] = *(ulonglong *)(param_6 + 0x40);
        param_1[9] = uVar20;
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_6 + 0x50);
        *(int *)(param_1 + 3) = local_a8;
        *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_a0,uStack_a4);
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_9c;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_6 + 0x28);
        *(undefined4 *)((longlong)param_1 + 0x2c) = uVar25;
        uVar20 = *(ulonglong *)(param_6 + 0x38);
        param_1[6] = *(ulonglong *)(param_6 + 0x30);
        param_1[7] = uVar20;
        return;
      }
      *(undefined1 *)(param_1 + 1) = (undefined1)uStack_a4;
      *param_1 = 0x8000000000000000;
      if (*local_58 == 0) {
        return;
      }
      thunk_FUN_1801d3330(local_58[1],*local_58,1);
      return;
    }
    if (uVar12 == 0x5c) goto LAB_180195e0e;
  }
  local_4a = param_5;
  local_c0 = param_3;
  local_b8 = param_1;
  if (*(char *)(param_6 + 0x18) == '\0') {
    if (*(char *)(param_6 + 0x20) != '\0') {
      puVar13 = (uint *)(param_6 + 0x24);
      goto LAB_1801960df;
    }
    pvVar19 = *(void **)(param_6 + 8);
    uVar20 = *(ulonglong *)(param_6 + 0x10);
    local_60 = (byte *)uVar20;
LAB_1801963ef:
    uVar24 = param_2[2];
    if (*param_2 - uVar24 < uVar20) {
      local_49 = 1;
      local_b0 = pvVar19;
      FUN_1801f6a80(param_2,uVar24,uVar20,1,1);
      uVar24 = param_2[2];
      pvVar19 = local_b0;
    }
    else {
    }
  }
  else {
    puVar13 = (uint *)(param_6 + 0x1c);
LAB_1801960df:
    uVar20 = (ulonglong)*puVar13;
    pvVar19 = *(void **)(param_6 + 8);
    local_60 = *(byte **)(param_6 + 0x10);
    if (uVar20 != 0) {
      if (uVar20 < local_60) {
        if (*(char *)((longlong)pvVar19 + uVar20) < -0x40) goto LAB_180196a84;
      }
      else {
        if (local_60 != (byte *)uVar20) {
LAB_180196a84:
          local_49 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(pvVar19,local_60,0,uVar20,&PTR_s_C__Users_burne__cargo_registry_s_180267668)
          ;
        }
        uVar20 = (ulonglong)local_60;
      }
      goto LAB_1801963ef;
    }
    uVar24 = param_2[2];
    uVar20 = 0;
  }
  puVar16 = local_58;
  memcpy((void *)(local_58[1] + uVar24),pvVar19,uVar20);
  puVar16[2] = uVar24 + uVar20;
  uVar12 = *(uint *)(param_6 + 0x3c);
  uVar20 = (ulonglong)uVar12;
  local_49 = 1;
  FUN_180198be0(puVar16,local_4a,uVar20);
  pbVar23 = local_c0;
  pbVar18 = pbVar23;
  puVar16 = local_58;
  if (param_2[2] == uVar20) {
    uVar24 = (ulonglong)*(uint *)(param_6 + 0x2c);
    if (uVar24 != 0) {
      if (uVar24 < local_60) {
        if (*(char *)((longlong)pvVar19 + uVar24) < -0x40) goto LAB_18019647c;
      }
      else if (local_60 != (byte *)uVar24) {
LAB_18019647c:
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(pvVar19,local_60,0,uVar24,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
      }
    }
    cVar11 = FUN_18019a5c0(pvVar19,uVar24);
    if (cVar11 == '\x02') {
      puVar16 = local_58;
      if (pbVar23 != param_4) {
        pbVar21 = pbVar23;
        do {
          bVar2 = *pbVar21;
          uVar17 = (uint)bVar2;
          if ((char)bVar2 < '\0') {
            pbVar1 = pbVar21 + 1;
            if (bVar2 < 0xe0) {
              pbVar21 = pbVar21 + 2;
              uVar17 = (uVar17 & 0x1f) << 6 | *pbVar1 & 0x3f;
            }
            else {
              uVar22 = pbVar21[2] & 0x3f | (*pbVar1 & 0x3f) << 6;
              if (bVar2 < 0xf0) {
                pbVar21 = pbVar21 + 3;
                uVar17 = uVar22 | (uVar17 & 0x1f) << 0xc;
              }
              else {
                uVar17 = pbVar21[3] & 0x3f | uVar22 << 6 | (uVar17 & 7) << 0x12;
                if (uVar17 == 0x110000) break;
                pbVar21 = pbVar21 + 4;
              }
            }
            if (uVar17 < 0xe) goto LAB_180196640;
LAB_180196707:
            if (uVar17 != 0x110000) goto LAB_180196713;
          }
          else {
            pbVar21 = pbVar21 + 1;
            if (0xd < uVar17) goto LAB_180196707;
LAB_180196640:
            if ((0x2600U >> (uVar17 & 0x1f) & 1) == 0) goto LAB_180196707;
          }
        } while (pbVar21 != param_4);
      }
    }
    else {
LAB_180196713:
      uVar24 = uVar20;
      if (*local_58 == uVar20) {
        local_49 = 1;
        FUN_1801f6a80(local_58,uVar20,1,1,1);
        uVar24 = param_2[2];
      }
      *(undefined1 *)(local_58[1] + uVar24) = 0x2f;
      local_58[2] = uVar20 + 1;
      puVar16 = local_58;
    }
  }
  do {
    if (pbVar18 == param_4) goto LAB_180196853;
    bVar2 = *pbVar18;
    uVar17 = (uint)bVar2;
    if ((char)bVar2 < '\0') {
      if (bVar2 < 0xe0) {
        pbVar21 = pbVar18 + 2;
        uVar17 = (uVar17 & 0x1f) << 6 | pbVar18[1] & 0x3f;
        goto joined_r0x0001801967d9;
      }
      uVar22 = pbVar18[2] & 0x3f | (pbVar18[1] & 0x3f) << 6;
      if (0xef < bVar2) {
        uVar17 = pbVar18[3] & 0x3f | uVar22 << 6 | (uVar17 & 7) << 0x12;
        if (uVar17 != 0x110000) {
          pbVar21 = pbVar18 + 4;
          goto joined_r0x0001801967d9;
        }
        goto LAB_180196853;
      }
      pbVar21 = pbVar18 + 3;
      uVar17 = uVar22 | (uVar17 & 0x1f) << 0xc;
      if (uVar17 < 0xe) goto LAB_180196810;
LAB_180196740:
      uVar22 = uVar17;
    }
    else {
      pbVar21 = pbVar18 + 1;
joined_r0x0001801967d9:
      if (0xd < uVar17) goto LAB_180196740;
LAB_180196810:
      uVar22 = 0x110000;
      if ((0x2600U >> (uVar17 & 0x1f) & 1) == 0) goto LAB_180196740;
    }
    pbVar18 = pbVar21;
  } while (uVar22 == 0x110000);
  if (uVar22 == 0x2f) {
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_49 = 1;
    uVar24 = (ulonglong)local_4a;
    uVar15 = FUN_180194060(puVar16,uVar24,&local_a8,uVar20,pbVar21,param_4);
    uVar25 = (undefined4)((ulonglong)pbVar21 >> 0x20);
    uVar27 = (undefined4)((ulonglong)param_4 >> 0x20);
  }
  else {
LAB_180196853:
    local_a8 = CONCAT31(local_a8._1_3_,1);
    local_49 = 1;
    uVar24 = (ulonglong)local_4a;
    uVar15 = FUN_180194060(puVar16,uVar24,&local_a8,uVar20,pbVar23,param_4);
    uVar25 = (undefined4)((ulonglong)pbVar23 >> 0x20);
    uVar27 = (undefined4)((ulonglong)param_4 >> 0x20);
  }
  local_68 = local_58[8];
  local_a8 = (int)*local_58;
  uStack_a4 = *(undefined4 *)((longlong)local_58 + 4);
  uStack_a0 = (undefined4)local_58[1];
  uStack_9c = *(undefined4 *)((longlong)local_58 + 0xc);
  local_98 = (uint)local_58[2];
  uStack_94 = *(undefined4 *)((longlong)local_58 + 0x14);
  uStack_90 = (undefined4)local_58[3];
  uStack_8c = *(undefined4 *)((longlong)local_58 + 0x1c);
  local_88 = (undefined4)local_58[4];
  uStack_84 = *(undefined4 *)((longlong)local_58 + 0x24);
  uStack_80 = (undefined4)local_58[5];
  uStack_7c = *(undefined4 *)((longlong)local_58 + 0x2c);
  local_78 = (undefined4)local_58[6];
  uStack_74 = *(undefined4 *)((longlong)local_58 + 0x34);
  uStack_70 = (undefined4)local_58[7];
  uStack_6c = *(undefined4 *)((longlong)local_58 + 0x3c);
  local_49 = 0;
  FUN_180198070(local_b8,&local_a8,local_4a,*(undefined4 *)(param_6 + 0x2c),
                CONCAT44(uVar25,*(undefined4 *)(param_6 + 0x30)),
                CONCAT44(uVar27,*(undefined4 *)(param_6 + 0x34)),*(undefined4 *)(param_6 + 0x38),
                param_6 + 0x40,*(undefined2 *)(param_6 + 0x28),*(undefined2 *)(param_6 + 0x2a),
                uVar12,uVar15,uVar24);
  return;
}


