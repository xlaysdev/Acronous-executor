/* FUN_1800c9f80 @ 1800c9f80 */

byte FUN_1800c9f80(longlong *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  char *local_a0;
  undefined8 local_98;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  ulonglong local_58;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  ulonglong local_38;
  undefined4 *local_30;
  undefined1 local_21;
  undefined8 local_20;
  
  local_20 = 0xfffffffffffffffe;
  local_38 = *(ulonglong *)(param_2 + 4);
  local_30 = param_2;
  if (*param_1 == -0x7fffffffffffffff) {
    local_58 = param_1[1];
    if (local_58 < local_38 == local_38 < local_58) {
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      local_21 = 0;
      FUN_180068eb0(param_3,&local_78);
    }
    else {
      if ((char)((local_58 < local_38) - (local_38 < local_58)) != '\x01') {
        local_78 = *param_2;
        uStack_74 = param_2[1];
        uStack_70 = param_2[2];
        uStack_6c = param_2[3];
        local_68 = param_2[4];
        uStack_64 = param_2[5];
        uStack_60 = param_2[6];
        uStack_5c = param_2[7];
        local_21 = 0;
        FUN_180068eb0(param_3,&local_78);
        return 0;
      }
      local_78 = *param_2;
      uStack_74 = param_2[1];
      uStack_70 = param_2[2];
      uStack_6c = param_2[3];
      local_68 = param_2[4];
      uStack_64 = param_2[5];
      uStack_60 = param_2[6];
      uStack_5c = param_2[7];
      local_21 = 0;
      FUN_180068c70(param_3,&local_78);
    }
  }
  else {
    local_21 = 1;
    FUN_180119840(&local_8c);
    local_48 = local_7c;
    uStack_50 = uStack_84;
    uStack_4c = uStack_80;
    local_d8 = *local_30;
    uStack_d4 = local_30[1];
    uStack_d0 = local_30[2];
    uStack_cc = local_30[3];
    local_c8 = local_30[4];
    uStack_c4 = local_30[5];
    uStack_c0 = local_30[6];
    uStack_bc = local_30[7];
    local_b8 = local_8c;
    uStack_b4 = uStack_88;
    uStack_b0 = uStack_84;
    uStack_ac = uStack_80;
    local_a0 = "\r\n0\r\n\r\n";
    local_98 = 7;
    local_21 = 0;
    FUN_1800690e0(param_3,&local_d8);
  }
  return *(byte *)(param_1 + 3) ^ 1;
}


