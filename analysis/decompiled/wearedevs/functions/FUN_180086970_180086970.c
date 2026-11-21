/* FUN_180086970 @ 180086970 */

ulonglong FUN_180086970(longlong *param_1,undefined8 *param_2,undefined1 param_3)

{
  char *pcVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  longlong lVar5;
  longlong lVar6;
  undefined *puVar7;
  undefined1 uVar8;
  char cVar9;
  longlong lVar10;
  bool bVar11;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  int local_d0;
  undefined1 local_cc;
  undefined1 local_ca;
  char *local_c8;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined1 *local_a0;
  longlong local_98;
  longlong local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  char *local_68;
  undefined8 *local_60;
  uint local_58;
  uint local_54;
  undefined1 local_4d;
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
  local_4d = param_3;
  if (!bVar11) {
    local_49 = 1;
    FUN_180200390(pcVar1);
  }
  puVar7 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_58 = 0;
    cVar9 = *(char *)(lVar5 + 0x11);
  }
  else {
    local_49 = 1;
    local_58 = FUN_180200a50();
    local_58 = local_58 ^ 1;
    cVar9 = *(char *)(lVar5 + 0x11);
  }
  if (cVar9 != '\0') {
    uStack_c0._1_3_ = (undefined3)((uint)uStack_c0 >> 8);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,(char)local_58);
    local_c8 = pcVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_c8,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020db88);
  }
  local_80 = lVar5 + 0x1d8;
  uStack_78 = param_1[1];
  lVar6 = param_1[2];
  pcVar3 = (char *)(lVar6 + 0x10);
  LOCK();
  bVar11 = *(char *)(lVar6 + 0x10) == '\0';
  if (bVar11) {
    *(char *)(lVar6 + 0x10) = '\x01';
  }
  UNLOCK();
  local_70 = pcVar1;
  if (!bVar11) {
    local_4a = 1;
    FUN_180200390(pcVar3);
  }
  if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    cVar9 = *(char *)(lVar6 + 0x11);
  }
  else {
    local_4a = 1;
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
    cVar9 = *(char *)(lVar6 + 0x11);
  }
  if (cVar9 != '\0') {
    uStack_c0._1_3_ = (undefined3)((uint)uStack_c0 >> 8);
    uStack_c0 = CONCAT31(uStack_c0._1_3_,(char)local_54);
    local_c8 = pcVar3;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_c8,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dba0);
  }
  local_98 = lVar5 + 0x128;
  lVar2 = lVar5 + 0x1c8;
  local_a8 = local_60[4];
  local_c8 = (char *)*local_60;
  uStack_c0 = *(undefined4 *)(local_60 + 1);
  uStack_bc = *(undefined4 *)((longlong)local_60 + 0xc);
  local_b8 = *(undefined4 *)(local_60 + 2);
  uStack_b4 = *(undefined4 *)((longlong)local_60 + 0x14);
  uStack_b0 = *(undefined4 *)(local_60 + 3);
  uStack_ac = *(undefined4 *)((longlong)local_60 + 0x1c);
  local_a0 = &local_4d;
  local_4b = 1;
  local_90 = lVar2;
  local_88 = lVar6 + 0x18;
  local_68 = pcVar3;
  lVar10 = FUN_180152e90(&local_80);
  iVar4 = *(int *)(lVar10 + 0x78);
  local_4c = 1;
  lVar10 = FUN_180152e90(&local_80);
  local_d0 = *(int *)(lVar10 + 300);
  if (local_d0 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0("assertion failed: !stream_id.is_zero()",0x26,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020ecd8);
  }
  local_f8 = *(undefined4 *)local_60;
  uStack_f4 = *(undefined4 *)((longlong)local_60 + 4);
  uStack_f0 = *(undefined4 *)(local_60 + 1);
  uStack_ec = *(undefined4 *)((longlong)local_60 + 0xc);
  local_e8 = *(undefined4 *)(local_60 + 2);
  uStack_e4 = *(undefined4 *)((longlong)local_60 + 0x14);
  uStack_e0 = *(undefined4 *)(local_60 + 3);
  uStack_dc = *(undefined4 *)((longlong)local_60 + 0x1c);
  local_d8 = local_60[4];
  local_cc = 0;
  local_ca = local_4d;
  local_4c = 0;
  uVar8 = FUN_1800651a0(lVar5 + 0x130,&local_f8,lVar6 + 0x18,&local_80,lVar5 + 0x18,lVar2);
  local_f8 = (undefined4)local_80;
  uStack_f4 = local_80._4_4_;
  uStack_f0 = (undefined4)uStack_78;
  uStack_ec = uStack_78._4_4_;
  local_4b = 0;
  FUN_1801537a0(lVar5 + 0x18,&local_f8,iVar4 != 1000000000);
  pcVar1 = local_68;
  if (((char)local_54 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) {
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
  if (((char)local_58 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) {
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
  return CONCAT71((int7)((ulonglong)lVar2 >> 8),uVar8) & 0xffffffff;
}


