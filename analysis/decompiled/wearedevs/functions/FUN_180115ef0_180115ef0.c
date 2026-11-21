/* FUN_180115ef0 @ 180115ef0 */

undefined4 FUN_180115ef0(undefined8 *param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 auVar4 [16];
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  
  pbVar1 = *(byte **)*param_1;
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = (byte *)((undefined8 *)*param_1)[1];
    do {
      pbVar2 = pbVar1;
      (**(code **)(pbVar3 + 0x38))(&local_48);
      auVar4[0] = -(local_48 == '=');
      auVar4[1] = -(cStack_47 == -0x1e);
      auVar4[2] = -(cStack_46 == '}');
      auVar4[3] = -(cStack_45 == '\x03');
      auVar4[4] = -(cStack_44 == 'Q');
      auVar4[5] = -(cStack_43 == 'M');
      auVar4[6] = -(cStack_42 == -0x67);
      auVar4[7] = -(cStack_41 == -0x2f);
      auVar4[8] = -(cStack_40 == 'W');
      auVar4[9] = -(cStack_3f == -0x36);
      auVar4[10] = -(cStack_3e == '\v');
      auVar4[0xb] = -(cStack_3d == -0x58);
      auVar4[0xc] = -(cStack_3c == -0x2b);
      auVar4[0xd] = -(cStack_3b == 'A');
      auVar4[0xe] = -(cStack_3a == -0x5b);
      auVar4[0xf] = -(cStack_39 == 'u');
      if ((ushort)((ushort)(SUB161(auVar4 >> 7,0) & 1) | (ushort)(SUB161(auVar4 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar4 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar4 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar4 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar4 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar4 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar4 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar4 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar4 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar4 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar4 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar4 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar4 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar4 >> 0x77,0) & 1) << 0xe | (ushort)(auVar4[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        if ((ulonglong)*pbVar1 < 3) {
          return *(undefined4 *)(pbVar1 + *(longlong *)(&DAT_180240078 + (ulonglong)*pbVar1 * 8));
        }
        return 2;
      }
      pbVar1 = (byte *)(**(code **)(pbVar3 + 0x30))(pbVar1);
      pbVar3 = pbVar2;
    } while (pbVar1 != (byte *)0x0);
  }
  return 2;
}


