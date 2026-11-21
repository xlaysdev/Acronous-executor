/* FUN_18008a8c0 @ 18008a8c0 */

bool FUN_18008a8c0(undefined8 *param_1,undefined4 param_2)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  longlong lVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  undefined8 uVar11;
  char *pcVar12;
  char cVar13;
  char *local_b8;
  char *pcStack_b0;
  char *local_a8;
  char *pcStack_a0;
  undefined8 local_98;
  char **local_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  char *local_70;
  char *pcStack_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  char *local_50;
  char *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  pcVar12 = (char *)*param_1;
  LOCK();
  cVar13 = *pcVar12;
  if (cVar13 == '\0') {
    *pcVar12 = '\x01';
  }
  UNLOCK();
  if (cVar13 != '\0') {
    FUN_180200390(pcVar12);
  }
  puVar7 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar9 = 0;
    cVar13 = pcVar12[1];
    uVar10 = 0;
    if (cVar13 != '\0') goto LAB_18008a90f;
LAB_18008a95e:
    pcVar3 = (char *)param_1[1];
    LOCK();
    cVar8 = *pcVar3;
    if (cVar8 == '\0') {
      *pcVar3 = '\x01';
    }
    UNLOCK();
    local_58 = uVar9;
    local_48 = pcVar12;
    if (cVar8 != '\0') {
      FUN_180200390(pcVar3);
    }
    if ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) == 0) {
      local_54 = 0;
      cVar8 = pcVar3[1];
    }
    else {
      local_54 = FUN_180200a50();
      local_54 = local_54 ^ 1;
      cVar8 = pcVar3[1];
    }
    if (cVar8 != '\0') {
      uVar5 = (ulonglong)uStack_78 >> 8;
      uStack_78 = (char ***)CONCAT71((int7)uVar5,(char)local_54);
      local_80 = pcVar3;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_80,&PTR_FUN_18020e730,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020e2f0);
    }
    local_50 = pcVar3;
    if (local_48[400] == '\x03') {
      uVar11 = FUN_1801d6710(0xb,&DAT_18020e308,0x2a);
      FUN_18014f8d0(&local_80,uVar11);
      local_98 = local_60;
      local_a8 = local_70;
      pcStack_a0 = pcStack_68;
      local_b8 = local_80;
      pcStack_b0 = (char *)uStack_78;
      *(undefined8 *)(local_48 + 0x1b0) = local_60;
      *(char **)(local_48 + 0x1a0) = local_70;
      *(char **)(local_48 + 0x1a8) = pcStack_68;
      *(undefined4 *)(local_48 + 400) = (undefined4)local_80;
      *(undefined4 *)(local_48 + 0x194) = local_80._4_4_;
      *(undefined4 *)(local_48 + 0x198) = (undefined4)uStack_78;
      *(undefined4 *)(local_48 + 0x19c) = uStack_78._4_4_;
    }
    puVar6 = PTR_PTR_1802fc8a0;
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      bVar2 = PTR_PTR_1802fc8a0[0x10];
      uVar10 = (uint)bVar2;
      if (((bVar2 - 1 < 2) ||
          ((bVar2 != 0 && (uVar10 = FUN_1801faaf0(PTR_PTR_1802fc8a0), (char)uVar10 != '\0')))) &&
         (cVar8 = FUN_1801601d0(*(undefined8 *)puVar6,uVar10), cVar8 != '\0')) {
        lVar4 = *(longlong *)puVar6;
        pcStack_68 = (char *)(lVar4 + 0x30);
        local_b8 = &DAT_18020e332;
        pcStack_b0 = (char *)0x23;
        local_90 = &local_b8;
        local_88 = &DAT_18020d788;
        local_80 = (char *)0x1;
        uStack_78 = &local_90;
        local_70 = (char *)0x1;
        FUN_180160ae0(lVar4,&local_80);
      }
    }
    pcVar12 = local_48 + 8;
    pcVar3 = local_48 + 0x78;
    pcStack_68 = local_50 + 8;
    pcVar1 = local_48 + 0x1c8;
    local_70 = local_48 + 0x118;
    local_80 = pcVar12;
    uStack_78 = (char ***)pcVar3;
    FUN_1800ed090(pcVar1,&local_80);
    FUN_180139e90(pcVar3,param_2,pcVar1,pcVar12);
    pcVar12 = local_50;
    if ((((char)local_54 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
      pcVar12[1] = '\x01';
    }
    LOCK();
    cVar8 = *pcVar12;
    *pcVar12 = '\0';
    UNLOCK();
    if (cVar8 == '\x02') {
      WakeByAddressSingle(pcVar12);
    }
    if ((((char)local_58 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
      local_48[1] = '\x01';
    }
    LOCK();
    cVar8 = *local_48;
    *local_48 = '\0';
    UNLOCK();
    pcVar12 = local_48;
    if (cVar8 != '\x02') goto LAB_18008aaa3;
  }
  else {
    uVar9 = FUN_180200a50();
    uVar9 = uVar9 ^ 1;
    cVar13 = pcVar12[1];
    uVar10 = uVar9;
    if (cVar13 == '\0') goto LAB_18008a95e;
LAB_18008a90f:
    if ((((char)uVar10 == '\0') && ((*(ulonglong *)puVar7 & 0x7fffffffffffffff) != 0)) &&
       (cVar8 = FUN_180200a50(), cVar8 == '\0')) {
      pcVar12[1] = '\x01';
    }
    LOCK();
    cVar8 = *pcVar12;
    *pcVar12 = '\0';
    UNLOCK();
    if (cVar8 != '\x02') goto LAB_18008aaa3;
  }
  WakeByAddressSingle(pcVar12);
LAB_18008aaa3:
  return cVar13 != '\0';
}


