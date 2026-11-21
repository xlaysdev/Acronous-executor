/* FUN_180112010 @ 180112010 */

ulonglong FUN_180112010(ulonglong *param_1,ushort *param_2)

{
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  ushort uVar6;
  ushort uVar7;
  ulonglong uVar8;
  byte bVar9;
  ushort uVar10;
  ulonglong uVar11;
  ushort uVar12;
  ushort uVar13;
  ushort uVar14;
  ushort uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ushort uVar18;
  ushort uVar19;
  ushort uVar20;
  ulonglong uVar21;
  ushort uVar22;
  ushort uVar23;
  bool bVar24;
  
  bVar1 = (byte)param_1[2];
  uVar8 = 0;
  bVar9 = 0x80 - bVar1;
  uVar16 = -1L << (bVar9 & 0x3f);
  uVar17 = 0;
  bVar24 = (bVar9 & 0x40) != 0;
  uVar21 = 0xffffffffffffffff;
  if (bVar24) {
    uVar21 = uVar16;
  }
  uVar11 = *param_1;
  if (bVar24) {
    uVar16 = 0;
  }
  if ((char)bVar9 < '\0') {
    uVar21 = 0;
  }
  else {
    uVar17 = uVar16 >> 0x38 | (uVar16 & 0xff000000000000) >> 0x28 |
             (uVar16 & 0xff0000000000) >> 0x18 | (uVar16 & 0xff00000000) >> 8 |
             (uVar16 & 0xff000000) << 8 | (uVar16 & 0xff0000) << 0x18 | (uVar16 & 0xff00) << 0x28 |
             uVar16 << 0x38;
    uVar21 = uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 |
             (uVar21 & 0xff0000000000) >> 0x18 | (uVar21 & 0xff00000000) >> 8 |
             (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18 | (uVar21 & 0xff00) << 0x28 |
             uVar21 << 0x38;
  }
  uVar21 = uVar21 & uVar11;
  uVar20 = *param_2;
  uVar2 = param_2[2];
  uVar14 = uVar20 << 8 | uVar20 >> 8;
  uVar3 = param_2[3];
  uVar22 = uVar2 << 8 | uVar2 >> 8;
  uVar4 = param_2[4];
  uVar15 = uVar3 << 8 | uVar3 >> 8;
  uVar5 = param_2[5];
  uVar23 = uVar4 << 8 | uVar4 >> 8;
  uVar6 = param_2[6];
  uVar12 = uVar5 << 8 | uVar5 >> 8;
  uVar7 = param_2[7];
  uVar13 = uVar6 << 8 | uVar6 >> 8;
  uVar18 = uVar7 << 8 | uVar7 >> 8;
  uVar10 = (ushort)uVar21;
  if (uVar20 == uVar10) {
    uVar10 = param_2[1];
    uVar19 = (ushort)(uVar21 >> 0x10);
    if (uVar10 != uVar19) {
      uVar19 = uVar19 << 8 | uVar19 >> 8;
      uVar10 = uVar10 << 8 | uVar10 >> 8;
      goto LAB_18011218d;
    }
    uVar10 = (ushort)(uVar21 >> 0x20);
    if (uVar2 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar22;
      goto LAB_18011218d;
    }
    uVar10 = (ushort)(uVar21 >> 0x30);
    if (uVar3 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar15;
      goto LAB_18011218d;
    }
    uVar17 = uVar17 & param_1[1];
    uVar10 = (ushort)uVar17;
    if (uVar4 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar23;
      goto LAB_18011218d;
    }
    uVar10 = (ushort)(uVar17 >> 0x10);
    if (uVar5 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar12;
      goto LAB_18011218d;
    }
    uVar10 = (ushort)(uVar17 >> 0x20);
    if (uVar6 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar13;
      goto LAB_18011218d;
    }
    uVar10 = (ushort)(uVar17 >> 0x30);
    if (uVar7 != uVar10) {
      uVar19 = uVar10 << 8 | uVar10 >> 8;
      uVar10 = uVar18;
      goto LAB_18011218d;
    }
  }
  else {
    uVar19 = uVar10 << 8 | uVar10 >> 8;
    uVar10 = uVar14;
LAB_18011218d:
    if (uVar10 < uVar19) {
      return 0;
    }
  }
  uVar21 = 0xffffffffffffffff >> (bVar1 & 0x3f);
  uVar16 = 0;
  if ((bVar1 & 0x40) == 0) {
    uVar17 = 0xffffffffffffffff;
  }
  else {
    uVar17 = uVar21;
    uVar21 = 0;
  }
  if ((char)bVar1 < '\0') {
    uVar10 = (ushort)uVar11;
  }
  else {
    uVar16 = uVar17 >> 0x38 | (uVar17 & 0xff000000000000) >> 0x28 |
             (uVar17 & 0xff0000000000) >> 0x18 | (uVar17 & 0xff00000000) >> 8 |
             (uVar17 & 0xff000000) << 8 | (uVar17 & 0xff0000) << 0x18 | (uVar17 & 0xff00) << 0x28 |
             uVar17 << 0x38;
    uVar11 = uVar21 >> 0x38 | (uVar21 & 0xff000000000000) >> 0x28 |
             (uVar21 & 0xff0000000000) >> 0x18 | (uVar21 & 0xff00000000) >> 8 |
             (uVar21 & 0xff000000) << 8 | (uVar21 & 0xff0000) << 0x18 | (uVar21 & 0xff00) << 0x28 |
             uVar21 << 0x38 | uVar11;
    uVar10 = (ushort)uVar11;
  }
  if (uVar20 == uVar10) {
    uVar14 = param_2[1];
    uVar20 = (ushort)(uVar11 >> 0x10);
    if (uVar14 == uVar20) {
      uVar8 = uVar11 >> 0x20;
      uVar20 = (ushort)(uVar11 >> 0x20);
      uVar14 = (ushort)(uVar11 >> 0x30);
      if (uVar2 == uVar20) {
        if (uVar3 == uVar14) {
          uVar16 = uVar16 | param_1[1];
          uVar20 = (ushort)uVar16;
          if (uVar4 == uVar20) {
            uVar20 = (ushort)(uVar16 >> 0x10);
            if (uVar5 != uVar20) {
              uVar20 = uVar20 << 8 | uVar20 >> 8;
              uVar14 = uVar12;
              goto LAB_18011228d;
            }
            uVar20 = (ushort)(uVar16 >> 0x20);
            if (uVar6 != uVar20) {
              uVar20 = uVar20 << 8 | uVar20 >> 8;
              uVar14 = uVar13;
              goto LAB_18011228d;
            }
            uVar8 = CONCAT71((uint7)(uVar11 >> 0x28),1);
            uVar20 = (ushort)(uVar16 >> 0x30);
            if (uVar7 == uVar20) {
              return uVar8;
            }
            uVar20 = uVar20 << 8 | uVar20 >> 8;
            uVar23 = uVar18;
          }
          else {
            uVar20 = uVar20 << 8 | uVar20 >> 8;
          }
          uVar14 = uVar23;
        }
        else {
          uVar20 = uVar14 << 8 | uVar14 >> 8;
          uVar14 = uVar15;
        }
      }
      else {
        uVar20 = uVar20 << 8 | uVar20 >> 8;
        uVar8 = (ulonglong)CONCAT22(uVar14,uVar20);
        uVar14 = uVar22;
      }
    }
    else {
      uVar20 = uVar20 << 8 | uVar20 >> 8;
      uVar8 = (ulonglong)uVar20;
      uVar14 = uVar14 << 8 | uVar14 >> 8;
    }
  }
  else {
    uVar20 = (ushort)uVar11 << 8 | (ushort)uVar11 >> 8;
  }
LAB_18011228d:
  return CONCAT71((int7)(uVar8 >> 8),uVar14 <= uVar20);
}


