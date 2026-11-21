/* FUN_1801d0320 @ 1801d0320 */

undefined8 FUN_1801d0320(byte *param_1,ulonglong *param_2,ulonglong param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  ushort uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong *puVar7;
  ulonglong *puVar8;
  uint uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  
  if (param_3 < *(ulonglong *)(param_1 + 0x20)) {
    if (param_3 != 0) {
      bVar3 = param_1[0xa8];
      if (param_3 < 8) {
        if (bVar3 == (byte)*param_2) {
          return 1;
        }
        if (param_3 != 1) {
          if (bVar3 == *(byte *)((longlong)param_2 + 1)) {
            return 1;
          }
          if (param_3 != 2) {
            if (bVar3 == *(byte *)((longlong)param_2 + 2)) {
              return 1;
            }
            if (param_3 != 3) {
              if (bVar3 == *(byte *)((longlong)param_2 + 3)) {
                return 1;
              }
              if (param_3 != 4) {
                if (bVar3 == *(byte *)((longlong)param_2 + 4)) {
                  return 1;
                }
                if (param_3 != 5) {
                  if (bVar3 == *(byte *)((longlong)param_2 + 5)) {
                    return 1;
                  }
                  if ((param_3 != 6) && (bVar3 == *(byte *)((longlong)param_2 + 6))) {
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
      else {
        uVar5 = (ulonglong)bVar3 * 0x101010101010101;
        if ((~(0x101010101010100 - (*param_2 ^ uVar5) | *param_2 ^ uVar5) & 0x8080808080808080) != 0
           ) {
          do {
            if (bVar3 == (byte)*param_2) {
              return 1;
            }
            param_2 = (ulonglong *)((longlong)param_2 + 1);
            param_3 = param_3 - 1;
          } while (param_3 != 0);
          return 0;
        }
        puVar7 = (ulonglong *)((longlong)param_2 + param_3);
        uVar6 = (ulonglong)((uint)param_2 & 7);
        param_2 = (ulonglong *)((longlong)param_2 + (8 - uVar6));
        if (param_3 < 0x11) {
          if (8 - uVar6 < param_3) {
            do {
              if (bVar3 == (byte)*param_2) {
                return 1;
              }
              param_2 = (ulonglong *)((longlong)param_2 + 1);
            } while (param_2 < puVar7);
            return 0;
          }
        }
        else {
          while (((param_2 <= puVar7 + -2 &&
                  ((~(0x101010101010100 - (*param_2 ^ uVar5) | *param_2 ^ uVar5) &
                   0x8080808080808080) == 0)) &&
                 ((~(0x101010101010100 - (param_2[1] ^ uVar5) | param_2[1] ^ uVar5) &
                  0x8080808080808080) == 0))) {
            param_2 = param_2 + 2;
          }
          if (param_2 < puVar7) {
            do {
              if (bVar3 == (byte)*param_2) {
                return 1;
              }
              param_2 = (ulonglong *)((longlong)param_2 + 1);
            } while (param_2 != puVar7);
            return 0;
          }
        }
      }
    }
  }
  else {
    puVar7 = (ulonglong *)(param_3 + (longlong)param_2);
    puVar8 = (ulonglong *)((longlong)puVar7 - *(ulonglong *)(param_1 + 0x20));
    do {
      pbVar1 = (byte *)((longlong)param_2 + (ulonglong)param_1[0x28]);
      pbVar2 = (byte *)((longlong)param_2 + (ulonglong)param_1[0x29]);
      auVar10[0] = -(*pbVar1 == *param_1);
      auVar10[1] = -(pbVar1[1] == param_1[1]);
      auVar10[2] = -(pbVar1[2] == param_1[2]);
      auVar10[3] = -(pbVar1[3] == param_1[3]);
      auVar10[4] = -(pbVar1[4] == param_1[4]);
      auVar10[5] = -(pbVar1[5] == param_1[5]);
      auVar10[6] = -(pbVar1[6] == param_1[6]);
      auVar10[7] = -(pbVar1[7] == param_1[7]);
      auVar10[8] = -(pbVar1[8] == param_1[8]);
      auVar10[9] = -(pbVar1[9] == param_1[9]);
      auVar10[10] = -(pbVar1[10] == param_1[10]);
      auVar10[0xb] = -(pbVar1[0xb] == param_1[0xb]);
      auVar10[0xc] = -(pbVar1[0xc] == param_1[0xc]);
      auVar10[0xd] = -(pbVar1[0xd] == param_1[0xd]);
      auVar10[0xe] = -(pbVar1[0xe] == param_1[0xe]);
      auVar10[0xf] = -(pbVar1[0xf] == param_1[0xf]);
      auVar12[0] = -(*pbVar2 == param_1[0x10]);
      auVar12[1] = -(pbVar2[1] == param_1[0x11]);
      auVar12[2] = -(pbVar2[2] == param_1[0x12]);
      auVar12[3] = -(pbVar2[3] == param_1[0x13]);
      auVar12[4] = -(pbVar2[4] == param_1[0x14]);
      auVar12[5] = -(pbVar2[5] == param_1[0x15]);
      auVar12[6] = -(pbVar2[6] == param_1[0x16]);
      auVar12[7] = -(pbVar2[7] == param_1[0x17]);
      auVar12[8] = -(pbVar2[8] == param_1[0x18]);
      auVar12[9] = -(pbVar2[9] == param_1[0x19]);
      auVar12[10] = -(pbVar2[10] == param_1[0x1a]);
      auVar12[0xb] = -(pbVar2[0xb] == param_1[0x1b]);
      auVar12[0xc] = -(pbVar2[0xc] == param_1[0x1c]);
      auVar12[0xd] = -(pbVar2[0xd] == param_1[0x1d]);
      auVar12[0xe] = -(pbVar2[0xe] == param_1[0x1e]);
      auVar12[0xf] = -(pbVar2[0xf] == param_1[0x1f]);
      auVar12 = auVar12 & auVar10;
      uVar4 = (ushort)(SUB161(auVar12 >> 7,0) & 1) | (ushort)(SUB161(auVar12 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar12 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar12 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar12 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar12 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar12 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar12 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar12 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar12 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar12 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar12 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar12 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar12 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar12 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar12[0xf] >> 7) << 0xf;
      if (uVar4 != 0) goto LAB_1801d03ed;
      param_2 = param_2 + 2;
    } while (param_2 <= puVar8);
    if (param_2 < puVar7) {
      pbVar1 = (byte *)((longlong)puVar8 + (ulonglong)param_1[0x28]);
      pbVar2 = (byte *)((longlong)puVar8 + (ulonglong)param_1[0x29]);
      auVar11[0] = -(*pbVar1 == *param_1);
      auVar11[1] = -(pbVar1[1] == param_1[1]);
      auVar11[2] = -(pbVar1[2] == param_1[2]);
      auVar11[3] = -(pbVar1[3] == param_1[3]);
      auVar11[4] = -(pbVar1[4] == param_1[4]);
      auVar11[5] = -(pbVar1[5] == param_1[5]);
      auVar11[6] = -(pbVar1[6] == param_1[6]);
      auVar11[7] = -(pbVar1[7] == param_1[7]);
      auVar11[8] = -(pbVar1[8] == param_1[8]);
      auVar11[9] = -(pbVar1[9] == param_1[9]);
      auVar11[10] = -(pbVar1[10] == param_1[10]);
      auVar11[0xb] = -(pbVar1[0xb] == param_1[0xb]);
      auVar11[0xc] = -(pbVar1[0xc] == param_1[0xc]);
      auVar11[0xd] = -(pbVar1[0xd] == param_1[0xd]);
      auVar11[0xe] = -(pbVar1[0xe] == param_1[0xe]);
      auVar11[0xf] = -(pbVar1[0xf] == param_1[0xf]);
      auVar13[0] = -(*pbVar2 == param_1[0x10]);
      auVar13[1] = -(pbVar2[1] == param_1[0x11]);
      auVar13[2] = -(pbVar2[2] == param_1[0x12]);
      auVar13[3] = -(pbVar2[3] == param_1[0x13]);
      auVar13[4] = -(pbVar2[4] == param_1[0x14]);
      auVar13[5] = -(pbVar2[5] == param_1[0x15]);
      auVar13[6] = -(pbVar2[6] == param_1[0x16]);
      auVar13[7] = -(pbVar2[7] == param_1[0x17]);
      auVar13[8] = -(pbVar2[8] == param_1[0x18]);
      auVar13[9] = -(pbVar2[9] == param_1[0x19]);
      auVar13[10] = -(pbVar2[10] == param_1[0x1a]);
      auVar13[0xb] = -(pbVar2[0xb] == param_1[0x1b]);
      auVar13[0xc] = -(pbVar2[0xc] == param_1[0x1c]);
      auVar13[0xd] = -(pbVar2[0xd] == param_1[0x1d]);
      auVar13[0xe] = -(pbVar2[0xe] == param_1[0x1e]);
      auVar13[0xf] = -(pbVar2[0xf] == param_1[0x1f]);
      auVar13 = auVar13 & auVar11;
      uVar4 = (ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe |
              (ushort)(byte)(auVar13[0xf] >> 7) << 0xf;
      if (uVar4 != 0) {
LAB_1801d03ed:
        for (uVar9 = (uint)uVar4; (uVar9 & 1) == 0; uVar9 = uVar9 >> 1 | 0x80000000) {
        }
        return 1;
      }
    }
  }
  return 0;
}


