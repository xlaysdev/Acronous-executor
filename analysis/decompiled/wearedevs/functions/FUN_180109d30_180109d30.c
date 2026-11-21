/* FUN_180109d30 @ 180109d30 */

undefined8 * FUN_180109d30(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

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
  undefined1 auVar18 [16];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 *local_40;
  undefined8 *local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  puVar14 = (undefined8 *)*param_2;
  if (puVar14 == (undefined8 *)0x0) {
    FUN_180027490();
    puVar14 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar14 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    puVar14[2] = 0;
    puVar14[3] = 0;
    *puVar14 = &DAT_18023bb60;
    puVar14[1] = 0;
    *param_2 = puVar14;
  }
  FUN_180027490();
  puVar15 = (undefined8 *)thunk_FUN_1801d32d0(0x40,4);
  if (puVar15 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201705(4,0x40);
  }
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
  local_58 = 0xbe27280cafd75042;
  uStack_50 = 0xc3d97a773178fe32;
  puVar17 = &local_58;
  lVar16 = FUN_1800a2210(puVar14,puVar17,puVar15,&DAT_18023ba28);
  if (lVar16 != 0) {
    local_40 = (undefined8 *)(*(code *)puVar17[7])(lVar16);
    local_38 = puVar17;
    (*(code *)puVar17[3])(&local_58,local_40);
    auVar18[0] = -((char)local_58 == 'B');
    auVar18[1] = -(local_58._1_1_ == 'P');
    auVar18[2] = -(local_58._2_1_ == -0x29);
    auVar18[3] = -(local_58._3_1_ == -0x51);
    auVar18[4] = -(local_58._4_1_ == '\f');
    auVar18[5] = -(local_58._5_1_ == '(');
    auVar18[6] = -(local_58._6_1_ == '\'');
    auVar18[7] = -(local_58._7_1_ == -0x42);
    auVar18[8] = -((char)uStack_50 == '2');
    auVar18[9] = -(uStack_50._1_1_ == -2);
    auVar18[10] = -(uStack_50._2_1_ == 'x');
    auVar18[0xb] = -(uStack_50._3_1_ == '1');
    auVar18[0xc] = -(uStack_50._4_1_ == 'w');
    auVar18[0xd] = -(uStack_50._5_1_ == 'z');
    auVar18[0xe] = -(uStack_50._6_1_ == -0x27);
    auVar18[0xf] = -(uStack_50._7_1_ == -0x3d);
    puVar14 = (undefined8 *)0x0;
    if ((ushort)((ushort)(SUB161(auVar18 >> 7,0) & 1) | (ushort)(SUB161(auVar18 >> 0xf,0) & 1) << 1
                 | (ushort)(SUB161(auVar18 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar18 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar18 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar18 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar18 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar18 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar18 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar18 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar18 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar18 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar18 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar18 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar18 >> 0x77,0) & 1) << 0xe | (ushort)(auVar18[0xf] >> 7) << 0xf
                ) == 0xffff) {
      puVar15 = local_40;
      puVar14 = local_40;
    }
    else {
      if ((code *)*local_38 != (code *)0x0) {
        (*(code *)*local_38)(local_40);
      }
      puVar15 = local_40;
      if (local_38[1] != 0) {
        thunk_FUN_1801d3330(local_40,local_38[1],local_38[2]);
      }
    }
    if (puVar14 != (undefined8 *)0x0) {
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
      thunk_FUN_1801d3330(puVar14,0x40,4);
      return param_1;
    }
  }
  *(undefined2 *)param_1 = 2;
  return param_1;
}


