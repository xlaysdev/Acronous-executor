/* FUN_18009f960 @ 18009f960 */

undefined8 * FUN_18009f960(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined *puVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  char local_68;
  char cStack_67;
  char cStack_66;
  char cStack_65;
  char cStack_64;
  char cStack_63;
  char cStack_62;
  char cStack_61;
  char cStack_60;
  char cStack_5f;
  char cStack_5e;
  char cStack_5d;
  char cStack_5c;
  char cStack_5b;
  char cStack_5a;
  char cStack_59;
  undefined8 *local_50;
  undefined8 *local_48;
  code *local_40;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puVar14 = (undefined8 *)*param_2;
  local_50 = param_3;
  if (puVar14 == (undefined8 *)0x0) {
    FUN_180027490();
    puVar14 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar14 == (undefined8 *)0x0) {
      local_31 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = &DAT_18020ffa0;
    puVar14[1] = 0;
    *param_2 = puVar14;
  }
  FUN_180027490();
  puVar15 = (undefined8 *)thunk_FUN_1801d32d0(0x58,8);
  if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x58);
  }
  puVar15[10] = param_3[10];
  uVar1 = param_3[9];
  puVar15[8] = param_3[8];
  puVar15[9] = uVar1;
  uVar1 = *param_3;
  uVar2 = param_3[1];
  uVar3 = *(undefined4 *)(param_3 + 2);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar5 = *(undefined4 *)(param_3 + 3);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar7 = *(undefined4 *)(param_3 + 4);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar9 = *(undefined4 *)(param_3 + 5);
  uVar10 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar12 = *(undefined4 *)(param_3 + 7);
  uVar13 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar11;
  *(undefined4 *)(puVar15 + 7) = uVar12;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar13;
  *(undefined4 *)(puVar15 + 4) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar8;
  *(undefined4 *)(puVar15 + 5) = uVar9;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar10;
  *(undefined4 *)(puVar15 + 2) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar4;
  *(undefined4 *)(puVar15 + 3) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar6;
  *puVar15 = uVar1;
  puVar15[1] = uVar2;
  local_31 = 0;
  puVar17 = &DAT_18020fc10;
  lVar16 = FUN_1800a2210(puVar14,&DAT_18020fc10,puVar15,&PTR_FUN_18020fdb8);
  if (lVar16 != 0) {
    pcVar18 = *(code **)(puVar17 + 0x38);
    local_31 = 0;
    local_48 = (undefined8 *)(*pcVar18)(lVar16);
    local_40 = pcVar18;
    (**(code **)(pcVar18 + 0x18))(&local_68,local_48);
    auVar19[0] = -(local_68 == -0x14);
    auVar19[1] = -(cStack_67 == -0x53);
    auVar19[2] = -(cStack_66 == '&');
    auVar19[3] = -(cStack_65 == '?');
    auVar19[4] = -(cStack_64 == -0x48);
    auVar19[5] = -(cStack_63 == -0x5c);
    auVar19[6] = -(cStack_62 == 'n');
    auVar19[7] = -(cStack_61 == -0x47);
    auVar19[8] = -(cStack_60 == -0x4c);
    auVar19[9] = -(cStack_5f == '^');
    auVar19[10] = -(cStack_5e == -0x2b);
    auVar19[0xb] = -(cStack_5d == -0x61);
    auVar19[0xc] = -(cStack_5c == -0x4c);
    auVar19[0xd] = -(cStack_5b == '4');
    auVar19[0xe] = -(cStack_5a == 'U');
    auVar19[0xf] = -(cStack_59 == -0x68);
    puVar14 = (undefined8 *)0x0;
    if ((ushort)((ushort)(SUB161(auVar19 >> 7,0) & 1) | (ushort)(SUB161(auVar19 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar19 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar19 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar19 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar19 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar19 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar19 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar19 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar19 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar19 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar19 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar19 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar19 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar19 >> 0x77,0) & 1) << 0xe | (ushort)(auVar19[0xf] >> 7) << 0xf
                ) == 0xffff) {
      puVar15 = local_48;
      puVar14 = local_48;
    }
    else {
      if (*(code **)local_40 != (code *)0x0) {
        (**(code **)local_40)(local_48);
      }
      puVar15 = local_48;
      if (*(longlong *)(local_40 + 8) != 0) {
        thunk_FUN_1801d3330(local_48,*(longlong *)(local_40 + 8),*(undefined8 *)(local_40 + 0x10));
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
      param_1[10] = puVar15[10];
      uVar1 = puVar15[9];
      param_1[8] = puVar15[8];
      param_1[9] = uVar1;
      uVar1 = *puVar15;
      uVar2 = puVar15[1];
      uVar3 = *(undefined4 *)(puVar15 + 2);
      uVar4 = *(undefined4 *)((longlong)puVar15 + 0x14);
      uVar5 = *(undefined4 *)(puVar15 + 3);
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      uVar7 = *(undefined4 *)(puVar15 + 4);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar9 = *(undefined4 *)(puVar15 + 5);
      uVar10 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar11 = *(undefined4 *)((longlong)puVar15 + 0x34);
      uVar12 = *(undefined4 *)(puVar15 + 7);
      uVar13 = *(undefined4 *)((longlong)puVar15 + 0x3c);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar15 + 6);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar11;
      *(undefined4 *)(param_1 + 7) = uVar12;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar13;
      *(undefined4 *)(param_1 + 4) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar8;
      *(undefined4 *)(param_1 + 5) = uVar9;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar10;
      *(undefined4 *)(param_1 + 2) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar4;
      *(undefined4 *)(param_1 + 3) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar6;
      *param_1 = uVar1;
      param_1[1] = uVar2;
      thunk_FUN_1801d3330(puVar14,0x58,8);
      return param_1;
    }
  }
  *(undefined1 *)param_1 = 3;
  return param_1;
}


