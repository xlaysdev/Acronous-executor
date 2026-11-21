/* FUN_180176fd0 @ 180176fd0 */

void FUN_180176fd0(longlong param_1,undefined8 *param_2)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_48;
  undefined1 *local_40;
  undefined8 local_30;
  undefined8 local_28;
  
  puVar1 = *(undefined8 **)(param_1 + 8);
  if (puVar1 == (undefined8 *)0x0) {
    uVar5 = *param_2;
    uVar6 = param_2[1];
    puVar7 = &DAT_180262f0a;
  }
  else {
    pcVar2 = *(code **)(*(longlong *)(param_1 + 0x10) + 0x18);
    (*pcVar2)(&local_58,puVar1);
    auVar8[0] = -((char)local_58 == -0x5e);
    auVar8[1] = -(local_58._1_1_ == '=');
    auVar8[2] = -(local_58._2_1_ == -0x22);
    auVar8[3] = -(local_58._3_1_ == '<');
    auVar8[4] = -(local_58._4_1_ == 'i');
    auVar8[5] = -(local_58._5_1_ == -0x26);
    auVar8[6] = -(local_58._6_1_ == -0x52);
    auVar8[7] = -(local_58._7_1_ == '\x1e');
    auVar8[8] = -((char)uStack_50 == -0x60);
    auVar8[9] = -(uStack_50._1_1_ == 'y');
    auVar8[10] = -(uStack_50._2_1_ == '\f');
    auVar8[0xb] = -(uStack_50._3_1_ == 'r');
    auVar8[0xc] = -(uStack_50._4_1_ == '>');
    auVar8[0xd] = -(uStack_50._5_1_ == '\r');
    auVar8[0xe] = -(uStack_50._6_1_ == -0x61);
    auVar8[0xf] = -(uStack_50._7_1_ == -0x6e);
    if ((ushort)((ushort)(SUB161(auVar8 >> 7,0) & 1) | (ushort)(SUB161(auVar8 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar8 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar8 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar8 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar8 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar8 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar8 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar8 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar8 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar8 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar8 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar8 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar8 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar8 >> 0x77,0) & 1) << 0xe | (ushort)(auVar8[0xf] >> 7) << 0xf)
        == 0xffff) {
      lVar3 = 0x10;
      puVar4 = puVar1 + 1;
    }
    else {
      (*pcVar2)(&local_58,puVar1);
      auVar9[0] = -((char)local_58 == 'm');
      auVar9[1] = -(local_58._1_1_ == ']');
      auVar9[2] = -(local_58._2_1_ == -0x35);
      auVar9[3] = -(local_58._3_1_ == -0x2a);
      auVar9[4] = -(local_58._4_1_ == ',');
      auVar9[5] = -(local_58._5_1_ == 'P');
      auVar9[6] = -(local_58._6_1_ == -0x15);
      auVar9[7] = -(local_58._7_1_ == 'c');
      auVar9[8] = -((char)uStack_50 == 'x');
      auVar9[9] = -(uStack_50._1_1_ == 'A');
      auVar9[10] = -(uStack_50._2_1_ == -0x5a);
      auVar9[0xb] = -(uStack_50._3_1_ == 'W');
      auVar9[0xc] = -(uStack_50._4_1_ == 'q');
      auVar9[0xd] = -(uStack_50._5_1_ == '\x1b');
      auVar9[0xe] = -(uStack_50._6_1_ == -0x75);
      auVar9[0xf] = -(uStack_50._7_1_ == -0x47);
      lVar3 = 8;
      puVar4 = puVar1;
      if ((ushort)((ushort)(SUB161(auVar9 >> 7,0) & 1) | (ushort)(SUB161(auVar9 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar9 >> 0x17,0) & 1) << 2 |
                   (ushort)(SUB161(auVar9 >> 0x1f,0) & 1) << 3 |
                   (ushort)(SUB161(auVar9 >> 0x27,0) & 1) << 4 |
                   (ushort)(SUB161(auVar9 >> 0x2f,0) & 1) << 5 |
                   (ushort)(SUB161(auVar9 >> 0x37,0) & 1) << 6 |
                   (ushort)(SUB161(auVar9 >> 0x3f,0) & 1) << 7 |
                   (ushort)(SUB161(auVar9 >> 0x47,0) & 1) << 8 |
                   (ushort)(SUB161(auVar9 >> 0x4f,0) & 1) << 9 |
                   (ushort)(SUB161(auVar9 >> 0x57,0) & 1) << 10 |
                   (ushort)(SUB161(auVar9 >> 0x5f,0) & 1) << 0xb |
                   (ushort)(SUB161(auVar9 >> 0x67,0) & 1) << 0xc |
                   (ushort)(SUB161(auVar9 >> 0x6f,0) & 1) << 0xd |
                   (ushort)(SUB161(auVar9 >> 0x77,0) & 1) << 0xe | (ushort)(auVar9[0xf] >> 7) << 0xf
                  ) != 0xffff) {
        uVar5 = *param_2;
        uVar6 = param_2[1];
        puVar7 = &DAT_180262f24;
        goto LAB_1801770d7;
      }
    }
    local_30 = *puVar4;
    local_28 = *(undefined8 *)((longlong)puVar1 + lVar3);
    local_48 = &local_30;
    local_40 = &LAB_1800a54a0;
    uVar5 = *param_2;
    uVar6 = param_2[1];
    puVar7 = &DAT_180262f3f;
  }
LAB_1801770d7:
  uStack_50 = FUN_180176f10;
  local_58 = param_1;
  FUN_1801ef150(uVar5,uVar6,puVar7,&local_58);
  return;
}


