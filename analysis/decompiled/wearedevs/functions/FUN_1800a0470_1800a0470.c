/* FUN_1800a0470 @ 1800a0470 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1800a0470(longlong *param_1)

{
  undefined8 uVar1;
  ushort uVar2;
  short sVar3;
  uint uVar4;
  uint uVar5;
  undefined8 *puVar6;
  longlong lVar7;
  undefined8 *puVar8;
  undefined1 uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  ushort uVar13;
  ulonglong uVar14;
  char *pcVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  param_1 = (longlong *)*param_1;
  if (param_1 != (longlong *)0x0) {
    puVar6 = (undefined8 *)*param_1;
    uVar10 = param_1[1];
    uVar12 = 0x8d013d4cab72aaa0;
    lVar7 = 0;
    while( true ) {
      uVar12 = uVar12 & uVar10;
      auVar16 = *(undefined1 (*) [16])((longlong)puVar6 + uVar12);
      auVar20[0] = -(auVar16[0] == 'F');
      auVar20[1] = -(auVar16[1] == 'F');
      auVar20[2] = -(auVar16[2] == 'F');
      auVar20[3] = -(auVar16[3] == 'F');
      auVar20[4] = -(auVar16[4] == 'F');
      auVar20[5] = -(auVar16[5] == 'F');
      auVar20[6] = -(auVar16[6] == 'F');
      auVar20[7] = -(auVar16[7] == 'F');
      auVar20[8] = -(auVar16[8] == 'F');
      auVar20[9] = -(auVar16[9] == 'F');
      auVar20[10] = -(auVar16[10] == 'F');
      auVar20[0xb] = -(auVar16[0xb] == 'F');
      auVar20[0xc] = -(auVar16[0xc] == 'F');
      auVar20[0xd] = -(auVar16[0xd] == 'F');
      auVar20[0xe] = -(auVar16[0xe] == 'F');
      auVar20[0xf] = -(auVar16[0xf] == 'F');
      uVar13 = (ushort)(SUB161(auVar20 >> 7,0) & 1) | (ushort)(SUB161(auVar20 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar20 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar20 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar20 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar20 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar20 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar20 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar20 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar20 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar20 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar20 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar20 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar20 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar20 >> 0x77,0) & 1) << 0xe | (ushort)(auVar20[0xf] >> 7) << 0xf;
      uVar11 = (uint)uVar13;
      while (uVar13 != 0) {
        uVar4 = 0;
        for (uVar5 = uVar11; (uVar5 & 1) == 0; uVar5 = uVar5 >> 1 | 0x80000000) {
          uVar4 = uVar4 + 1;
        }
        uVar14 = uVar4 + uVar12 & uVar10;
        pcVar15 = (char *)(puVar6 + uVar14 * -4 + -4);
        auVar21[0] = -(*pcVar15 == DAT_18020fbc0);
        auVar21[1] = -(pcVar15[1] == DAT_18020fbc0._1_1_);
        auVar21[2] = -(pcVar15[2] == DAT_18020fbc0._2_1_);
        auVar21[3] = -(pcVar15[3] == DAT_18020fbc0._3_1_);
        auVar21[4] = -(pcVar15[4] == DAT_18020fbc0._4_1_);
        auVar21[5] = -(pcVar15[5] == DAT_18020fbc0._5_1_);
        auVar21[6] = -(pcVar15[6] == DAT_18020fbc0._6_1_);
        auVar21[7] = -(pcVar15[7] == DAT_18020fbc0._7_1_);
        auVar21[8] = -(pcVar15[8] == DAT_18020fbc0._8_1_);
        auVar21[9] = -(pcVar15[9] == DAT_18020fbc0._9_1_);
        auVar21[10] = -(pcVar15[10] == DAT_18020fbc0._10_1_);
        auVar21[0xb] = -(pcVar15[0xb] == DAT_18020fbc0._11_1_);
        auVar21[0xc] = -(pcVar15[0xc] == DAT_18020fbc0._12_1_);
        auVar21[0xd] = -(pcVar15[0xd] == DAT_18020fbc0._13_1_);
        auVar21[0xe] = -(pcVar15[0xe] == DAT_18020fbc0._14_1_);
        auVar21[0xf] = -(pcVar15[0xf] == DAT_18020fbc0._15_1_);
        if ((ushort)((ushort)(SUB161(auVar21 >> 7,0) & 1) |
                     (ushort)(SUB161(auVar21 >> 0xf,0) & 1) << 1 |
                     (ushort)(SUB161(auVar21 >> 0x17,0) & 1) << 2 |
                     (ushort)(SUB161(auVar21 >> 0x1f,0) & 1) << 3 |
                     (ushort)(SUB161(auVar21 >> 0x27,0) & 1) << 4 |
                     (ushort)(SUB161(auVar21 >> 0x2f,0) & 1) << 5 |
                     (ushort)(SUB161(auVar21 >> 0x37,0) & 1) << 6 |
                     (ushort)(SUB161(auVar21 >> 0x3f,0) & 1) << 7 |
                     (ushort)(SUB161(auVar21 >> 0x47,0) & 1) << 8 |
                     (ushort)(SUB161(auVar21 >> 0x4f,0) & 1) << 9 |
                     (ushort)(SUB161(auVar21 >> 0x57,0) & 1) << 10 |
                     (ushort)(SUB161(auVar21 >> 0x5f,0) & 1) << 0xb |
                     (ushort)(SUB161(auVar21 >> 0x67,0) & 1) << 0xc |
                     (ushort)(SUB161(auVar21 >> 0x6f,0) & 1) << 0xd |
                     (ushort)(SUB161(auVar21 >> 0x77,0) & 1) << 0xe |
                    (ushort)(auVar21[0xf] >> 7) << 0xf) == 0xffff) {
          uVar10 = uVar14 - 0x10 & uVar10;
          pcVar15 = (char *)((longlong)puVar6 + uVar10);
          auVar16[0] = -(*pcVar15 == -1);
          auVar16[1] = -(pcVar15[1] == -1);
          auVar16[2] = -(pcVar15[2] == -1);
          auVar16[3] = -(pcVar15[3] == -1);
          auVar16[4] = -(pcVar15[4] == -1);
          auVar16[5] = -(pcVar15[5] == -1);
          auVar16[6] = -(pcVar15[6] == -1);
          auVar16[7] = -(pcVar15[7] == -1);
          auVar16[8] = -(pcVar15[8] == -1);
          auVar16[9] = -(pcVar15[9] == -1);
          auVar16[10] = -(pcVar15[10] == -1);
          auVar16[0xb] = -(pcVar15[0xb] == -1);
          auVar16[0xc] = -(pcVar15[0xc] == -1);
          auVar16[0xd] = -(pcVar15[0xd] == -1);
          auVar16[0xe] = -(pcVar15[0xe] == -1);
          auVar16[0xf] = -(pcVar15[0xf] == -1);
          uVar2 = (ushort)(SUB161(auVar16 >> 7,0) & 1) | (ushort)(SUB161(auVar16 >> 0xf,0) & 1) << 1
                  | (ushort)(SUB161(auVar16 >> 0x17,0) & 1) << 2 |
                  (ushort)(SUB161(auVar16 >> 0x1f,0) & 1) << 3 |
                  (ushort)(SUB161(auVar16 >> 0x27,0) & 1) << 4 |
                  (ushort)(SUB161(auVar16 >> 0x2f,0) & 1) << 5 |
                  (ushort)(SUB161(auVar16 >> 0x37,0) & 1) << 6 |
                  (ushort)(SUB161(auVar16 >> 0x3f,0) & 1) << 7 |
                  (ushort)(SUB161(auVar16 >> 0x47,0) & 1) << 8 |
                  (ushort)(SUB161(auVar16 >> 0x4f,0) & 1) << 9 |
                  (ushort)(SUB161(auVar16 >> 0x57,0) & 1) << 10 |
                  (ushort)(SUB161(auVar16 >> 0x5f,0) & 1) << 0xb |
                  (ushort)(SUB161(auVar16 >> 0x67,0) & 1) << 0xc |
                  (ushort)(SUB161(auVar16 >> 0x6f,0) & 1) << 0xd |
                  (ushort)(SUB161(auVar16 >> 0x77,0) & 1) << 0xe |
                  (ushort)(auVar16[0xf] >> 7) << 0xf;
          pcVar15 = (char *)((longlong)puVar6 + uVar14);
          auVar17[0] = -(*pcVar15 == -1);
          auVar17[1] = -(pcVar15[1] == -1);
          auVar17[2] = -(pcVar15[2] == -1);
          auVar17[3] = -(pcVar15[3] == -1);
          auVar17[4] = -(pcVar15[4] == -1);
          auVar17[5] = -(pcVar15[5] == -1);
          auVar17[6] = -(pcVar15[6] == -1);
          auVar17[7] = -(pcVar15[7] == -1);
          auVar17[8] = -(pcVar15[8] == -1);
          auVar17[9] = -(pcVar15[9] == -1);
          auVar17[10] = -(pcVar15[10] == -1);
          auVar17[0xb] = -(pcVar15[0xb] == -1);
          auVar17[0xc] = -(pcVar15[0xc] == -1);
          auVar17[0xd] = -(pcVar15[0xd] == -1);
          auVar17[0xe] = -(pcVar15[0xe] == -1);
          auVar17[0xf] = -(pcVar15[0xf] == -1);
          uVar13 = 0xf;
          if (uVar2 != 0) {
            for (; uVar2 >> uVar13 == 0; uVar13 = uVar13 - 1) {
            }
          }
          sVar3 = 0;
          for (uVar11 = (ushort)((ushort)(SUB161(auVar17 >> 7,0) & 1) |
                                 (ushort)(SUB161(auVar17 >> 0xf,0) & 1) << 1 |
                                 (ushort)(SUB161(auVar17 >> 0x17,0) & 1) << 2 |
                                 (ushort)(SUB161(auVar17 >> 0x1f,0) & 1) << 3 |
                                 (ushort)(SUB161(auVar17 >> 0x27,0) & 1) << 4 |
                                 (ushort)(SUB161(auVar17 >> 0x2f,0) & 1) << 5 |
                                 (ushort)(SUB161(auVar17 >> 0x37,0) & 1) << 6 |
                                 (ushort)(SUB161(auVar17 >> 0x3f,0) & 1) << 7 |
                                 (ushort)(SUB161(auVar17 >> 0x47,0) & 1) << 8 |
                                 (ushort)(SUB161(auVar17 >> 0x4f,0) & 1) << 9 |
                                 (ushort)(SUB161(auVar17 >> 0x57,0) & 1) << 10 |
                                 (ushort)(SUB161(auVar17 >> 0x5f,0) & 1) << 0xb |
                                 (ushort)(SUB161(auVar17 >> 0x67,0) & 1) << 0xc |
                                 (ushort)(SUB161(auVar17 >> 0x6f,0) & 1) << 0xd |
                                 (ushort)(SUB161(auVar17 >> 0x77,0) & 1) << 0xe |
                                (ushort)(auVar17[0xf] >> 7) << 0xf) | 0x10000; (uVar11 & 1) == 0;
              uVar11 = uVar11 >> 1 | 0x80000000) {
            sVar3 = sVar3 + 1;
          }
          uVar9 = 0x80;
          if ((ushort)(sVar3 + (uVar13 ^ 0xf)) < 0x10) {
            param_1[2] = param_1[2] + 1;
            uVar9 = 0xff;
          }
          *(undefined1 *)((longlong)puVar6 + uVar14) = uVar9;
          *(undefined1 *)((longlong)puVar6 + uVar10 + 0x10) = uVar9;
          param_1[3] = param_1[3] + -1;
          if (puVar6[uVar14 * -4 + -2] == 0) {
            return 0;
          }
          local_40 = (undefined8 *)(**(code **)(puVar6[uVar14 * -4 + -1] + 0x38))();
          local_38 = puVar6;
          (*(code *)puVar6[3])(&local_58,local_40);
          auVar18[0] = -(local_58 == -0x17);
          auVar18[1] = -(cStack_57 == '3');
          auVar18[2] = -(cStack_56 == 's');
          auVar18[3] = -(cStack_55 == -0x4f);
          auVar18[4] = -(cStack_54 == 'c');
          auVar18[5] = -(cStack_53 == -0x57);
          auVar18[6] = -(cStack_52 == '3');
          auVar18[7] = -(cStack_51 == '?');
          auVar18[8] = -(cStack_50 == -0x60);
          auVar18[9] = -(cStack_4f == -0x56);
          auVar18[10] = -(cStack_4e == 'r');
          auVar18[0xb] = -(cStack_4d == -0x55);
          auVar18[0xc] = -(cStack_4c == 'L');
          auVar18[0xd] = -(cStack_4b == '=');
          auVar18[0xe] = -(cStack_4a == '\x01');
          auVar18[0xf] = -(cStack_49 == -0x73);
          puVar6 = (undefined8 *)0x0;
          if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) |
                       (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1 |
                       (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                       (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                       (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                       (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                       (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                       (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                       (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                       (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                       (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                       (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                       (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                       (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                       (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe |
                      (ushort)(auVar18[0xf] >> 7) << 0xf) == 0xffff) {
            puVar8 = local_40;
            puVar6 = local_40;
          }
          else {
            if ((code *)*local_38 != (code *)0x0) {
              (*(code *)*local_38)(local_40);
            }
            puVar8 = local_40;
            if (local_38[1] != 0) {
              thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
            }
          }
          if (puVar6 == (undefined8 *)0x0) {
            return 0;
          }
          uVar1 = *puVar8;
          thunk_FUN_1801d3330(puVar6,0x10,8);
          return uVar1;
        }
        uVar13 = (ushort)(uVar11 - 1) & (ushort)uVar11;
        uVar11 = CONCAT22((short)(uVar11 - 1 >> 0x10),uVar13);
      }
      auVar19[0] = -(auVar16[0] == -1);
      auVar19[1] = -(auVar16[1] == -1);
      auVar19[2] = -(auVar16[2] == -1);
      auVar19[3] = -(auVar16[3] == -1);
      auVar19[4] = -(auVar16[4] == -1);
      auVar19[5] = -(auVar16[5] == -1);
      auVar19[6] = -(auVar16[6] == -1);
      auVar19[7] = -(auVar16[7] == -1);
      auVar19[8] = -(auVar16[8] == -1);
      auVar19[9] = -(auVar16[9] == -1);
      auVar19[10] = -(auVar16[10] == -1);
      auVar19[0xb] = -(auVar16[0xb] == -1);
      auVar19[0xc] = -(auVar16[0xc] == -1);
      auVar19[0xd] = -(auVar16[0xd] == -1);
      auVar19[0xe] = -(auVar16[0xe] == -1);
      auVar19[0xf] = -(auVar16[0xf] == -1);
      if ((((((((((((((((SUB161(auVar19 >> 7,0) & 1) != 0 || (SUB161(auVar19 >> 0xf,0) & 1) != 0) ||
                      (SUB161(auVar19 >> 0x17,0) & 1) != 0) || (SUB161(auVar19 >> 0x1f,0) & 1) != 0)
                    || (SUB161(auVar19 >> 0x27,0) & 1) != 0) || (SUB161(auVar19 >> 0x2f,0) & 1) != 0
                   ) || (SUB161(auVar19 >> 0x37,0) & 1) != 0) ||
                 (SUB161(auVar19 >> 0x3f,0) & 1) != 0) || (SUB161(auVar19 >> 0x47,0) & 1) != 0) ||
               (SUB161(auVar19 >> 0x4f,0) & 1) != 0) || (SUB161(auVar19 >> 0x57,0) & 1) != 0) ||
             (SUB161(auVar19 >> 0x5f,0) & 1) != 0) || (SUB161(auVar19 >> 0x67,0) & 1) != 0) ||
           (SUB161(auVar19 >> 0x6f,0) & 1) != 0) || (SUB161(auVar19 >> 0x77,0) & 1) != 0) ||
          auVar19[0xf] < '\0') break;
      uVar12 = uVar12 + lVar7 + 0x10;
      lVar7 = lVar7 + 0x10;
    }
  }
                    /* WARNING: Read-only address (ram,0x00018020fbc0) is written */
  return 0;
}


