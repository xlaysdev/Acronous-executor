/* FUN_1801e1180 @ 1801e1180 */

undefined * FUN_1801e1180(undefined8 *param_1,longlong param_2)

{
  code *pcVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  char local_28;
  char cStack_27;
  char cStack_26;
  char cStack_25;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  char cStack_20;
  char cStack_1f;
  char cStack_1e;
  char cStack_1d;
  char cStack_1c;
  char cStack_1b;
  char cStack_1a;
  char cStack_19;
  
  pcVar1 = *(code **)(param_2 + 0x18);
  (*pcVar1)(&local_28,param_1);
  auVar2[0] = -(local_28 == 'm');
  auVar2[1] = -(cStack_27 == ']');
  auVar2[2] = -(cStack_26 == -0x35);
  auVar2[3] = -(cStack_25 == -0x2a);
  auVar2[4] = -(cStack_24 == ',');
  auVar2[5] = -(cStack_23 == 'P');
  auVar2[6] = -(cStack_22 == -0x15);
  auVar2[7] = -(cStack_21 == 'c');
  auVar2[8] = -(cStack_20 == 'x');
  auVar2[9] = -(cStack_1f == 'A');
  auVar2[10] = -(cStack_1e == -0x5a);
  auVar2[0xb] = -(cStack_1d == 'W');
  auVar2[0xc] = -(cStack_1c == 'q');
  auVar2[0xd] = -(cStack_1b == '\x1b');
  auVar2[0xe] = -(cStack_1a == -0x75);
  auVar2[0xf] = -(cStack_19 == -0x47);
  if ((ushort)((ushort)(SUB161(auVar2 >> 7,0) & 1) | (ushort)(SUB161(auVar2 >> 0xf,0) & 1) << 1 |
               (ushort)(SUB161(auVar2 >> 0x17,0) & 1) << 2 |
               (ushort)(SUB161(auVar2 >> 0x1f,0) & 1) << 3 |
               (ushort)(SUB161(auVar2 >> 0x27,0) & 1) << 4 |
               (ushort)(SUB161(auVar2 >> 0x2f,0) & 1) << 5 |
               (ushort)(SUB161(auVar2 >> 0x37,0) & 1) << 6 |
               (ushort)(SUB161(auVar2 >> 0x3f,0) & 1) << 7 |
               (ushort)(SUB161(auVar2 >> 0x47,0) & 1) << 8 |
               (ushort)(SUB161(auVar2 >> 0x4f,0) & 1) << 9 |
               (ushort)(SUB161(auVar2 >> 0x57,0) & 1) << 10 |
               (ushort)(SUB161(auVar2 >> 0x5f,0) & 1) << 0xb |
               (ushort)(SUB161(auVar2 >> 0x67,0) & 1) << 0xc |
               (ushort)(SUB161(auVar2 >> 0x6f,0) & 1) << 0xd |
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf) !=
      0xffff) {
    (*pcVar1)(&local_28,param_1);
    auVar3[0] = -(local_28 == -0x5e);
    auVar3[1] = -(cStack_27 == '=');
    auVar3[2] = -(cStack_26 == -0x22);
    auVar3[3] = -(cStack_25 == '<');
    auVar3[4] = -(cStack_24 == 'i');
    auVar3[5] = -(cStack_23 == -0x26);
    auVar3[6] = -(cStack_22 == -0x52);
    auVar3[7] = -(cStack_21 == '\x1e');
    auVar3[8] = -(cStack_20 == -0x60);
    auVar3[9] = -(cStack_1f == 'y');
    auVar3[10] = -(cStack_1e == '\f');
    auVar3[0xb] = -(cStack_1d == 'r');
    auVar3[0xc] = -(cStack_1c == '>');
    auVar3[0xd] = -(cStack_1b == '\r');
    auVar3[0xe] = -(cStack_1a == -0x61);
    auVar3[0xf] = -(cStack_19 == -0x6e);
    if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar3 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar3 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar3 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar3 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar3 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar3 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar3 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar3 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar3 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar3 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar3 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf)
        != 0xffff) {
      return &DAT_1802908a0;
    }
    param_1 = param_1 + 1;
  }
  return (undefined *)*param_1;
}


