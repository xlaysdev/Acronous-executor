/* FUN_18014c0f0 @ 18014c0f0 */

longlong * FUN_18014c0f0(longlong *param_1,undefined8 param_2,byte param_3)

{
  ulonglong uVar1;
  uint uVar2;
  longlong lVar3;
  undefined1 uVar4;
  longlong local_128;
  char cStack_120;
  byte bStack_11f;
  undefined2 uStack_11e;
  uint uStack_11c;
  uint uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  longlong local_100;
  longlong local_f8;
  longlong lStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  longlong local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  FUN_1801395d0(&local_128);
  lVar3 = 4;
  if (local_128 != 4) {
    if ((int)local_128 != 3) {
      local_58 = local_c8;
      uStack_54 = uStack_c4;
      uStack_50 = uStack_c0;
      uStack_4c = uStack_bc;
      local_68 = local_d8;
      uStack_64 = uStack_d4;
      uStack_60 = uStack_d0;
      uStack_5c = uStack_cc;
      local_78 = local_e8;
      lStack_70 = lStack_e0;
      local_88 = local_f8;
      lStack_80 = lStack_f0;
      uStack_b0 = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,cStack_120)));
      local_a8 = CONCAT44(uStack_114,uStack_118);
      uStack_a0 = local_110;
      uStack_9c = uStack_10c;
      uStack_98 = uStack_108;
      uStack_94 = uStack_104;
      lStack_90 = local_100;
      local_b8 = local_128;
      FUN_18013c010(&local_128,param_2);
      param_1[0xe] = local_128;
      param_1[0xf] = CONCAT44(uStack_11c,CONCAT22(uStack_11e,CONCAT11(bStack_11f,cStack_120)));
      param_1[0xc] = CONCAT44(uStack_54,local_58);
      param_1[0xd] = CONCAT44(uStack_4c,uStack_50);
      param_1[10] = CONCAT44(uStack_64,local_68);
      param_1[0xb] = CONCAT44(uStack_5c,uStack_60);
      param_1[8] = local_78;
      param_1[9] = lStack_70;
      param_1[6] = local_88;
      param_1[7] = lStack_80;
      param_1[4] = CONCAT44(uStack_94,uStack_98);
      param_1[5] = lStack_90;
      param_1[2] = local_a8;
      param_1[3] = CONCAT44(uStack_9c,uStack_a0);
      *param_1 = local_b8;
      param_1[1] = uStack_b0;
      return param_1;
    }
    if (cStack_120 == '\0') {
      uVar1 = (ulonglong)uStack_118;
      uVar4 = 0;
    }
    else if (cStack_120 == '\x01') {
      uVar1 = CONCAT44(uStack_114,uStack_118);
      local_b8 = CONCAT44(uStack_10c,local_110);
      uStack_b0 = CONCAT44(uStack_104,uStack_108);
      local_a8 = local_100;
      uVar4 = 1;
    }
    else {
      uVar1 = (ulonglong)bStack_11f;
      uVar2 = (uint)bStack_11f;
      uStack_11c = (uint)bStack_11f;
      bStack_11f = param_3;
      if (SBORROW8(0,CONCAT44(uStack_114,uStack_118))) {
        uVar1 = uVar1 << 0x20 | 3;
      }
      else {
        uStack_b0 = CONCAT44(uStack_10c,local_110);
        local_a8 = CONCAT44(uStack_104,uStack_108);
        uStack_11c = uVar2;
        local_b8 = CONCAT44(uStack_114,uStack_118);
        uVar1 = FUN_18018c8e0(uVar1,&local_b8);
      }
      uVar4 = 4;
    }
    *(undefined1 *)(param_1 + 1) = uVar4;
    *(byte *)((longlong)param_1 + 9) = bStack_11f;
    *(uint *)((longlong)param_1 + 0xc) = uStack_11c;
    param_1[2] = uVar1;
    param_1[3] = local_b8;
    param_1[4] = uStack_b0;
    param_1[5] = local_a8;
    lVar3 = 3;
  }
  *param_1 = lVar3;
  return param_1;
}


