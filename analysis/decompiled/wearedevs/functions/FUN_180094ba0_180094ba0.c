/* FUN_180094ba0 @ 180094ba0 */

undefined8 * FUN_180094ba0(undefined8 *param_1,longlong *param_2)

{
  longlong lVar1;
  undefined8 *puVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [16];
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
  undefined1 local_48;
  char cStack_47;
  undefined6 uStack_46;
  longlong local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_2;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  puVar2 = (undefined8 *)param_2[1];
  (*(code *)puVar2[3])(&local_58,lVar1);
  if (cStack_47 == '\x03') {
    *(undefined1 *)((longlong)param_1 + 0x11) = 3;
  }
  else {
    uVar4 = CONCAT17(cStack_51,
                     CONCAT16(cStack_52,
                              CONCAT15(cStack_53,
                                       CONCAT14(cStack_54,
                                                CONCAT13(cStack_55,
                                                         CONCAT12(cStack_56,
                                                                  CONCAT11(cStack_57,local_58)))))))
    ;
    puVar5 = (undefined8 *)
             CONCAT17(cStack_49,
                      CONCAT16(cStack_4a,
                               CONCAT15(cStack_4b,
                                        CONCAT14(cStack_4c,
                                                 CONCAT13(cStack_4d,
                                                          CONCAT12(cStack_4e,
                                                                   CONCAT11(cStack_4f,cStack_50)))))
                              ));
    local_40 = lVar1;
    local_38 = puVar2;
    if ((code *)*puVar2 != (code *)0x0) {
      (*(code *)*puVar2)(lVar1);
    }
    if (local_38[1] != 0) {
      thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
    }
    *param_2 = 0;
    if (cStack_47 == '\x02') {
      (*(code *)puVar5[7])(&local_58,uVar4);
      auVar6[0] = -(local_58 == '\b');
      auVar6[1] = -(cStack_57 == -0x22);
      auVar6[2] = -(cStack_56 == -0x57);
      auVar6[3] = -(cStack_55 == '=');
      auVar6[4] = -(cStack_54 == '+');
      auVar6[5] = -(cStack_53 == -0x6d);
      auVar6[6] = -(cStack_52 == 't');
      auVar6[7] = -(cStack_51 == -0x30);
      auVar6[8] = -(cStack_50 == -3);
      auVar6[9] = -(cStack_4f == -99);
      auVar6[10] = -(cStack_4e == -0x1f);
      auVar6[0xb] = -(cStack_4d == -6);
      auVar6[0xc] = -(cStack_4c == -0x62);
      auVar6[0xd] = -(cStack_4b == '&');
      auVar6[0xe] = -(cStack_4a == '4');
      auVar6[0xf] = -(cStack_49 == '7');
      uVar3 = (ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
              (ushort)(SUB161(auVar6 >> 0x17,0) & 1) << 2 |
              (ushort)(SUB161(auVar6 >> 0x1f,0) & 1) << 3 |
              (ushort)(SUB161(auVar6 >> 0x27,0) & 1) << 4 |
              (ushort)(SUB161(auVar6 >> 0x2f,0) & 1) << 5 |
              (ushort)(SUB161(auVar6 >> 0x37,0) & 1) << 6 |
              (ushort)(SUB161(auVar6 >> 0x3f,0) & 1) << 7 |
              (ushort)(SUB161(auVar6 >> 0x47,0) & 1) << 8 |
              (ushort)(SUB161(auVar6 >> 0x4f,0) & 1) << 9 |
              (ushort)(SUB161(auVar6 >> 0x57,0) & 1) << 10 |
              (ushort)(SUB161(auVar6 >> 0x5f,0) & 1) << 0xb |
              (ushort)(SUB161(auVar6 >> 0x67,0) & 1) << 0xc |
              (ushort)(SUB161(auVar6 >> 0x6f,0) & 1) << 0xd |
              (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf;
      local_38 = (undefined8 *)(ulonglong)uVar3;
      if (uVar3 == 0xffff) {
        local_40 = uVar4;
        local_38 = puVar5;
        if ((code *)*puVar5 != (code *)0x0) {
          (*(code *)*puVar5)(uVar4);
        }
        uVar4 = 1;
        puVar5 = (undefined8 *)&DAT_18020b258;
        if (local_38[1] != 0) {
          local_38 = (undefined8 *)thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
        }
      }
      local_48 = SUB81(local_38,0);
    }
    else {
      local_58 = (char)uStack_46;
      cStack_57 = (char)((uint6)uStack_46 >> 8);
      cStack_56 = (char)((uint6)uStack_46 >> 0x10);
      cStack_55 = (char)((uint6)uStack_46 >> 0x18);
      cStack_54 = (char)((uint6)uStack_46 >> 0x20);
      cStack_53 = (char)((uint6)uStack_46 >> 0x28);
    }
    *param_1 = uVar4;
    param_1[1] = puVar5;
    *(undefined1 *)(param_1 + 2) = local_48;
    *(char *)((longlong)param_1 + 0x11) = cStack_47;
    *(uint *)((longlong)param_1 + 0x12) =
         CONCAT13(cStack_55,CONCAT12(cStack_56,CONCAT11(cStack_57,local_58)));
    *(ushort *)((longlong)param_1 + 0x16) = CONCAT11(cStack_53,cStack_54);
  }
  return param_1;
}


