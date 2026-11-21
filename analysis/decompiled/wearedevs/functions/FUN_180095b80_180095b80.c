/* FUN_180095b80 @ 180095b80 */

undefined8 * FUN_180095b80(undefined8 *param_1,longlong *param_2,ulonglong param_3)

{
  longlong lVar1;
  longlong *plVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  char cVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined8 local_98;
  char local_88;
  char cStack_87;
  char cStack_86;
  char cStack_85;
  char cStack_84;
  char cStack_83;
  char cStack_82;
  char cStack_81;
  char cStack_80;
  char cStack_7f;
  char cStack_7e;
  char cStack_7d;
  char cStack_7c;
  char cStack_7b;
  char cStack_7a;
  char cStack_79;
  byte local_78;
  char local_77;
  undefined4 local_76;
  undefined2 local_72;
  undefined4 local_68;
  undefined2 local_64;
  longlong local_60;
  undefined8 *local_58;
  longlong *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((int)*param_2 == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_18020f270);
  }
  (**(code **)(param_2[0xf] + 0x18))(&local_88,param_2[0xe]);
  if (local_77 == '\x03') {
    cVar5 = FUN_1801799c0(param_2,param_3);
    if (cVar5 != '\0') {
      *(undefined1 *)((longlong)param_1 + 0x11) = 3;
      return param_1;
    }
    uVar7 = 1;
    puVar6 = &DAT_180207968;
    cVar5 = '\x02';
  }
  else {
    if (local_77 != '\x02') {
      param_3 = (ulonglong)local_78;
      local_98 = (ulonglong)CONCAT24(local_72,local_76);
    }
    uVar7 = CONCAT17(cStack_81,
                     CONCAT16(cStack_82,
                              CONCAT15(cStack_83,
                                       CONCAT14(cStack_84,
                                                CONCAT13(cStack_85,
                                                         CONCAT12(cStack_86,
                                                                  CONCAT11(cStack_87,local_88)))))))
    ;
    puVar6 = (undefined8 *)
             CONCAT17(cStack_79,
                      CONCAT16(cStack_7a,
                               CONCAT15(cStack_7b,
                                        CONCAT14(cStack_7c,
                                                 CONCAT13(cStack_7d,
                                                          CONCAT12(cStack_7e,
                                                                   CONCAT11(cStack_7f,cStack_80)))))
                              ));
    local_64 = local_98._4_2_;
    local_68 = (undefined4)local_98;
    cVar5 = local_77;
  }
  uVar4 = local_64;
  uVar3 = local_68;
  lVar1 = *param_2;
  if (lVar1 == 2) {
    local_60 = lVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("internal error: entered unreachable codeC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\futures-util-0.3.34\\src\\future\\future\\map.rs"
                  ,0x28,&DAT_18020f220);
  }
  local_60 = param_2[0xe];
  local_58 = (undefined8 *)param_2[0xf];
  local_50 = param_2;
  if ((code *)*local_58 != (code *)0x0) {
    (*(code *)*local_58)(local_60);
  }
  if (local_58[1] != 0) {
    thunk_FUN_1801d3330(local_60,local_58[1],local_58[2]);
  }
  if ((char)*local_50 == '\0') {
    plVar2 = (longlong *)local_50[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_1801635e0();
    }
  }
  else {
    plVar2 = (longlong *)local_50[1];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_180162f80();
    }
  }
  FUN_18000c570(local_50 + 2);
  *local_50 = 2;
  if (cVar5 == '\x02') {
    local_60 = lVar1;
    (*(code *)puVar6[7])(&local_88,uVar7);
    auVar8[0] = -(local_88 == '\b');
    auVar8[1] = -(cStack_87 == -0x22);
    auVar8[2] = -(cStack_86 == -0x57);
    auVar8[3] = -(cStack_85 == '=');
    auVar8[4] = -(cStack_84 == '+');
    auVar8[5] = -(cStack_83 == -0x6d);
    auVar8[6] = -(cStack_82 == 't');
    auVar8[7] = -(cStack_81 == -0x30);
    auVar8[8] = -(cStack_80 == -3);
    auVar8[9] = -(cStack_7f == -99);
    auVar8[10] = -(cStack_7e == -0x1f);
    auVar8[0xb] = -(cStack_7d == -6);
    auVar8[0xc] = -(cStack_7c == -0x62);
    auVar8[0xd] = -(cStack_7b == '&');
    auVar8[0xe] = -(cStack_7a == '4');
    auVar8[0xf] = -(cStack_79 == '7');
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
      local_58 = puVar6;
      local_50 = (longlong *)uVar7;
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar7);
      }
      uVar7 = 1;
      if (local_58[1] != 0) {
        thunk_FUN_1801d3330(local_50,local_58[1],local_58[2]);
      }
      puVar6 = (undefined8 *)&DAT_18020b258;
    }
  }
  else {
    cStack_84 = (char)uVar4;
    cStack_83 = (char)((ushort)uVar4 >> 8);
    local_88 = (char)uVar3;
    cStack_87 = (char)((uint)uVar3 >> 8);
    cStack_86 = (char)((uint)uVar3 >> 0x10);
    cStack_85 = (char)((uint)uVar3 >> 0x18);
  }
  *param_1 = uVar7;
  param_1[1] = puVar6;
  *(char *)(param_1 + 2) = (char)param_3;
  *(char *)((longlong)param_1 + 0x11) = cVar5;
  *(uint *)((longlong)param_1 + 0x12) =
       CONCAT13(cStack_85,CONCAT12(cStack_86,CONCAT11(cStack_87,local_88)));
  *(ushort *)((longlong)param_1 + 0x16) = CONCAT11(cStack_83,cStack_84);
  return param_1;
}


