/* FUN_18015e640 @ 18015e640 */

ulonglong FUN_18015e640(undefined1 (*param_1) [16],ulonglong param_2,ulonglong param_3)

{
  undefined1 auVar1 [16];
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  longlong lVar5;
  
  param_3 = param_3 & param_2;
  auVar1 = *(undefined1 (*) [16])(*param_1 + param_3);
  uVar2 = (ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
          (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 | (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3
          | (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
          (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 | (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6
          | (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
          (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 | (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9
          | (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
          (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
          (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
          (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
          (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(byte)(auVar1[0xf] >> 7) << 0xf;
  uVar3 = (uint)uVar2;
  if (uVar2 == 0) {
    lVar5 = 0x10;
    do {
      param_3 = param_3 + lVar5 & param_2;
      auVar1 = *(undefined1 (*) [16])(*param_1 + param_3);
      lVar5 = lVar5 + 0x10;
      uVar3 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
    } while (uVar3 == 0);
  }
  uVar4 = 0;
  for (; (uVar3 & 1) == 0; uVar3 = uVar3 >> 1 | 0x80000000) {
    uVar4 = uVar4 + 1;
  }
  param_2 = uVar4 + param_3 & param_2;
  if ((char)(*param_1)[param_2] < '\0') {
    return param_2;
  }
  auVar1 = *param_1;
  uVar3 = 0;
  for (uVar4 = (uint)(ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) |
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
                             (ushort)(byte)(auVar1[0xf] >> 7) << 0xf); (uVar4 & 1) == 0;
      uVar4 = uVar4 >> 1 | 0x80000000) {
    uVar3 = uVar3 + 1;
  }
  return (ulonglong)uVar3;
}


