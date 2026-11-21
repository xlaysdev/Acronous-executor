/* FUN_18009f6f0 @ 18009f6f0 */

undefined8 FUN_18009f6f0(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  longlong lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auVar6 [16];
  undefined8 local_58;
  char cStack_50;
  char cStack_4f;
  char cStack_4e;
  char cStack_4d;
  char cStack_4c;
  char cStack_4b;
  char cStack_4a;
  char cStack_49;
  undefined8 local_48;
  code *local_40;
  longlong local_38;
  undefined1 local_29;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar1 = (undefined8 *)*param_1;
  local_48 = param_2;
  if (puVar1 == (undefined8 *)0x0) {
    FUN_180027490();
    puVar1 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar1 == (undefined8 *)0x0) {
      local_29 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    puVar1[2] = 0;
    puVar1[3] = 0;
    *puVar1 = &DAT_18020ffa0;
    puVar1[1] = 0;
    *param_1 = puVar1;
  }
  local_58 = param_2;
  FUN_180027490();
  puVar2 = (undefined8 *)thunk_FUN_1801d32d0(8,8);
  if (puVar2 == (undefined8 *)0x0) {
    local_38 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,8);
  }
  *puVar2 = param_2;
  local_29 = 0;
  puVar4 = &DAT_18020fc30;
  lVar3 = FUN_1800a2210(puVar1,&DAT_18020fc30,puVar2,&PTR_LAB_18020fd08);
  if (lVar3 != 0) {
    pcVar5 = *(code **)(puVar4 + 0x38);
    local_29 = 0;
    local_38 = (*pcVar5)(lVar3);
    local_40 = pcVar5;
    (**(code **)(pcVar5 + 0x18))(&local_58,local_38);
    auVar6[0] = -((char)local_58 == '(');
    auVar6[1] = -(local_58._1_1_ == -0x14);
    auVar6[2] = -(local_58._2_1_ == 'a');
    auVar6[3] = -(local_58._3_1_ == -0x4a);
    auVar6[4] = -(local_58._4_1_ == '1');
    auVar6[5] = -(local_58._5_1_ == 'm');
    auVar6[6] = -(local_58._6_1_ == -0x2a);
    auVar6[7] = -(local_58._7_1_ == '#');
    auVar6[8] = -(cStack_50 == 'Y');
    auVar6[9] = -(cStack_4f == -0x67);
    auVar6[10] = -(cStack_4e == -0xf);
    auVar6[0xb] = -(cStack_4d == -0x4b);
    auVar6[0xc] = -(cStack_4c == '\"');
    auVar6[0xd] = -(cStack_4b == -0x4d);
    auVar6[0xe] = -(cStack_4a == -0x2d);
    auVar6[0xf] = -(cStack_49 == '3');
    lVar3 = local_38;
    if ((ushort)((ushort)(SUB161(auVar6 >> 7,0) & 1) | (ushort)(SUB161(auVar6 >> 0xf,0) & 1) << 1 |
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
                 (ushort)(SUB161(auVar6 >> 0x77,0) & 1) << 0xe | (ushort)(auVar6[0xf] >> 7) << 0xf)
        != 0xffff) {
      if (*(code **)local_40 != (code *)0x0) {
        (**(code **)local_40)(local_38);
      }
      lVar3 = 0;
      if (*(longlong *)(local_40 + 8) != 0) {
        thunk_FUN_1801d3330(local_38,*(longlong *)(local_40 + 8),*(undefined8 *)(local_40 + 0x10));
      }
    }
    if (lVar3 != 0) {
      thunk_FUN_1801d3330(lVar3,8,8);
      return 1;
    }
  }
  return 0;
}


