/* FUN_18010a3e0 @ 18010a3e0 */

void FUN_18010a3e0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
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
  
  uVar1 = *param_2;
  (**(code **)(param_2[1] + 0x20))(&local_28,uVar1);
  auVar2[0] = -(local_28 == -0x5f);
  auVar2[1] = -(cStack_27 == -0x7e);
  auVar2[2] = -(cStack_26 == -0x22);
  auVar2[3] = -(cStack_25 == -0xb);
  auVar2[4] = -(cStack_24 == -0x61);
  auVar2[5] = -(cStack_23 == -0x3a);
  auVar2[6] = -(cStack_22 == -0x6c);
  auVar2[7] = -(cStack_21 == 'A');
  auVar2[8] = -(cStack_20 == -0x2b);
  auVar2[9] = -(cStack_1f == -0x3b);
  auVar2[10] = -(cStack_1e == -0x11);
  auVar2[0xb] = -(cStack_1d == 'k');
  auVar2[0xc] = -(cStack_1c == -0x41);
  auVar2[0xd] = -(cStack_1b == 'x');
  auVar2[0xe] = -(cStack_1a == -0xe);
  auVar2[0xf] = -(cStack_19 == -0x55);
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
               (ushort)(SUB161(auVar2 >> 0x77,0) & 1) << 0xe | (ushort)(auVar2[0xf] >> 7) << 0xf) ==
      0xffff) {
    FUN_180178a30(uVar1,param_3,param_4);
    return;
  }
  return;
}


