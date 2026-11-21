/* FUN_1801408d0 @ 1801408d0 */

undefined2 * FUN_1801408d0(undefined2 *param_1,longlong param_2)

{
  undefined1 auVar1 [16];
  char local_48;
  char cStack_47;
  char cStack_46;
  char cStack_45;
  char cStack_44;
  char cStack_43;
  char cStack_42;
  char cStack_41;
  char cStack_40;
  char cStack_3f;
  char cStack_3e;
  char cStack_3d;
  char cStack_3c;
  char cStack_3b;
  char cStack_3a;
  char cStack_39;
  longlong local_38;
  undefined8 local_30;
  undefined8 *local_28;
  undefined1 local_19;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  local_28 = (undefined8 *)param_2;
  if ((((uint)param_2 & 3) == 1) && (*(char *)(param_2 + 0xf) == '\x15')) {
    local_19 = 1;
    (**(code **)(*(longlong *)(param_2 + 7) + 0x38))(&local_48,*(undefined8 *)(param_2 + -1));
    auVar1[0] = -(local_48 == '\v');
    auVar1[1] = -(cStack_47 == '$');
    auVar1[2] = -(cStack_46 == -0x38);
    auVar1[3] = -(cStack_45 == -0x23);
    auVar1[4] = -(cStack_44 == 'g');
    auVar1[5] = -(cStack_43 == -0x69);
    auVar1[6] = -(cStack_42 == -3);
    auVar1[7] = -(cStack_41 == -0x41);
    auVar1[8] = -(cStack_40 == -0x61);
    auVar1[9] = -(cStack_3f == '-');
    auVar1[10] = -(cStack_3e == -5);
    auVar1[0xb] = -(cStack_3d == -0xd);
    auVar1[0xc] = -(cStack_3c == -0x4d);
    auVar1[0xd] = -(cStack_3b == 'a');
    auVar1[0xe] = -(cStack_3a == -0x30);
    auVar1[0xf] = -(cStack_39 == -0x66);
    if ((ushort)((ushort)(SUB161(auVar1 >> 7,0) & 1) | (ushort)(SUB161(auVar1 >> 0xf,0) & 1) << 1 |
                 (ushort)(SUB161(auVar1 >> 0x17,0) & 1) << 2 |
                 (ushort)(SUB161(auVar1 >> 0x1f,0) & 1) << 3 |
                 (ushort)(SUB161(auVar1 >> 0x27,0) & 1) << 4 |
                 (ushort)(SUB161(auVar1 >> 0x2f,0) & 1) << 5 |
                 (ushort)(SUB161(auVar1 >> 0x37,0) & 1) << 6 |
                 (ushort)(SUB161(auVar1 >> 0x3f,0) & 1) << 7 |
                 (ushort)(SUB161(auVar1 >> 0x47,0) & 1) << 8 |
                 (ushort)(SUB161(auVar1 >> 0x4f,0) & 1) << 9 |
                 (ushort)(SUB161(auVar1 >> 0x57,0) & 1) << 10 |
                 (ushort)(SUB161(auVar1 >> 0x5f,0) & 1) << 0xb |
                 (ushort)(SUB161(auVar1 >> 0x67,0) & 1) << 0xc |
                 (ushort)(SUB161(auVar1 >> 0x6f,0) & 1) << 0xd |
                 (ushort)(SUB161(auVar1 >> 0x77,0) & 1) << 0xe | (ushort)(auVar1[0xf] >> 7) << 0xf)
        == 0xffff) {
      local_38 = (longlong)local_28 + -1;
      *(undefined ***)(param_1 + 4) = &PTR_LAB_180251078;
      *(undefined8 *)(param_1 + 8) = 1;
      *(undefined1 (*) [16])(param_1 + 0xc) = (undefined1  [16])0x0;
      *(undefined4 *)(param_1 + 2) = 6;
      *param_1 = 0x101;
      local_30 = *(undefined8 *)((longlong)local_28 + -1);
      local_28 = *(undefined8 **)((longlong)local_28 + 7);
      if ((code *)*local_28 != (code *)0x0) {
        (*(code *)*local_28)(local_30);
      }
      if (local_28[1] != 0) {
        thunk_FUN_1801d3330(local_30,local_28[1],local_28[2]);
      }
      thunk_FUN_1801d3330(local_38,0x18,8);
      return param_1;
    }
  }
  local_19 = 0;
  FUN_18014f8d0(param_1);
  return param_1;
}


