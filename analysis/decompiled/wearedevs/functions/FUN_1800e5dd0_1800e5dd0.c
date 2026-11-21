/* FUN_1800e5dd0 @ 1800e5dd0 */

undefined1 (*) [16] FUN_1800e5dd0(undefined1 (*param_1) [16],undefined8 *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined1 auVar3 [16];
  char local_58;
  char cStack_57;
  char cStack_56;
  char cStack_55;
  char cStack_54;
  char cStack_53;
  char cStack_52;
  char cStack_51;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 *local_48;
  longlong local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  (**(code **)(param_2[1] + 0x18))(&local_58,*param_2);
  if (local_58 == '\0') {
    lVar1 = CONCAT17(cStack_49,
                     CONCAT16(cStack_4a,
                              CONCAT15(cStack_4b,
                                       CONCAT14(cStack_4c,
                                                CONCAT13(cStack_4d,
                                                         CONCAT12(cStack_4e,
                                                                  CONCAT11(cStack_4f,cStack_50))))))
                    );
    if (lVar1 == 0) {
      *param_1 = (undefined1  [16])0x0;
    }
    else {
      (*(code *)local_48[7])(&local_58,lVar1);
      auVar3[0] = -(local_58 == '\b');
      auVar3[1] = -(cStack_57 == -0x22);
      auVar3[2] = -(cStack_56 == -0x57);
      auVar3[3] = -(cStack_55 == '=');
      auVar3[4] = -(cStack_54 == '+');
      auVar3[5] = -(cStack_53 == -0x6d);
      auVar3[6] = -(cStack_52 == 't');
      auVar3[7] = -(cStack_51 == -0x30);
      auVar3[8] = -(cStack_50 == -3);
      auVar3[9] = -(cStack_4f == -99);
      auVar3[10] = -(cStack_4e == -0x1f);
      auVar3[0xb] = -(cStack_4d == -6);
      auVar3[0xc] = -(cStack_4c == -0x62);
      auVar3[0xd] = -(cStack_4b == '&');
      auVar3[0xe] = -(cStack_4a == '4');
      auVar3[0xf] = -(cStack_49 == '7');
      puVar2 = local_48;
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
        local_30 = local_48;
        local_38 = lVar1;
        if ((code *)*local_48 != (code *)0x0) {
          (*(code *)*local_48)(lVar1);
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


