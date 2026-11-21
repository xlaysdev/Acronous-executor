/* FUN_180085ed0 @ 180085ed0 */

ulonglong FUN_180085ed0(longlong *param_1,undefined4 *param_2)

{
  char *pcVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  char *local_278;
  undefined4 uStack_270;
  undefined4 uStack_26c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
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
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  char *local_80;
  undefined8 uStack_78;
  char *local_70;
  char *local_68;
  undefined4 *local_60;
  uint local_54;
  uint local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar5 = *param_1;
  pcVar1 = (char *)(lVar5 + 0x10);
  LOCK();
  bVar11 = *(char *)(lVar5 + 0x10) == '\0';
  if (bVar11) {
    *(char *)(lVar5 + 0x10) = '\x01';
  }
  UNLOCK();
  local_60 = param_2;
  if (!bVar11) {
    local_49 = 1;
    FUN_180200390(pcVar1);
  }
  puVar7 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    cVar9 = *(char *)(lVar5 + 0x11);
  }
  else {
    local_49 = 1;
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
    cVar9 = *(char *)(lVar5 + 0x11);
  }
  if (cVar9 != '\0') {
    uStack_270._1_3_ = (undefined3)((uint)uStack_270 >> 8);
    uStack_270 = CONCAT31(uStack_270._1_3_,(char)local_54);
    local_278 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_278,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db10);
  }
  local_80 = (char *)(lVar5 + 0x1d8);
  uStack_78 = param_1[1];
  lVar6 = param_1[2];
  pcVar2 = (char *)(lVar6 + 0x10);
  LOCK();
  bVar11 = *(char *)(lVar6 + 0x10) == '\0';
  if (bVar11) {
    *(char *)(lVar6 + 0x10) = '\x01';
  }
  UNLOCK();
  local_70 = pcVar1;
  if (!bVar11) {
    local_4a = 1;
    FUN_180200390(pcVar2);
  }
  if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) == 0) {
    local_50 = 0;
    cVar9 = *(char *)(lVar6 + 0x11);
  }
  else {
    local_4a = 1;
    local_50 = FUN_180200a50();
    local_50 = local_50 ^ 1;
    cVar9 = *(char *)(lVar6 + 0x11);
  }
  if (cVar9 != '\0') {
    uStack_270._1_3_ = (undefined3)((uint)uStack_270 >> 8);
    uStack_270 = CONCAT31(uStack_270._1_3_,(char)local_50);
    local_278 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_278,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db28);
  }
  lVar3 = lVar5 + 0x1c8;
  local_a8 = *(undefined8 *)(local_60 + 0x14);
  uStack_a0 = *(undefined8 *)(local_60 + 0x16);
  local_b8 = *(undefined8 *)(local_60 + 0x10);
  uStack_b0 = *(undefined8 *)(local_60 + 0x12);
  local_f8 = *local_60;
  uStack_f4 = local_60[1];
  uStack_f0 = local_60[2];
  uStack_ec = local_60[3];
  local_e8 = local_60[4];
  uStack_e4 = local_60[5];
  uStack_e0 = local_60[6];
  uStack_dc = local_60[7];
  local_d8 = local_60[8];
  uStack_d4 = local_60[9];
  uStack_d0 = local_60[10];
  uStack_cc = local_60[0xb];
  local_c8 = local_60[0xc];
  uStack_c4 = local_60[0xd];
  uStack_c0 = local_60[0xe];
  uStack_bc = local_60[0xf];
  local_4b = 1;
  local_98 = lVar5 + 0x128;
  local_90 = lVar3;
  local_88 = lVar6 + 0x18;
  local_68 = pcVar2;
  lVar10 = FUN_180152e90(&local_80);
  iVar4 = *(int *)(lVar10 + 0x78);
  local_4c = 1;
  lVar10 = FUN_180152e90(&local_80);
  local_108 = *(undefined8 *)(local_60 + 0x14);
  uStack_100 = *(undefined8 *)(local_60 + 0x16);
  local_118 = *(undefined8 *)(local_60 + 0x10);
  uStack_110 = *(undefined8 *)(local_60 + 0x12);
  local_158 = *local_60;
  uStack_154 = local_60[1];
  uStack_150 = local_60[2];
  uStack_14c = local_60[3];
  local_148 = local_60[4];
  uStack_144 = local_60[5];
  uStack_140 = local_60[6];
  uStack_13c = local_60[7];
  local_138 = local_60[8];
  uStack_134 = local_60[9];
  uStack_130 = local_60[10];
  uStack_12c = local_60[0xb];
  local_128 = local_60[0xc];
  uStack_124 = local_60[0xd];
  uStack_120 = local_60[0xe];
  uStack_11c = local_60[0xf];
  local_4c = 0;
  FUN_180136140(&local_278,*(undefined4 *)(lVar10 + 300),&local_158);
  local_4c = 0;
  uVar8 = FUN_1800967f0(lVar5 + 0x128,&local_278,lVar6 + 0x18,&local_80,lVar5 + 0x18,lVar3);
  local_278 = local_80;
  uStack_270 = (undefined4)uStack_78;
  uStack_26c = uStack_78._4_4_;
  local_4b = 0;
  FUN_1801537a0(lVar5 + 0x18,&local_278,iVar4 != 1000000000);
  pcVar1 = local_68;
  puVar7 = PTR_DAT_1802fd600;
  if (((char)local_50 == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    local_4a = 0;
    cVar9 = FUN_180200a50();
    if (cVar9 == '\0') {
      *(undefined1 *)(lVar6 + 0x11) = 1;
    }
  }
  LOCK();
  cVar9 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    local_4a = 0;
    WakeByAddressSingle(pcVar1);
  }
  pcVar1 = local_70;
  if (((char)local_54 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) {
    local_49 = 0;
    cVar9 = FUN_180200a50();
    if (cVar9 == '\0') {
      *(undefined1 *)(lVar5 + 0x11) = 1;
    }
  }
  LOCK();
  cVar9 = *pcVar1;
  *pcVar1 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    local_49 = 0;
    WakeByAddressSingle(pcVar1);
  }
  return CONCAT71((int7)((ulonglong)lVar3 >> 8),uVar8) & 0xffffffff;
}


