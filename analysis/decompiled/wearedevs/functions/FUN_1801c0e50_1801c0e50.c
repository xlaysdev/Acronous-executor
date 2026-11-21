/* FUN_1801c0e50 @ 1801c0e50 */

void FUN_1801c0e50(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  longlong lVar5;
  longlong *plVar6;
  longlong local_178;
  longlong lStack_170;
  longlong local_168;
  longlong lStack_160;
  longlong local_158;
  longlong lStack_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  longlong local_128;
  longlong local_118;
  longlong lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  longlong local_e8;
  longlong lStack_e0;
  longlong local_d8;
  longlong lStack_d0;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  longlong local_a8;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  longlong *local_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  lVar4 = *param_1;
  lVar5 = param_1[1];
  lVar1 = *param_1;
  *param_1 = 0;
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&DAT_1802872e0);
  }
  local_78 = (longlong *)param_1[2];
  lStack_70 = param_1[3];
  local_68 = param_1[4];
  lStack_60 = param_1[5];
  local_e8 = param_1[2];
  lStack_e0 = param_1[3];
  local_d8 = param_1[4];
  lStack_d0 = param_1[5];
  local_c8 = (undefined4)param_1[6];
  uStack_c4 = *(undefined4 *)((longlong)param_1 + 0x34);
  uStack_c0 = (undefined4)param_1[7];
  uStack_bc = *(undefined4 *)((longlong)param_1 + 0x3c);
  local_b8 = (undefined4)param_1[8];
  uStack_b4 = *(undefined4 *)((longlong)param_1 + 0x44);
  uStack_b0 = (undefined4)param_1[9];
  uStack_ac = *(undefined4 *)((longlong)param_1 + 0x4c);
  local_a8 = param_1[10];
  local_50 = param_1;
  plVar6 = (longlong *)FUN_1801c4a30();
  if (*plVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: injected && !worker_thread.is_null()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\registry.rs"
                  ,0x36,&DAT_1802870d0);
  }
  local_168 = local_e8;
  lStack_160 = lStack_e0;
  local_158 = local_d8;
  lStack_150 = lStack_d0;
  local_148 = local_c8;
  uStack_144 = uStack_c4;
  uStack_140 = uStack_c0;
  uStack_13c = uStack_bc;
  local_138 = local_b8;
  uStack_134 = uStack_b4;
  uStack_130 = uStack_b0;
  uStack_12c = uStack_ac;
  local_128 = local_a8;
  local_178 = lVar4;
  lStack_170 = lVar5;
  FUN_1801bfbc0(&local_118,&local_178);
  local_48 = local_118;
  lStack_40 = lStack_110;
  local_78 = (longlong *)CONCAT44(uStack_104,local_108);
  local_98 = local_108;
  uStack_94 = uStack_104;
  uStack_90 = uStack_100;
  uStack_8c = uStack_fc;
  local_88 = local_f8;
  uStack_84 = uStack_f4;
  uStack_80 = uStack_f0;
  uStack_7c = uStack_ec;
  local_38 = 1;
  FUN_1801ba170(local_50 + 0xb);
  local_50[0xb] = local_38;
  local_50[0xc] = local_48;
  local_50[0xd] = lStack_40;
  *(undefined4 *)(local_50 + 0xe) = local_98;
  *(undefined4 *)((longlong)local_50 + 0x74) = uStack_94;
  *(undefined4 *)(local_50 + 0xf) = uStack_90;
  *(undefined4 *)((longlong)local_50 + 0x7c) = uStack_8c;
  *(undefined4 *)(local_50 + 0x10) = local_88;
  *(undefined4 *)((longlong)local_50 + 0x84) = uStack_84;
  *(undefined4 *)(local_50 + 0x11) = uStack_80;
  *(undefined4 *)((longlong)local_50 + 0x8c) = uStack_7c;
  local_48 = CONCAT71(local_48._1_7_,(char)local_50[0x15]);
  if ((char)local_50[0x15] == '\0') {
    plVar6 = *(longlong **)local_50[0x12];
  }
  else {
    puVar2 = (undefined8 *)local_50[0x12];
    plVar6 = (longlong *)*puVar2;
    LOCK();
    lVar1 = *plVar6;
    *plVar6 = *plVar6 + 1;
    UNLOCK();
    if (*plVar6 == 0 || SCARRY8(lVar1,1) != *plVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    plVar6 = (longlong *)*puVar2;
    local_78 = plVar6;
  }
  LOCK();
  lVar1 = local_50[0x13];
  local_50[0x13] = 3;
  UNLOCK();
  if (lVar1 == 2) {
    FUN_1801c3480(plVar6 + 0x10,local_50[0x14]);
  }
  if ((char)local_48 != '\0') {
    LOCK();
    *local_78 = *local_78 + -1;
    UNLOCK();
    if (*local_78 == 0) {
      FUN_1801c64c0(&local_78);
    }
  }
  return;
}


