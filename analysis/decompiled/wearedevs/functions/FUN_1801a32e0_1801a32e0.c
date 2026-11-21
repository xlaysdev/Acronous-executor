/* FUN_1801a32e0 @ 1801a32e0 */

void FUN_1801a32e0(ulonglong *param_1,ulonglong param_2,void *param_3,ulonglong param_4,int param_5,
                  ulonglong *param_6,undefined8 param_7)

{
  void *pvVar1;
  ulonglong *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong *puVar8;
  void *pvVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lVar12;
  ulonglong uVar13;
  void *pvVar14;
  ulonglong uVar15;
  void *pvVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong *puVar19;
  longlong lVar20;
  bool bVar21;
  ulonglong *local_70;
  ulonglong local_50;
  undefined4 local_48;
  
  if (0x20 < param_2) {
    local_70 = param_6;
    do {
      uVar13 = param_2;
      while( true ) {
        bVar21 = param_5 == 0;
        param_5 = param_5 + -1;
        if (bVar21) {
          FUN_18019e320(param_1,uVar13,param_3,param_4,1,param_7);
          return;
        }
        uVar17 = uVar13 >> 3;
        puVar8 = param_1 + uVar17 * 8;
        puVar19 = param_1 + uVar17 * 0xe;
        if (uVar13 < 0x40) {
          uVar17 = *param_1;
          uVar11 = *puVar8;
          if (uVar11 < *puVar19 != uVar17 < uVar11) {
            puVar8 = puVar19;
          }
          if (uVar17 < *puVar19 != uVar17 < uVar11) {
            puVar8 = param_1;
          }
        }
        else {
          puVar8 = (ulonglong *)FUN_18019e000(param_1,puVar8,puVar19,uVar17,param_7);
        }
        uVar17 = (longlong)puVar8 - (longlong)param_1;
        local_50 = *puVar8;
        local_48 = (undefined4)puVar8[1];
        if ((local_70 != (ulonglong *)0x0) && (local_50 <= *local_70)) break;
        if (param_4 < uVar13) goto LAB_1801a38e6;
        pvVar1 = (void *)((longlong)param_3 + uVar13 * 0x10);
        param_2 = 0;
        puVar8 = param_1;
        pvVar9 = pvVar1;
        uVar11 = uVar17 >> 4;
        while( true ) {
          lVar12 = 0;
          if (2 < uVar11) {
            lVar12 = uVar11 - 3;
          }
          for (; puVar8 < param_1 + lVar12 * 2; puVar8 = puVar8 + 8) {
            bVar21 = *puVar8 < *(ulonglong *)((longlong)param_1 + uVar17);
            pvVar16 = (void *)((longlong)pvVar9 + -0x10);
            if (bVar21) {
              pvVar16 = param_3;
            }
            uVar15 = (ulonglong)bVar21;
            bVar21 = puVar8[2] < *(ulonglong *)((longlong)param_1 + uVar17);
            uVar10 = puVar8[1];
            pvVar14 = (void *)((longlong)pvVar9 + -0x20);
            if (bVar21) {
              pvVar14 = param_3;
            }
            puVar19 = (ulonglong *)((longlong)pvVar16 + param_2 * 0x10);
            *puVar19 = *puVar8;
            puVar19[1] = uVar10;
            uVar10 = puVar8[3];
            lVar20 = param_2 + uVar15 + (ulonglong)bVar21;
            puVar19 = (ulonglong *)((longlong)pvVar14 + (param_2 + uVar15) * 0x10);
            *puVar19 = puVar8[2];
            puVar19[1] = uVar10;
            bVar21 = puVar8[4] < *(ulonglong *)((longlong)param_1 + uVar17);
            pvVar16 = (void *)((longlong)pvVar9 + -0x30);
            if (bVar21) {
              pvVar16 = param_3;
            }
            uVar15 = (ulonglong)bVar21;
            uVar10 = puVar8[5];
            puVar19 = (ulonglong *)((longlong)pvVar16 + lVar20 * 0x10);
            *puVar19 = puVar8[4];
            puVar19[1] = uVar10;
            pvVar9 = (void *)((longlong)pvVar9 + -0x40);
            bVar21 = puVar8[6] < *(ulonglong *)((longlong)param_1 + uVar17);
            pvVar16 = pvVar9;
            if (bVar21) {
              pvVar16 = param_3;
            }
            uVar10 = puVar8[7];
            puVar19 = (ulonglong *)((longlong)pvVar16 + (lVar20 + uVar15) * 0x10);
            *puVar19 = puVar8[6];
            puVar19[1] = uVar10;
            param_2 = lVar20 + uVar15 + (ulonglong)bVar21;
          }
          for (; puVar8 < param_1 + uVar11 * 2; puVar8 = puVar8 + 2) {
            pvVar9 = (void *)((longlong)pvVar9 + -0x10);
            bVar21 = *puVar8 < *(ulonglong *)((longlong)param_1 + uVar17);
            pvVar16 = pvVar9;
            if (bVar21) {
              pvVar16 = param_3;
            }
            uVar10 = puVar8[1];
            puVar19 = (ulonglong *)((longlong)pvVar16 + param_2 * 0x10);
            *puVar19 = *puVar8;
            puVar19[1] = uVar10;
            param_2 = param_2 + bVar21;
          }
          if (uVar11 == uVar13) break;
          uVar11 = puVar8[1];
          puVar19 = (ulonglong *)((longlong)pvVar9 + param_2 * 0x10 + -0x10);
          *puVar19 = *puVar8;
          puVar19[1] = uVar11;
          pvVar9 = (void *)((longlong)pvVar9 + -0x10);
          puVar8 = puVar8 + 2;
          uVar11 = uVar13;
        }
        memcpy(param_1,param_3,param_2 * 0x10);
        uVar11 = uVar13 - param_2;
        if (uVar11 != 0) {
          if (uVar13 == param_2 + 1) {
            uVar15 = 0;
          }
          else {
            puVar8 = param_1 + param_2 * 2 + 2;
            puVar19 = (ulonglong *)((longlong)param_3 + uVar13 * 0x10 + -0x10);
            uVar10 = 0;
            do {
              uVar15 = puVar19[1];
              puVar8[-2] = *puVar19;
              puVar8[-1] = uVar15;
              uVar15 = uVar10 + 2;
              puVar2 = (ulonglong *)((longlong)pvVar1 + (uVar10 ^ 0xffffffffffffffe) * 0x10);
              uVar10 = puVar2[1];
              *puVar8 = *puVar2;
              puVar8[1] = uVar10;
              puVar8 = puVar8 + 4;
              puVar19 = puVar19 + -4;
              uVar10 = uVar15;
            } while ((uVar11 & 0xfffffffffffffffe) != uVar15);
          }
          if ((uVar11 & 1) != 0) {
            puVar8 = (ulonglong *)((longlong)pvVar1 + ~uVar15 * 0x10);
            uVar10 = puVar8[1];
            param_1[param_2 * 2 + uVar15 * 2] = *puVar8;
            (param_1 + param_2 * 2 + uVar15 * 2)[1] = uVar10;
          }
        }
        if (param_2 == 0) break;
        if (uVar13 < param_2) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0("mid > lenC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\core\\src\\slice\\sort\\stable\\quicksort.rs"
                        ,0x13,&DAT_180281ea8);
        }
        FUN_1801a32e0(param_1 + param_2 * 2,uVar11,param_3,param_4,param_5,&local_50,param_7);
        uVar13 = param_2;
        if (param_2 < 0x21) goto LAB_1801a3302;
      }
      if (param_4 < uVar13) {
LAB_1801a38e6:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      pvVar1 = (void *)((longlong)param_3 + uVar13 * 0x10);
      uVar11 = 0;
      puVar8 = param_1;
      pvVar9 = pvVar1;
      uVar10 = uVar17 >> 4;
      while( true ) {
        lVar12 = 0;
        if (2 < uVar10) {
          lVar12 = uVar10 - 3;
        }
        for (; puVar8 < param_1 + lVar12 * 2; puVar8 = puVar8 + 8) {
          bVar21 = *(ulonglong *)((longlong)param_1 + uVar17) < *puVar8;
          pvVar16 = (void *)((longlong)pvVar9 + -0x10);
          if (!bVar21) {
            pvVar16 = param_3;
          }
          lVar20 = (uVar11 + 1) - (ulonglong)bVar21;
          bVar21 = *(ulonglong *)((longlong)param_1 + uVar17) < puVar8[2];
          uVar15 = puVar8[1];
          pvVar14 = (void *)((longlong)pvVar9 + -0x20);
          if (!bVar21) {
            pvVar14 = param_3;
          }
          puVar19 = (ulonglong *)((longlong)pvVar16 + uVar11 * 0x10);
          *puVar19 = *puVar8;
          puVar19[1] = uVar15;
          lVar18 = (lVar20 + 1) - (ulonglong)bVar21;
          bVar21 = *(ulonglong *)((longlong)param_1 + uVar17) < puVar8[4];
          uVar11 = puVar8[3];
          pvVar16 = (void *)((longlong)pvVar9 + -0x30);
          if (!bVar21) {
            pvVar16 = param_3;
          }
          puVar19 = (ulonglong *)((longlong)pvVar14 + lVar20 * 0x10);
          *puVar19 = puVar8[2];
          puVar19[1] = uVar11;
          uVar11 = puVar8[5];
          lVar20 = (lVar18 + 1) - (ulonglong)bVar21;
          puVar19 = (ulonglong *)((longlong)pvVar16 + lVar18 * 0x10);
          *puVar19 = puVar8[4];
          puVar19[1] = uVar11;
          pvVar9 = (void *)((longlong)pvVar9 + -0x40);
          bVar21 = *(ulonglong *)((longlong)param_1 + uVar17) < puVar8[6];
          pvVar16 = pvVar9;
          if (!bVar21) {
            pvVar16 = param_3;
          }
          uVar11 = puVar8[7];
          puVar19 = (ulonglong *)((longlong)pvVar16 + lVar20 * 0x10);
          *puVar19 = puVar8[6];
          puVar19[1] = uVar11;
          uVar11 = (lVar20 + 1) - (ulonglong)bVar21;
        }
        for (; puVar8 < param_1 + uVar10 * 2; puVar8 = puVar8 + 2) {
          pvVar9 = (void *)((longlong)pvVar9 + -0x10);
          bVar21 = *(ulonglong *)((longlong)param_1 + uVar17) < *puVar8;
          pvVar16 = pvVar9;
          if (!bVar21) {
            pvVar16 = param_3;
          }
          uVar15 = puVar8[1];
          puVar19 = (ulonglong *)((longlong)pvVar16 + uVar11 * 0x10);
          *puVar19 = *puVar8;
          puVar19[1] = uVar15;
          uVar11 = (uVar11 + 1) - (ulonglong)bVar21;
        }
        if (uVar10 == uVar13) break;
        pvVar9 = (void *)((longlong)pvVar9 + -0x10);
        uVar10 = puVar8[1];
        puVar19 = (ulonglong *)((longlong)param_3 + uVar11 * 0x10);
        *puVar19 = *puVar8;
        puVar19[1] = uVar10;
        uVar11 = uVar11 + 1;
        puVar8 = puVar8 + 2;
        uVar10 = uVar13;
      }
      memcpy(param_1,param_3,uVar11 * 0x10);
      param_2 = uVar13 - uVar11;
      if (param_2 == 0) {
        param_1 = param_1 + uVar13 * 2;
        param_2 = 0;
        break;
      }
      param_1 = param_1 + uVar11 * 2;
      if (uVar13 == uVar11 + 1) {
        uVar10 = 0;
      }
      else {
        puVar8 = param_1 + 2;
        puVar19 = (ulonglong *)((longlong)param_3 + uVar13 * 0x10 + -0x10);
        uVar17 = 0;
        do {
          uVar10 = puVar19[1];
          puVar8[-2] = *puVar19;
          puVar8[-1] = uVar10;
          uVar10 = uVar17 + 2;
          puVar3 = (undefined4 *)((longlong)pvVar1 + (uVar17 ^ 0xffffffffffffffe) * 0x10);
          uVar5 = puVar3[1];
          uVar6 = puVar3[2];
          uVar7 = puVar3[3];
          *(undefined4 *)puVar8 = *puVar3;
          *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
          *(undefined4 *)(puVar8 + 1) = uVar6;
          *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
          puVar8 = puVar8 + 4;
          puVar19 = puVar19 + -4;
          uVar17 = uVar10;
        } while ((param_2 & 0xfffffffffffffffe) != uVar10);
      }
      if ((param_2 & 1) != 0) {
        puVar3 = (undefined4 *)((longlong)pvVar1 + ~uVar10 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = puVar3[2];
        uVar7 = puVar3[3];
        puVar8 = param_1 + uVar10 * 2;
        *(undefined4 *)puVar8 = *puVar3;
        *(undefined4 *)((longlong)puVar8 + 4) = uVar5;
        *(undefined4 *)(puVar8 + 1) = uVar6;
        *(undefined4 *)((longlong)puVar8 + 0xc) = uVar7;
      }
      if (uVar13 < uVar11) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(uVar11,uVar13,uVar13,&DAT_180281ec0);
      }
      local_70 = (ulonglong *)0x0;
    } while (0x20 < param_2);
  }
LAB_1801a3302:
  FUN_1801a7de0(param_1,param_2,param_3,param_4,param_7);
  return;
}


