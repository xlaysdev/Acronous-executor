/* FUN_180110c90 @ 180110c90 */

byte * FUN_180110c90(byte *param_1,longlong param_2,longlong param_3,ulonglong param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  byte bVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  ulonglong uVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  
  pbVar7 = param_1 + param_2;
  if (param_2 != 0) {
    pbVar11 = (byte *)0x0;
    pbVar12 = param_1;
LAB_180110cce:
    bVar5 = *pbVar12;
    uVar9 = (uint)bVar5;
    if ((char)bVar5 < '\0') {
      uVar8 = bVar5 & 0x1f;
      if (bVar5 < 0xe0) {
        pbVar10 = pbVar12 + 2;
        uVar9 = uVar8 << 6 | pbVar12[1] & 0x3f;
      }
      else {
        uVar9 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
        if (bVar5 < 0xf0) {
          pbVar10 = pbVar12 + 3;
          uVar9 = uVar9 | uVar8 << 0xc;
        }
        else {
          pbVar10 = pbVar12 + 4;
          uVar9 = pbVar12[3] & 0x3f | uVar9 << 6 | (bVar5 & 7) << 0x12;
        }
      }
    }
    else {
      pbVar10 = pbVar12 + 1;
    }
    uVar13 = 0;
    do {
      if ((param_4 & 0x1ffffffffffffff0) == uVar13) {
        uVar13 = 0;
        goto LAB_180110de0;
      }
      puVar1 = (uint *)(param_3 + uVar13 * 4);
      puVar2 = (uint *)(param_3 + 0x10 + uVar13 * 4);
      puVar3 = (uint *)(param_3 + 0x20 + uVar13 * 4);
      puVar4 = (uint *)(param_3 + 0x30 + uVar13 * 4);
      auVar18._0_4_ = -(uint)(*puVar2 == uVar9);
      auVar18._4_4_ = -(uint)(puVar2[1] == uVar9);
      auVar18._8_4_ = -(uint)(puVar2[2] == uVar9);
      auVar18._12_4_ = -(uint)(puVar2[3] == uVar9);
      auVar14._0_4_ = -(uint)(*puVar1 == uVar9);
      auVar14._4_4_ = -(uint)(puVar1[1] == uVar9);
      auVar14._8_4_ = -(uint)(puVar1[2] == uVar9);
      auVar14._12_4_ = -(uint)(puVar1[3] == uVar9);
      auVar14 = packssdw(auVar14,auVar18);
      auVar17._0_4_ = -(uint)(*puVar3 == uVar9);
      auVar17._4_4_ = -(uint)(puVar3[1] == uVar9);
      auVar17._8_4_ = -(uint)(puVar3[2] == uVar9);
      auVar17._12_4_ = -(uint)(puVar3[3] == uVar9);
      auVar20._0_4_ = -(uint)(*puVar4 == uVar9);
      auVar20._4_4_ = -(uint)(puVar4[1] == uVar9);
      auVar20._8_4_ = -(uint)(puVar4[2] == uVar9);
      auVar20._12_4_ = -(uint)(puVar4[3] == uVar9);
      auVar18 = packssdw(auVar17,auVar20);
      auVar14 = packsswb(auVar14,auVar18);
      uVar13 = uVar13 + 0x10;
    } while ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) == 0 && (SUB161(auVar14 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar14 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar14 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar14 >> 0x27,0) & 1) == 0) && (SUB161(auVar14 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar14 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar14 >> 0x3f,0) & 1) == 0) && (SUB161(auVar14 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar14 >> 0x4f,0) & 1) == 0) && (SUB161(auVar14 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar14 >> 0x5f,0) & 1) == 0) && (SUB161(auVar14 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar14 >> 0x6f,0) & 1) == 0) && (SUB161(auVar14 >> 0x77,0) & 1) == 0) &&
             -1 < auVar14[0xf]);
    goto LAB_180110def;
  }
  pbVar11 = (byte *)0x0;
  pbVar10 = param_1;
LAB_180110e10:
  if (pbVar10 != pbVar7) {
LAB_180110e28:
    uVar9 = (uint)(char)pbVar7[-1];
    if ((int)uVar9 < 0) {
      bVar5 = pbVar7[-2];
      if ((char)bVar5 < -0x40) {
        bVar6 = pbVar7[-3];
        if ((char)bVar6 < -0x40) {
          pbVar12 = pbVar7 + -4;
          uVar9 = bVar6 & 0x3f | (pbVar7[-4] & 7) << 6;
        }
        else {
          pbVar12 = pbVar7 + -3;
          uVar9 = bVar6 & 0xf;
        }
        uVar9 = bVar5 & 0x3f | uVar9 << 6;
      }
      else {
        pbVar12 = pbVar7 + -2;
        uVar9 = bVar5 & 0x1f;
      }
      uVar9 = (uint)(pbVar7[-1] & 0x3f) | uVar9 << 6;
      pbVar7 = pbVar12;
    }
    else {
      pbVar7 = pbVar7 + -1;
    }
    uVar13 = 0;
    do {
      if ((param_4 & 0x1ffffffffffffff0) == uVar13) {
        uVar13 = 0;
        goto LAB_180110f10;
      }
      puVar1 = (uint *)(param_3 + uVar13 * 4);
      puVar2 = (uint *)(param_3 + 0x10 + uVar13 * 4);
      puVar3 = (uint *)(param_3 + 0x20 + uVar13 * 4);
      puVar4 = (uint *)(param_3 + 0x30 + uVar13 * 4);
      auVar16._0_4_ = -(uint)(*puVar2 == uVar9);
      auVar16._4_4_ = -(uint)(puVar2[1] == uVar9);
      auVar16._8_4_ = -(uint)(puVar2[2] == uVar9);
      auVar16._12_4_ = -(uint)(puVar2[3] == uVar9);
      auVar15._0_4_ = -(uint)(*puVar1 == uVar9);
      auVar15._4_4_ = -(uint)(puVar1[1] == uVar9);
      auVar15._8_4_ = -(uint)(puVar1[2] == uVar9);
      auVar15._12_4_ = -(uint)(puVar1[3] == uVar9);
      auVar14 = packssdw(auVar15,auVar16);
      auVar19._0_4_ = -(uint)(*puVar3 == uVar9);
      auVar19._4_4_ = -(uint)(puVar3[1] == uVar9);
      auVar19._8_4_ = -(uint)(puVar3[2] == uVar9);
      auVar19._12_4_ = -(uint)(puVar3[3] == uVar9);
      auVar21._0_4_ = -(uint)(*puVar4 == uVar9);
      auVar21._4_4_ = -(uint)(puVar4[1] == uVar9);
      auVar21._8_4_ = -(uint)(puVar4[2] == uVar9);
      auVar21._12_4_ = -(uint)(puVar4[3] == uVar9);
      auVar18 = packssdw(auVar19,auVar21);
      auVar14 = packsswb(auVar14,auVar18);
      uVar13 = uVar13 + 0x10;
    } while ((((((((((((((((SUB161(auVar14 >> 7,0) & 1) == 0 && (SUB161(auVar14 >> 0xf,0) & 1) == 0)
                         && (SUB161(auVar14 >> 0x17,0) & 1) == 0) &&
                        (SUB161(auVar14 >> 0x1f,0) & 1) == 0) &&
                       (SUB161(auVar14 >> 0x27,0) & 1) == 0) && (SUB161(auVar14 >> 0x2f,0) & 1) == 0
                      ) && (SUB161(auVar14 >> 0x37,0) & 1) == 0) &&
                    (SUB161(auVar14 >> 0x3f,0) & 1) == 0) && (SUB161(auVar14 >> 0x47,0) & 1) == 0)
                  && (SUB161(auVar14 >> 0x4f,0) & 1) == 0) && (SUB161(auVar14 >> 0x57,0) & 1) == 0)
                && (SUB161(auVar14 >> 0x5f,0) & 1) == 0) && (SUB161(auVar14 >> 0x67,0) & 1) == 0) &&
              (SUB161(auVar14 >> 0x6f,0) & 1) == 0) && (SUB161(auVar14 >> 0x77,0) & 1) == 0) &&
             -1 < auVar14[0xf]);
    goto LAB_180110f1f;
  }
LAB_180110f33:
  return param_1 + (longlong)pbVar11;
  while (puVar1 = (uint *)(param_3 + (param_4 & 0x1ffffffffffffff0) * 4 + uVar13),
        uVar13 = uVar13 + 4, *puVar1 != uVar9) {
LAB_180110de0:
    if (((uint)param_4 & 0xf) << 2 == uVar13) goto LAB_180110e10;
  }
LAB_180110def:
  pbVar11 = pbVar10 + ((longlong)pbVar11 - (longlong)pbVar12);
  pbVar12 = pbVar10;
  if (pbVar10 == pbVar7) goto code_r0x000180110dfe;
  goto LAB_180110cce;
code_r0x000180110dfe:
  pbVar11 = (byte *)0x0;
  goto LAB_180110f33;
  while (puVar1 = (uint *)(param_3 + (param_4 & 0x1ffffffffffffff0) * 4 + uVar13),
        uVar13 = uVar13 + 4, *puVar1 != uVar9) {
LAB_180110f10:
    if (((uint)param_4 & 0xf) << 2 == uVar13) goto LAB_180110f33;
  }
LAB_180110f1f:
  if (pbVar10 == pbVar7) goto LAB_180110f33;
  goto LAB_180110e28;
}


