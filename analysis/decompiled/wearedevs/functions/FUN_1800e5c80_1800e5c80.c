/* FUN_1800e5c80 @ 1800e5c80 */

undefined1 (*) [16] FUN_1800e5c80(undefined1 (*param_1) [16],undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  char local_78;
  char cStack_77;
  char cStack_76;
  char cStack_75;
  char cStack_74;
  char cStack_73;
  char cStack_72;
  char cStack_71;
  char cStack_70;
  char cStack_6f;
  char cStack_6e;
  char cStack_6d;
  char cStack_6c;
  char cStack_6b;
  char cStack_6a;
  char cStack_69;
  char local_60 [8];
  longlong local_58;
  undefined8 *local_50;
  longlong local_48;
  undefined8 *local_40;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  (**(code **)(param_2[1] + 0x18))(local_60,*param_2);
  if (local_60[0] == '\0') {
    if (local_58 == 0) {
      *param_1 = (undefined1  [16])0x0;
    }
    else {
      local_48 = local_58;
      local_40 = local_50;
      (*(code *)local_50[7])(&local_78,local_58);
      auVar3[0] = -(local_78 == '\b');
      auVar3[1] = -(cStack_77 == -0x22);
      auVar3[2] = -(cStack_76 == -0x57);
      auVar3[3] = -(cStack_75 == '=');
      auVar3[4] = -(cStack_74 == '+');
      auVar3[5] = -(cStack_73 == -0x6d);
      auVar3[6] = -(cStack_72 == 't');
      auVar3[7] = -(cStack_71 == -0x30);
      auVar3[8] = -(cStack_70 == -3);
      auVar3[9] = -(cStack_6f == -99);
      auVar3[10] = -(cStack_6e == -0x1f);
      auVar3[0xb] = -(cStack_6d == -6);
      auVar3[0xc] = -(cStack_6c == -0x62);
      auVar3[0xd] = -(cStack_6b == '&');
      auVar3[0xe] = -(cStack_6a == '4');
      auVar3[0xf] = -(cStack_69 == '7');
      lVar1 = local_58;
      puVar2 = local_50;
      if ((ushort)((ushort)(SUB161(auVar3 >> 7,0) & 1) | (ushort)(SUB161(auVar3 >> 0xf,0) & 1) << 1
                   | (ushort)(SUB161(auVar3 >> 0x17,0) & 1) << 2 |
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
                   (ushort)(SUB161(auVar3 >> 0x77,0) & 1) << 0xe | (ushort)(auVar3[0xf] >> 7) << 0xf
                  ) == 0xffff) {
        local_38 = local_58;
        local_30 = local_50;
        if ((code *)*local_50 != (code *)0x0) {
          (*(code *)*local_50)(local_58);
        }
        lVar1 = 1;
        puVar2 = (undefined8 *)&DAT_18020b258;
        if (local_30[1] != 0) {
          thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
        }
      }
      *(longlong *)(*param_1 + 8) = lVar1;
      *(undefined8 **)param_1[1] = puVar2;
      *(undefined8 *)*param_1 = 0;
    }
  }
  else {
    *(undefined8 *)*param_1 = 1;
  }
  return param_1;
}


