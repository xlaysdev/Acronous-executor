/* FUN_18008a360 @ 18008a360 */

undefined2 * FUN_18008a360(undefined2 *param_1,undefined8 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  char *pcVar10;
  undefined1 uVar11;
  int *local_d8;
  code *local_d0;
  undefined *local_c8;
  int **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined ***local_80;
  undefined8 local_78;
  longlong local_70;
  uint local_5c;
  char *local_58;
  char *local_50;
  int local_48;
  uint local_44;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  pcVar10 = (char *)*param_2;
  LOCK();
  cVar5 = *pcVar10;
  if (cVar5 == '\0') {
    *pcVar10 = '\x01';
  }
  UNLOCK();
  if (cVar5 != '\0') {
    FUN_180200390(pcVar10);
  }
  puVar4 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_5c = 0;
    cVar5 = pcVar10[1];
  }
  else {
    local_5c = FUN_180200a50();
    local_5c = local_5c ^ 1;
    cVar5 = pcVar10[1];
  }
  if (cVar5 != '\0') {
    local_80._1_7_ = (undefined7)((ulonglong)local_80 >> 8);
    local_80 = (undefined ***)CONCAT71(local_80._1_7_,(char)local_5c);
    local_88 = pcVar10;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc78);
  }
  pcVar2 = (char *)param_2[1];
  LOCK();
  cVar5 = *pcVar2;
  if (cVar5 == '\0') {
    *pcVar2 = '\x01';
  }
  UNLOCK();
  local_58 = pcVar10;
  local_48 = param_3;
  if (cVar5 != '\0') {
    FUN_180200390(pcVar2);
  }
  if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) {
    local_44 = 0;
    cVar5 = pcVar2[1];
  }
  else {
    local_44 = FUN_180200a50();
    local_44 = local_44 ^ 1;
    cVar5 = pcVar2[1];
  }
  if (cVar5 != '\0') {
    local_80._1_7_ = (undefined7)((ulonglong)local_80 >> 8);
    local_80 = (undefined ***)CONCAT71(local_80._1_7_,(char)local_44);
    local_88 = pcVar2;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020e260);
  }
  pcVar10 = local_58 + 8;
  local_50 = pcVar2;
  if (param_3 == 0) {
    uVar9 = 0;
    uVar8 = FUN_180137930(local_58 + 0x118,0,param_4,local_58 + 0x1c8,pcVar10);
    if ((uVar8 & 1) != 0) {
      *param_1 = 0x101;
      *(undefined4 *)(param_1 + 2) = uVar9;
      *(undefined ***)(param_1 + 4) = &PTR_LAB_18020de18;
      *(undefined8 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
      cVar5 = (char)local_44;
      pcVar10 = local_50;
      goto joined_r0x00018008a544;
    }
LAB_18008a5f4:
    pcVar10 = local_50;
    *(undefined1 *)param_1 = 3;
    if (((char)local_44 != '\0') || ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0))
    goto LAB_18008a658;
    cVar5 = FUN_180200a50();
  }
  else {
    FUN_180152a20(&local_a8,local_58 + 0x1c8,&local_48);
    if (CONCAT44(uStack_a4,local_a8) == 0) {
      uVar6 = (uint)(byte)local_58[0x70];
      uVar8 = FUN_180139ee0(local_58 + 0x78,local_58[0x70],local_48);
      if ((uVar8 & 1) == 0) goto LAB_18008a5f4;
      *param_1 = 0x101;
      *(uint *)(param_1 + 2) = uVar6;
LAB_18008a624:
      *(undefined ***)(param_1 + 4) = &PTR_LAB_18020de18;
      *(undefined8 *)(param_1 + 8) = 1;
      *(undefined8 *)(param_1 + 0xc) = 0;
      *(undefined8 *)(param_1 + 0x10) = 0;
    }
    else {
      local_98 = local_a8;
      uStack_94 = uStack_a4;
      uStack_90 = uStack_a0;
      uStack_8c = uStack_9c;
      lVar7 = FUN_180152e90(&local_98);
      puVar3 = PTR_PTR_1802fc898;
      if (*(char *)(lVar7 + 0x13c) != '\0') {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          bVar1 = PTR_PTR_1802fc898[0x10];
          uVar6 = (uint)bVar1;
          if (((bVar1 - 1 < 2) ||
              ((bVar1 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fc898), (char)uVar6 != '\0')))) &&
             (cVar5 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6), cVar5 != '\0')) {
            lVar7 = *(longlong *)puVar3;
            local_70 = lVar7 + 0x30;
            local_d0 = FUN_1800901b0;
            local_c8 = &DAT_18020e278;
            local_c0 = &local_d8;
            local_b8 = &local_c8;
            local_b0 = &DAT_18020d788;
            local_88 = (char *)0x1;
            local_80 = &local_b8;
            local_78 = 1;
            local_d8 = &local_48;
            FUN_180160ae0(lVar7,&local_88);
          }
        }
        *param_1 = 0x101;
        *(undefined4 *)(param_1 + 2) = 1;
        goto LAB_18008a624;
      }
      pcVar2 = local_50 + 8;
      uVar8 = FUN_180096d50(local_58 + 0x118,param_4,pcVar2,&local_98,pcVar10,local_58 + 0x1b8);
      uVar11 = 3;
      if ((uVar8 & 1) != 0) {
        local_88 = (char *)CONCAT62(local_88._2_6_,0x100);
        local_88 = (char *)CONCAT44(local_48,(undefined4)local_88);
        local_80 = (undefined ***)CONCAT44(local_80._4_4_,param_4);
        uVar11 = 0;
      }
      local_88 = (char *)CONCAT71(local_88._1_7_,uVar11);
      FUN_18008e030(param_1,local_58 + 0x78,pcVar2,&local_98,pcVar10,&local_88);
    }
    cVar5 = (char)local_44;
    pcVar10 = local_50;
joined_r0x00018008a544:
    local_50 = pcVar10;
    if ((cVar5 != '\0') || ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0)) goto LAB_18008a658;
    cVar5 = FUN_180200a50();
  }
  if (cVar5 == '\0') {
    pcVar10[1] = '\x01';
  }
LAB_18008a658:
  LOCK();
  cVar5 = *pcVar10;
  *pcVar10 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar10);
  }
  pcVar10 = local_58;
  if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
     (cVar5 = FUN_180200a50(), cVar5 == '\0')) {
    pcVar10[1] = '\x01';
  }
  LOCK();
  cVar5 = *pcVar10;
  *pcVar10 = '\0';
  UNLOCK();
  if (cVar5 == '\x02') {
    WakeByAddressSingle(pcVar10);
  }
  return param_1;
}


