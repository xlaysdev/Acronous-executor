/* FUN_1801c09a0 @ 1801c09a0 */

void FUN_1801c09a0(longlong *param_1)

{
  char *pcVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  longlong *plVar9;
  bool bVar10;
  longlong local_198;
  longlong lStack_190;
  longlong local_188;
  longlong lStack_180;
  longlong local_178;
  longlong lStack_170;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  longlong local_148;
  longlong local_138;
  longlong lStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  longlong lStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  longlong local_c8;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *local_98;
  undefined8 uStack_90;
  longlong local_88;
  longlong lStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong *local_60;
  longlong local_58;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = param_1[1];
  lVar4 = param_1[2];
  lVar2 = param_1[1];
  param_1[1] = 0;
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ba0(&DAT_1802872e0);
  }
  local_98 = (char *)param_1[3];
  uStack_90 = param_1[4];
  local_88 = param_1[5];
  lStack_80 = param_1[6];
  local_108 = param_1[3];
  lStack_100 = param_1[4];
  local_f8 = param_1[5];
  lStack_f0 = param_1[6];
  local_e8 = (undefined4)param_1[7];
  uStack_e4 = *(undefined4 *)((longlong)param_1 + 0x3c);
  uStack_e0 = (undefined4)param_1[8];
  uStack_dc = *(undefined4 *)((longlong)param_1 + 0x44);
  local_d8 = (undefined4)param_1[9];
  uStack_d4 = *(undefined4 *)((longlong)param_1 + 0x4c);
  uStack_d0 = (undefined4)param_1[10];
  uStack_cc = *(undefined4 *)((longlong)param_1 + 0x54);
  local_c8 = param_1[0xb];
  local_60 = param_1;
  plVar9 = (longlong *)FUN_1801c4a30();
  if (*plVar9 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: injected && !worker_thread.is_null()C:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\rayon-core-1.13.0\\src\\registry.rs"
                  ,0x36,&DAT_1802870b8);
  }
  local_188 = local_108;
  lStack_180 = lStack_100;
  local_178 = local_f8;
  lStack_170 = lStack_f0;
  local_168 = local_e8;
  uStack_164 = uStack_e4;
  uStack_160 = uStack_e0;
  uStack_15c = uStack_dc;
  local_158 = local_d8;
  uStack_154 = uStack_d4;
  uStack_150 = uStack_d0;
  uStack_14c = uStack_cc;
  local_148 = local_c8;
  local_198 = lVar3;
  lStack_190 = lVar4;
  FUN_1801bfbc0(&local_138,&local_198);
  local_78 = local_138;
  lStack_70 = lStack_130;
  uStack_90 = CONCAT44(uStack_11c,uStack_120);
  local_b8 = local_128;
  uStack_b4 = uStack_124;
  uStack_b0 = uStack_120;
  uStack_ac = uStack_11c;
  local_a8 = local_118;
  uStack_a4 = uStack_114;
  uStack_a0 = uStack_110;
  uStack_9c = uStack_10c;
  local_58 = 1;
  FUN_1801ba170(local_60 + 0xc);
  local_60[0xc] = local_58;
  local_60[0xd] = local_78;
  local_60[0xe] = lStack_70;
  *(undefined4 *)(local_60 + 0xf) = local_b8;
  *(undefined4 *)((longlong)local_60 + 0x7c) = uStack_b4;
  *(undefined4 *)(local_60 + 0x10) = uStack_b0;
  *(undefined4 *)((longlong)local_60 + 0x84) = uStack_ac;
  *(undefined4 *)(local_60 + 0x11) = local_a8;
  *(undefined4 *)((longlong)local_60 + 0x8c) = uStack_a4;
  *(undefined4 *)(local_60 + 0x12) = uStack_a0;
  *(undefined4 *)((longlong)local_60 + 0x94) = uStack_9c;
  lVar2 = *local_60;
  pcVar1 = (char *)(lVar2 + 4);
  LOCK();
  bVar10 = *(char *)(lVar2 + 4) == '\0';
  if (bVar10) {
    *(char *)(lVar2 + 4) = '\x01';
  }
  UNLOCK();
  if (!bVar10) {
    FUN_180200390(pcVar1);
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar8 = 0;
    cVar7 = *(char *)(lVar2 + 5);
  }
  else {
    uVar8 = FUN_180200a50();
    uVar8 = uVar8 ^ 1;
    cVar7 = *(char *)(lVar2 + 5);
  }
  if (cVar7 != '\0') {
    uVar5 = (ulonglong)uStack_90 >> 8;
    uStack_90 = CONCAT71((int7)uVar5,(char)uVar8);
    local_98 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_98,&PTR_FUN_180287218,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802872c8);
  }
  uVar5 = (ulonglong)local_78 >> 0x20;
  local_78 = CONCAT44((int)uVar5,uVar8);
  *(undefined1 *)(lVar2 + 6) = 1;
  local_60 = (longlong *)pcVar1;
  FUN_1801df5b0(lVar2);
  plVar9 = local_60;
  if ((((char)local_78 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    *(undefined1 *)(lVar2 + 5) = 1;
  }
  LOCK();
  lVar2 = *plVar9;
  *(char *)plVar9 = '\0';
  UNLOCK();
  if ((char)lVar2 == '\x02') {
    WakeByAddressSingle(plVar9);
  }
  return;
}


