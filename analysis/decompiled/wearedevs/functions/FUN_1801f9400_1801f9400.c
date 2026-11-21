/* FUN_1801f9400 @ 1801f9400 */

void FUN_1801f9400(longlong param_1,undefined8 param_2,longlong *param_3,char param_4)

{
  byte bVar1;
  longlong lVar2;
  void *pvVar3;
  ulonglong uVar4;
  undefined *_Src;
  undefined **ppuVar5;
  int *piVar6;
  ulonglong *puVar7;
  undefined ***pppuVar8;
  undefined **ppuVar9;
  undefined **unaff_RBX;
  byte *pbVar10;
  undefined **unaff_RBP;
  byte bVar11;
  undefined **unaff_R12;
  uint uVar12;
  longlong lVar13;
  int *piVar14;
  int iVar15;
  ulonglong uVar16;
  byte *pbVar17;
  bool bVar18;
  char cVar19;
  undefined **local_f0;
  undefined **local_e8;
  undefined **local_e0;
  undefined **local_d8;
  ulonglong *local_d0;
  undefined **local_c8;
  ulonglong *local_c0;
  undefined **local_b8;
  undefined **local_b0;
  undefined **local_a8;
  undefined **local_a0;
  undefined **local_98;
  int local_90 [2];
  undefined **local_88;
  ulonglong *local_80;
  ulonglong *local_78;
  ulonglong *local_70;
  longlong local_68;
  longlong local_60;
  undefined **local_58;
  longlong local_50;
  undefined8 local_48;
  
  if (*(longlong *)(param_1 + 0x28) != 0) {
    lVar13 = *(longlong *)(param_1 + 0x20);
    local_50 = *(longlong *)(param_1 + 0x28) * 0x68 + lVar13;
    local_68 = param_1;
    local_48 = param_2;
    if (param_4 == '\0') {
      do {
        local_98 = (undefined **)(lVar13 + 0x40);
        FUN_18012b130(local_90,local_48);
        local_c0 = local_80;
        local_a0 = (undefined **)0xffffffffffffffff;
        uVar16 = 2;
        pppuVar8 = &local_f0;
        ppuVar5 = (undefined **)0x2;
        if (local_90[0] == 1) {
          ppuVar5 = (undefined **)local_80[5];
          if (ppuVar5 <= local_88) goto LAB_1801fa194;
          ppuVar5 = (undefined **)local_80[4];
          bVar18 = ((ulonglong)ppuVar5[(longlong)local_88 * 0xc] & 1) == 0;
          local_a0 = local_88;
          if (!bVar18) {
            ppuVar5 = (undefined **)ppuVar5[(longlong)local_88 * 0xc + 2];
          }
          local_f0 = (undefined **)(ulonglong)!bVar18;
          uVar16 = 0;
          pppuVar8 = &local_58;
        }
        *pppuVar8 = ppuVar5;
        FUN_18012b2c0(local_90,local_68,local_98);
        local_60 = lVar13;
        if (local_90[0] == 1) {
          ppuVar5 = (undefined **)local_80[5];
          if (ppuVar5 <= local_88) goto LAB_1801fa194;
          local_c8 = local_88;
          local_70 = (ulonglong *)((longlong)local_88 * 0x68);
          cVar19 = (*(byte *)(local_80[4] + (longlong)local_70) & 1) != 0;
          if ((bool)cVar19) {
            local_e0 = *(undefined ***)((longlong)local_70 + local_80[4] + 0x10);
          }
          local_b8 = (undefined **)(lVar13 + 0x48);
          local_78 = (ulonglong *)(lVar13 + 0x50);
          local_d8 = local_f0;
          local_a8 = local_58;
          bVar18 = false;
          local_d0 = local_80;
          ppuVar5 = local_88;
          do {
            if (bVar18) {
              if ((undefined **)local_d0[8] <= local_b0) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(local_b0,(undefined **)local_d0[8],
                              &PTR_s_C__Users_burne__cargo_registry_s_180243118);
              }
              lVar13 = (longlong)local_b0 * 0x48 + local_d0[7];
              iVar15 = 2;
              if ((cVar19 == '\x01') && (local_b0 == local_e0)) {
                cVar19 = '\x02';
                local_b0 = local_e0;
              }
              else if (*(int *)(lVar13 + 0x10) == 1) {
                local_b0 = *(undefined ***)(lVar13 + 0x18);
                iVar15 = 1;
              }
              piVar14 = (int *)(lVar13 + 0x20);
joined_r0x0001801f9f35:
              if (uVar16 != 2) goto LAB_1801f9d37;
LAB_1801f9dc3:
              puVar7 = local_78;
              ppuVar9 = local_b8;
              if (*local_98 == (undefined *)0x0) {
                ppuVar9 = &PTR_s_accept_1802418b8 + *(byte *)local_b8;
                puVar7 = (ulonglong *)(&DAT_180241b40 + (ulonglong)*(byte *)local_b8 * 8);
              }
              uVar16 = *puVar7;
              _Src = *ppuVar9;
              lVar13 = param_3[2];
              if ((ulonglong)(*param_3 - lVar13) < uVar16) {
                FUN_1801f6a80(param_3,lVar13,uVar16,1,1);
                lVar13 = param_3[2];
                ppuVar5 = local_c8;
              }
              memcpy((void *)(param_3[1] + lVar13),_Src,uVar16);
              lVar13 = lVar13 + uVar16;
              uVar16 = 2;
              param_3[2] = lVar13;
              if (*(longlong *)(piVar14 + 4) != 0) goto LAB_1801f9e3d;
LAB_1801f9fb7:
              if ((ulonglong)(*param_3 - lVar13) < 3) {
                FUN_1801f6a80(param_3,lVar13,3,1,1);
                lVar13 = param_3[2];
              }
              lVar2 = param_3[1];
              *(undefined1 *)(lVar2 + 2 + lVar13) = 10;
              *(undefined2 *)(lVar2 + lVar13) = 0xd3a;
              lVar13 = lVar13 + 3;
            }
            else {
              if ((undefined **)local_d0[5] <= ppuVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(ppuVar5,(undefined **)local_d0[5],
                              &PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
              }
              piVar14 = (int *)(local_d0[4] + (longlong)local_70);
              if (cVar19 == '\0') {
                cVar19 = '\x02';
                iVar15 = 2;
                piVar14 = piVar14 + 6;
                goto joined_r0x0001801f9f35;
              }
              if (*piVar14 != 1) goto LAB_1801fa0e5;
              local_b0 = *(undefined ***)(piVar14 + 2);
              iVar15 = 1;
              piVar14 = piVar14 + 6;
              if (uVar16 == 2) goto LAB_1801f9dc3;
LAB_1801f9d37:
              if ((uVar16 & 1) == 0) {
                if ((undefined **)local_c0[5] <= local_a0) {
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(local_a0,(undefined **)local_c0[5],
                                &PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
                }
                piVar6 = (int *)((longlong)local_a0 * 0x60 + local_c0[4]);
                if (local_d8 == (undefined **)0x0) {
                  local_d8 = (undefined **)0x2;
                  uVar16 = 2;
                }
                else {
                  if (*piVar6 != 1) goto LAB_1801fa0e5;
                  unaff_R12 = *(undefined ***)(piVar6 + 2);
                  uVar16 = 1;
                }
                piVar6 = piVar6 + 6;
              }
              else {
                if ((undefined **)local_c0[8] <= unaff_R12) {
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(unaff_R12,(undefined **)local_c0[8],
                                &PTR_s_C__Users_burne__cargo_registry_s_180243118);
                }
                lVar13 = (longlong)unaff_R12 * 0x40 + local_c0[7];
                uVar16 = 2;
                if ((local_d8 == (undefined **)0x1) && (unaff_R12 == local_a8)) {
                  local_d8 = (undefined **)0x2;
                  unaff_R12 = local_a8;
                }
                else if (*(int *)(lVar13 + 0x10) == 1) {
                  unaff_R12 = *(undefined ***)(lVar13 + 0x18);
                  uVar16 = 1;
                }
                piVar6 = (int *)(lVar13 + 0x20);
              }
              pvVar3 = *(void **)(piVar6 + 2);
              uVar4 = *(ulonglong *)(piVar6 + 4);
              lVar13 = param_3[2];
              if ((ulonglong)(*param_3 - lVar13) < uVar4) {
                FUN_1801f6a80(param_3,lVar13,uVar4,1,1);
                lVar13 = param_3[2];
              }
              memcpy((void *)(param_3[1] + lVar13),pvVar3,uVar4);
              lVar13 = lVar13 + uVar4;
              param_3[2] = lVar13;
              ppuVar5 = local_c8;
              if (*(longlong *)(piVar14 + 4) == 0) goto LAB_1801f9fb7;
LAB_1801f9e3d:
              if ((ulonglong)(*param_3 - lVar13) < 2) {
                FUN_1801f6a80(param_3,lVar13,2,1,1);
                lVar13 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar13) = 0x203a;
              lVar13 = lVar13 + 2;
              param_3[2] = lVar13;
              pvVar3 = *(void **)(piVar14 + 2);
              uVar4 = *(ulonglong *)(piVar14 + 4);
              if ((ulonglong)(*param_3 - lVar13) < uVar4) {
                FUN_1801f6a80(param_3,lVar13,uVar4,1,1);
                lVar13 = param_3[2];
                ppuVar5 = local_c8;
              }
              memcpy((void *)(param_3[1] + lVar13),pvVar3,uVar4);
              lVar13 = lVar13 + uVar4;
              param_3[2] = lVar13;
              if ((ulonglong)(*param_3 - lVar13) < 2) {
                FUN_1801f6a80(param_3,lVar13,2,1,1);
                lVar13 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar13) = 0xa0d;
              lVar13 = lVar13 + 2;
            }
            param_3[2] = lVar13;
            bVar18 = true;
          } while (iVar15 != 2);
        }
        lVar13 = local_60 + 0x68;
      } while (lVar13 != local_50);
    }
    else {
      do {
        local_c0 = (ulonglong *)(lVar13 + 0x40);
        FUN_18012b130(local_90,local_48);
        puVar7 = local_80;
        local_a0 = (undefined **)0xffffffffffffffff;
        uVar16 = 2;
        pppuVar8 = &local_f0;
        ppuVar5 = (undefined **)0x2;
        if (local_90[0] == 1) {
          ppuVar5 = (undefined **)local_80[5];
          if (ppuVar5 <= local_88) {
LAB_1801fa194:
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(local_88,ppuVar5,&PTR_s_C__Users_burne__cargo_registry_s_180242e08);
          }
          ppuVar5 = (undefined **)local_80[4];
          bVar18 = ((ulonglong)ppuVar5[(longlong)local_88 * 0xc] & 1) == 0;
          local_a0 = local_88;
          if (!bVar18) {
            ppuVar5 = (undefined **)ppuVar5[(longlong)local_88 * 0xc + 2];
          }
          local_f0 = (undefined **)(ulonglong)!bVar18;
          uVar16 = 0;
          pppuVar8 = &local_58;
        }
        *pppuVar8 = ppuVar5;
        FUN_18012b2c0(local_90,local_68,local_c0);
        if (local_90[0] == 1) {
          if ((undefined **)local_80[5] <= local_88) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(local_88,(undefined **)local_80[5],
                          &PTR_s_C__Users_burne__cargo_registry_s_180242e08);
          }
          local_70 = local_80;
          local_c8 = (undefined **)((longlong)local_88 * 0x68);
          bVar18 = (*(byte *)((longlong)local_c8 + local_80[4]) & 1) != 0;
          if (bVar18) {
            local_98 = *(undefined ***)((longlong)local_c8 + local_80[4] + 0x10);
          }
          local_d0 = (ulonglong *)(ulonglong)bVar18;
          local_a8 = local_58;
          uVar12 = 0;
          local_e8 = local_f0;
          local_e0 = local_f0;
          local_78 = puVar7;
          local_d8 = local_88;
          ppuVar5 = local_88;
          local_60 = lVar13;
          do {
            if ((uVar12 & 1) == 0) {
              if ((undefined **)local_70[5] <= ppuVar5) {
                local_f0 = local_e8;
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(ppuVar5,(undefined **)local_70[5],
                              &PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
              }
              piVar14 = (int *)((longlong)local_c8 + local_70[4]);
              if (local_d0 == (ulonglong *)0x0) {
                uVar12 = 2;
                local_d0 = (ulonglong *)0x2;
              }
              else {
                if (*piVar14 != 1) goto LAB_1801fa0db;
                unaff_RBX = *(undefined ***)(piVar14 + 2);
                uVar12 = 1;
              }
              piVar14 = piVar14 + 6;
              local_b0 = unaff_RBX;
              if (uVar16 != 2) goto LAB_1801f977f;
LAB_1801f96d8:
              if (*local_c0 == 0) {
                uVar16 = *(ulonglong *)(&DAT_180241b40 + (ulonglong)*(byte *)(local_60 + 0x48) * 8);
                pbVar17 = (&PTR_s_accept_1802418b8)[*(byte *)(local_60 + 0x48)];
                if ((ulonglong)(*param_3 - param_3[2]) < uVar16) {
                  FUN_1801f6a80(param_3,param_3[2],uVar16,1,1);
                }
LAB_1801f9855:
                local_b8 = unaff_RBP;
              }
              else {
                pbVar17 = *(byte **)(local_60 + 0x48);
                uVar16 = *(ulonglong *)(local_60 + 0x50);
                lVar13 = param_3[2];
                if (uVar16 <= (ulonglong)(*param_3 - lVar13)) {
                  if (uVar16 == 0) {
                    uVar16 = 2;
                    lVar2 = *(longlong *)(piVar14 + 4);
                    goto joined_r0x0001801f995b;
                  }
                  goto LAB_1801f9855;
                }
                local_b8 = unaff_RBP;
                FUN_1801f6a80(param_3,lVar13,uVar16,1,1);
              }
              pbVar10 = pbVar17 + uVar16;
              lVar13 = param_3[2];
              bVar11 = 0x2d;
              do {
                bVar1 = *pbVar17;
                if (lVar13 == *param_3) {
                  FUN_180201770(param_3);
                }
                pbVar17 = pbVar17 + 1;
                bVar11 = (bVar11 == 0x2d && (byte)(bVar1 + 0x9f) < 0x1a) << 5 ^ bVar1;
                *(byte *)(param_3[1] + lVar13) = bVar11;
                lVar13 = lVar13 + 1;
                param_3[2] = lVar13;
              } while (pbVar17 != pbVar10);
              uVar16 = 2;
              unaff_RBP = local_b8;
              ppuVar5 = local_d8;
              puVar7 = local_78;
              if (*(longlong *)(piVar14 + 4) == 0) goto LAB_1801f9730;
LAB_1801f9961:
              if ((ulonglong)(*param_3 - lVar13) < 2) {
                FUN_1801f6a80(param_3,lVar13,2,1,1);
                lVar13 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar13) = 0x203a;
              lVar13 = lVar13 + 2;
              param_3[2] = lVar13;
              pvVar3 = *(void **)(piVar14 + 2);
              uVar4 = *(ulonglong *)(piVar14 + 4);
              if ((ulonglong)(*param_3 - lVar13) < uVar4) {
                FUN_1801f6a80(param_3,lVar13,uVar4,1,1);
                lVar13 = param_3[2];
                puVar7 = local_78;
              }
              memcpy((void *)(param_3[1] + lVar13),pvVar3,uVar4);
              lVar13 = lVar13 + uVar4;
              param_3[2] = lVar13;
              if ((ulonglong)(*param_3 - lVar13) < 2) {
                FUN_1801f6a80(param_3,lVar13,2,1,1);
                lVar13 = param_3[2];
              }
              *(undefined2 *)(param_3[1] + lVar13) = 0xa0d;
              lVar13 = lVar13 + 2;
              unaff_RBX = local_b0;
            }
            else {
              if ((undefined **)local_70[8] <= unaff_RBX) {
                local_f0 = local_e8;
                    /* WARNING: Subroutine does not return */
                FUN_180201d02(unaff_RBX,(undefined **)local_70[8],
                              &PTR_s_C__Users_burne__cargo_registry_s_180243118);
              }
              lVar13 = (longlong)unaff_RBX * 0x48 + local_70[7];
              uVar12 = 2;
              if ((local_d0 == (ulonglong *)0x1) && (unaff_RBX == local_98)) {
                local_d0 = (ulonglong *)0x2;
                unaff_RBX = local_98;
              }
              else if (*(int *)(lVar13 + 0x10) == 1) {
                unaff_RBX = *(undefined ***)(lVar13 + 0x18);
                uVar12 = 1;
              }
              piVar14 = (int *)(lVar13 + 0x20);
              local_b0 = unaff_RBX;
              if (uVar16 == 2) goto LAB_1801f96d8;
LAB_1801f977f:
              if ((uVar16 & 1) == 0) {
                if ((undefined **)puVar7[5] <= local_a0) {
                  local_f0 = local_e8;
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(local_a0,(undefined **)puVar7[5],
                                &PTR_s_C__Users_burne__cargo_registry_s_1802430c0);
                }
                piVar6 = (int *)((longlong)local_a0 * 0x60 + puVar7[4]);
                if (local_e0 == (undefined **)0x0) {
                  local_e8 = (undefined **)0x2;
                  local_e0 = (undefined **)0x2;
                  uVar16 = 2;
                }
                else {
                  if (*piVar6 != 1) {
LAB_1801fa0db:
                    local_f0 = local_e8;
LAB_1801fa0e5:
                    /* WARNING: Subroutine does not return */
                    FUN_180201ec0(&DAT_1802430d8,0x28,
                                  &PTR_s_C__Users_burne__cargo_registry_s_180243100);
                  }
                  unaff_RBP = *(undefined ***)(piVar6 + 2);
                  uVar16 = 1;
                }
                piVar6 = piVar6 + 6;
              }
              else {
                if ((undefined **)puVar7[8] <= unaff_RBP) {
                  local_f0 = local_e8;
                    /* WARNING: Subroutine does not return */
                  FUN_180201d02(unaff_RBP,(undefined **)puVar7[8],
                                &PTR_s_C__Users_burne__cargo_registry_s_180243118);
                }
                lVar13 = (longlong)unaff_RBP * 0x40 + puVar7[7];
                uVar16 = 2;
                if ((local_e0 == (undefined **)0x1) && (unaff_RBP == local_a8)) {
                  local_e8 = (undefined **)0x2;
                  local_e0 = (undefined **)0x2;
                  unaff_RBP = local_a8;
                }
                else if (*(int *)(lVar13 + 0x10) == 1) {
                  unaff_RBP = *(undefined ***)(lVar13 + 0x18);
                  uVar16 = 1;
                }
                piVar6 = (int *)(lVar13 + 0x20);
              }
              pvVar3 = *(void **)(piVar6 + 2);
              uVar4 = *(ulonglong *)(piVar6 + 4);
              lVar13 = param_3[2];
              if ((ulonglong)(*param_3 - lVar13) < uVar4) {
                FUN_1801f6a80(param_3,lVar13,uVar4,1,1);
                lVar13 = param_3[2];
              }
              memcpy((void *)(param_3[1] + lVar13),pvVar3,uVar4);
              lVar13 = lVar13 + uVar4;
              param_3[2] = lVar13;
              lVar2 = *(longlong *)(piVar14 + 4);
              ppuVar5 = local_d8;
joined_r0x0001801f995b:
              if (lVar2 != 0) goto LAB_1801f9961;
LAB_1801f9730:
              unaff_RBX = local_b0;
              if ((ulonglong)(*param_3 - lVar13) < 3) {
                FUN_1801f6a80(param_3,lVar13,3,1,1);
                lVar13 = param_3[2];
              }
              lVar2 = param_3[1];
              *(undefined1 *)(lVar2 + 2 + lVar13) = 10;
              *(undefined2 *)(lVar2 + lVar13) = 0xd3a;
              lVar13 = lVar13 + 3;
            }
            param_3[2] = lVar13;
          } while (uVar12 != 2);
          local_f0 = local_e8;
          lVar13 = local_60;
        }
        lVar13 = lVar13 + 0x68;
      } while (lVar13 != local_50);
    }
  }
  return;
}


