/* FUN_1801b8600 @ 1801b8600 */

void * FUN_1801b8600(void *param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  BOOL BVar8;
  int iVar9;
  longlong *plVar10;
  longlong lVar11;
  undefined1 (*pauVar12) [16];
  undefined4 uVar13;
  ulonglong uVar14;
  undefined1 (*pauVar15) [16];
  uint uVar16;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined4 local_148;
  undefined1 (*local_140) [16];
  DWORDLONG DStack_138;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  longlong local_120;
  longlong lStack_118;
  undefined1 local_110 [16];
  undefined1 local_100 [16];
  undefined8 local_f0;
  undefined8 local_b0;
  longlong local_a8;
  undefined4 local_a0;
  _MEMORYSTATUSEX local_98;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined8 local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  plVar10 = (longlong *)FUN_18009ec50(0);
  if (plVar10 == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1802008b0(&PTR_s_C__Users_burne__rustup_toolchain_180287200);
  }
  lVar11 = *plVar10;
  lVar7 = plVar10[1];
  *plVar10 = *plVar10 + 1;
  uVar13 = 0x160;
  FUN_1801c13c0(&local_98,0x160,500,1);
  local_130 = (undefined4)local_98.ullAvailPhys;
  uStack_12c = local_98.ullAvailPhys._4_4_;
  uStack_128 = (undefined4)local_98.ullTotalPageFile;
  uStack_124 = local_98.ullTotalPageFile._4_4_;
  local_140 = (undefined1 (*) [16])local_98._0_8_;
  DStack_138 = local_98.ullTotalPhys;
  local_178 = 0;
  local_110 = (undefined1  [16])0x0;
  local_100 = (undefined1  [16])0x0;
  local_170 = 8;
  local_168 = 0;
  local_160 = 0x8000000000000000;
  local_148 = 0;
  local_f0 = 0;
  local_98.ullAvailVirtual = 0;
  local_98.ullAvailExtendedVirtual = 0;
  local_98.ullAvailPageFile = 0;
  local_98.ullTotalVirtual = 0;
  local_98.ullAvailPhys = 0;
  local_98.ullTotalPageFile = 0;
  local_98._4_12_ = SUB1612((undefined1  [16])0x0,4);
  local_98.dwLength = 0x40;
  local_120 = lVar11;
  lStack_118 = lVar7;
  BVar8 = GlobalMemoryStatusEx(&local_98);
  if (BVar8 == 0) {
    local_a8 = FUN_1801c9650();
    local_b0 = 1;
    local_110._8_8_ = local_98.ullAvailPhys;
    local_110._0_8_ = local_98.ullTotalPhys;
    local_a0 = uVar13;
    if (local_a8 != 0) {
      FUN_180111960(&local_a8);
    }
  }
  else {
    local_110._8_8_ = local_98.ullAvailPhys;
    local_110._0_8_ = local_98.ullTotalPhys;
  }
  local_48 = (undefined1  [16])0x0;
  local_58 = (undefined1  [16])0x0;
  local_98.ullAvailVirtual = 0;
  local_98.ullAvailExtendedVirtual = 0;
  local_98.ullAvailPageFile = 0;
  local_98.ullTotalVirtual = 0;
  local_98.ullAvailPhys = 0;
  local_98.ullTotalPageFile = 0;
  local_98.dwLength = 0;
  local_98.dwMemoryLoad = 0;
  local_98.ullTotalPhys = 0;
  local_38 = 0;
  iVar9 = K32GetPerformanceInfo(&local_98);
  if (iVar9 != 0) {
    uVar14 = 0;
    if (local_98.ullAvailPageFile <= local_98.ullAvailPhys) {
      uVar14 = local_98.ullAvailPhys - local_98.ullAvailPageFile;
    }
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_48._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar14;
    local_100._0_8_ = SUB168(auVar1 * auVar3,0);
    if (SUB168(auVar1 * auVar3,8) != 0) {
      local_100._0_8_ = 0xffffffffffffffff;
    }
    uVar14 = 0;
    if (local_98.ullAvailPageFile <= local_98.ullTotalPhys) {
      uVar14 = local_98.ullTotalPhys - local_98.ullAvailPageFile;
    }
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_48._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar14;
    local_100._8_8_ = SUB168(auVar2 * auVar4,0);
    if (SUB168(auVar2 * auVar4,8) != 0) {
      local_100._8_8_ = 0xffffffffffffffff;
    }
  }
  FUN_1801be230(&local_178,1,1);
  local_98._1_8_ = 0x202020202020101;
  local_98.dwLength._0_1_ = 1;
  FUN_1801beb00(&local_178,0);
  lVar11 = CONCAT44(uStack_124,uStack_128);
  if (lVar11 != 0) {
    pauVar15 = local_140 + 1;
    auVar1 = *local_140;
    uVar16 = ~(uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                             (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                             (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                             (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                             (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                             (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                             (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                             (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                             (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                             (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                             (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                             (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                             (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                             (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                             (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                            (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
    pauVar12 = local_140;
    do {
      if ((short)uVar16 == 0) {
        do {
          auVar1 = *pauVar15;
          pauVar12 = pauVar12 + -0x160;
          pauVar15 = pauVar15 + 1;
          uVar16 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
                                  (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                                  (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                                  (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                                  (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                                  (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                                  (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                                  (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                                  (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                                  (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                                  (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                                  (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                                  (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                                  (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                                  (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe |
                                 (ushort)(byte)(auVar1[0xf] >> 7) << 0xf);
        } while (uVar16 == 0xffff);
        uVar16 = ~uVar16;
      }
      uVar5 = 0;
      for (uVar6 = uVar16; (uVar6 & 1) == 0; uVar6 = uVar6 >> 1 | 0x80000000) {
        uVar5 = uVar5 + 1;
      }
      uVar16 = uVar16 - 1 & uVar16;
      pauVar12[(ulonglong)uVar5 * -0x16 + -1][0xc] = 0;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
  }
  memcpy(param_1,&local_178,200);
  return param_1;
}


