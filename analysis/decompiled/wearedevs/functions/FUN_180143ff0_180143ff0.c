/* FUN_180143ff0 @ 180143ff0 */

void FUN_180143ff0(char *param_1,longlong param_2,longlong param_3,int param_4)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined1 local_1a8 [32];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  longlong local_150;
  char local_148;
  undefined4 local_147;
  undefined4 uStack_143;
  undefined4 uStack_13f;
  undefined4 uStack_13b;
  longlong local_130;
  char local_128;
  undefined4 local_127;
  undefined4 uStack_123;
  undefined4 uStack_11f;
  undefined4 uStack_11b;
  undefined1 local_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined1 uStack_f0;
  undefined4 uStack_ef;
  undefined4 uStack_eb;
  undefined4 uStack_e7;
  undefined4 uStack_e3;
  undefined3 uStack_df;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  byte local_d0;
  undefined8 local_c8;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong local_90;
  char local_88;
  char cStack_87;
  undefined2 uStack_86;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  byte local_48;
  undefined1 local_3b;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  FUN_180143720(&local_88,param_3,param_4 * 2 | 4);
  if (local_88 != '\x01') {
    if (CONCAT44(uStack_7c,uStack_80) != 0) {
      FUN_180143b70(&local_88,param_2 + 0x10);
      if ((ulonglong)local_48 != 8) {
        uStack_ef = CONCAT13((undefined1)uStack_64,uStack_68._1_3_);
        uStack_eb = CONCAT13((undefined1)uStack_60,uStack_64._1_3_);
        uStack_e7 = CONCAT13((undefined1)uStack_5c,uStack_60._1_3_);
        uStack_e3 = CONCAT13((undefined1)uStack_58,uStack_5c._1_3_);
        uStack_df = (undefined3)((uint)uStack_58 >> 8);
        uStack_dc = uStack_54;
        uStack_d8 = uStack_50;
        uStack_d4 = uStack_4c;
        uStack_f0 = (undefined1)uStack_68;
        local_d0 = local_48;
        uVar1 = *(undefined8 *)(param_3 + 8);
        FUN_180144530(&local_88,param_2,param_3);
        if (local_88 != '\x01') {
          local_188 = uStack_80;
          uStack_184 = uStack_7c;
          uStack_180 = uStack_78;
          uStack_17c = uStack_74;
          local_178 = uStack_70;
          uStack_174 = uStack_6c;
          uStack_170 = uStack_68;
          uStack_16c = uStack_64;
          local_168 = uStack_60;
          uStack_164 = uStack_5c;
          uStack_160 = uStack_58;
          uStack_15c = uStack_54;
          *(undefined8 *)(param_3 + 8) = uVar1;
          FUN_180143820(&local_130,&local_188,param_3);
          cStack_87 = local_128;
          if (local_130 != 0) {
            local_147 = local_127;
            uStack_143 = uStack_123;
            uStack_13f = uStack_11f;
            uStack_13b = uStack_11b;
            local_150 = local_130;
            local_148 = local_128;
            lVar4 = 0;
            if (1 < local_48) {
              lVar4 = (ulonglong)local_48 - 1;
            }
            FUN_180147040(param_1,lVar4,local_110,&local_150);
            goto LAB_180144250;
          }
        }
        *param_1 = cStack_87;
        param_1[0x40] = '\b';
LAB_180144250:
        FUN_180146060(local_110);
        return;
      }
      goto LAB_180144079;
    }
    uVar1 = *(undefined8 *)(param_3 + 8);
    FUN_180144530(&local_88,param_2,param_3);
    if (local_88 == '\0') {
      local_90 = CONCAT44(uStack_7c,uStack_80);
      local_a0 = CONCAT44(uStack_74,uStack_78);
      local_a8 = CONCAT44(uStack_6c,uStack_70);
      local_98 = CONCAT44(uStack_64,uStack_68);
      local_188 = uStack_60;
      uStack_184 = uStack_5c;
      uStack_180 = uStack_58;
      uStack_17c = uStack_54;
      local_39 = 1;
      FUN_180144530(&local_88,param_2,param_3);
      uVar3 = uStack_5c;
      uVar2 = uStack_60;
      if (local_88 != '\x01') {
        local_c8 = CONCAT44(uStack_7c,uStack_80);
        *(undefined8 *)(param_3 + 8) = uVar1;
        local_88 = (char)local_90;
        cStack_87 = (char)((ulonglong)local_90 >> 8);
        uStack_86 = (undefined2)((ulonglong)local_90 >> 0x10);
        uStack_84 = (undefined4)((ulonglong)local_90 >> 0x20);
        uStack_80 = (undefined4)local_a0;
        uStack_7c = (undefined4)((ulonglong)local_a0 >> 0x20);
        uStack_78 = (undefined4)local_a8;
        uStack_74 = (undefined4)((ulonglong)local_a8 >> 0x20);
        uStack_70 = (undefined4)local_98;
        uStack_6c = (undefined4)((ulonglong)local_98 >> 0x20);
        uStack_68 = local_188;
        uStack_64 = uStack_184;
        uStack_60 = uStack_180;
        uStack_5c = uStack_17c;
        local_3a = 1;
        FUN_180143820(local_110,&local_88,param_3);
        local_88 = (char)local_c8;
        cStack_87 = (char)((ulonglong)local_c8 >> 8);
        uStack_86 = (undefined2)((ulonglong)local_c8 >> 0x10);
        uStack_84 = (undefined4)((ulonglong)local_c8 >> 0x20);
        uStack_68 = uVar2;
        uStack_64 = uVar3;
        uStack_60 = uStack_58;
        uStack_5c = uStack_54;
        local_3b = 1;
        FUN_180143820(local_1a8,&local_88,param_3);
        uStack_78 = uStack_100;
        uStack_74 = uStack_fc;
        uStack_70 = uStack_f8;
        uStack_6c = uStack_f4;
        local_88 = local_110[0];
        cStack_87 = local_110[1];
        uStack_86 = local_110._2_2_;
        uStack_84 = uStack_10c;
        uStack_80 = uStack_108;
        uStack_7c = uStack_104;
        local_3b = 0;
        FUN_180147a00(param_1,&local_88,local_1a8);
        return;
      }
      *param_1 = cStack_87;
      param_1[0x40] = '\b';
      if (local_90 == 0) {
        return;
      }
      (**(code **)(local_90 + 0x20))(local_98,local_a0,local_a8);
      return;
    }
  }
  local_88 = cStack_87;
LAB_180144079:
  *param_1 = local_88;
  param_1[0x40] = '\b';
  return;
}


