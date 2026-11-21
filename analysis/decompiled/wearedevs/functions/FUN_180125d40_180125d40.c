/* FUN_180125d40 @ 180125d40 */

undefined8 * FUN_180125d40(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  longlong lVar16;
  undefined8 *puVar17;
  code *pcVar18;
  undefined1 auVar19 [16];
  undefined8 local_68;
  undefined8 uStack_60;
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
    *puVar14 = &DAT_1802425d0;
    puVar14[1] = 0;
    *param_2 = puVar14;
  }
  FUN_180027490();
  puVar15 = (undefined8 *)thunk_FUN_1801d32d0(0x60,8);
  if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x60);
  }
  uVar12 = param_3[0xb];
  puVar15[10] = param_3[10];
  puVar15[0xb] = uVar12;
  uVar12 = param_3[9];
  puVar15[8] = param_3[8];
  puVar15[9] = uVar12;
  uVar12 = *param_3;
  uVar13 = param_3[1];
  uVar1 = *(undefined4 *)(param_3 + 2);
  uVar2 = *(undefined4 *)((longlong)param_3 + 0x14);
  uVar3 = *(undefined4 *)(param_3 + 3);
  uVar4 = *(undefined4 *)((longlong)param_3 + 0x1c);
  uVar5 = *(undefined4 *)(param_3 + 4);
  uVar6 = *(undefined4 *)((longlong)param_3 + 0x24);
  uVar7 = *(undefined4 *)(param_3 + 5);
  uVar8 = *(undefined4 *)((longlong)param_3 + 0x2c);
  uVar9 = *(undefined4 *)((longlong)param_3 + 0x34);
  uVar10 = *(undefined4 *)(param_3 + 7);
  uVar11 = *(undefined4 *)((longlong)param_3 + 0x3c);
  *(undefined4 *)(puVar15 + 6) = *(undefined4 *)(param_3 + 6);
  *(undefined4 *)((longlong)puVar15 + 0x34) = uVar9;
  *(undefined4 *)(puVar15 + 7) = uVar10;
  *(undefined4 *)((longlong)puVar15 + 0x3c) = uVar11;
  *(undefined4 *)(puVar15 + 4) = uVar5;
  *(undefined4 *)((longlong)puVar15 + 0x24) = uVar6;
  *(undefined4 *)(puVar15 + 5) = uVar7;
  *(undefined4 *)((longlong)puVar15 + 0x2c) = uVar8;
  *(undefined4 *)(puVar15 + 2) = uVar1;
  *(undefined4 *)((longlong)puVar15 + 0x14) = uVar2;
  *(undefined4 *)(puVar15 + 3) = uVar3;
  *(undefined4 *)((longlong)puVar15 + 0x1c) = uVar4;
  *puVar15 = uVar12;
  puVar15[1] = uVar13;
  local_68 = 0xd79a597f29b33aca;
  uStack_60 = 0x4aef2b61a7c3b130;
  local_31 = 0;
  puVar17 = &local_68;
  lVar16 = FUN_1800a2210(puVar14,puVar17,puVar15,&PTR_FUN_1802424f8);
  if (lVar16 != 0) {
    pcVar18 = (code *)puVar17[7];
    local_31 = 0;
    local_48 = (undefined8 *)(*pcVar18)(lVar16);
    local_40 = pcVar18;
    (**(code **)(pcVar18 + 0x18))(&local_68,local_48);
    auVar19[0] = -((char)local_68 == -0x36);
    auVar19[1] = -(local_68._1_1_ == ':');
    auVar19[2] = -(local_68._2_1_ == -0x4d);
    auVar19[3] = -(local_68._3_1_ == ')');
    auVar19[4] = -(local_68._4_1_ == '\x7f');
    auVar19[5] = -(local_68._5_1_ == 'Y');
    auVar19[6] = -(local_68._6_1_ == -0x66);
    auVar19[7] = -(local_68._7_1_ == -0x29);
    auVar19[8] = -((char)uStack_60 == '0');
    auVar19[9] = -(uStack_60._1_1_ == -0x4f);
    auVar19[10] = -(uStack_60._2_1_ == -0x3d);
    auVar19[0xb] = -(uStack_60._3_1_ == -0x59);
    auVar19[0xc] = -(uStack_60._4_1_ == 'a');
    auVar19[0xd] = -(uStack_60._5_1_ == '+');
    auVar19[0xe] = -(uStack_60._6_1_ == -0x11);
    auVar19[0xf] = -(uStack_60._7_1_ == 'J');
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
      uVar12 = puVar15[0xb];
      param_1[10] = puVar15[10];
      param_1[0xb] = uVar12;
      uVar12 = puVar15[9];
      param_1[8] = puVar15[8];
      param_1[9] = uVar12;
      uVar12 = *puVar15;
      uVar13 = puVar15[1];
      uVar1 = *(undefined4 *)(puVar15 + 2);
      uVar2 = *(undefined4 *)((longlong)puVar15 + 0x14);
      uVar3 = *(undefined4 *)(puVar15 + 3);
      uVar4 = *(undefined4 *)((longlong)puVar15 + 0x1c);
      uVar5 = *(undefined4 *)(puVar15 + 4);
      uVar6 = *(undefined4 *)((longlong)puVar15 + 0x24);
      uVar7 = *(undefined4 *)(puVar15 + 5);
      uVar8 = *(undefined4 *)((longlong)puVar15 + 0x2c);
      uVar9 = *(undefined4 *)((longlong)puVar15 + 0x34);
      uVar10 = *(undefined4 *)(puVar15 + 7);
      uVar11 = *(undefined4 *)((longlong)puVar15 + 0x3c);
      *(undefined4 *)(param_1 + 6) = *(undefined4 *)(puVar15 + 6);
      *(undefined4 *)((longlong)param_1 + 0x34) = uVar9;
      *(undefined4 *)(param_1 + 7) = uVar10;
      *(undefined4 *)((longlong)param_1 + 0x3c) = uVar11;
      *(undefined4 *)(param_1 + 4) = uVar5;
      *(undefined4 *)((longlong)param_1 + 0x24) = uVar6;
      *(undefined4 *)(param_1 + 5) = uVar7;
      *(undefined4 *)((longlong)param_1 + 0x2c) = uVar8;
      *(undefined4 *)(param_1 + 2) = uVar1;
      *(undefined4 *)((longlong)param_1 + 0x14) = uVar2;
      *(undefined4 *)(param_1 + 3) = uVar3;
      *(undefined4 *)((longlong)param_1 + 0x1c) = uVar4;
      *param_1 = uVar12;
      param_1[1] = uVar13;
      thunk_FUN_1801d3330(puVar14,0x60,8);
      return param_1;
    }
  }
  *param_1 = 3;
  return param_1;
}


