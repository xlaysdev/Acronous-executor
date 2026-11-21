/* FUN_1801b6e40 @ 1801b6e40 */

/* WARNING: Removing unreachable block (ram,0x0001801b714b) */
/* WARNING: Removing unreachable block (ram,0x0001801b6ea2) */

void FUN_1801b6e40(longlong *param_1,undefined1 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  size_t *psVar3;
  uint *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  longlong lVar10;
  size_t sVar11;
  char *pcVar12;
  uint uVar13;
  code *pcVar14;
  ulonglong uVar15;
  void *pvVar16;
  longlong lVar17;
  longlong lVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  char *pcVar21;
  code *pcVar22;
  char *pcVar23;
  code *pcVar24;
  bool bVar25;
  longlong *plVar26;
  undefined2 uVar27;
  size_t sVar28;
  undefined8 *puVar29;
  bool bVar30;
  _SYSTEM_INFO local_1c8;
  size_t local_198;
  void *local_190;
  size_t local_188;
  size_t local_180;
  void *local_178;
  size_t local_170;
  longlong local_168;
  undefined8 *local_160;
  undefined8 local_158;
  undefined8 uStack_150;
  size_t local_148;
  longlong *plStack_140;
  code *pcStack_138;
  longlong *plStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  size_t local_118;
  size_t sStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 uStack_f0;
  ulonglong local_e0;
  undefined8 *local_d8;
  ulonglong local_d0;
  void *local_c8;
  longlong local_c0;
  longlong lStack_b8;
  longlong local_b0;
  size_t local_a8;
  code *local_a0;
  code *local_98;
  longlong *local_90;
  longlong *local_88;
  code *pcStack_80;
  longlong *local_78;
  void *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  size_t local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if (param_1[2] != 0) {
    return;
  }
  local_a0 = (code *)CONCAT71(local_a0._1_7_,param_2);
  local_1c8.dwNumberOfProcessors = 0;
  local_1c8.dwProcessorType = 0;
  local_1c8.dwAllocationGranularity = 0;
  local_1c8.wProcessorLevel = 0;
  local_1c8.wProcessorRevision = 0;
  local_1c8.lpMaximumApplicationAddress = (LPVOID)0x0;
  local_1c8.dwActiveProcessorMask = 0;
  local_1c8.u.dwOemId = 0;
  local_1c8.dwPageSize = 0;
  local_1c8.lpMinimumApplicationAddress = (LPVOID)0x0;
  GetSystemInfo(&local_1c8);
  puVar4 = (uint *)cpuid(0x80000000);
  local_98 = (code *)CONCAT44(local_98._4_4_,*puVar4);
  local_90 = param_1;
  if (*puVar4 < 0x80000004) {
    local_70 = (void *)0x1;
    sVar28 = 0;
    uVar27 = local_1c8.u.s.wProcessorArchitecture;
  }
  else {
    local_50 = CONCAT62(local_50._2_6_,local_1c8.u.s.wProcessorArchitecture);
    FUN_180027490(puVar4[3],puVar4[2],puVar4[1]);
    pcStack_80 = (code *)thunk_FUN_1801d32d0(0x50,4);
    if (pcStack_80 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(4,0x50);
    }
    local_88 = (longlong *)0x5;
    plVar26 = (longlong *)0x0;
    bVar25 = false;
    uVar13 = 0x80000000;
    while (local_78 = plVar26, !bVar25) {
      bVar30 = uVar13 < (uint)local_98;
      if ((uint)local_98 < uVar13) break;
      bVar25 = !bVar30;
      if (uVar13 == 0) {
        puVar5 = (undefined4 *)cpuid_basic_info(0);
      }
      else if (uVar13 == 1) {
        puVar5 = (undefined4 *)cpuid_Version_info(1);
      }
      else if (uVar13 == 2) {
        puVar5 = (undefined4 *)cpuid_cache_tlb_info(2);
      }
      else if (uVar13 == 3) {
        puVar5 = (undefined4 *)cpuid_serial_info(3);
      }
      else if (uVar13 == 4) {
        puVar5 = (undefined4 *)cpuid_Deterministic_Cache_Parameters_info(4);
      }
      else if (uVar13 == 5) {
        puVar5 = (undefined4 *)cpuid_MONITOR_MWAIT_Features_info(5);
      }
      else if (uVar13 == 6) {
        puVar5 = (undefined4 *)cpuid_Thermal_Power_Management_info(6);
      }
      else if (uVar13 == 7) {
        puVar5 = (undefined4 *)cpuid_Extended_Feature_Enumeration_info(7);
      }
      else if (uVar13 == 9) {
        puVar5 = (undefined4 *)cpuid_Direct_Cache_Access_info(9);
      }
      else if (uVar13 == 10) {
        puVar5 = (undefined4 *)cpuid_Architectural_Performance_Monitoring_info(10);
      }
      else if (uVar13 == 0xb) {
        puVar5 = (undefined4 *)cpuid_Extended_Topology_info(0xb);
      }
      else if (uVar13 == 0xd) {
        puVar5 = (undefined4 *)cpuid_Processor_Extended_States_info(0xd);
      }
      else if (uVar13 == 0xf) {
        puVar5 = (undefined4 *)cpuid_Quality_of_Service_info(0xf);
      }
      else if (uVar13 == 0x80000002) {
        puVar5 = (undefined4 *)cpuid_brand_part1_info(0x80000002);
      }
      else if (uVar13 == 0x80000003) {
        puVar5 = (undefined4 *)cpuid_brand_part2_info(0x80000003);
      }
      else if (uVar13 == 0x80000004) {
        puVar5 = (undefined4 *)cpuid_brand_part3_info(0x80000004);
      }
      else {
        puVar5 = (undefined4 *)cpuid(uVar13);
      }
      uVar6 = *puVar5;
      uVar7 = puVar5[1];
      uVar8 = puVar5[2];
      uVar9 = puVar5[3];
      if (plVar26 == local_88) {
        FUN_1801fca20(&local_88);
      }
      lVar17 = (longlong)plVar26 * 0x10;
      *(undefined4 *)(pcStack_80 + lVar17) = uVar6;
      *(undefined4 *)(pcStack_80 + lVar17 + 4) = uVar7;
      *(undefined4 *)(pcStack_80 + lVar17 + 8) = uVar9;
      *(undefined4 *)(pcStack_80 + lVar17 + 0xc) = uVar8;
      plVar26 = (longlong *)((longlong)plVar26 + 1);
      uVar13 = uVar13 + bVar30;
    }
    FUN_180027490();
    uStack_60 = (code *)thunk_FUN_1801d32d0(0x30,1);
    if (uStack_60 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,0x30);
    }
    local_68 = (code *)0x30;
    local_58 = 0;
    uStack_150 = pcStack_80 + (longlong)local_78 * 0x10;
    local_158 = pcStack_80;
    local_148 = 5;
    uVar27 = (undefined2)local_50;
    while( true ) {
      plStack_140 = (longlong *)0x0;
      pcVar14 = (code *)FUN_1801b6bb0(&local_158);
      if (pcVar14 == (code *)0x0) break;
      while( true ) {
        FUN_1801b7c50(&local_68,*(undefined4 *)pcVar14);
        FUN_1801b7c50(&local_68,*(undefined4 *)(pcVar14 + 4));
        FUN_1801b7c50(&local_68,*(undefined4 *)(pcVar14 + 8));
        FUN_1801b7c50(&local_68,*(undefined4 *)(pcVar14 + 0xc));
        if (plStack_140 != (longlong *)0x0) break;
        if ((local_148 == 0) || (local_148 = local_148 - 1, local_158 == uStack_150))
        goto LAB_1801b708e;
        pcVar14 = local_158;
        local_158 = local_158 + 0x10;
      }
    }
LAB_1801b708e:
    uVar19 = local_58;
    if (local_58 != 0) {
      uVar15 = 0;
      pcVar12 = (char *)(uStack_60 + 1);
      pcVar23 = (char *)uStack_60;
      do {
        pcVar21 = pcVar12;
        if (*pcVar23 == '\0') {
          if (local_58 < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar15,local_58,&PTR_s_C__Users_burne__cargo_registry_s_180286678);
          }
          uVar19 = uVar15;
          break;
        }
        uVar15 = uVar15 + 1;
        pcVar12 = pcVar21 + ((code *)pcVar21 != uStack_60 + local_58);
        pcVar23 = pcVar21;
      } while (local_58 != uVar15);
    }
    FUN_1801f2ab0(&local_158,uStack_60,uVar19);
    sVar28 = local_148;
    pcVar14 = uStack_150;
    if ((char)local_158 == '\0') {
      if ((longlong)local_148 < 0) {
        uVar20 = 0;
LAB_1801b726b:
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(uVar20,sVar28);
      }
      if (local_148 == 0) {
        local_70 = (void *)0x1;
      }
      else {
        FUN_180027490();
        uVar20 = 1;
        local_70 = (void *)thunk_FUN_1801d32d0(sVar28,1);
        if (local_70 == (void *)0x0) goto LAB_1801b726b;
      }
      memcpy(local_70,pcVar14,sVar28);
    }
    else {
      local_70 = (void *)0x1;
      sVar28 = 0;
    }
    if (local_68 != (code *)0x0) {
      thunk_FUN_1801d3330(uStack_60,local_68,1);
    }
    if (local_88 != (longlong *)0x0) {
      thunk_FUN_1801d3330(pcStack_80,(longlong)local_88 << 4,4);
    }
  }
  lVar17 = cpuid_basic_info(0);
  uVar6 = *(undefined4 *)(lVar17 + 4);
  uVar7 = *(undefined4 *)(lVar17 + 8);
  uVar8 = *(undefined4 *)(lVar17 + 0xc);
  local_50 = sVar28;
  FUN_180027490();
  pcVar14 = (code *)thunk_FUN_1801d32d0(0xc,1);
  if (pcVar14 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(1,0xc);
  }
  local_68 = (code *)&DAT_0000000c;
  local_58 = 0;
  uStack_60 = pcVar14;
  FUN_1801b7c50(&local_68,uVar6);
  FUN_1801b7c50(&local_68,uVar7);
  FUN_1801b7c50(&local_68,uVar8);
  uVar19 = local_58;
  if (local_58 != 0) {
    uVar15 = 0;
    pcVar14 = uStack_60 + 1;
    pcVar24 = uStack_60;
    do {
      pcVar22 = pcVar14;
      if (*pcVar24 == (code)0x0) {
        if (local_58 < uVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,uVar15,local_58,&PTR_s_C__Users_burne__cargo_registry_s_180286660);
        }
        uVar19 = uVar15;
        break;
      }
      uVar15 = uVar15 + 1;
      pcVar14 = pcVar22 + (pcVar22 != uStack_60 + local_58);
      pcVar24 = pcVar22;
    } while (local_58 != uVar15);
  }
  FUN_1801f2ab0(&local_158,uStack_60,uVar19);
  sVar11 = local_50;
  sVar28 = local_148;
  pcVar14 = uStack_150;
  if ((int)local_158 == 1) {
    if ((ushort)uVar27 < 0xf) {
      sVar28 = *(size_t *)(&DAT_180286748 + (ulonglong)(ushort)uVar27 * 8);
      pcVar14 = (code *)(&DAT_1802867c0 + *(int *)(&DAT_1802867c0 + (ulonglong)(ushort)uVar27 * 4));
    }
    else {
      pcVar14 = (code *)&DAT_180286702;
      sVar28 = 7;
    }
    FUN_180027490();
    pvVar16 = (void *)thunk_FUN_1801d32d0(sVar28,1);
    if (pvVar16 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(1,sVar28);
    }
  }
  else {
    if ((longlong)local_148 < 0) {
      uVar20 = 0;
LAB_1801b724c:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar20,sVar28);
    }
    if (local_148 == 0) {
      pvVar16 = (void *)0x1;
      goto LAB_1801b72ec;
    }
    FUN_180027490();
    uVar20 = 1;
    pvVar16 = (void *)thunk_FUN_1801d32d0(sVar28,1);
    if (pvVar16 == (void *)0x0) goto LAB_1801b724c;
  }
LAB_1801b72ec:
  memcpy(pvVar16,pcVar14,sVar28);
  if (local_68 != (code *)0x0) {
    thunk_FUN_1801d3330(uStack_60,local_68,1);
  }
  local_198 = sVar11;
  local_190 = local_70;
  local_188 = sVar11;
  uVar19 = (ulonglong)local_1c8.dwNumberOfProcessors;
  local_180 = sVar28;
  local_178 = pvVar16;
  local_170 = sVar28;
  local_c8 = pvVar16;
  local_a8 = sVar28;
  if ((char)local_a0 == '\0') {
    if (local_1c8.dwNumberOfProcessors == 0) {
      local_d8 = (undefined8 *)&DAT_00000008;
    }
    else {
      FUN_180027490();
      local_d8 = (undefined8 *)thunk_FUN_1801d3550(uVar19 * 8,8);
      if (local_d8 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(8,uVar19 * 8);
      }
    }
    local_e0 = uVar19;
    local_d0 = uVar19;
  }
  else {
    FUN_1801b7ac0(&local_e0,uVar19);
  }
  lVar17 = (uVar19 + 1) * 0x70;
  FUN_180027490();
  lStack_b8 = thunk_FUN_1801d32d0(lVar17,8);
  if (lStack_b8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(8,lVar17);
  }
  local_b0 = 0;
  puVar1 = local_d8 + local_d0;
  lVar17 = 0;
  local_160 = local_d8;
  local_c0 = uVar19 + 1;
  for (puVar29 = local_d8; puVar29 != puVar1; puVar29 = puVar29 + 1) {
    lVar17 = lVar17 + 1;
    pcStack_80 = FUN_1801ee720;
    local_168 = lVar17;
    local_88 = &local_168;
    FUN_1801ec780(&local_68,&DAT_180286740,&local_88);
    uVar19 = local_58;
    local_98 = local_68;
    local_a0 = uStack_60;
    FUN_1801ed500(&local_88,&local_180);
    FUN_1801ed500(&local_68,&local_198);
    lVar10 = local_b0;
    uStack_f0 = *puVar29;
    plStack_130 = local_78;
    plStack_140 = local_88;
    pcStack_138 = pcStack_80;
    local_118 = local_58;
    local_128 = (undefined4)local_68;
    uStack_124 = local_68._4_4_;
    uStack_120 = (undefined4)uStack_60;
    uStack_11c = uStack_60._4_4_;
    local_158 = local_98;
    uStack_150 = local_a0;
    local_148 = uVar19;
    sStack_110 = 0x8000000000000000;
    local_f8 = 0;
    if (local_b0 == local_c0) {
      FUN_1801fcb00(&local_c0);
    }
    lVar18 = lVar10 * 0x70;
    puVar2 = (undefined8 *)(lStack_b8 + 0x60 + lVar18);
    *puVar2 = CONCAT44(uStack_f4,local_f8);
    puVar2[1] = uStack_f0;
    puVar2 = (undefined8 *)(lStack_b8 + 0x50 + lVar18);
    *puVar2 = local_108;
    puVar2[1] = uStack_100;
    psVar3 = (size_t *)(lStack_b8 + 0x40 + lVar18);
    *psVar3 = local_118;
    psVar3[1] = sStack_110;
    puVar2 = (undefined8 *)(lStack_b8 + 0x30 + lVar18);
    *puVar2 = CONCAT44(uStack_124,local_128);
    puVar2[1] = CONCAT44(uStack_11c,uStack_120);
    puVar2 = (undefined8 *)(lStack_b8 + 0x20 + lVar18);
    *puVar2 = pcStack_138;
    puVar2[1] = plStack_130;
    psVar3 = (size_t *)(lStack_b8 + 0x10 + lVar18);
    *psVar3 = local_148;
    psVar3[1] = (size_t)plStack_140;
    puVar5 = (undefined4 *)(lStack_b8 + lVar18);
    *puVar5 = (int)local_158;
    puVar5[1] = local_158._4_4_;
    puVar5[2] = (undefined4)uStack_150;
    puVar5[3] = uStack_150._4_4_;
    local_b0 = lVar10 + 1;
  }
  local_148 = local_b0;
  local_158 = (code *)local_c0;
  uStack_150 = (code *)lStack_b8;
  if (local_e0 != 0) {
    thunk_FUN_1801d3330(local_160,local_e0 << 3,8);
  }
  plVar26 = local_90;
  sVar28 = local_a8;
  pvVar16 = local_c8;
  if (local_50 != 0) {
    thunk_FUN_1801d3330(local_70,local_50,1);
  }
  if (sVar28 != 0) {
    thunk_FUN_1801d3330(pvVar16,sVar28,1);
  }
  FUN_180030ad0(plVar26);
  plVar26 = local_90;
  if (*local_90 != 0) {
    thunk_FUN_1801d3330(local_90[1],*local_90 * 0x70,8);
  }
  plVar26[2] = local_148;
  *plVar26 = (longlong)local_158;
  plVar26[1] = (longlong)uStack_150;
  return;
}


