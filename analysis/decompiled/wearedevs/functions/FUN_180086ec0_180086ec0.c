/* FUN_180086ec0 @ 180086ec0 */

/* WARNING: Type propagation algorithm not settling */

undefined4 * FUN_180086ec0(undefined4 *param_1,undefined8 *param_2,uint param_3,undefined4 param_4)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  undefined1 uVar16;
  char *pcVar17;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 *******local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 ******local_b8;
  undefined8 *local_b0;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  char *local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined4 *local_78;
  code *pcStack_70;
  undefined8 local_68;
  uint local_60;
  uint local_5c;
  char *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar17 = (char *)*param_2;
  LOCK();
  cVar9 = *pcVar17;
  if (cVar9 == '\0') {
    *pcVar17 = '\x01';
  }
  UNLOCK();
  if (cVar9 != '\0') {
    FUN_180200390(pcVar17);
  }
  puVar8 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    cVar9 = pcVar17[1];
    plVar5 = (longlong *)PTR_PTR_1802fc840;
    plVar6 = (longlong *)PTR_PTR_1802fc848;
    pcVar1 = local_58;
    uVar12 = local_4c;
    local_4c = 0;
  }
  else {
    uVar11 = FUN_180200a50();
    cVar9 = pcVar17[1];
    plVar5 = (longlong *)PTR_PTR_1802fc840;
    plVar6 = (longlong *)PTR_PTR_1802fc848;
    pcVar1 = local_58;
    uVar12 = local_4c;
    local_4c = uVar11 ^ 1;
  }
  PTR_PTR_1802fc840 = (undefined *)plVar5;
  PTR_PTR_1802fc848 = (undefined *)plVar6;
  if (cVar9 != '\0') {
    uStack_80._1_7_ = (undefined7)((ulonglong)uStack_80 >> 8);
    uStack_80 = (undefined8 *******)CONCAT71(uStack_80._1_7_,(char)local_4c);
    local_88 = (undefined8 *****)pcVar17;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dbb8);
  }
  pcVar4 = (char *)param_2[1];
  local_58 = pcVar1;
  local_60 = param_3;
  if (param_3 == 0) {
    uVar11 = local_4c;
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      bVar2 = *(byte *)(plVar5 + 2);
      uVar10 = (uint)bVar2;
      local_58 = pcVar17;
      if (((bVar2 - 1 < 2) ||
          ((local_58 = pcVar1, bVar2 != 0 &&
           (local_58 = pcVar17, uVar10 = FUN_1801faaf0(plVar5), pcVar17 = local_58,
           uVar12 = local_4c, uVar11 = local_4c, (char)uVar10 != '\0')))) &&
         (cVar9 = FUN_1801601d0(*plVar5,uVar10), pcVar17 = local_58, uVar12 = local_4c,
         uVar11 = local_4c, cVar9 != '\0')) {
        pcStack_70 = (code *)(*plVar5 + 0x30);
        local_e8 = "connection error PROTOCOL_ERROR -- recv_reset: invalid stream ID 0;";
        uStack_e0 = (code *)0x87;
        local_b8 = (undefined8 ******)&local_e8;
        local_b0 = (undefined8 *)&DAT_18020d788;
        local_88 = (undefined8 *****)0x1;
        local_78 = (undefined4 *)0x1;
        uStack_80 = &local_b8;
        FUN_180160ae0(*plVar5,&local_88);
        pcVar17 = local_58;
        uVar12 = local_4c;
        uVar11 = local_4c;
      }
    }
    local_4c = uVar12;
    *(undefined2 *)param_1 = 0x101;
    param_1[1] = 1;
    *(undefined ***)(param_1 + 2) = &PTR_LAB_18020de18;
    *(undefined8 *)(param_1 + 4) = 1;
    *(undefined8 *)(param_1 + 6) = 0;
    *(undefined8 *)(param_1 + 8) = 0;
    cVar9 = (char)uVar11;
  }
  else if (*(uint *)(pcVar17 + 0x110) < param_3) {
    uVar11 = local_4c;
    if (*(ulonglong *)PTR_DAT_1802fd448 == 0) {
      bVar2 = *(byte *)(plVar6 + 2);
      uVar10 = (uint)bVar2;
      local_58 = pcVar17;
      if (((bVar2 - 1 < 2) ||
          ((local_58 = pcVar1, bVar2 != 0 &&
           (local_58 = pcVar17, uVar10 = FUN_1801faaf0(plVar6), pcVar17 = local_58,
           uVar12 = local_4c, uVar11 = local_4c, (char)uVar10 != '\0')))) &&
         (cVar9 = FUN_1801601d0(*plVar6,uVar10), pcVar17 = local_58, uVar12 = local_4c,
         uVar11 = local_4c, cVar9 != '\0')) {
        pcStack_70 = (code *)(*plVar6 + 0x30);
        local_a8 = *(undefined4 *)(local_58 + 0x110);
        local_e8 = (char *)&local_60;
        uStack_e0 = FUN_1800901b0;
        local_d8 = &local_a8;
        uStack_d0 = FUN_1800901b0;
        local_b8 = (undefined8 ******)&DAT_18020deaa;
        local_b0 = &local_e8;
        local_f0 = &DAT_18020d788;
        local_88 = (undefined8 *****)0x1;
        uStack_80 = &local_f8;
        local_78 = (undefined4 *)0x1;
        local_f8 = &local_b8;
        FUN_180160ae0(*plVar6,&local_88);
        *(undefined1 *)param_1 = 3;
        cVar9 = (char)local_4c;
        pcVar17 = local_58;
        goto joined_r0x0001800873ea;
      }
    }
    local_4c = uVar12;
    *(undefined1 *)param_1 = 3;
    cVar9 = (char)uVar11;
  }
  else {
    local_58 = pcVar17;
    FUN_180152a20(&local_88,pcVar17 + 0x1c8,&local_60);
    pcVar17 = local_58 + 0x78;
    if (local_88 == (undefined8 *****)0x0) {
      uVar12 = (uint)(byte)local_58[0x70];
      uVar14 = FUN_180139ee0(pcVar17,local_58[0x70],local_60);
      uVar16 = 3;
      if ((uVar14 & 1) != 0) {
        *(undefined1 *)((longlong)param_1 + 1) = 1;
        param_1[1] = uVar12;
        *(undefined ***)(param_1 + 2) = &PTR_LAB_18020de18;
        *(undefined8 *)(param_1 + 4) = 1;
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
        uVar16 = 1;
      }
      *(undefined1 *)param_1 = uVar16;
    }
    else {
      local_a8 = (undefined4)local_88;
      uStack_a4 = local_88._4_4_;
      uStack_a0 = (undefined4)uStack_80;
      uStack_9c = uStack_80._4_4_;
      local_108 = (undefined4)local_88;
      uStack_104 = local_88._4_4_;
      uStack_100 = (undefined4)uStack_80;
      uStack_fc = uStack_80._4_4_;
      lVar13 = FUN_180152e90(&local_108);
      puVar7 = PTR_PTR_1802fc838;
      if (*(char *)(lVar13 + 0x13c) == '\0') {
        LOCK();
        cVar9 = *pcVar4;
        if (cVar9 == '\0') {
          *pcVar4 = '\x01';
        }
        UNLOCK();
        if (cVar9 != '\0') {
          FUN_180200390(pcVar4);
        }
        if ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) == 0) {
          local_5c = 0;
          cVar9 = pcVar4[1];
        }
        else {
          local_5c = FUN_180200a50();
          local_5c = local_5c ^ 1;
          cVar9 = pcVar4[1];
        }
        local_90 = pcVar4;
        if (cVar9 != '\0') {
          uStack_80._1_7_ = (undefined7)((ulonglong)uStack_80 >> 8);
          uStack_80 = (undefined8 *******)CONCAT71(uStack_80._1_7_,(char)local_5c);
          local_88 = (undefined8 *****)pcVar4;
                    /* WARNING: Subroutine does not return */
          FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_88,
                        &PTR_FUN_18020e730,&PTR_s_C__Users_burne__cargo_registry_s_18020de40);
        }
        lVar13 = FUN_180152e90(&local_a8);
        iVar3 = *(int *)(lVar13 + 0x78);
        uVar15 = FUN_180152f00(&local_a8);
        pcVar1 = local_58 + 8;
        FUN_180154ea0(&local_88,pcVar17,param_3,param_4,uVar15,pcVar1);
        if ((char)local_88 == '\x03') {
          pcVar17 = local_58 + 0x120;
          FUN_180061b50(pcVar17,local_90 + 8,&local_a8);
          FUN_18012fe10(pcVar17,&local_a8,pcVar1);
          lVar13 = FUN_180152e90(&local_a8);
          if (3 < *(uint *)(lVar13 + 0x40)) {
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: stream.state.is_closed()",0x2a,
                          &PTR_s_C__Users_burne__cargo_registry_s_18020df50);
          }
          local_e8 = (char *)CONCAT71(local_e8._1_7_,3);
        }
        else {
          local_c8 = local_68;
          local_d8 = local_78;
          uStack_d0 = pcStack_70;
          local_e8 = (char *)local_88;
          uStack_e0 = (code *)uStack_80;
        }
        local_88 = (undefined8 *****)CONCAT44(uStack_a4,local_a8);
        uStack_80 = (undefined8 *******)CONCAT44(uStack_9c,uStack_a0);
        FUN_1801537a0(pcVar1,&local_88,iVar3 != 1000000000);
        *(undefined8 *)(param_1 + 8) = local_c8;
        param_1[4] = (undefined4)local_d8;
        param_1[5] = local_d8._4_4_;
        param_1[6] = (undefined4)uStack_d0;
        param_1[7] = uStack_d0._4_4_;
        *param_1 = (undefined4)local_e8;
        param_1[1] = local_e8._4_4_;
        param_1[2] = (undefined4)uStack_e0;
        param_1[3] = uStack_e0._4_4_;
        if ((((char)local_5c == '\0') && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
           (cVar9 = FUN_180200a50(), cVar9 == '\0')) {
          local_90[1] = '\x01';
        }
        LOCK();
        cVar9 = *local_90;
        *local_90 = '\0';
        UNLOCK();
        if (cVar9 == '\x02') {
          WakeByAddressSingle();
        }
      }
      else {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          bVar2 = PTR_PTR_1802fc838[0x10];
          uVar12 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar12 = FUN_1801faaf0(PTR_PTR_1802fc838), (char)uVar12 != '\0'))))
             && (cVar9 = FUN_1801601d0(*(undefined8 *)puVar7,uVar12), cVar9 != '\0')) {
            lVar13 = *(longlong *)puVar7;
            pcStack_70 = (code *)(lVar13 + 0x30);
            uStack_e0 = FUN_1800901b0;
            local_b8 = (undefined8 ******)&DAT_18020de58;
            local_b0 = &local_e8;
            local_f0 = &DAT_18020d788;
            local_88 = (undefined8 *****)0x1;
            uStack_80 = &local_f8;
            local_78 = (undefined4 *)0x1;
            local_f8 = &local_b8;
            local_e8 = (char *)&local_60;
            FUN_180160ae0(lVar13,&local_88);
          }
        }
        *(undefined2 *)param_1 = 0x101;
        param_1[1] = 1;
        *(undefined ***)(param_1 + 2) = &PTR_LAB_18020de18;
        *(undefined8 *)(param_1 + 4) = 1;
        *(undefined8 *)(param_1 + 6) = 0;
        *(undefined8 *)(param_1 + 8) = 0;
      }
    }
    cVar9 = (char)local_4c;
    pcVar17 = local_58;
  }
joined_r0x0001800873ea:
  if (((cVar9 == '\0') && ((*(ulonglong *)puVar8 & 0x7fffffffffffffff) != 0)) &&
     (cVar9 = FUN_180200a50(), cVar9 == '\0')) {
    pcVar17[1] = '\x01';
  }
  LOCK();
  cVar9 = *pcVar17;
  *pcVar17 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    WakeByAddressSingle(pcVar17);
  }
  return param_1;
}


