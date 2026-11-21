/* FUN_1800b83a0 @ 1800b83a0 */

ulonglong FUN_1800b83a0(longlong *param_1,longlong param_2,undefined8 *param_3)

{
  int iVar1;
  longlong lVar2;
  char *pcVar3;
  ulonglong uVar4;
  undefined1 auVar5 [16];
  undefined2 local_28;
  undefined2 uStack_26;
  char cStack_24;
  char cStack_23;
  char cStack_22;
  char cStack_21;
  undefined8 uStack_20;
  longlong local_18;
  
  if (*param_1 != 0) {
    if ((int)*param_1 != 1) {
      uStack_26 = *(undefined2 *)(param_3 + 0xd);
      local_28 = (ushort)((int)*param_3 == 3);
      uStack_20 = param_3 + 1;
      local_18 = param_2;
      uVar4 = (**(code **)(param_1[2] + 0x18))
                        (param_1[1] + (*(longlong *)(param_1[2] + 0x10) - 1U & 0xfffffffffffffff0) +
                         0x10,&local_28);
      return uVar4;
    }
    if (((((int)*param_3 == 3) && (lVar2 = param_3[1], *(longlong *)(lVar2 + 0x80) != 0)) &&
        (lVar2 = (**(code **)(*(longlong *)(lVar2 + 0x88) + 0x30))(), lVar2 != 0)) &&
       (pcVar3 = (char *)(**(code **)(param_2 + 0x30))(lVar2), pcVar3 != (char *)0x0)) {
      (**(code **)(param_2 + 0x38))(&local_28,pcVar3);
      auVar5[0] = -((char)local_28 == '=');
      auVar5[1] = -(local_28._1_1_ == -0x1e);
      auVar5[2] = -((char)uStack_26 == '}');
      auVar5[3] = -(uStack_26._1_1_ == '\x03');
      auVar5[4] = -(cStack_24 == 'Q');
      auVar5[5] = -(cStack_23 == 'M');
      auVar5[6] = -(cStack_22 == -0x67);
      auVar5[7] = -(cStack_21 == -0x2f);
      auVar5[8] = -((char)uStack_20 == 'W');
      auVar5[9] = -(uStack_20._1_1_ == -0x36);
      auVar5[10] = -(uStack_20._2_1_ == '\v');
      auVar5[0xb] = -(uStack_20._3_1_ == -0x58);
      auVar5[0xc] = -(uStack_20._4_1_ == -0x2b);
      auVar5[0xd] = -(uStack_20._5_1_ == 'A');
      auVar5[0xe] = -(uStack_20._6_1_ == -0x5b);
      auVar5[0xf] = -(uStack_20._7_1_ == 'u');
      if ((ushort)((ushort)(SUB161(auVar5 >> 7,0) & 1) | (ushort)(SUB161(auVar5 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar5 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar5 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar5 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar5 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar5 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar5 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar5 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar5 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar5 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar5 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar5 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar5 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar5 >> 0x77,0) & 1) << 0xe | (ushort)(auVar5[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        if (*pcVar3 == '\0') {
          if (pcVar3[1] == '\x02') {
            iVar1 = 7;
            lVar2 = 8;
            goto LAB_1800b84ad;
          }
        }
        else if (*pcVar3 == '\x01') {
          iVar1 = 0;
          lVar2 = 4;
          if (pcVar3[1] != '\x02') {
            return 0;
          }
LAB_1800b84ad:
          return (ulonglong)(*(int *)(pcVar3 + lVar2) == iVar1);
        }
      }
    }
  }
  return 0;
}


