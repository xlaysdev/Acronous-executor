/* FUN_180035990 @ 180035990 */

char * FUN_180035990(char *param_1,longlong param_2,undefined1 param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined8 uVar3;
  ulonglong uVar4;
  undefined1 local_148 [4];
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0 [3];
  longlong local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  longlong local_88;
  undefined1 local_80;
  char local_78;
  char cStack_77;
  undefined2 uStack_76;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined7 uStack_68;
  undefined1 uStack_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
  undefined8 local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_88 = param_2;
  local_80 = param_3;
  FUN_180038d20(&local_78,&local_88);
  lVar1 = local_88;
  if (local_78 == '\x01') {
    local_b0 = CONCAT44(uStack_6c,uStack_70);
  }
  else {
    if (cStack_77 != '\x01') {
      *param_1 = '\x05';
      param_1[8] = '\0';
      param_1[9] = '\0';
      param_1[10] = '\0';
      param_1[0xb] = '\0';
      param_1[0xc] = '\0';
      param_1[0xd] = '\0';
      param_1[0xe] = '\0';
      param_1[0xf] = '\0';
      param_1[0x18] = '\0';
      param_1[0x19] = '\0';
      param_1[0x1a] = '\0';
      param_1[0x1b] = '\0';
      param_1[0x1c] = '\0';
      param_1[0x1d] = '\0';
      param_1[0x1e] = '\0';
      param_1[0x1f] = '\0';
      return param_1;
    }
    FUN_180037320(&local_78,local_88);
    local_b8 = CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(cStack_77,local_78)));
    local_b0 = CONCAT44(uStack_6c,uStack_70);
    if (!SBORROW8(0,local_b8)) {
      local_a8 = CONCAT17(uStack_61,uStack_68);
      local_a0 = 0;
      local_90 = 0;
      uVar2 = *(ulonglong *)(lVar1 + 0x28);
      local_58 = local_b0;
      local_50 = local_b8;
      if (uVar2 < *(ulonglong *)(lVar1 + 0x20)) {
        do {
          uVar2 = uVar2 + 1;
          uVar4 = (ulonglong)*(byte *)(*(longlong *)(lVar1 + 0x18) + -1 + uVar2);
          if (0x3a < uVar4) {
LAB_180035d30:
            local_d0[0] = 6;
            uVar3 = FUN_1801f6b20(lVar1,local_d0);
            goto LAB_180035a9e;
          }
          if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) {
            if (uVar4 != 0x3a) goto LAB_180035d30;
            *(ulonglong *)(lVar1 + 0x28) = uVar2;
            FUN_180037c50(param_1,lVar1);
            if (*param_1 == '\x06') goto LAB_180035add;
            local_128 = *(undefined4 *)param_1;
            uStack_124 = *(undefined4 *)(param_1 + 4);
            uStack_120 = *(undefined4 *)(param_1 + 8);
            uStack_11c = *(undefined4 *)(param_1 + 0xc);
            local_118 = *(undefined4 *)(param_1 + 0x10);
            uStack_114 = *(undefined4 *)(param_1 + 0x14);
            uStack_110 = *(undefined4 *)(param_1 + 0x18);
            uStack_10c = *(undefined4 *)(param_1 + 0x1c);
            FUN_180030320(&local_78,&local_a0,&local_b8,&local_128);
            FUN_1800369f0(&local_78);
            goto LAB_180035b47;
          }
          *(ulonglong *)(lVar1 + 0x28) = uVar2;
        } while (uVar2 != *(ulonglong *)(lVar1 + 0x20));
      }
      local_d0[0] = 3;
      uVar3 = FUN_1801f6b20(lVar1,local_d0);
LAB_180035a9e:
      *(undefined8 *)(param_1 + 8) = uVar3;
      *param_1 = '\x06';
LAB_180035add:
      if (local_50 != 0) {
        thunk_FUN_1801d3330(local_58,local_50,1);
      }
      goto LAB_180035cf4;
    }
  }
  *(undefined8 *)(param_1 + 8) = local_b0;
  *param_1 = '\x06';
  return param_1;
LAB_180035b47:
  FUN_180038e60(&local_b8,&local_88);
  uVar3 = local_a8;
  if (local_b8 == -0x7fffffffffffffff) goto LAB_180035cce;
  if (SBORROW8(0,local_b8)) {
LAB_180035c9b:
    uStack_74._3_1_ = (undefined1)local_a0;
    uStack_70 = (undefined4)((ulonglong)local_a0 >> 8);
    uStack_6c._0_3_ = (undefined3)((ulonglong)local_a0 >> 0x28);
    uStack_6c._3_1_ = (undefined1)uStack_98;
    *param_1 = '\x05';
    *(ulonglong *)(param_1 + 1) =
         CONCAT44(uStack_74,CONCAT22(uStack_76,CONCAT11(cStack_77,local_78)));
    *(ulonglong *)(param_1 + 9) = CONCAT44(uStack_6c,uStack_70);
    *(undefined8 *)(param_1 + 0x10) = uStack_98;
    *(undefined8 *)(param_1 + 0x18) = local_90;
    return param_1;
  }
  local_58 = local_b0;
  uVar2 = *(ulonglong *)(local_88 + 0x28);
  local_50 = local_b8;
  if (*(ulonglong *)(local_88 + 0x20) <= uVar2) {
LAB_180035c61:
    local_d0[0] = 3;
    local_b0 = FUN_1801f6b20(local_88,local_d0);
joined_r0x000180035ce2:
    if (local_50 != 0) {
      thunk_FUN_1801d3330(local_58,local_50,1);
    }
    goto LAB_180035ced;
  }
  while( true ) {
    uVar2 = uVar2 + 1;
    uVar4 = (ulonglong)*(byte *)(*(longlong *)(local_88 + 0x18) + -1 + uVar2);
    if (0x3a < uVar4) goto LAB_180035d14;
    if ((0x100002600U >> (uVar4 & 0x3f) & 1) == 0) break;
    *(ulonglong *)(local_88 + 0x28) = uVar2;
    if (uVar2 == *(ulonglong *)(local_88 + 0x20)) goto LAB_180035c61;
  }
  if (uVar4 != 0x3a) {
LAB_180035d14:
    local_d0[0] = 6;
    local_b0 = FUN_1801f6b20(local_88,local_d0);
    goto joined_r0x000180035ce2;
  }
  *(ulonglong *)(local_88 + 0x28) = uVar2;
  FUN_180037c50(&local_78);
  if (local_78 == '\x06') {
    local_b0 = CONCAT44(uStack_6c,uStack_70);
    goto joined_r0x000180035ce2;
  }
  uStack_104 = uStack_74;
  uStack_100 = uStack_70;
  uStack_fc = uStack_6c;
  if (SBORROW8(0,local_50)) goto LAB_180035c9b;
  if (local_50 == -0x7fffffffffffffff) {
    local_b0 = local_58;
    goto LAB_180035ced;
  }
  local_e8 = local_50;
  local_e0 = local_58;
  local_d8 = uVar3;
  local_f8 = (undefined4)uStack_68;
  uStack_f4 = (undefined4)(CONCAT17(uStack_61,uStack_68) >> 0x20);
  uStack_f0 = (undefined4)uStack_60;
  uStack_ec = (undefined4)(CONCAT17(uStack_59,uStack_60) >> 0x20);
  uStack_144 = uStack_74;
  uStack_140 = uStack_70;
  uStack_13c = uStack_6c;
  local_138 = local_f8;
  uStack_134 = uStack_f4;
  uStack_130 = uStack_f0;
  uStack_12c = uStack_ec;
  FUN_180030320(&local_78,&local_a0,&local_e8,local_148);
  FUN_1800369f0(&local_78);
  goto LAB_180035b47;
LAB_180035cce:
LAB_180035ced:
  *(undefined8 *)(param_1 + 8) = local_b0;
  *param_1 = '\x06';
LAB_180035cf4:
  FUN_180031170(&local_a0);
  return param_1;
}


