/* FUN_18009ff00 @ 18009ff00 */

undefined8 * FUN_18009ff00(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  longlong lVar10;
  undefined *puVar11;
  code *pcVar12;
  undefined1 auVar13 [16];
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
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 *local_60;
  undefined8 *local_58;
  code *local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  puVar8 = (undefined8 *)*param_2;
  local_60 = param_3;
  if (puVar8 == (undefined8 *)0x0) {
    FUN_180027490();
    puVar8 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar8 == (undefined8 *)0x0) {
      local_41 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    puVar8[2] = 0;
    puVar8[3] = 0;
    *puVar8 = &DAT_18020ffa0;
    puVar8[1] = 0;
    *param_2 = puVar8;
  }
  uVar6 = *param_3;
  uVar7 = param_3[1];
  uVar1 = param_3[2];
  uVar2 = param_3[3];
  FUN_180027490();
  puVar9 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
  if (puVar9 == (undefined8 *)0x0) {
    local_78 = uVar6;
    uStack_70 = uVar7;
    local_58 = (undefined8 *)uVar1;
    local_50 = (code *)uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x20);
  }
  *puVar9 = uVar6;
  puVar9[1] = uVar7;
  puVar9[2] = uVar1;
  puVar9[3] = uVar2;
  local_41 = 0;
  puVar11 = &DAT_18020fc00;
  lVar10 = FUN_1800a2210(puVar8,&DAT_18020fc00,puVar9,&PTR_LAB_18020fe00);
  if (lVar10 != 0) {
    pcVar12 = *(code **)(puVar11 + 0x38);
    local_41 = 0;
    local_58 = (undefined8 *)(*pcVar12)(lVar10);
    local_50 = pcVar12;
    (**(code **)(pcVar12 + 0x18))(&local_88,local_58);
    auVar13[0] = -(local_88 == 'e');
    auVar13[1] = -(cStack_87 == '\x1c');
    auVar13[2] = -(cStack_86 == -0x42);
    auVar13[3] = -(cStack_85 == 'A');
    auVar13[4] = -(cStack_84 == '\'');
    auVar13[5] = -(cStack_83 == '\x12');
    auVar13[6] = -(cStack_82 == -0x1d);
    auVar13[7] = -(cStack_81 == -0x2e);
    auVar13[8] = -(cStack_80 == -0x59);
    auVar13[9] = -(cStack_7f == 'b');
    auVar13[10] = -(cStack_7e == -0x4a);
    auVar13[0xb] = -(cStack_7d == -0x48);
    auVar13[0xc] = -(cStack_7c == '\x10');
    auVar13[0xd] = -(cStack_7b == -3);
    auVar13[0xe] = -(cStack_7a == -0x33);
    auVar13[0xf] = -(cStack_79 == -0x28);
    puVar8 = (undefined8 *)0x0;
    if ((ushort)((ushort)(SUB161(auVar13 >> 7,0) & 1) | (ushort)(SUB161(auVar13 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar13 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar13 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar13 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar13 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar13 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar13 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar13 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar13 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar13 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar13 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar13 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar13 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar13 >> 0x77,0) & 1) << 0xe | (ushort)(auVar13[0xf] >> 7) << 0xf
                ) == 0xffff) {
      puVar9 = local_58;
      puVar8 = local_58;
    }
    else {
      if (*(code **)local_50 != (code *)0x0) {
        (**(code **)local_50)(local_58);
      }
      puVar9 = local_58;
      if (*(longlong *)(local_50 + 8) != 0) {
        thunk_FUN_1801d3330(local_58,*(longlong *)(local_50 + 8),*(undefined8 *)(local_50 + 0x10));
      }
    }
    if (puVar8 != (undefined8 *)0x0) {
      uVar1 = *puVar9;
      uVar2 = puVar9[1];
      uVar3 = *(undefined4 *)((longlong)puVar9 + 0x14);
      uVar4 = *(undefined4 *)(puVar9 + 3);
      uVar5 = *(undefined4 *)((longlong)puVar9 + 0x1c);
      *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar9 + 2);
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar3;
      *(undefined4 *)(param_1 + 3) = uVar4;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar5;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      thunk_FUN_1801d3330(puVar8,0x20,8);
      return param_1;
    }
  }
  *param_1 = 0;
  return param_1;
}


