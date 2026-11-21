/* FUN_18008acf0 @ 18008acf0 */

char * FUN_18008acf0(char *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  undefined ***pppuVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  uint uVar10;
  longlong lVar11;
  longlong lVar12;
  ulonglong *puVar13;
  undefined8 unaff_R14;
  undefined1 uVar14;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  longlong *local_140;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  char *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 *local_108;
  code *local_100;
  undefined8 local_f8;
  longlong local_e8;
  longlong local_e0;
  longlong local_d8;
  uint local_d0;
  uint local_cc;
  undefined *local_c8;
  undefined8 *local_c0;
  undefined **local_b8;
  undefined *local_b0;
  char *local_a8;
  uint local_9c;
  longlong local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined8 uStack_78;
  uint local_70;
  uint uStack_6c;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  pcVar4 = (char *)*param_2;
  LOCK();
  cVar9 = *pcVar4;
  if (cVar9 == '\0') {
    *pcVar4 = '\x01';
  }
  UNLOCK();
  local_140 = param_3;
  if (cVar9 != '\0') {
    local_62 = 1;
    FUN_180200390(pcVar4);
  }
  puVar13 = (ulonglong *)PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_d0 = 0;
    cVar9 = pcVar4[1];
  }
  else {
    local_62 = 1;
    local_d0 = FUN_180200a50();
    local_d0 = local_d0 ^ 1;
    cVar9 = pcVar4[1];
  }
  if (cVar9 != '\0') {
    local_90 = SUB84(pcVar4,0);
    uStack_8c = (undefined4)((ulonglong)pcVar4 >> 0x20);
    uStack_88._1_3_ = (undefined3)((uint)(undefined4)uStack_88 >> 8);
    uStack_88._0_4_ = CONCAT31(uStack_88._1_3_,(char)local_d0);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc90);
  }
  uVar14 = *(undefined1 *)(param_2 + 2);
  pcVar5 = (char *)param_2[1];
  local_e8 = *local_140;
  local_e0 = local_140[1];
  local_98 = local_140[2];
  local_d8 = local_140[3];
  uVar10 = *(uint *)(local_140 + 4);
  uVar2 = *(uint *)((longlong)local_140 + 0x24);
  bVar1 = *(byte *)((longlong)local_140 + 0x24);
  local_61 = 1;
  local_a8 = pcVar4;
  local_9c = uVar10;
  FUN_180152a20(&local_150,pcVar4 + 0x1c8,&local_9c);
  puVar7 = PTR_PTR_1802fc8a8;
  if (CONCAT44(uStack_14c,local_150) == 0) {
    pcVar4 = local_a8 + 0x78;
    if (*(uint *)(local_a8 + 0x110) < local_9c) {
      uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
      uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar1 = PTR_PTR_1802fc8a8[0x10];
        uVar10 = (uint)bVar1;
        if (bVar1 - 1 < 2) {
LAB_18008b20f:
          local_61 = 1;
          cVar9 = FUN_1801601d0(*(undefined8 *)puVar7,uVar10);
          uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
          uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
          if (cVar9 != '\0') {
            lVar11 = *(longlong *)puVar7;
            uStack_78 = lVar11 + 0x30;
            local_138 = *(undefined4 *)(local_a8 + 0x110);
            uStack_110 = (undefined **)FUN_1800901b0;
            local_108 = &local_138;
            local_100 = FUN_1800901b0;
            local_c8 = &DAT_18020e410;
            local_b8 = &local_c8;
            local_b0 = &DAT_18020d788;
            local_90 = 1;
            uStack_8c = 0;
            uStack_88 = &local_b8;
            local_80 = 1;
            uStack_7c = 0;
            local_61 = 1;
            local_118 = &local_9c;
            local_c0 = &local_118;
            FUN_180160ae0(lVar11,&local_90);
          }
        }
        else {
          uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
          uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
          if (bVar1 != 0) {
            local_61 = 1;
            uVar10 = FUN_1801faaf0(PTR_PTR_1802fc8a8);
            if ((char)uVar10 != '\0') goto LAB_18008b20f;
          }
        }
      }
      lVar11 = 0;
      if ((uVar2 >> 8 & 1) != 0) {
        lVar11 = (ulonglong)(uVar2 >> 0x10 & 0xff) + 1;
      }
      if ((lVar11 + local_98 & 0xffffffff80000000U) != 0) {
        local_61 = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: sz <= super::MAX_WINDOW_SIZE as usize",0x37,
                      &PTR_s_C__Users_burne__cargo_registry_s_18020e440);
      }
      local_61 = 1;
      FUN_180155080(&local_90,pcVar4);
      pppuVar6 = uStack_88;
      if ((char)local_90 == '\x03') {
        *param_1 = '\x03';
      }
      else {
LAB_18008b43a:
        *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_6c,local_70);
        uStack_88._0_1_ = SUB81(pppuVar6,0);
        uStack_88._5_3_ = (undefined3)((ulonglong)pppuVar6 >> 0x28);
        *(ulonglong *)(param_1 + 0x11) =
             CONCAT17((undefined1)uStack_78,CONCAT43(uStack_7c,local_80._1_3_));
        *(ulonglong *)(param_1 + 0x19) =
             CONCAT17((undefined1)local_70,(int7)((ulonglong)uStack_78 >> 8));
        *(uint *)(param_1 + 1) = CONCAT13((undefined1)uStack_8c,local_90._1_3_);
        *(uint *)(param_1 + 5) = CONCAT13((undefined1)uStack_88,uStack_8c._1_3_);
        *(int *)(param_1 + 9) = (int)((ulonglong)pppuVar6 >> 8);
        *(uint *)(param_1 + 0xd) = CONCAT13((undefined1)local_80,uStack_88._5_3_);
        *param_1 = (char)local_90;
        uStack_88 = pppuVar6;
      }
    }
    else {
      local_61 = 1;
      cVar9 = FUN_18013a080(pcVar4,CONCAT71((int7)((ulonglong)unaff_R14 >> 8),uVar14) & 0xffffffff);
      puVar8 = PTR_PTR_1802fc8b8;
      puVar7 = PTR_PTR_1802fc8b0;
      if (cVar9 == '\0') {
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          bVar1 = PTR_PTR_1802fc8b8[0x10];
          uVar10 = (uint)bVar1;
          if (bVar1 - 1 < 2) {
LAB_18008b163:
            local_61 = 1;
            cVar9 = FUN_1801601d0(*(undefined8 *)puVar8,uVar10);
            if (cVar9 != '\0') {
              lVar11 = *(longlong *)puVar8;
              uStack_78 = lVar11 + 0x30;
              uStack_110 = (undefined **)FUN_1800901b0;
              local_c8 = &DAT_18020e343;
              local_b8 = &local_c8;
              local_b0 = &DAT_18020d788;
              local_90 = 1;
              uStack_8c = 0;
              uStack_88 = &local_b8;
              local_80 = 1;
              uStack_7c = 0;
              local_61 = 1;
              local_118 = &local_9c;
              local_c0 = &local_118;
              FUN_180160ae0(lVar11,&local_90);
            }
          }
          else if (bVar1 != 0) {
            local_61 = 1;
            uVar10 = FUN_1801faaf0(PTR_PTR_1802fc8b8);
            if ((char)uVar10 != '\0') goto LAB_18008b163;
          }
        }
        param_1[0] = '\x01';
        param_1[1] = '\x01';
        param_1[4] = '\x01';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(undefined ***)(param_1 + 8) = &PTR_LAB_18020de18;
        param_1[0x10] = '\x01';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        param_1[0x18] = '\0';
        param_1[0x19] = '\0';
        param_1[0x1a] = '\0';
        param_1[0x1b] = '\0';
        param_1[0x1c] = '\0';
        param_1[0x1d] = '\0';
        param_1[0x1e] = '\0';
        param_1[0x1f] = '\0';
        param_1[0x20] = '\0';
        param_1[0x21] = '\0';
        param_1[0x22] = '\0';
        param_1[0x23] = '\0';
        param_1[0x24] = '\0';
        param_1[0x25] = '\0';
        param_1[0x26] = '\0';
        param_1[0x27] = '\0';
      }
      else {
        pppuVar6 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
        lVar11 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          bVar1 = PTR_PTR_1802fc8b0[0x10];
          uVar10 = (uint)bVar1;
          if (bVar1 - 1 < 2) {
LAB_18008b0ad:
            local_61 = 1;
            cVar9 = FUN_1801601d0(*(undefined8 *)puVar7,uVar10);
            pppuVar6 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
            lVar11 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
            if (cVar9 != '\0') {
              lVar11 = *(longlong *)puVar7;
              uStack_78 = lVar11 + 0x30;
              uStack_110 = (undefined **)FUN_1800901b0;
              local_c8 = &DAT_18020e38b;
              local_b8 = &local_c8;
              local_b0 = &DAT_18020d788;
              local_90 = 1;
              uStack_8c = 0;
              uStack_88 = &local_b8;
              local_80 = 1;
              uStack_7c = 0;
              local_61 = 1;
              local_118 = &local_9c;
              local_c0 = &local_118;
              FUN_180160ae0(lVar11,&local_90);
              pppuVar6 = uStack_88;
              lVar11 = uStack_78;
            }
          }
          else {
            pppuVar6 = uStack_88;
            lVar11 = uStack_78;
            if (bVar1 != 0) {
              local_61 = 1;
              uVar10 = FUN_1801faaf0(PTR_PTR_1802fc8b0);
              lVar11 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
              pppuVar6 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
              if ((char)uVar10 != '\0') goto LAB_18008b0ad;
            }
          }
        }
        lVar12 = 0;
        if ((uVar2 >> 8 & 1) != 0) {
          lVar12 = (ulonglong)(uVar2 >> 0x10 & 0xff) + 1;
        }
        uStack_88 = pppuVar6;
        uStack_78 = lVar11;
        if ((lVar12 + local_98 & 0xffffffff80000000U) != 0) {
          local_61 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("assertion failed: sz <= super::MAX_WINDOW_SIZE as usize",0x37,
                        &PTR_s_C__Users_burne__cargo_registry_s_18020e3f8);
        }
        local_61 = 1;
        FUN_180155080(&local_90,pcVar4);
        pppuVar6 = uStack_88;
        if ((char)local_90 != '\x03') goto LAB_18008b43a;
        param_1[0] = '\0';
        param_1[1] = '\x01';
        *(uint *)(param_1 + 4) = local_9c;
        param_1[8] = '\x05';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
      }
    }
    (**(code **)(local_e8 + 0x20))(local_d8,local_e0,local_98);
    goto LAB_18008b4a3;
  }
  local_138 = local_150;
  uStack_134 = uStack_14c;
  uStack_130 = uStack_148;
  uStack_12c = uStack_144;
  LOCK();
  cVar9 = *pcVar5;
  if (cVar9 == '\0') {
    *pcVar5 = '\x01';
  }
  UNLOCK();
  if (cVar9 != '\0') {
    local_61 = 1;
    FUN_180200390(pcVar5);
  }
  if ((*puVar13 & 0x7fffffffffffffff) == 0) {
    local_cc = 0;
    cVar9 = pcVar5[1];
    pcVar4 = local_a8;
  }
  else {
    local_61 = 1;
    local_cc = FUN_180200a50();
    local_cc = local_cc ^ 1;
    cVar9 = pcVar5[1];
    pcVar4 = local_a8;
  }
  local_a8 = pcVar4;
  if (cVar9 != '\0') {
    local_90 = SUB84(pcVar5,0);
    uStack_8c = (undefined4)((ulonglong)pcVar5 >> 0x20);
    uStack_88._1_3_ = (undefined3)((uint)(undefined4)uStack_88 >> 8);
    uStack_88._0_4_ = CONCAT31(uStack_88._1_3_,(char)local_cc);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020e458);
  }
  local_64 = 1;
  local_120 = pcVar5;
  lVar11 = FUN_180152e90(&local_138);
  pcVar5 = pcVar4 + 0x78;
  iVar3 = *(int *)(lVar11 + 0x78);
  local_90 = (undefined4)local_e8;
  uStack_8c = (undefined4)((ulonglong)local_e8 >> 0x20);
  uStack_88._0_4_ = (undefined4)local_e0;
  uStack_88._4_4_ = (undefined4)((ulonglong)local_e0 >> 0x20);
  uStack_78._0_4_ = (undefined4)local_d8;
  uStack_78._4_4_ = (undefined4)((ulonglong)local_d8 >> 0x20);
  lVar11 = 0;
  if ((uVar2 >> 8 & 1) != 0) {
    lVar11 = (ulonglong)(uVar2 >> 0x10 & 0xff) + 1;
  }
  local_80 = (undefined4)local_98;
  uStack_7c = (undefined4)((ulonglong)local_98 >> 0x20);
  local_64 = 0;
  local_70 = uVar10;
  uStack_6c = uVar2;
  FUN_18015a4c0(&local_118,pcVar5,&local_90,&local_138);
  pcVar4 = pcVar4 + 8;
  if ((char)local_118 == '\x03' && (bVar1 & 1) == 0) {
    local_63 = 1;
    cVar9 = FUN_180153ca0(pcVar4,local_98);
    puVar7 = PTR_PTR_1802fc8c0;
    uVar14 = 3;
    uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
    uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
    if ((cVar9 != '\0') &&
       (uVar14 = 1, uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88),
       uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78),
       *(ulonglong *)PTR_DAT_1802fd448 < 2)) {
      bVar1 = PTR_PTR_1802fc8c0[0x10];
      uVar10 = (uint)bVar1;
      if (bVar1 - 1 < 2) {
LAB_18008afdf:
        local_63 = 1;
        cVar9 = FUN_1801601d0(*(undefined8 *)puVar7,uVar10);
        uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
        uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
        if (cVar9 != '\0') {
          lVar11 = *(longlong *)puVar7;
          uStack_78 = lVar11 + 0x30;
          local_c8 = &DAT_18020e470;
          local_c0 = (undefined8 *)0x35;
          local_b8 = &local_c8;
          local_b0 = &DAT_18020d788;
          local_90 = 1;
          uStack_8c = 0;
          uStack_88 = &local_b8;
          local_80 = 1;
          uStack_7c = 0;
          local_63 = 1;
          FUN_180160ae0(lVar11,&local_90);
        }
      }
      else {
        uStack_88 = (undefined ***)CONCAT44(uStack_88._4_4_,(undefined4)uStack_88);
        uStack_78 = CONCAT44(uStack_78._4_4_,(undefined4)uStack_78);
        if (bVar1 != 0) {
          local_63 = 1;
          uVar10 = FUN_1801faaf0(PTR_PTR_1802fc8c0);
          if ((char)uVar10 != '\0') goto LAB_18008afdf;
        }
      }
    }
    local_118._0_2_ = CONCAT11(1,uVar14);
    local_118 = (uint *)CONCAT44(0xb,(undefined4)local_118);
    uStack_110 = &PTR_LAB_18020de18;
    local_108 = (undefined4 *)&DAT_18020e48a;
    local_100 = (code *)0x14;
    local_f8 = 0;
  }
  else if ((char)local_118 == '\0') {
    local_90 = 0;
    uStack_8c = 0;
    FUN_180159c70(pcVar5,lVar11 + local_98 & 0xffffffff,&local_90);
    if (CONCAT44(uStack_8c,local_90) != 0) {
      local_63 = 1;
      (**(code **)(CONCAT44(uStack_8c,local_90) + 0x18))
                (CONCAT44(uStack_88._4_4_,(undefined4)uStack_88));
    }
  }
  local_63 = 0;
  FUN_18008e030(&local_90,pcVar5,local_120 + 8,&local_138,pcVar4,&local_118);
  local_118 = (uint *)CONCAT44(uStack_134,local_138);
  uStack_110 = (undefined **)CONCAT44(uStack_12c,uStack_130);
  FUN_1801537a0(pcVar4,&local_118,iVar3 != 1000000000);
  pcVar4 = local_120;
  *(ulonglong *)(param_1 + 0x20) = CONCAT44(uStack_6c,local_70);
  *(undefined4 *)(param_1 + 0x10) = local_80;
  *(undefined4 *)(param_1 + 0x14) = uStack_7c;
  *(longlong *)(param_1 + 0x18) = uStack_78;
  *(undefined4 *)param_1 = local_90;
  *(undefined4 *)(param_1 + 4) = uStack_8c;
  *(undefined ****)(param_1 + 8) = uStack_88;
  puVar13 = (ulonglong *)PTR_DAT_1802fd600;
  if (((char)local_cc == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) {
    local_61 = 0;
    cVar9 = FUN_180200a50();
    if (cVar9 == '\0') {
      pcVar4[1] = '\x01';
    }
  }
  LOCK();
  cVar9 = *pcVar4;
  *pcVar4 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    local_61 = 0;
    WakeByAddressSingle(pcVar4);
  }
LAB_18008b4a3:
  pcVar4 = local_a8;
  if (((char)local_d0 == '\0') && ((*puVar13 & 0x7fffffffffffffff) != 0)) {
    local_62 = 0;
    cVar9 = FUN_180200a50();
    if (cVar9 == '\0') {
      pcVar4[1] = '\x01';
    }
  }
  LOCK();
  cVar9 = *pcVar4;
  *pcVar4 = '\0';
  UNLOCK();
  if (cVar9 == '\x02') {
    local_62 = 0;
    WakeByAddressSingle(pcVar4);
  }
  return param_1;
}


