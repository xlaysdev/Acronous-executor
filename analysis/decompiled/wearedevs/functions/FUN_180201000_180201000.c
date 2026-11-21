/* FUN_180201000 @ 180201000 */

/* WARNING: Removing unreachable block (ram,0x0001802015d5) */
/* WARNING: Removing unreachable block (ram,0x000180201565) */
/* WARNING: Removing unreachable block (ram,0x00018020134f) */
/* WARNING: Removing unreachable block (ram,0x000180201273) */
/* WARNING: Removing unreachable block (ram,0x0001802010f2) */
/* WARNING: Removing unreachable block (ram,0x0001802010df) */
/* WARNING: Removing unreachable block (ram,0x000180201082) */
/* WARNING: Removing unreachable block (ram,0x00018020106a) */
/* WARNING: Removing unreachable block (ram,0x000180201047) */
/* WARNING: Removing unreachable block (ram,0x00018020101c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_180201000(void)

{
  uint *puVar1;
  longlong lVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  uint uVar19;
  ulonglong local_70;
  
  puVar1 = (uint *)cpuid_basic_info(0);
  uVar4 = *puVar1;
  uVar9 = *(ulonglong *)(puVar1 + 1);
  uVar8 = puVar1[3];
  uVar12 = 0;
  if (uVar4 == 0) {
    uVar16 = 0;
  }
  else {
    lVar2 = cpuid_Version_info(1);
    uVar10 = *(uint *)(lVar2 + 8);
    uVar14 = *(uint *)(lVar2 + 0xc);
    if (uVar4 < 7) {
      local_70 = 0;
      uVar6 = 0;
      uVar5 = 0;
      uVar7 = 0;
    }
    else {
      lVar2 = cpuid_Extended_Feature_Enumeration_info(7);
      uVar6 = *(uint *)(lVar2 + 8);
      puVar1 = (uint *)cpuid_Extended_Feature_Enumeration_info(7);
      uVar5 = *puVar1;
      uVar7 = puVar1[2];
      uVar12 = (ulonglong)*(uint *)(lVar2 + 4);
      local_70 = (ulonglong)*(uint *)(lVar2 + 0xc);
    }
    uVar15 = 0;
    piVar3 = (int *)cpuid(0x80000000);
    if (*piVar3 != 0) {
      lVar2 = cpuid(0x80000001);
      uVar15 = *(uint *)(lVar2 + 0xc);
    }
    uVar19 = (uint)uVar12;
    uVar13 = (uVar19 & 0x800) >> 4 |
             uVar19 >> 0xd & 0x40 | (uVar14 & 0x400000) >> 0xe | uVar14 >> 10 & 8;
    uVar17 = local_70 << 0x16;
    uVar18 = (ulonglong)(uVar13 + (uVar19 & 0x200) * 2);
    uVar16 = uVar18 | 0x200;
    if ((uVar5 & 0x80000000) == 0) {
      uVar16 = uVar18;
    }
    if ((local_70 & 0x800000) != 0) {
      lVar2 = cpuid(0x19);
      uVar13 = *(uint *)(lVar2 + 8);
      uVar16 = uVar16 | (*(uint *)(lVar2 + 4) & 1) * 0x10 + (*(uint *)(lVar2 + 4) & 4) * 8;
    }
    uVar18 = (ulonglong)
             (uVar10 >> 0x13 & 0xc0 |
              uVar14 >> 9 & 0x800 | uVar14 >> 9 & 0x400 | uVar14 & 0x202 | (uVar14 & 1) << 8 |
              (uint)(uVar12 >> 0xf) & 8 | (uint)(uVar12 >> 0x10) & 0x2000) |
             (ulonglong)(uVar19 & 8) << 0x36 |
             ((ulonglong)uVar14 << 0x26 | (ulonglong)uVar10) & 0x2000000000000010 |
             (ulonglong)(uVar14 >> 0x19 & 1) | (ulonglong)(uVar14 & 0x20000000) << 0x1a |
             (ulonglong)(uVar14 >> 0x1c & 4) | (ulonglong)(uVar10 >> 0x12 & 0x20) |
             (ulonglong)(uVar10 & 0x1000000) << 0x26 |
             (ulonglong)(uVar19 & 0x100) << 0x32 | (ulonglong)((uint)uVar17 & 0x40000000) |
             (ulonglong)((uint)uVar17 & 0x80000000) | uVar17 & 0x100000000 |
             (ulonglong)(uVar15 & 0x20) << 0x36;
    if ((uVar8 == 0x444d4163 && uVar9 == 0x69746e6568747541) ||
       (uVar11 = uVar9 ^ 0x6e65476e6f677948, uVar8 == 0x656e6975 && uVar11 == 0)) {
      uVar11 = (ulonglong)(uVar15 & 0x200000) << 0x27 | (ulonglong)((uVar15 & 0x40) << 6);
      uVar16 = uVar16 | uVar15 & 0x800;
      uVar18 = uVar18 | uVar11;
    }
    if ((~uVar14 & 0xc000000) == 0) {
      uVar10 = FUN_1801ec3b0(uVar11,uVar13);
      if ((~uVar10 & 6) == 0) {
        if (0xc < uVar4) {
          puVar1 = (uint *)cpuid_Processor_Extended_States_info(0xd);
          uVar15 = *puVar1;
          uVar11 = uVar16 | 1;
          if ((uVar15 & 1) == 0) {
            uVar11 = uVar16;
          }
          uVar16 = ((uVar15 & 8) >> 2 | (uVar15 & 2) * 2) | uVar11;
        }
        uVar18 = (ulonglong)((uVar5 & 7) << 0x10) |
                 (ulonglong)(uVar5 & 0x800000) << 0xf |
                 (ulonglong)(uVar5 & 0x10) << 0x24 |
                 (ulonglong)((uVar19 & 0x20) << 10) |
                 (ulonglong)(uVar14 >> 0xe & 0x4000) | (ulonglong)(uVar14 & 0x1000) << 0x2c |
                 (ulonglong)(uVar7 & 0x10) << 0x26 |
                 (ulonglong)(uVar7 & 0x400) << 0x1f | (ulonglong)(uVar7 & 0x20) << 0x22 |
                 uVar18 | 0x8000000000000000;
        if ((~uVar14 & 0x20001000) == 0 && (uVar10 & 0xe0) == 0xe0) {
          uVar18 = uVar18 | ((uint)(uVar12 >> 7) & 0x800000 |
                            (uint)(uVar12 >> 8) & 0x100000 |
                            (uint)(uVar12 >> 6) & 0x200000 |
                            (uint)(uVar12 >> 4) & 0x400000 |
                            (uVar19 & 0x200000) << 5 |
                            (uVar19 & 0x20000) * 0x80 + (uVar19 & 0x10000) * 8);
          uVar11 = uVar18 | 0x2000000;
          if (uVar12 < 0x80000000) {
            uVar11 = uVar18;
          }
          uVar14 = (uint)local_70;
          uVar18 = uVar17 & 0x600000000 |
                   (ulonglong)((uVar14 & 0x40) << 0x17 | (uVar14 & 2) << 0x1a) |
                   (ulonglong)((uVar14 & 0x4000) << 0xe) | (ulonglong)(uVar6 & 0x100) << 0x1c |
                   (ulonglong)(uVar6 & 0x800000) << 0xe | (ulonglong)(uVar5 & 0x20) << 0x1e | uVar11
          ;
        }
      }
      if (((uVar10 & 0x60000) == 0x60000) &&
         (uVar18 = uVar18 | (ulonglong)(uVar7 & 0x100) << 0x27 |
                            (ulonglong)(uVar5 & 0x200000) << 0x19 |
                            (ulonglong)(uVar6 & 0x400000) << 0x17 |
                            (ulonglong)(uVar6 & 0x3000000) << 0x13, 0x1d < uVar4)) {
        puVar1 = (uint *)cpuid(0x1e);
        uVar4 = *puVar1;
        uVar18 = uVar18 | (ulonglong)(uVar4 & 0x100) << 0x2a |
                          (ulonglong)(uVar4 & 0x80) << 0x29 | (ulonglong)(uVar4 & 0x50) << 0x2d;
      }
      uVar12 = uVar18 | 0x10000000000000;
      if ((uVar7 & 0x200000) == 0 || (uVar10 & 0x80000) == 0) {
        uVar12 = uVar18;
      }
      uVar18 = uVar12;
      if ((uVar7 & 0x80000) != 0) {
        lVar2 = cpuid(0x24);
        uVar12 = 0x60000000000000;
        if ((*(uint *)(lVar2 + 4) & 0xfe) == 0) {
          uVar12 = 0x20000000000000;
        }
        uVar18 = uVar18 | uVar12;
      }
    }
    uVar12 = uVar18 & 0xf9ffffffffffbfff;
    if ((uVar18 & 0x4000) != 0 || (uVar8 != 0x6c65746e || uVar9 != 0x49656e69756e6547)) {
      uVar12 = uVar18;
    }
  }
  DAT_1802fd868 = uVar12 | 0x8000000000000000;
  _DAT_1802fd870 = uVar16 << 1 | uVar12 >> 0x3f | 0x8000000000000000;
  _DAT_1802fd878 = 0x8000000000000000;
  return uVar12;
}


