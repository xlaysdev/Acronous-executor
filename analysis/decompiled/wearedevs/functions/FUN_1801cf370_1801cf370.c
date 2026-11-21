/* FUN_1801cf370 @ 1801cf370 */

undefined8 FUN_1801cf370(undefined1 (*param_1) [32],ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  ushort uVar3;
  undefined1 auVar4 [32];
  undefined1 auVar5 [32];
  ulonglong uVar6;
  uint uVar7;
  ulonglong local_28;
  undefined1 (*local_20) [32];
  code *local_18;
  ulonglong *local_10;
  code *local_8;
  
  if (param_3 < *(ulonglong *)param_1[2]) {
    if (param_3 < *(ulonglong *)param_1[4]) {
      local_20 = param_1 + 4;
      local_18 = FUN_1801ee720;
      local_10 = &local_28;
      local_8 = FUN_1801ee720;
      local_28 = param_3;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_18028a110,&local_20,&PTR_s_C__Users_burne__cargo_registry_s_18028a1b8);
    }
    param_3 = param_3 + param_2;
    uVar6 = param_3 - *(ulonglong *)param_1[4];
    do {
      auVar1 = vpcmpeqb_avx(*(undefined1 (*) [16])param_1[3],
                            *(undefined1 (*) [16])(param_2 + (byte)param_1[4][8]));
      auVar2 = vpcmpeqb_avx(*(undefined1 (*) [16])(param_1[3] + 0x10),
                            *(undefined1 (*) [16])(param_2 + (byte)param_1[4][9]));
      auVar1 = vpand_avx(auVar1,auVar2);
      uVar3 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
              (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
      uVar7 = (uint)uVar3;
      if (uVar3 != 0) goto LAB_1801cf474;
      param_2 = param_2 + 0x10;
    } while (param_2 <= uVar6);
    if (param_3 <= param_2) {
      return 0;
    }
    auVar1 = vpcmpeqb_avx(*(undefined1 (*) [16])param_1[3],
                          *(undefined1 (*) [16])(uVar6 + (byte)param_1[4][8]));
    auVar2 = vpcmpeqb_avx(*(undefined1 (*) [16])(param_1[3] + 0x10),
                          *(undefined1 (*) [16])(uVar6 + (byte)param_1[4][9]));
    auVar1 = vpand_avx(auVar1,auVar2);
    uVar3 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
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
            (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
    uVar7 = (uint)uVar3;
    if (uVar3 == 0) {
      return 0;
    }
  }
  else {
    param_3 = param_3 + param_2;
    uVar6 = param_3 - *(ulonglong *)param_1[2];
    do {
      auVar4 = vpcmpeqb_avx2(*param_1,*(undefined1 (*) [32])(param_2 + (byte)param_1[2][8]));
      auVar5 = vpcmpeqb_avx2(param_1[1],*(undefined1 (*) [32])(param_2 + (byte)param_1[2][9]));
      auVar4 = vpand_avx2(auVar4,auVar5);
      uVar7 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
              (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3
              | (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 |
              (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 | (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6
              | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
              (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9
              | (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 |
              (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb |
              (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
              (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
              (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
              (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
              (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
              (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
              (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
              (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
              (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
              (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17
              | (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
              (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
              (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
              (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
              (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
              (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
              (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f
      ;
      if (uVar7 != 0) {
LAB_1801cf474:
        for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
        }
        return 1;
      }
      param_2 = param_2 + 0x20;
    } while (param_2 <= uVar6);
    if (param_3 <= param_2) {
      return 0;
    }
    auVar4 = vpcmpeqb_avx2(*param_1,*(undefined1 (*) [32])(uVar6 + (byte)param_1[2][8]));
    auVar5 = vpcmpeqb_avx2(param_1[1],*(undefined1 (*) [32])(uVar6 + (byte)param_1[2][9]));
    auVar4 = vpand_avx2(auVar4,auVar5);
    uVar7 = (uint)(SUB321(auVar4 >> 7,0) & 1) | (uint)(SUB321(auVar4 >> 0xf,0) & 1) << 1 |
            (uint)(SUB321(auVar4 >> 0x17,0) & 1) << 2 | (uint)(SUB321(auVar4 >> 0x1f,0) & 1) << 3 |
            (uint)(SUB321(auVar4 >> 0x27,0) & 1) << 4 | (uint)(SUB321(auVar4 >> 0x2f,0) & 1) << 5 |
            (uint)(SUB321(auVar4 >> 0x37,0) & 1) << 6 | (uint)(SUB321(auVar4 >> 0x3f,0) & 1) << 7 |
            (uint)(SUB321(auVar4 >> 0x47,0) & 1) << 8 | (uint)(SUB321(auVar4 >> 0x4f,0) & 1) << 9 |
            (uint)(SUB321(auVar4 >> 0x57,0) & 1) << 10 | (uint)(SUB321(auVar4 >> 0x5f,0) & 1) << 0xb
            | (uint)(SUB321(auVar4 >> 0x67,0) & 1) << 0xc |
            (uint)(SUB321(auVar4 >> 0x6f,0) & 1) << 0xd |
            (uint)(SUB321(auVar4 >> 0x77,0) & 1) << 0xe | (uint)SUB321(auVar4 >> 0x7f,0) << 0xf |
            (uint)(SUB321(auVar4 >> 0x87,0) & 1) << 0x10 |
            (uint)(SUB321(auVar4 >> 0x8f,0) & 1) << 0x11 |
            (uint)(SUB321(auVar4 >> 0x97,0) & 1) << 0x12 |
            (uint)(SUB321(auVar4 >> 0x9f,0) & 1) << 0x13 |
            (uint)(SUB321(auVar4 >> 0xa7,0) & 1) << 0x14 |
            (uint)(SUB321(auVar4 >> 0xaf,0) & 1) << 0x15 |
            (uint)(SUB321(auVar4 >> 0xb7,0) & 1) << 0x16 | (uint)SUB321(auVar4 >> 0xbf,0) << 0x17 |
            (uint)(SUB321(auVar4 >> 199,0) & 1) << 0x18 |
            (uint)(SUB321(auVar4 >> 0xcf,0) & 1) << 0x19 |
            (uint)(SUB321(auVar4 >> 0xd7,0) & 1) << 0x1a |
            (uint)(SUB321(auVar4 >> 0xdf,0) & 1) << 0x1b |
            (uint)(SUB321(auVar4 >> 0xe7,0) & 1) << 0x1c |
            (uint)(SUB321(auVar4 >> 0xef,0) & 1) << 0x1d |
            (uint)(SUB321(auVar4 >> 0xf7,0) & 1) << 0x1e | (uint)(byte)(auVar4[0x1f] >> 7) << 0x1f;
    if (uVar7 == 0) {
      return 0;
    }
  }
  for (; (uVar7 & 1) == 0; uVar7 = uVar7 >> 1 | 0x80000000) {
  }
  return 1;
}


