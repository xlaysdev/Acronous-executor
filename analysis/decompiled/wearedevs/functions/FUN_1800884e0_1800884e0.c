/* FUN_1800884e0 @ 1800884e0 */

char * FUN_1800884e0(char *param_1,undefined8 *param_2,void *param_3)

{
  char *pcVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  longlong *plVar5;
  ulonglong uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  int iVar15;
  undefined4 uVar16;
  char *pcVar17;
  undefined8 ***local_6f8;
  code *local_6f0;
  char *local_5d8;
  char *local_5d0;
  char local_5c8;
  undefined2 uStack_5c7;
  char cStack_5c5;
  int iStack_5c4;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  longlong lStack_5b0;
  undefined8 uStack_5a8;
  undefined8 ****local_478;
  undefined8 ***local_470;
  undefined8 local_468;
  longlong local_460;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined8 local_338;
  undefined8 local_330;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 *local_228;
  code *local_220;
  undefined1 local_1d8 [188];
  byte local_11c;
  longlong local_118;
  undefined8 local_110;
  longlong local_108;
  undefined4 local_100;
  int iStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 **local_e8;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 *puStack_d0;
  undefined1 *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_a8;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_94;
  char *local_90;
  uint local_84;
  char *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  uint local_60;
  uint local_5c;
  void *local_58;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar3 = (char *)*param_2;
  LOCK();
  cVar10 = *pcVar3;
  if (cVar10 == '\0') {
    *pcVar3 = '\x01';
  }
  UNLOCK();
  local_58 = param_3;
  if (cVar10 != '\0') {
    local_4b = 1;
    FUN_180200390(pcVar3);
  }
  puVar9 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_84 = 0;
    cVar10 = pcVar3[1];
    plVar5 = (longlong *)PTR_PTR_1802fc858;
  }
  else {
    local_4b = 1;
    local_84 = FUN_180200a50();
    local_84 = local_84 ^ 1;
    cVar10 = pcVar3[1];
    plVar5 = (longlong *)PTR_PTR_1802fc858;
  }
  PTR_PTR_1802fc858 = (undefined *)plVar5;
  if (cVar10 != '\0') {
    local_5c8 = (char)pcVar3;
    uStack_5c7 = (undefined2)((ulonglong)pcVar3 >> 8);
    cStack_5c5 = (char)((ulonglong)pcVar3 >> 0x18);
    iStack_5c4 = (int)((ulonglong)pcVar3 >> 0x20);
    uVar11 = (uint)(undefined4)uStack_5c0 >> 8;
    uStack_5c0._0_4_ = CONCAT31((int3)uVar11,(char)local_84);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_5c8,&PTR_FUN_18020e6e0,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dc18);
  }
  cVar10 = *(char *)(param_2 + 2);
  pcVar4 = (char *)param_2[1];
  local_60 = *(uint *)((longlong)local_58 + 0x118);
  local_80 = pcVar3;
  if (*(uint *)(pcVar3 + 0x110) < local_60) {
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      bVar2 = *(byte *)(plVar5 + 2);
      uVar11 = (uint)bVar2;
      if (bVar2 - 1 < 2) {
LAB_18008877b:
        local_49 = 1;
        cVar10 = FUN_1801601d0(*plVar5,uVar11);
        if (cVar10 != '\0') {
          lStack_5b0 = *plVar5 + 0x30;
          local_358 = (undefined8 ****)CONCAT44(local_358._4_4_,*(undefined4 *)(local_80 + 0x110));
          local_238 = (char *)&local_60;
          uStack_230 = FUN_1800901b0;
          local_228 = &local_358;
          local_220 = FUN_1800901b0;
          local_6f8 = (undefined8 ***)&DAT_18020e07a;
          local_6f0 = (code *)&local_238;
          local_478 = &local_6f8;
          local_470 = (undefined8 ***)&DAT_18020d788;
          local_5c8 = '\x01';
          uStack_5c7 = 0;
          cStack_5c5 = '\0';
          iStack_5c4 = 0;
          uStack_5c0 = &local_478;
          uStack_5b8 = 1;
          local_49 = 1;
          FUN_180160ae0(*plVar5,&local_5c8);
          *param_1 = '\x03';
          goto LAB_180089016;
        }
      }
      else if (bVar2 != 0) {
        local_49 = 1;
        uVar11 = FUN_1801faaf0(plVar5);
        if ((char)uVar11 != '\0') goto LAB_18008877b;
      }
    }
    *param_1 = '\x03';
LAB_180089016:
    FUN_1800430f0(local_58);
    FUN_1800663c0((longlong)local_58 + 0x60);
    goto LAB_18008902b;
  }
  local_49 = 1;
  pcVar17 = pcVar3 + 0x1c8;
  FUN_1801525c0(&local_108);
  uVar16 = SUB84(pcVar17,0);
  pcVar17 = local_80 + 8;
  pcVar1 = local_80 + 0x78;
  if (local_108 != 0) {
    if (cVar10 == '\0') {
      local_49 = 1;
      cVar10 = FUN_18013a080(pcVar1,0,local_60);
      puVar7 = PTR_PTR_1802fc860;
      if (cVar10 != '\0') {
        uStack_5c0 = (undefined8 ****)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
        if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
          bVar2 = PTR_PTR_1802fc860[0x10];
          uVar11 = (uint)bVar2;
          if (bVar2 - 1 < 2) {
LAB_180088625:
            local_49 = 1;
            cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
            uStack_5c0 = (undefined8 ****)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
            if (cVar10 != '\0') {
              lVar12 = *(longlong *)puVar7;
              lStack_5b0 = lVar12 + 0x30;
              local_238 = (char *)&local_60;
              uStack_230 = FUN_1800901b0;
              local_6f8 = (undefined8 ***)&DAT_18020dfb0;
              local_6f0 = (code *)&local_238;
              local_478 = &local_6f8;
              local_470 = (undefined8 ***)&DAT_18020d788;
              local_5c8 = '\x01';
              uStack_5c7 = 0;
              cStack_5c5 = '\0';
              iStack_5c4 = 0;
              uStack_5c0 = &local_478;
              uStack_5b8 = 1;
              local_49 = 1;
              FUN_180160ae0(lVar12,&local_5c8);
            }
          }
          else {
            uStack_5c0 = (undefined8 ****)CONCAT44(uStack_5c0._4_4_,(undefined4)uStack_5c0);
            if (bVar2 != 0) {
              local_49 = 1;
              uVar11 = FUN_1801faaf0(PTR_PTR_1802fc860);
              if ((char)uVar11 != '\0') goto LAB_180088625;
            }
          }
        }
        param_1[0] = '\0';
        param_1[1] = '\x01';
        *(uint *)(param_1 + 4) = local_60;
        param_1[8] = '\x05';
        param_1[9] = '\0';
        param_1[10] = '\0';
        param_1[0xb] = '\0';
        goto LAB_180089016;
      }
    }
    local_49 = 1;
    FUN_180159f90(&local_5c8,pcVar1,local_60,1,pcVar17);
    if (local_5c8 == '\x03') {
      if (iStack_5c4 == 1) {
        local_49 = 1;
        FUN_180132460(&local_5c8,(undefined4)uStack_5c0,*(undefined4 *)(local_80 + 0x184),
                      *(undefined4 *)(local_80 + 0x104));
        local_49 = 1;
        uVar16 = SUB84(&local_5c8,0);
        uStack_a0 = FUN_18014fd50(&local_108);
        goto LAB_18008888f;
      }
      goto LAB_180088c77;
    }
    param_1[3] = cStack_5c5;
    *(undefined2 *)(param_1 + 1) = uStack_5c7;
    *(undefined4 *)(param_1 + 0xc) = uStack_5c0._4_4_;
    *(undefined4 *)(param_1 + 0x10) = (undefined4)uStack_5b8;
    *(undefined4 *)(param_1 + 0x14) = uStack_5b8._4_4_;
    *(undefined4 *)(param_1 + 0x18) = (undefined4)lStack_5b0;
    *(longlong *)(param_1 + 0x18) = lStack_5b0;
    *(undefined8 *)(param_1 + 0x20) = uStack_5a8;
    *param_1 = local_5c8;
    *(ulonglong *)(param_1 + 4) = CONCAT44((undefined4)uStack_5c0,iStack_5c4);
    goto LAB_180089016;
  }
  uStack_5b8 = local_f0;
  local_5c8 = (char)local_100;
  uStack_5c7 = (undefined2)((uint)local_100 >> 8);
  cStack_5c5 = (char)((uint)local_100 >> 0x18);
  iStack_5c4 = iStack_fc;
  uStack_5c0._0_4_ = uStack_f8;
  uStack_5c0._4_4_ = uStack_f4;
  local_49 = 1;
  uStack_a0 = FUN_18014fda0(&local_5c8);
LAB_18008888f:
  local_49 = 1;
  local_a8 = pcVar3 + 0x1c8;
  uStack_9c = uVar16;
  lVar12 = FUN_180152e90(&local_a8);
  puVar7 = PTR_PTR_1802fc868;
  if (*(char *)(lVar12 + 0x13c) != '\0') {
    if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
      bVar2 = PTR_PTR_1802fc868[0x10];
      uVar11 = (uint)bVar2;
      if (bVar2 - 1 < 2) {
LAB_1800888f0:
        local_49 = 1;
        cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
        if (cVar10 != '\0') {
          lVar12 = *(longlong *)puVar7;
          local_220 = (code *)(lVar12 + 0x30);
          local_6f8 = (undefined8 ***)&local_60;
          local_6f0 = FUN_1800901b0;
          local_478 = (undefined8 ****)&DAT_18020e026;
          local_470 = &local_6f8;
          local_358 = &local_478;
          uStack_350 = (code *)&DAT_18020d788;
          local_238 = (char *)0x1;
          uStack_230 = (code *)&local_358;
          local_228 = (undefined8 *)0x1;
          local_49 = 1;
          FUN_180160ae0(lVar12,&local_238);
        }
      }
      else if (bVar2 != 0) {
        local_49 = 1;
        uVar11 = FUN_1801faaf0(PTR_PTR_1802fc868);
        if ((char)uVar11 != '\0') goto LAB_1800888f0;
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
    goto LAB_180089016;
  }
  local_49 = 1;
  lVar12 = FUN_180152e90(&local_a8);
  puVar7 = PTR_PTR_1802fc850;
  uVar11 = *(uint *)(lVar12 + 0x40);
  if (uVar11 < 4) {
    if (uVar11 - 1 < 2) {
      if ((1 < *(byte *)(lVar12 + 0x48)) || (*(byte *)(lVar12 + 0x49) < 2)) goto LAB_180088c64;
    }
    else if (uVar11 != 0) {
LAB_180088c64:
      if (*(longlong *)PTR_DAT_1802fd448 == 0) {
        bVar2 = PTR_PTR_1802fc850[0x10];
        uVar11 = (uint)bVar2;
        if (bVar2 - 1 < 2) {
LAB_180088f31:
          local_49 = 1;
          cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
          if (cVar10 != '\0') {
            lVar12 = *(longlong *)puVar7;
            local_49 = 1;
            lVar14 = FUN_180152e90(&local_a8);
            local_220 = (code *)(lVar12 + 0x30);
            local_6f8 = (undefined8 ***)(lVar14 + 300);
            local_6f0 = FUN_1800901b0;
            local_478 = (undefined8 ****)&DAT_18020e000;
            local_470 = &local_6f8;
            local_358 = &local_478;
            uStack_350 = (code *)&DAT_18020d788;
            local_238 = (char *)0x1;
            uStack_230 = (code *)&local_358;
            local_228 = (undefined8 *)0x1;
            local_49 = 1;
            FUN_180160ae0(*(undefined8 *)puVar7,&local_238);
          }
        }
        else if (bVar2 != 0) {
          local_49 = 1;
          uVar11 = FUN_1801faaf0(PTR_PTR_1802fc850);
          if ((char)uVar11 != '\0') goto LAB_180088f31;
        }
      }
LAB_180088c77:
      *param_1 = '\x03';
      goto LAB_180089016;
    }
  }
  LOCK();
  cVar10 = *pcVar4;
  if (cVar10 == '\0') {
    *pcVar4 = '\x01';
  }
  UNLOCK();
  if (cVar10 != '\0') {
    local_49 = 1;
    FUN_180200390(pcVar4);
  }
  if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) {
    local_5c = 0;
    cVar10 = pcVar4[1];
  }
  else {
    local_49 = 1;
    local_5c = FUN_180200a50();
    local_5c = local_5c ^ 1;
    cVar10 = pcVar4[1];
  }
  if (cVar10 != '\0') {
    uVar6 = (ulonglong)uStack_230 >> 8;
    uStack_230 = (code *)CONCAT71((int7)uVar6,(char)local_5c);
    local_238 = pcVar4;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_238,&PTR_FUN_18020e730,
                  &PTR_s_C__Users_burne__cargo_registry_s_18020dfe8);
  }
  local_5d8 = pcVar1;
  local_90 = pcVar4;
  memcpy(&local_6f8,local_58,0x120);
  local_78 = (undefined4)local_a8;
  uStack_74 = local_a8._4_4_;
  uStack_70 = uStack_a0;
  uStack_6c = uStack_9c;
  local_4c = 1;
  local_5d0 = pcVar4 + 8;
  lVar12 = FUN_180152e90(&local_78);
  local_94 = *(int *)(lVar12 + 0x78);
  memcpy(&local_238,&local_6f8,0x130);
  puVar8 = PTR_DAT_1802fd448;
  puVar7 = PTR_PTR_1802fc870;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar2 = PTR_PTR_1802fc870[0x10];
    uVar11 = (uint)bVar2;
    if (bVar2 - 1 < 2) {
LAB_180088b5f:
      local_4a = 1;
      cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
      if (cVar10 != '\0') {
        lVar12 = *(longlong *)puVar7;
        local_4a = 1;
        lVar14 = FUN_180152e90(&local_78);
        local_4a = 1;
        lVar13 = FUN_180152e90(&local_78);
        local_460 = lVar12 + 0x30;
        local_358 = (undefined8 ****)(lVar14 + 300);
        local_348 = (undefined8 *)(lVar13 + 0x40);
        uStack_350 = FUN_1800901b0;
        uStack_340 = &LAB_1801394b0;
        local_d8 = (code *)&DAT_18020e0aa;
        puStack_d0 = &local_358;
        local_e8 = (undefined8 **)&local_d8;
        local_e0 = &DAT_18020d788;
        local_478 = (undefined8 ****)0x1;
        local_470 = &local_e8;
        local_468 = 1;
        local_4a = 1;
        FUN_180160ae0(*(undefined8 *)puVar7,&local_478);
      }
    }
    else if (bVar2 != 0) {
      local_4a = 1;
      uVar11 = FUN_1801faaf0(PTR_PTR_1802fc870);
      if ((char)uVar11 != '\0') goto LAB_180088b5f;
    }
  }
  local_4a = 1;
  lVar12 = FUN_180152e90(&local_78);
  puVar7 = PTR_PTR_1802fc878;
  iVar15 = 6;
  if (3 < *(uint *)(lVar12 + 0x40)) {
    iVar15 = *(uint *)(lVar12 + 0x40) - 4;
  }
  switch(iVar15) {
  case 0:
  case 2:
    goto switchD_180088aca_caseD_0;
  default:
    goto switchD_180088aca_caseD_1;
  case 3:
    lVar14 = 0x45;
    break;
  case 4:
    lVar14 = 0x44;
  }
  if (*(char *)(lVar12 + lVar14) == '\x01') {
switchD_180088aca_caseD_1:
    if ((local_11c & 1) != 0) {
      memcpy(&local_478,&local_238,0x120);
      local_4a = 0;
      FUN_1801578e0(&local_d8,local_118,&local_478,&local_78);
      goto LAB_1800890cb;
    }
    if (*(ulonglong *)puVar8 < 2) {
      bVar2 = PTR_PTR_1802fc878[0x10];
      uVar11 = (uint)bVar2;
      if (bVar2 - 1 < 2) {
LAB_180088cf5:
        local_4a = 1;
        cVar10 = FUN_1801601d0(*(undefined8 *)puVar7,uVar11);
        if (cVar10 != '\0') {
          lVar12 = *(longlong *)puVar7;
          local_4a = 1;
          lVar14 = FUN_180152e90(&local_78);
          local_460 = lVar12 + 0x30;
          local_358 = (undefined8 ****)(lVar14 + 300);
          uStack_350 = FUN_1800901b0;
          local_d8 = (code *)&DAT_18020e0cc;
          puStack_d0 = &local_358;
          local_e8 = (undefined8 **)&local_d8;
          local_e0 = &DAT_18020d788;
          local_478 = (undefined8 ****)0x1;
          local_470 = &local_e8;
          local_468 = 1;
          local_4a = 1;
          FUN_180160ae0(*(undefined8 *)puVar7,&local_478);
        }
      }
      else if (bVar2 != 0) {
        local_4a = 1;
        uVar11 = FUN_1801faaf0(PTR_PTR_1802fc878);
        if ((char)uVar11 != '\0') goto LAB_180088cf5;
      }
    }
    local_4a = 1;
    lVar12 = FUN_180152e90(&local_78);
    local_358 = (undefined8 ****)CONCAT62(local_358._2_6_,0x100);
    local_358 = (undefined8 ****)CONCAT44(*(undefined4 *)(lVar12 + 300),(undefined4)local_358);
    uStack_350 = (code *)CONCAT44(uStack_350._4_4_,1);
    FUN_1800430f0(&local_238);
    local_4c = 0;
    FUN_1800663c0(local_1d8);
  }
  else {
switchD_180088aca_caseD_0:
    memcpy(&local_478,&local_238,0x120);
    local_4a = 0;
    FUN_180155300(&local_358,local_118,&local_478,&local_78,pcVar17);
    if (local_358 == (undefined8 ****)0x3) {
      local_4a = 0;
      lVar12 = FUN_180152e90(&local_78);
      local_d8 = (code *)CONCAT62(local_d8._2_6_,0x100);
      local_d8 = (code *)CONCAT44(*(undefined4 *)(lVar12 + 300),(undefined4)local_d8);
      puStack_d0 = (undefined8 *)CONCAT44(puStack_d0._4_4_,1);
    }
    else if ((int)local_358 == 4) {
      local_b8 = local_330;
      local_c8 = uStack_340;
      uStack_c0 = local_338;
      local_d8 = uStack_350;
      puStack_d0 = local_348;
    }
    else {
      if ((int)local_358 != 5) {
        local_478 = local_358;
        memcpy(&local_470,&uStack_350,0x118);
        local_4a = 0;
        FUN_1800964a0(local_118 + 0xa0,&local_478,local_110,&local_78,pcVar17,local_118 + 0x140);
        local_4a = 0;
        FUN_180137820(local_118 + 0xa0,&local_78,1,pcVar17,local_118 + 0x140);
        local_4a = 0;
        FUN_180159750(local_118,&local_78,pcVar17);
      }
      local_d8 = (code *)CONCAT71(local_d8._1_7_,3);
    }
LAB_1800890cb:
    local_4a = 0;
    FUN_18008e030(&local_358,local_118,local_110,&local_78,pcVar17,&local_d8);
  }
  local_238 = (char *)CONCAT44(uStack_74,local_78);
  uStack_230 = (code *)CONCAT44(uStack_6c,uStack_70);
  FUN_1801537a0(pcVar17,&local_238,local_94 != 1000000000);
  *(undefined8 *)(param_1 + 0x20) = local_338;
  *(undefined4 *)(param_1 + 0x10) = (undefined4)local_348;
  *(undefined4 *)(param_1 + 0x14) = local_348._4_4_;
  *(undefined4 *)(param_1 + 0x18) = (undefined4)uStack_340;
  *(undefined4 *)(param_1 + 0x1c) = uStack_340._4_4_;
  *(undefined4 *)param_1 = (undefined4)local_358;
  *(undefined4 *)(param_1 + 4) = local_358._4_4_;
  *(undefined4 *)(param_1 + 8) = (undefined4)uStack_350;
  *(undefined4 *)(param_1 + 0xc) = uStack_350._4_4_;
  if (((char)local_5c == '\0') && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
    local_49 = 0;
    cVar10 = FUN_180200a50();
    if (cVar10 == '\0') {
      local_90[1] = '\x01';
    }
  }
  LOCK();
  cVar10 = *local_90;
  *local_90 = '\0';
  UNLOCK();
  if (cVar10 == '\x02') {
    local_49 = 0;
    WakeByAddressSingle();
  }
LAB_18008902b:
  pcVar3 = local_80;
  if (((char)local_84 == '\0') && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
    local_4b = 0;
    cVar10 = FUN_180200a50();
    if (cVar10 == '\0') {
      pcVar3[1] = '\x01';
    }
  }
  LOCK();
  cVar10 = *pcVar3;
  *pcVar3 = '\0';
  UNLOCK();
  if (cVar10 == '\x02') {
    local_4b = 0;
    WakeByAddressSingle(pcVar3);
  }
  return param_1;
}


