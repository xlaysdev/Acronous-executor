/* FUN_18009fc20 @ 18009fc20 */

undefined8 * FUN_18009fc20(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  longlong lVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
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
  undefined8 *local_58;
  undefined8 *local_50;
  code *local_48;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  puVar3 = (undefined8 *)*param_2;
  local_58 = param_3;
  if (puVar3 == (undefined8 *)0x0) {
    FUN_180027490();
    puVar3 = (undefined8 *)thunk_FUN_1801d32d0(0x20,8);
    if (puVar3 == (undefined8 *)0x0) {
      local_39 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x20);
    }
    puVar3[2] = 0;
    puVar3[3] = 0;
    *puVar3 = &DAT_18020ffa0;
    puVar3[1] = 0;
    *param_2 = puVar3;
  }
  uVar1 = *param_3;
  uVar2 = param_3[1];
  FUN_180027490();
  puVar4 = (undefined8 *)thunk_FUN_1801d32d0(0x18,8);
  if (puVar4 == (undefined8 *)0x0) {
    local_50 = (undefined8 *)uVar1;
    local_48 = (code *)uVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201705(8,0x18);
  }
  puVar4[2] = param_3[2];
  uVar1 = param_3[1];
  *puVar4 = *param_3;
  puVar4[1] = uVar1;
  local_39 = 0;
  puVar6 = &DAT_18020fc20;
  lVar5 = FUN_1800a2210(puVar3,&DAT_18020fc20,puVar4,&PTR_LAB_18020fcc0);
  if (lVar5 != 0) {
    pcVar7 = *(code **)(puVar6 + 0x38);
    local_39 = 0;
    local_50 = (undefined8 *)(*pcVar7)(lVar5);
    local_48 = pcVar7;
    (**(code **)(pcVar7 + 0x18))(&local_68,local_50);
    auVar8[0] = -(local_68 == '\n');
    auVar8[1] = -(cStack_67 == '\0');
    auVar8[2] = -(cStack_66 == '\x18');
    auVar8[3] = -(cStack_65 == -0x54);
    auVar8[4] = -(cStack_64 == -0x75);
    auVar8[5] = -(cStack_63 == 'Z');
    auVar8[6] = -(cStack_62 == '\x14');
    auVar8[7] = -(cStack_61 == -1);
    auVar8[8] = -(cStack_60 == '=');
    auVar8[9] = -(cStack_5f == -0x2a);
    auVar8[10] = -(cStack_5e == '\x01');
    auVar8[0xb] = -(cStack_5d == '1');
    auVar8[0xc] = -(cStack_5c == -0x46);
    auVar8[0xd] = -(cStack_5b == 'L');
    auVar8[0xe] = -(cStack_5a == -0x2f);
    auVar8[0xf] = -(cStack_59 == 'f');
    puVar3 = (undefined8 *)0x0;
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
      puVar4 = local_50;
      puVar3 = local_50;
    }
    else {
      if (*(code **)local_48 != (code *)0x0) {
        (**(code **)local_48)(local_50);
      }
      puVar4 = local_50;
      if (*(longlong *)(local_48 + 8) != 0) {
        thunk_FUN_1801d3330(local_50,*(longlong *)(local_48 + 8),*(undefined8 *)(local_48 + 0x10));
      }
    }
    if (puVar3 != (undefined8 *)0x0) {
      param_1[2] = puVar4[2];
      uVar1 = puVar4[1];
      *param_1 = *puVar4;
      param_1[1] = uVar1;
      thunk_FUN_1801d3330(puVar3,0x18,8);
      return param_1;
    }
  }
  *param_1 = 0x8000000000000001;
  return param_1;
}


