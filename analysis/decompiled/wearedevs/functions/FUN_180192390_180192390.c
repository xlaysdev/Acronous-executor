/* FUN_180192390 @ 180192390 */

void FUN_180192390(ulonglong *param_1,ulonglong *param_2,uint *param_3,uint *param_4,
                  ulonglong param_5)

{
  byte *pbVar1;
  undefined4 uVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  undefined8 uVar6;
  uint *puVar7;
  uint uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  uint *puVar11;
  byte *pbVar12;
  undefined8 uVar13;
  void *pvVar14;
  longlong lVar15;
  byte *pbVar16;
  ulonglong uVar17;
  uint uVar18;
  uint uVar19;
  byte *pbVar20;
  ulonglong *puVar21;
  ulonglong uVar22;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  uint *local_d8;
  code *local_d0;
  longlong local_c8;
  uint *local_c0;
  uint local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint uStack_ac;
  ulonglong local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  ulonglong local_78;
  undefined1 local_61;
  undefined8 local_60;
  ulonglong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar7 = param_3;
  do {
    local_58 = param_2;
    if (puVar7 == param_4) {
LAB_180192716:
      if (param_5 != 0) goto LAB_18019271f;
      goto LAB_1801929a3;
    }
    bVar3 = (byte)*puVar7;
    uVar8 = (uint)bVar3;
    if ((char)bVar3 < '\0') {
      uVar18 = *(byte *)((longlong)puVar7 + 1) & 0x3f;
      if (bVar3 < 0xe0) {
        puVar7 = (uint *)((longlong)puVar7 + 2);
        uVar8 = (uVar8 & 0x1f) << 6 | uVar18;
      }
      else {
        uVar18 = *(byte *)((longlong)puVar7 + 2) & 0x3f | uVar18 << 6;
        if (bVar3 < 0xf0) {
          puVar7 = (uint *)((longlong)puVar7 + 3);
          uVar8 = uVar18 | (uVar8 & 0x1f) << 0xc;
        }
        else {
          uVar8 = *(byte *)((longlong)puVar7 + 3) & 0x3f | uVar18 << 6 | (uVar8 & 7) << 0x12;
          if (uVar8 == 0x110000) goto LAB_180192716;
          puVar7 = puVar7 + 1;
        }
      }
    }
    else {
      puVar7 = (uint *)((longlong)puVar7 + 1);
    }
  } while (((uVar8 < 0xe) && ((0x2600U >> (uVar8 & 0x1f) & 1) != 0)) || (uVar8 == 0x110000));
  if ((uVar8 == 0x2f) || (uVar8 == 0x5c)) {
    local_c0 = param_3;
    if ((param_2[6] != 0) && (uVar8 == 0x5c)) {
      local_49 = 1;
      (**(code **)(param_2[7] + 0x28))(param_2[6],0);
    }
    puVar11 = puVar7;
    do {
      if (puVar11 == param_4) goto LAB_180192757;
      bVar3 = (byte)*puVar11;
      uVar18 = (uint)bVar3;
      if ((char)bVar3 < '\0') {
        uVar19 = *(byte *)((longlong)puVar11 + 1) & 0x3f;
        if (bVar3 < 0xe0) {
          puVar11 = (uint *)((longlong)puVar11 + 2);
          uVar18 = (uVar18 & 0x1f) << 6 | uVar19;
        }
        else {
          uVar19 = *(byte *)((longlong)puVar11 + 2) & 0x3f | uVar19 << 6;
          if (bVar3 < 0xf0) {
            puVar11 = (uint *)((longlong)puVar11 + 3);
            uVar18 = uVar19 | (uVar18 & 0x1f) << 0xc;
          }
          else {
            uVar18 = *(byte *)((longlong)puVar11 + 3) & 0x3f | uVar19 << 6 | (uVar18 & 7) << 0x12;
            if (uVar18 == 0x110000) goto LAB_180192757;
            puVar11 = puVar11 + 1;
          }
        }
      }
      else {
        puVar11 = (uint *)((longlong)puVar11 + 1);
      }
    } while (((uVar18 < 0xe) && ((0x2600U >> (uVar18 & 0x1f) & 1) != 0)) || (uVar18 == 0x110000));
    if ((uVar18 == 0x2f) || (uVar18 == 0x5c)) {
      if ((local_58[6] != 0) && (uVar18 == 0x5c)) {
        local_49 = 1;
        (**(code **)(local_58[7] + 0x28))(local_58[6],0);
        param_3 = puVar11;
      }
      uVar9 = local_58[2];
      if (*local_58 - uVar9 < 7) {
        local_49 = 1;
        FUN_1801f6a80(local_58,uVar9,7,1,1);
        uVar9 = local_58[2];
        param_3 = puVar11;
      }
      uVar17 = local_58[1];
      *(undefined4 *)(uVar17 + 3 + uVar9) = 0x2f2f3a65;
      *(undefined4 *)(uVar17 + uVar9) = 0x656c6966;
      local_58[2] = uVar9 + 7;
      local_49 = 1;
      FUN_180198d10(&local_b8,puVar11,param_4);
      bVar3 = (byte)uStack_b0;
      if ((uint *)CONCAT44(uStack_b4,local_b8) == (uint *)0x8000000000000001) {
LAB_180192707:
        *(byte *)(param_1 + 1) = bVar3;
      }
      else {
        uVar9 = (ulonglong)CONCAT13((undefined1)uStack_ac,uStack_b0._1_3_) << 8 |
                (ulonglong)uStack_ac._1_3_ << 0x28;
        plVar10 = (longlong *)(uVar9 | (byte)uStack_b0);
        puVar7 = (uint *)CONCAT44(uStack_b4,local_b8);
        if (local_a8 == 0) {
LAB_180192c4b:
          if (((ulonglong)puVar7 & 0x7fffffffffffffff) != 0) {
            thunk_FUN_1801d3330(plVar10,puVar7,1);
          }
          uVar9 = local_58[2];
          if (uVar9 >> 0x20 == 0) {
            local_d8 = (uint *)((ulonglong)local_d8 & 0xffffffffffffff00);
            uVar17 = uVar9;
            if (*local_58 == uVar9) {
              local_49 = 1;
              FUN_1801f6a80(local_58,uVar9,1,1,1);
              uVar17 = local_58[2];
            }
            *(undefined1 *)(local_58[1] + uVar17) = 0x2f;
            local_58[2] = uVar9 + 1;
            local_49 = 1;
            cVar4 = '\0';
            uVar6 = 0;
            puVar7 = (uint *)FUN_180194060(local_58,0,&local_d8,uVar9,CONCAT44(uStack_94,local_98),
                                           CONCAT44(uStack_8c,uStack_90));
            local_c0 = puVar7;
joined_r0x000180192cca:
            if ((char)local_d8 == '\0') {
              local_49 = 1;
              FUN_18019dc20(&local_b8,local_58,7,uVar9,
                            &PTR_s_C__Users_burne__cargo_registry_s_180266f18);
              local_49 = 1;
              FUN_1801ed580(&local_b8);
              uVar9 = 7;
              cVar4 = '\0';
            }
            local_49 = 1;
            FUN_1801985c0(&local_b8,local_58,0,4,puVar7,uVar6);
            if (local_b8 != 2) {
              param_1[2] = local_58[2];
              uVar17 = local_58[1];
              *param_1 = *local_58;
              param_1[1] = uVar17;
              *(int *)((longlong)param_1 + 0x41) = (int)param_3;
              *(int *)((longlong)param_1 + 0x45) = (int)local_c0;
              *(ulonglong *)((longlong)param_1 + 0x49) = param_5;
              *(uint *)(param_1 + 3) = local_b8;
              *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_b0,uStack_b4);
              *(uint *)((longlong)param_1 + 0x24) = uStack_ac;
              *(undefined2 *)(param_1 + 5) = 0;
              *(undefined8 *)((longlong)param_1 + 0x2c) = 0x700000004;
              *(undefined4 *)((longlong)param_1 + 0x34) = 7;
              *(int *)(param_1 + 7) = (int)uVar9;
              *(int *)((longlong)param_1 + 0x3c) = (int)uVar9;
              *(char *)(param_1 + 8) = cVar4;
              return;
            }
            goto LAB_180192e53;
          }
        }
        else {
          uStack_b0 = SUB84(plVar10,0);
          uStack_ac = (uint)(uVar9 >> 0x20);
          local_49 = 1;
          param_3 = &local_b8;
          FUN_18019c3e0(&local_d8,param_3);
          bVar3 = (byte)local_d0;
          if (local_d8 == (uint *)0x8000000000000003) goto LAB_180192707;
          uVar9 = ((ulonglong)local_d0 >> 8 & 0xffffffff) << 8 |
                  (ulonglong)local_d0 & 0xffffff0000000000;
          plVar10 = (longlong *)(uVar9 | (ulonglong)local_d0 & 0xff);
          puVar7 = (uint *)0x0;
          if ((uint *)0x8000000000000000 < local_d8) {
            puVar7 = local_d8;
          }
          if ((local_c8 == 9 && ((ulonglong)puVar7 & 0x7fffffffffffffff) == 0) &&
             (puVar7 = local_d8, (char)plVar10[1] == 't' && *plVar10 == 0x736f686c61636f6c))
          goto LAB_180192c4b;
          local_b8 = (uint)local_d8;
          uStack_b4 = (undefined4)((ulonglong)local_d8 >> 0x20);
          uStack_b0 = SUB84(plVar10,0);
          uStack_ac = (uint)(uVar9 >> 0x20);
          local_a8 = local_c8;
          local_d0 = FUN_18019cf10;
          local_d8 = param_3;
          cVar4 = FUN_1801ef150(local_58,&PTR_LAB_180267120,&DAT_180267118,&local_d8);
          param_5 = local_a8;
          if (cVar4 != '\0') {
                    /* WARNING: Subroutine does not return */
            FUN_180201bc0(&DAT_180267438,0x2b,&local_61,&DAT_180267418,
                          &PTR_s_C__Users_burne__cargo_registry_s_180267150);
          }
          puVar7 = (uint *)CONCAT44(uStack_b4,local_b8);
          param_3 = (uint *)CONCAT44(uStack_ac,uStack_b0);
          puVar11 = (uint *)0x0;
          if ((uint *)0x8000000000000000 < puVar7) {
            puVar11 = puVar7;
          }
          if (((ulonglong)puVar11 & 0x7fffffffffffffff) == 0) {
            cVar4 = local_a8 != 0;
            if (((ulonglong)puVar7 & 0x7fffffffffffffff) != 0) {
              thunk_FUN_1801d3330(param_3,puVar7,1);
            }
          }
          else if (((ulonglong)puVar11 & 0x7fffffffffffffff) == 1) {
            cVar4 = '\x02';
          }
          else {
            puVar7 = (uint *)(ulonglong)uStack_ac;
            cVar4 = '\x03';
          }
          uVar9 = local_58[2];
          if (uVar9 >> 0x20 == 0) {
            local_d8 = (uint *)CONCAT71(local_d8._1_7_,cVar4 != '\0');
            local_49 = 1;
            uVar6 = 0;
            local_c0 = puVar7;
            puVar7 = (uint *)FUN_180196b50(local_58,0,&local_d8,CONCAT44(uStack_94,local_98),
                                           CONCAT44(uStack_8c,uStack_90));
            goto joined_r0x000180192cca;
          }
        }
        *(undefined1 *)(param_1 + 1) = 9;
      }
      *param_1 = 0x8000000000000000;
      uVar9 = *local_58;
      goto joined_r0x000180192f8e;
    }
LAB_180192757:
    uVar9 = local_58[2];
    if (*local_58 - uVar9 < 7) {
      local_49 = 1;
      FUN_1801f6a80(local_58,uVar9,7,1,1);
      uVar9 = local_58[2];
    }
    puVar21 = local_58;
    uVar17 = local_58[1];
    *(undefined4 *)(uVar17 + 3 + uVar9) = 0x2f2f3a65;
    *(undefined4 *)(uVar17 + uVar9) = 0x656c6966;
    local_58[2] = uVar9 + 7;
    puVar11 = param_4;
    cVar4 = FUN_180192060(puVar7);
    uVar9 = 7;
    if ((param_5 == 0) || (cVar4 != '\0')) {
      local_60 = (char *)((ulonglong)local_60._4_4_ << 0x20);
    }
    else {
      local_49 = 1;
      local_60 = (char *)FUN_1801915e0(param_5);
      if ((puVar11 == (uint *)0x0) || (*local_60 != '/')) {
        local_49 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180266f30);
      }
      pbVar1 = (byte *)(local_60 + 1);
      pbVar16 = (byte *)((longlong)puVar11 + -1);
      pbVar20 = (byte *)0x0;
      do {
        pbVar5 = pbVar20 + (longlong)pbVar1;
        if (pbVar16 + -(longlong)pbVar20 < (byte *)0x10) {
          pbVar12 = (byte *)0x0;
          if (pbVar16 == pbVar20) break;
          while (pbVar5[(longlong)pbVar12] != 0x2f) {
            pbVar12 = pbVar12 + 1;
            if (pbVar16 + -(longlong)pbVar20 == pbVar12) goto LAB_180192871;
          }
        }
        else {
          local_49 = 1;
          uVar9 = FUN_1801f2f70(0x2f);
          pbVar12 = pbVar5;
          if ((uVar9 & 1) == 0) break;
        }
        pbVar5 = pbVar12 + (longlong)pbVar20;
        if ((pbVar5 < pbVar16) && (pbVar1[(longlong)pbVar5] == 0x2f)) goto LAB_180192874;
        pbVar20 = pbVar20 + (longlong)pbVar12 + 1;
      } while (pbVar20 <= pbVar16);
LAB_180192871:
      pbVar5 = pbVar16;
LAB_180192874:
      if (((pbVar5 == (byte *)0x2) && ((byte)((*pbVar1 & 0xdf) + 0xbf) < 0x1a)) &&
         (local_60[2] == ':')) {
        uVar9 = local_58[2];
        uVar17 = uVar9;
        if (*local_58 == uVar9) {
          local_49 = 1;
          FUN_1801f6a80(local_58,uVar9,1,1,1);
          uVar17 = local_58[2];
        }
        *(undefined1 *)(local_58[1] + uVar17) = 0x2f;
        local_58[2] = uVar9 + 1;
        local_49 = 1;
        FUN_18019d700(local_58,pbVar1,local_60 + 3);
        uVar9 = (ulonglong)local_60 >> 0x20;
      }
      else {
        if (*(byte *)(param_5 + 0x40) != 0) {
          uVar18 = *(uint *)(param_5 + 0x34);
          uVar22 = (ulonglong)uVar18;
          uVar19 = *(uint *)(param_5 + 0x38);
          uVar17 = (ulonglong)uVar19;
          lVar15 = *(longlong *)(param_5 + 8);
          uVar9 = *(ulonglong *)(param_5 + 0x10);
          if (uVar19 < uVar18) goto LAB_180192d61;
          if (uVar18 != 0) {
            if (uVar22 < uVar9) {
              if (*(char *)(lVar15 + uVar22) < -0x40) goto LAB_180192d61;
            }
            else if (uVar9 != uVar22) goto LAB_180192d61;
          }
          if (uVar19 != 0) {
            if (uVar17 < uVar9) {
              if (*(char *)(lVar15 + uVar17) < -0x40) goto LAB_180192d61;
            }
            else if (uVar9 != uVar17) {
LAB_180192d61:
              local_49 = 1;
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(lVar15,uVar9,uVar22,uVar17,
                            &PTR_s_C__Users_burne__cargo_registry_s_180266cf0);
            }
          }
          local_60 = (char *)CONCAT44(local_60._4_4_,(uint)*(byte *)(param_5 + 0x40));
          uVar17 = uVar17 - uVar22;
          uVar9 = local_58[2];
          if (*local_58 - uVar9 < uVar17) {
            local_49 = 1;
            FUN_1801f6a80(local_58,uVar9,uVar17,1,1);
            uVar9 = local_58[2];
          }
          puVar21 = local_58;
          memcpy((void *)(local_58[1] + uVar9),(void *)(lVar15 + uVar22),uVar17);
          uVar9 = uVar9 + uVar17;
          puVar21[2] = uVar9;
          local_e8 = *(undefined4 *)(param_5 + 0x41);
          uStack_e4 = *(undefined4 *)(param_5 + 0x45);
          uStack_e0 = *(undefined4 *)(param_5 + 0x49);
          uStack_dc = *(undefined4 *)(param_5 + 0x4d);
          goto LAB_180192dda;
        }
        uVar9 = (ulonglong)local_60._4_4_;
      }
      local_60 = (char *)(uVar9 << 0x20);
      uVar9 = 7;
      puVar21 = local_58;
    }
LAB_180192dda:
    if ((uVar8 - 0x23 < 0x3a) &&
       ((0x200000010001001U >> ((ulonglong)(uVar8 - 0x23) & 0x3f) & 1) != 0)) {
      puVar7 = local_c0;
    }
    local_b8 = local_b8 & 0xffffff00;
    local_49 = 1;
    uVar13 = 0;
    uVar6 = FUN_180194060(puVar21,0,&local_b8,uVar9,puVar7,param_4);
    local_49 = 1;
    FUN_1801985c0(&local_b8,local_58,0,4,uVar6,uVar13);
    if (local_b8 != 2) {
      param_1[2] = local_58[2];
      uVar17 = local_58[1];
      *param_1 = *local_58;
      param_1[1] = uVar17;
      *(ulonglong *)((longlong)param_1 + 0x41) = CONCAT44(uStack_e4,local_e8);
      *(ulonglong *)((longlong)param_1 + 0x49) = CONCAT44(uStack_dc,uStack_e0);
      *(uint *)(param_1 + 3) = local_b8;
      *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_b0,uStack_b4);
      *(uint *)((longlong)param_1 + 0x24) = uStack_ac;
      *(undefined2 *)(param_1 + 5) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0x700000004;
      *(undefined4 *)((longlong)param_1 + 0x34) = 7;
      *(int *)(param_1 + 7) = (int)uVar9;
      *(int *)((longlong)param_1 + 0x3c) = (int)uVar9;
      *(char *)(param_1 + 8) = (char)local_60;
      return;
    }
  }
  else {
    if (param_5 == 0) {
LAB_1801929a3:
      uVar9 = param_2[2];
      if (*param_2 - uVar9 < 8) {
        local_49 = 1;
        FUN_1801f6a80(param_2,uVar9,8,1,1);
        uVar9 = local_58[2];
      }
      *(undefined8 *)(local_58[1] + uVar9) = 0x2f2f2f3a656c6966;
      local_58[2] = uVar9 + 8;
      local_b8 = local_b8 & 0xffffff00;
      local_49 = 1;
      uVar13 = 0;
      uVar6 = FUN_180194060(local_58,0,&local_b8,7,param_3,param_4);
      local_49 = 1;
      FUN_1801985c0(&local_b8,local_58,0,4,uVar6,uVar13);
    }
    else {
      if (uVar8 == 0x23) {
        local_78 = param_2[8];
        local_b8 = (uint)*param_2;
        uStack_b4 = *(undefined4 *)((longlong)param_2 + 4);
        uStack_b0 = (undefined4)param_2[1];
        uStack_ac = *(undefined4 *)((longlong)param_2 + 0xc);
        local_a8 = param_2[2];
        uStack_a0 = (undefined4)param_2[3];
        uStack_9c = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_98 = (undefined4)param_2[4];
        uStack_94 = *(undefined4 *)((longlong)param_2 + 0x24);
        uStack_90 = (undefined4)param_2[5];
        uStack_8c = *(undefined4 *)((longlong)param_2 + 0x2c);
        local_88 = (undefined4)param_2[6];
        uStack_84 = *(undefined4 *)((longlong)param_2 + 0x34);
        uStack_80 = (undefined4)param_2[7];
        uStack_7c = *(undefined4 *)((longlong)param_2 + 0x3c);
        local_49 = 0;
        FUN_180195790(param_1,&local_b8,param_5,param_3,param_4);
        return;
      }
      if (uVar8 == 0x3f) {
        if (*(char *)(param_5 + 0x18) == '\0') {
          if (*(char *)(param_5 + 0x20) != '\0') {
            puVar7 = (uint *)(param_5 + 0x24);
            goto LAB_180192ee9;
          }
          pvVar14 = *(void **)(param_5 + 8);
          uVar9 = *(ulonglong *)(param_5 + 0x10);
LAB_180193116:
          uVar17 = param_2[2];
          local_c0 = param_3;
          if (*param_2 - uVar17 < uVar9) {
            local_49 = 1;
            FUN_1801f6a80(param_2,uVar17,uVar9,1,1);
            uVar17 = local_58[2];
          }
        }
        else {
          puVar7 = (uint *)(param_5 + 0x1c);
LAB_180192ee9:
          uVar17 = (ulonglong)*puVar7;
          pvVar14 = *(void **)(param_5 + 8);
          if (uVar17 != 0) {
            uVar9 = *(ulonglong *)(param_5 + 0x10);
            if (uVar17 < uVar9) {
              if (*(char *)((longlong)pvVar14 + uVar17) < -0x40) goto LAB_18019355c;
              uVar9 = uVar17;
            }
            else if (uVar9 != uVar17) {
LAB_18019355c:
              local_49 = 1;
              local_c0 = param_3;
                    /* WARNING: Subroutine does not return */
              FUN_1802018d0(pvVar14,uVar9,0,uVar17,&PTR_s_C__Users_burne__cargo_registry_s_180267668
                           );
            }
            goto LAB_180193116;
          }
          uVar17 = param_2[2];
          uVar9 = 0;
          local_c0 = param_3;
        }
        puVar21 = local_58;
        memcpy((void *)(local_58[1] + uVar17),pvVar14,uVar9);
        puVar21[2] = uVar17 + uVar9;
        uVar2 = *(undefined4 *)(param_5 + 0x2c);
        local_49 = 1;
        FUN_1801985c0(&local_b8,puVar21,0,uVar2,local_c0,param_4);
        if (local_b8 != 2) {
          param_1[2] = local_58[2];
          uVar9 = local_58[1];
          *param_1 = *local_58;
          param_1[1] = uVar9;
          uVar9 = *(ulonglong *)(param_5 + 0x48);
          param_1[8] = *(ulonglong *)(param_5 + 0x40);
          param_1[9] = uVar9;
          *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_5 + 0x50);
          *(uint *)(param_1 + 3) = local_b8;
          *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_b0,uStack_b4);
          *(uint *)((longlong)param_1 + 0x24) = uStack_ac;
          *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 0x28);
          *(undefined4 *)((longlong)param_1 + 0x2c) = uVar2;
          uVar9 = *(ulonglong *)(param_5 + 0x38);
          param_1[6] = *(ulonglong *)(param_5 + 0x30);
          param_1[7] = uVar9;
          return;
        }
        goto LAB_180192e53;
      }
      if (uVar8 == 0x110000) {
LAB_18019271f:
        if (*(int *)(param_5 + 0x20) == 1) {
          uVar9 = (ulonglong)*(uint *)(param_5 + 0x24);
          pvVar14 = *(void **)(param_5 + 8);
          if (uVar9 == 0) {
            uVar17 = param_2[2];
            uVar9 = 0;
            goto LAB_180192cf0;
          }
          uVar17 = *(ulonglong *)(param_5 + 0x10);
          if (uVar9 < uVar17) {
            if (*(char *)((longlong)pvVar14 + uVar9) < -0x40) goto LAB_180193536;
          }
          else if (uVar17 != uVar9) {
LAB_180193536:
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(pvVar14,uVar17,0,uVar9,&PTR_s_C__Users_burne__cargo_registry_s_180266f48);
          }
        }
        else {
          pvVar14 = *(void **)(param_5 + 8);
          uVar9 = *(ulonglong *)(param_5 + 0x10);
        }
        uVar17 = param_2[2];
        if (*param_2 - uVar17 < uVar9) {
          local_49 = 1;
          FUN_1801f6a80(param_2,uVar17,uVar9,1,1);
          uVar17 = local_58[2];
        }
LAB_180192cf0:
        puVar21 = local_58;
        memcpy((void *)(local_58[1] + uVar17),pvVar14,uVar9);
        puVar21[2] = uVar17 + uVar9;
        param_1[2] = uVar17 + uVar9;
        uVar9 = puVar21[1];
        *param_1 = *puVar21;
        param_1[1] = uVar9;
        *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_5 + 0x50);
        uVar9 = *(ulonglong *)(param_5 + 0x48);
        param_1[8] = *(ulonglong *)(param_5 + 0x40);
        param_1[9] = uVar9;
        uVar2 = *(undefined4 *)(param_5 + 0x3c);
        param_1[3] = *(ulonglong *)(param_5 + 0x18);
        *(undefined4 *)(param_1 + 4) = 0;
        *(undefined4 *)(param_1 + 5) = *(undefined4 *)(param_5 + 0x28);
        uVar6 = *(undefined8 *)(param_5 + 0x34);
        *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_5 + 0x2c);
        *(undefined8 *)((longlong)param_1 + 0x34) = uVar6;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uVar2;
        return;
      }
      cVar4 = FUN_180192060(param_3,param_4);
      if (cVar4 == '\0') {
        if (*(char *)(param_5 + 0x18) == '\0') {
          if (*(char *)(param_5 + 0x20) == '\0') {
            lVar15 = *(longlong *)(param_5 + 8);
            uVar9 = *(ulonglong *)(param_5 + 0x10);
            goto LAB_1801931f5;
          }
          puVar7 = (uint *)(param_5 + 0x24);
        }
        else {
          puVar7 = (uint *)(param_5 + 0x1c);
        }
        uVar17 = (ulonglong)*puVar7;
        lVar15 = *(longlong *)(param_5 + 8);
        if (uVar17 == 0) {
          uVar9 = 0;
        }
        else {
          uVar9 = *(ulonglong *)(param_5 + 0x10);
          if (uVar17 < uVar9) {
            if (*(char *)(lVar15 + uVar17) < -0x40) goto LAB_18019359f;
            uVar9 = uVar17;
          }
          else if (uVar9 != uVar17) {
LAB_18019359f:
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(lVar15,uVar9,0,uVar17,&PTR_s_C__Users_burne__cargo_registry_s_180267668);
          }
        }
LAB_1801931f5:
        local_49 = 1;
        FUN_18019d700(param_2,lVar15,uVar9 + lVar15);
        uVar8 = *(uint *)(param_5 + 0x3c);
        uVar17 = (ulonglong)uVar8;
        uVar9 = local_58[2];
        if (uVar9 != uVar17) {
          uVar22 = local_58[1];
          if ((uVar8 != 0) && ((uVar9 <= uVar17 || (*(char *)(uVar22 + uVar17) < -0x40)))) {
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_1802018d0(uVar22,uVar9,uVar17,uVar9,
                          &PTR_s_C__Users_burne__cargo_registry_s_1802670a8);
          }
          if (((uVar9 - uVar17 != 2) || (0x19 < (byte)((*(byte *)(uVar22 + uVar17) & 0xdf) + 0xbf)))
             || (*(char *)(uVar22 + 1 + uVar17) != ':')) {
            local_49 = 1;
            FUN_180198be0(local_58,0,uVar17);
          }
        }
        local_b8 = CONCAT31(local_b8._1_3_,1);
        local_49 = 1;
        uVar13 = 0;
        uVar6 = FUN_180194060(local_58,0,&local_b8,uVar17,param_3,param_4);
        local_78 = local_58[8];
        local_b8 = (uint)*local_58;
        uStack_b4 = *(undefined4 *)((longlong)local_58 + 4);
        uStack_b0 = (undefined4)local_58[1];
        uStack_ac = *(undefined4 *)((longlong)local_58 + 0xc);
        local_a8 = local_58[2];
        uStack_a0 = (undefined4)local_58[3];
        uStack_9c = *(undefined4 *)((longlong)local_58 + 0x1c);
        local_98 = (undefined4)local_58[4];
        uStack_94 = *(undefined4 *)((longlong)local_58 + 0x24);
        uStack_90 = (undefined4)local_58[5];
        uStack_8c = *(undefined4 *)((longlong)local_58 + 0x2c);
        local_88 = (undefined4)local_58[6];
        uStack_84 = *(undefined4 *)((longlong)local_58 + 0x34);
        uStack_80 = (undefined4)local_58[7];
        uStack_7c = *(undefined4 *)((longlong)local_58 + 0x3c);
        local_49 = 0;
        FUN_180198070(param_1,&local_b8,0,*(undefined4 *)(param_5 + 0x2c),
                      *(undefined4 *)(param_5 + 0x30),*(undefined4 *)(param_5 + 0x34),
                      *(undefined4 *)(param_5 + 0x38),param_5 + 0x40,*(undefined2 *)(param_5 + 0x28)
                      ,*(undefined2 *)(param_5 + 0x2a),uVar8,uVar6,uVar13);
        return;
      }
      local_49 = 1;
      FUN_18019d700(param_2,&DAT_180266f60,&PTR_s_C__Users_burne__cargo_registry_s_180266f68);
      local_b8 = local_b8 & 0xffffff00;
      local_49 = 1;
      uVar13 = 0;
      uVar6 = FUN_180194060(local_58,0,&local_b8,7,param_3,param_4);
      local_49 = 1;
      FUN_1801985c0(&local_b8,local_58,0,4,uVar6,uVar13);
    }
    if (local_b8 != 2) {
      param_1[2] = local_58[2];
      uVar9 = local_58[1];
      *param_1 = *local_58;
      param_1[1] = uVar9;
      *(uint *)(param_1 + 3) = local_b8;
      *(ulonglong *)((longlong)param_1 + 0x1c) = CONCAT44(uStack_b0,uStack_b4);
      *(uint *)((longlong)param_1 + 0x24) = uStack_ac;
      *(undefined2 *)(param_1 + 5) = 0;
      *(undefined8 *)((longlong)param_1 + 0x2c) = 0x700000004;
      *(undefined8 *)((longlong)param_1 + 0x34) = 0x700000007;
      *(undefined4 *)((longlong)param_1 + 0x3c) = 7;
      *(undefined1 *)(param_1 + 8) = 0;
      return;
    }
  }
LAB_180192e53:
  *(undefined1 *)(param_1 + 1) = (undefined1)uStack_b4;
  *param_1 = 0x8000000000000000;
  uVar9 = *local_58;
joined_r0x000180192f8e:
  if (uVar9 != 0) {
    thunk_FUN_1801d3330(local_58[1],uVar9,1);
  }
  return;
}


