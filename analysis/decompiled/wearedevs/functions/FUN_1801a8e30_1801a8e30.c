/* FUN_1801a8e30 @ 1801a8e30 */

void FUN_1801a8e30(uint *param_1,ulonglong param_2,void *param_3,ulonglong param_4,int param_5,
                  longlong param_6,undefined8 param_7)

{
  uint *puVar1;
  byte bVar2;
  code *pcVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  void *pvVar8;
  ulonglong uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  ulonglong uVar13;
  longlong lVar14;
  uint uVar15;
  void *pvVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  longlong lVar19;
  bool bVar20;
  longlong local_68;
  uint local_5c;
  longlong local_58;
  longlong local_50;
  uint *local_48;
  
  if (0x20 < param_2) {
    local_68 = param_6;
    local_58 = (longlong)param_3 + -0x10;
    local_50 = (longlong)param_3 + -4;
    do {
      local_48 = param_1 + 4;
      uVar18 = param_2;
      while( true ) {
        bVar20 = param_5 == 0;
        param_5 = param_5 + -1;
        if (bVar20) {
          FUN_1801a85b0(param_1,uVar18,param_3,param_4,1,param_7);
          return;
        }
        puVar11 = param_1 + (uVar18 >> 3) * 4;
        if (uVar18 < 0x40) {
          uVar10 = *param_1 >> 0x18;
          uVar12 = *puVar11 >> 0x18;
          uVar15 = param_1[(uVar18 >> 3) * 7] >> 0x18;
          if (uVar12 < uVar15 != uVar10 < uVar12) {
            puVar11 = param_1 + (uVar18 >> 3) * 7;
          }
          if (uVar10 < uVar15 != uVar10 < uVar12) {
            puVar11 = param_1;
          }
        }
        else {
          puVar11 = (uint *)FUN_1801a8d70(param_1,puVar11);
        }
        uVar17 = (longlong)puVar11 - (longlong)param_1;
        local_5c = *puVar11;
        if ((local_68 != 0) && (local_5c >> 0x18 <= (uint)*(byte *)(local_68 + 3))) break;
        if (param_4 < uVar18) goto LAB_1801a9426;
        pvVar8 = (void *)((longlong)param_3 + uVar18 * 4);
        param_2 = 0;
        puVar11 = param_1;
        uVar13 = uVar17 >> 2;
        while( true ) {
          lVar14 = 0;
          if (2 < uVar13) {
            lVar14 = uVar13 - 3;
          }
          if (puVar11 < param_1 + lVar14) {
            bVar2 = *(byte *)((longlong)param_1 + uVar17 + 3);
            do {
              uVar10 = (uint)bVar2;
              bVar20 = *puVar11 >> 0x18 < uVar10;
              uVar9 = (ulonglong)bVar20;
              pvVar16 = (void *)((longlong)pvVar8 + -4);
              if (bVar20) {
                pvVar16 = param_3;
              }
              *(uint *)((longlong)pvVar16 + param_2 * 4) = *puVar11;
              bVar20 = puVar11[1] >> 0x18 < uVar10;
              pvVar16 = (void *)((longlong)pvVar8 + -8);
              if (bVar20) {
                pvVar16 = param_3;
              }
              *(uint *)((longlong)pvVar16 + (param_2 + uVar9) * 4) = puVar11[1];
              lVar19 = param_2 + uVar9 + (ulonglong)bVar20;
              uVar10 = (uint)bVar2;
              bVar20 = puVar11[2] >> 0x18 < uVar10;
              pvVar16 = (void *)((longlong)pvVar8 + -0xc);
              if (bVar20) {
                pvVar16 = param_3;
              }
              uVar9 = (ulonglong)bVar20;
              *(uint *)((longlong)pvVar16 + lVar19 * 4) = puVar11[2];
              pvVar8 = (void *)((longlong)pvVar8 + -0x10);
              bVar20 = puVar11[3] >> 0x18 < uVar10;
              pvVar16 = pvVar8;
              if (bVar20) {
                pvVar16 = param_3;
              }
              *(uint *)((longlong)pvVar16 + (lVar19 + uVar9) * 4) = puVar11[3];
              param_2 = lVar19 + uVar9 + (ulonglong)bVar20;
              puVar11 = puVar11 + 4;
            } while (puVar11 < param_1 + lVar14);
          }
          if (puVar11 < param_1 + uVar13) {
            bVar2 = *(byte *)((longlong)param_1 + uVar17 + 3);
            do {
              pvVar8 = (void *)((longlong)pvVar8 + -4);
              bVar20 = *puVar11 >> 0x18 < (uint)bVar2;
              pvVar16 = pvVar8;
              if (bVar20) {
                pvVar16 = param_3;
              }
              *(uint *)((longlong)pvVar16 + param_2 * 4) = *puVar11;
              param_2 = param_2 + bVar20;
              puVar11 = puVar11 + 1;
            } while (puVar11 < param_1 + uVar13);
          }
          if (uVar13 == uVar18) break;
          *(uint *)((longlong)pvVar8 + param_2 * 4 + -4) = *puVar11;
          pvVar8 = (void *)((longlong)pvVar8 + -4);
          puVar11 = puVar11 + 1;
          uVar13 = uVar18;
        }
        memcpy(param_1,param_3,param_2 * 4);
        uVar13 = uVar18 - param_2;
        if (uVar13 != 0) {
          if (uVar13 < 8) {
            uVar9 = 0;
          }
          else {
            uVar9 = uVar13 & 0xfffffffffffffff8;
            lVar14 = local_58 + uVar18 * 4;
            puVar11 = local_48 + param_2;
            lVar19 = 0;
            do {
              puVar1 = (uint *)(lVar14 + -0x10 + lVar19 * 4);
              uVar10 = *puVar1;
              uVar12 = puVar1[1];
              uVar15 = puVar1[2];
              uVar4 = puVar1[3];
              puVar1 = (uint *)(lVar14 + lVar19 * 4);
              uVar5 = *puVar1;
              uVar6 = puVar1[1];
              uVar7 = puVar1[2];
              puVar11[-4] = puVar1[3];
              puVar11[-3] = uVar7;
              puVar11[-2] = uVar6;
              puVar11[-1] = uVar5;
              *puVar11 = uVar4;
              puVar11[1] = uVar15;
              puVar11[2] = uVar12;
              puVar11[3] = uVar10;
              lVar19 = lVar19 + -8;
              puVar11 = puVar11 + 8;
            } while (-lVar19 != uVar9);
            if (uVar13 == uVar9) goto LAB_1801a9163;
          }
          puVar11 = (uint *)(local_50 + uVar18 * 4 + uVar9 * -4);
          uVar9 = uVar9 + param_2;
          do {
            param_1[uVar9] = *puVar11;
            puVar11 = puVar11 + -1;
            uVar9 = uVar9 + 1;
          } while (uVar18 != uVar9);
        }
LAB_1801a9163:
        if (param_2 == 0) break;
        if (uVar18 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("mid > lenC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\core\\src\\slice\\sort\\stable\\quicksort.rs"
                        ,0x13,&DAT_180282520);
        }
        FUN_1801a8e30(param_1 + param_2,uVar13,param_3,param_4,param_5,&local_5c,param_7);
        uVar18 = param_2;
        if (param_2 < 0x21) goto LAB_1801a8e54;
      }
      if (param_4 < uVar18) {
LAB_1801a9426:
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      pvVar8 = (void *)((longlong)param_3 + uVar18 * 4);
      uVar9 = 0;
      puVar11 = param_1;
      uVar13 = uVar17 >> 2;
      while( true ) {
        lVar14 = 0;
        if (2 < uVar13) {
          lVar14 = uVar13 - 3;
        }
        if (puVar11 < param_1 + lVar14) {
          bVar2 = *(byte *)((longlong)param_1 + uVar17 + 3);
          do {
            uVar10 = (uint)bVar2;
            bVar20 = uVar10 < *puVar11 >> 0x18;
            pvVar16 = (void *)((longlong)pvVar8 + -4);
            if (!bVar20) {
              pvVar16 = param_3;
            }
            *(uint *)((longlong)pvVar16 + uVar9 * 4) = *puVar11;
            lVar19 = (uVar9 + 1) - (ulonglong)bVar20;
            bVar20 = uVar10 < puVar11[1] >> 0x18;
            pvVar16 = (void *)((longlong)pvVar8 + -8);
            if (!bVar20) {
              pvVar16 = param_3;
            }
            *(uint *)((longlong)pvVar16 + lVar19 * 4) = puVar11[1];
            lVar19 = (lVar19 + 1) - (ulonglong)bVar20;
            uVar10 = (uint)bVar2;
            bVar20 = uVar10 < puVar11[2] >> 0x18;
            pvVar16 = (void *)((longlong)pvVar8 + -0xc);
            if (!bVar20) {
              pvVar16 = param_3;
            }
            *(uint *)((longlong)pvVar16 + lVar19 * 4) = puVar11[2];
            lVar19 = (lVar19 + 1) - (ulonglong)bVar20;
            pvVar8 = (void *)((longlong)pvVar8 + -0x10);
            bVar20 = uVar10 < puVar11[3] >> 0x18;
            pvVar16 = pvVar8;
            if (!bVar20) {
              pvVar16 = param_3;
            }
            *(uint *)((longlong)pvVar16 + lVar19 * 4) = puVar11[3];
            uVar9 = (lVar19 + 1) - (ulonglong)bVar20;
            puVar11 = puVar11 + 4;
          } while (puVar11 < param_1 + lVar14);
        }
        if (puVar11 < param_1 + uVar13) {
          bVar2 = *(byte *)((longlong)param_1 + uVar17 + 3);
          do {
            pvVar8 = (void *)((longlong)pvVar8 + -4);
            bVar20 = (uint)bVar2 < *puVar11 >> 0x18;
            pvVar16 = pvVar8;
            if (!bVar20) {
              pvVar16 = param_3;
            }
            *(uint *)((longlong)pvVar16 + uVar9 * 4) = *puVar11;
            uVar9 = (uVar9 + 1) - (ulonglong)bVar20;
            puVar11 = puVar11 + 1;
          } while (puVar11 < param_1 + uVar13);
        }
        if (uVar13 == uVar18) break;
        pvVar8 = (void *)((longlong)pvVar8 + -4);
        *(uint *)((longlong)param_3 + uVar9 * 4) = *puVar11;
        uVar9 = uVar9 + 1;
        puVar11 = puVar11 + 1;
        uVar13 = uVar18;
      }
      memcpy(param_1,param_3,uVar9 * 4);
      param_2 = uVar18 - uVar9;
      if (param_2 == 0) {
        param_1 = param_1 + uVar18;
        param_2 = 0;
        break;
      }
      if (param_2 < 8) {
        uVar17 = 0;
LAB_1801a9394:
        puVar11 = (uint *)(local_50 + uVar17 * -4 + uVar18 * 4);
        uVar17 = uVar17 + uVar9;
        do {
          param_1[uVar17] = *puVar11;
          puVar11 = puVar11 + -1;
          uVar17 = uVar17 + 1;
        } while (uVar18 != uVar17);
      }
      else {
        uVar17 = param_2 & 0xfffffffffffffff8;
        lVar14 = local_58 + uVar18 * 4;
        puVar11 = param_1 + uVar9 + 4;
        lVar19 = 0;
        do {
          puVar1 = (uint *)(lVar14 + -0x10 + lVar19 * 4);
          uVar10 = *puVar1;
          uVar12 = puVar1[1];
          uVar15 = puVar1[2];
          uVar4 = puVar1[3];
          puVar1 = (uint *)(lVar14 + lVar19 * 4);
          uVar5 = *puVar1;
          uVar6 = puVar1[1];
          uVar7 = puVar1[2];
          puVar11[-4] = puVar1[3];
          puVar11[-3] = uVar7;
          puVar11[-2] = uVar6;
          puVar11[-1] = uVar5;
          *puVar11 = uVar4;
          puVar11[1] = uVar15;
          puVar11[2] = uVar12;
          puVar11[3] = uVar10;
          lVar19 = lVar19 + -8;
          puVar11 = puVar11 + 8;
        } while (-lVar19 != uVar17);
        if (param_2 != uVar17) goto LAB_1801a9394;
      }
      if (uVar18 < uVar9) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar9,uVar18,uVar18,&DAT_180282538);
      }
      param_1 = param_1 + uVar9;
      local_68 = 0;
    } while (0x20 < param_2);
  }
LAB_1801a8e54:
  FUN_1801a97f0(param_1,param_2,param_3,param_4,param_7);
  return;
}


