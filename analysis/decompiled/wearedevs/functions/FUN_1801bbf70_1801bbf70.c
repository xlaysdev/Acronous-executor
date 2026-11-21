/* FUN_1801bbf70 @ 1801bbf70 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1801bbf70(ulonglong *param_1,char *param_2,ulonglong param_3,ulonglong param_4,byte param_5
                  ,longlong param_6)

{
  short *psVar1;
  undefined1 auVar2 [16];
  byte bVar3;
  char cVar4;
  char cVar5;
  ulonglong uVar6;
  _FILETIME _Var7;
  byte bVar8;
  BOOL BVar9;
  int iVar10;
  HANDLE pvVar11;
  undefined8 *puVar12;
  SIZE_T SVar13;
  byte bVar14;
  longlong lVar15;
  undefined4 uVar16;
  DWORD DVar17;
  LPFILETIME lpCreationTime;
  _MEMORY_BASIC_INFORMATION *lpKernelTime;
  ulonglong uVar18;
  PIO_COUNTERS lpIoCounters;
  LPCVOID pvVar19;
  _FILETIME _Var20;
  ulonglong uVar21;
  _FILETIME _Var22;
  ulonglong *puVar23;
  ulonglong *puVar24;
  _FILETIME _Var25;
  _FILETIME _Var26;
  longlong lVar27;
  _FILETIME _Var28;
  _FILETIME *p_Var29;
  _FILETIME _Var30;
  bool bVar31;
  bool bVar32;
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  _FILETIME local_870;
  LPCVOID pvStack_868;
  DWORD local_860;
  undefined4 uStack_85c;
  ulonglong uStack_858;
  undefined4 local_850;
  ushort uStack_84c;
  undefined2 uStack_84a;
  uint local_848;
  undefined2 local_830;
  undefined4 local_82c;
  uint local_828;
  IO_COUNTERS local_5a8;
  undefined2 local_570;
  ulonglong local_568;
  undefined2 local_538;
  undefined8 local_530;
  _FILETIME *local_528;
  short local_3a8;
  short local_3a6;
  short local_3a4;
  short local_3a2;
  short local_3a0;
  _FILETIME local_138;
  _FILETIME local_130;
  ulonglong local_128;
  ulonglong local_120;
  undefined1 local_118 [16];
  _MEMORY_BASIC_INFORMATION local_100;
  _FILETIME local_d0;
  _FILETIME _Stack_c8;
  _FILETIME local_c0;
  undefined8 *local_b8;
  _FILETIME local_b0;
  _FILETIME local_a8;
  _FILETIME local_a0;
  _FILETIME local_98;
  _FILETIME local_90;
  _FILETIME local_88;
  _FILETIME local_80;
  _FILETIME *local_78;
  ulonglong *local_70;
  byte local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_70 = param_1;
  if (*param_2 != '\0') {
    local_138.dwLowDateTime = 0;
    local_138.dwHighDateTime = 0;
    local_130.dwLowDateTime = 0;
    local_130.dwHighDateTime = 0;
    local_88.dwLowDateTime = 0;
    local_88.dwHighDateTime = 0;
    local_d0.dwLowDateTime = 0;
    local_d0.dwHighDateTime = 0;
    local_100.BaseAddress = (PVOID)0x0;
    local_870.dwLowDateTime = 0;
    local_870.dwHighDateTime = 0;
    if (param_1[0x1f] != 0) {
      lpCreationTime = &local_138;
      BVar9 = GetProcessTimes(*(HANDLE *)(param_1[0x1f] + 0x10),lpCreationTime,lpCreationTime,
                              &local_130,&local_88);
      uVar16 = SUB84(lpCreationTime,0);
      if (BVar9 == 0) {
        local_5a8.WriteOperationCount = FUN_1801c9650();
        local_5a8.OtherOperationCount = CONCAT44(local_5a8.OtherOperationCount._4_4_,uVar16);
        local_5a8.ReadOperationCount._0_4_ = 1;
        local_5a8.ReadOperationCount._4_4_ = 0;
        if ((LPCVOID)local_5a8.WriteOperationCount != (LPCVOID)0x0) {
          FUN_180111960(&local_5a8.WriteOperationCount);
        }
      }
    }
    lpKernelTime = &local_100;
    BVar9 = GetSystemTimes(&local_d0,(LPFILETIME)lpKernelTime,&local_870);
    uVar16 = SUB84(lpKernelTime,0);
    if (BVar9 == 0) {
      local_5a8.WriteOperationCount = FUN_1801c9650();
      local_5a8.OtherOperationCount = CONCAT44(local_5a8.OtherOperationCount._4_4_,uVar16);
      bVar31 = (LPCVOID)local_5a8.WriteOperationCount == (LPCVOID)0x0;
    }
    else {
      bVar31 = true;
    }
    local_5a8.ReadOperationCount._1_7_ = 0;
    local_5a8.ReadOperationCount._0_1_ = BVar9 == 0;
    _Var20 = *(_FILETIME *)(param_1 + 0x22);
    if (local_100.BaseAddress < (ulonglong)_Var20) {
      _Var20.dwLowDateTime = 0;
      _Var20.dwHighDateTime = 0;
    }
    _Var30 = *(_FILETIME *)(param_1 + 0x23);
    _Var28 = *(_FILETIME *)(param_1 + 0x20);
    _Var25 = *(_FILETIME *)(param_1 + 0x21);
    *(_FILETIME *)(param_1 + 0x21) = local_88;
    *(_FILETIME *)(param_1 + 0x20) = local_130;
    *(_FILETIME *)(param_1 + 0x23) = local_870;
    *(PVOID *)(param_1 + 0x22) = local_100.BaseAddress;
    if ((ulonglong)local_870 < (ulonglong)_Var30) {
      _Var30.dwLowDateTime = 0;
      _Var30.dwHighDateTime = 0;
    }
    uVar21 = 0xffffffffffffffff;
    if (!CARRY8((longlong)local_870 - (longlong)_Var30,
                (longlong)local_100.BaseAddress - (longlong)_Var20)) {
      uVar21 = ((longlong)local_870 - (longlong)_Var30) +
               ((longlong)local_100.BaseAddress - (longlong)_Var20);
    }
    if (uVar21 == 0) {
      *(undefined4 *)(param_1 + 0x2a) = 0;
    }
    else {
      if ((ulonglong)local_130 < (ulonglong)_Var28) {
        _Var28.dwLowDateTime = 0;
        _Var28.dwHighDateTime = 0;
      }
      if ((ulonglong)local_88 < (ulonglong)_Var25) {
        _Var25.dwLowDateTime = 0;
        _Var25.dwHighDateTime = 0;
      }
      uVar18 = 0xffffffffffffffff;
      if (!CARRY8((longlong)local_88 - (longlong)_Var25,(longlong)local_130 - (longlong)_Var28)) {
        uVar18 = ((longlong)local_88 - (longlong)_Var25) + ((longlong)local_130 - (longlong)_Var28);
      }
      *(float *)(local_70 + 0x2a) = ((float)uVar18 / (float)uVar21) * 100.0 * (float)param_3;
      param_1 = local_70;
    }
    if (!bVar31) {
      FUN_180111960(&local_5a8.WriteOperationCount);
    }
  }
  if ((param_2[1] != '\0') && (param_1[0x1f] != 0)) {
    lpIoCounters = &local_5a8;
    BVar9 = GetProcessIoCounters(*(HANDLE *)(param_1[0x1f] + 0x10),lpIoCounters);
    DVar17 = (DWORD)lpIoCounters;
    if (BVar9 == 0) {
      pvStack_868 = (LPCVOID)FUN_1801c9650();
      local_870.dwLowDateTime = 1;
      local_870.dwHighDateTime = 0;
      local_860 = DVar17;
      if (pvStack_868 != (LPCVOID)0x0) {
        FUN_180111960(&pvStack_868);
      }
    }
    else {
      param_1[0x26] = param_1[0x28];
      param_1[0x27] = param_1[0x29];
      param_1[0x28] = local_5a8.ReadTransferCount;
      param_1[0x29] = local_5a8.WriteTransferCount;
    }
  }
  if (param_2[2] != '\0') {
    param_1[0x1d] = *(ulonglong *)(param_6 + 0x90);
    param_1[0x1e] = *(ulonglong *)(param_6 + 0x78);
  }
  puVar23 = param_1;
  if (((param_1[0x1f] != 0) && (param_2[3] != '\0')) &&
     ((p_Var29 = (_FILETIME *)(param_1 + 0x10), param_2[3] == '\x01' ||
      (SBORROW8(0,(longlong)*p_Var29))))) {
    local_d0.dwLowDateTime = 0;
    local_d0.dwHighDateTime = 0;
    iVar10 = 8;
    BVar9 = OpenProcessToken(*(HANDLE *)(param_1[0x1f] + 0x10),8,(PHANDLE)&local_d0);
    _Var20 = local_d0;
    if (BVar9 != 0) {
      if ((longlong)local_d0 + 1U < 2) goto LAB_1801bc4bf;
      local_100.BaseAddress = (PVOID)local_d0;
      local_88 = (_FILETIME)((ulonglong)local_88 & 0xffffffff00000000);
      iVar10 = 1;
      BVar9 = GetTokenInformation((HANDLE)local_d0,TokenUser,(LPVOID)0x0,0,&local_88.dwLowDateTime);
      if (BVar9 == 0) {
        local_5a8.ReadOperationCount = FUN_1801c9650();
        local_5a8.WriteOperationCount = CONCAT44(local_5a8.WriteOperationCount._4_4_,iVar10);
        if (iVar10 == -0x7ff8ff86) {
          if ((_FILETIME)local_5a8.ReadOperationCount != (_FILETIME)0x0) {
            FUN_180111960(&local_5a8);
          }
          goto LAB_1801bc348;
        }
        if ((_FILETIME)local_5a8.ReadOperationCount != (_FILETIME)0x0) {
          FUN_180111960(&local_5a8);
        }
      }
      else {
LAB_1801bc348:
        DVar17 = local_88.dwLowDateTime;
        pvVar11 = GetProcessHeap();
        if ((longlong)pvVar11 - 1U < 0xfffffffffffffffe) {
          iVar10 = 8;
          puVar12 = HeapAlloc(pvVar11,8,(ulonglong)DVar17);
          puVar23 = local_70;
          if (puVar12 != (undefined8 *)0x0) {
            iVar10 = 1;
            BVar9 = GetTokenInformation((HANDLE)_Var20,TokenUser,puVar12,local_88.dwLowDateTime,
                                        &local_88.dwLowDateTime);
            local_b8 = puVar12;
            if (BVar9 != 0) {
              FUN_1801bf840(&local_870,*puVar12);
              puVar12 = local_b8;
              if (!SBORROW8(0,(longlong)local_870)) {
                local_5a8.OtherOperationCount = CONCAT44(uStack_85c,local_860);
                local_5a8.ReadOperationCount._0_4_ = local_870.dwLowDateTime;
                local_5a8.ReadOperationCount._4_4_ = local_870.dwHighDateTime;
                local_5a8.WriteOperationCount = (ULONGLONG)pvStack_868;
                if (((ulonglong)*p_Var29 & 0x7fffffffffffffff) != 0) {
                  thunk_FUN_1801d3330(puVar23[0x11],*p_Var29,1);
                }
                param_1[0x12] = local_5a8.OtherOperationCount;
                p_Var29->dwLowDateTime = (undefined4)local_5a8.ReadOperationCount;
                p_Var29->dwHighDateTime = local_5a8.ReadOperationCount._4_4_;
                param_1[0x11] = local_5a8.WriteOperationCount;
              }
              FUN_1801bb990(puVar12);
              FUN_1801bf7f0(&local_100);
              goto LAB_1801bc4bf;
            }
            local_5a8.ReadOperationCount = FUN_1801c9650();
            local_5a8.WriteOperationCount = CONCAT44(local_5a8.WriteOperationCount._4_4_,iVar10);
            if ((_FILETIME)local_5a8.ReadOperationCount != (_FILETIME)0x0) {
              FUN_180111960(&local_5a8);
            }
            FUN_1801bb990(local_b8);
          }
        }
        else {
          local_5a8.WriteOperationCount = FUN_1801c9650();
          puVar23 = local_70;
          local_5a8.OtherOperationCount = CONCAT44(local_5a8.OtherOperationCount._4_4_,iVar10);
          local_5a8.ReadOperationCount._0_4_ = 1;
          local_5a8.ReadOperationCount._4_4_ = 0;
          if ((LPCVOID)local_5a8.WriteOperationCount != (LPCVOID)0x0) {
            FUN_180111960(&local_5a8.WriteOperationCount);
          }
        }
      }
      BVar9 = CloseHandle((HANDLE)_Var20);
      if (BVar9 != 0) goto LAB_1801bc4bf;
    }
    local_5a8.WriteOperationCount = FUN_1801c9650();
    local_5a8.OtherOperationCount = CONCAT44(local_5a8.OtherOperationCount._4_4_,iVar10);
    local_5a8.ReadOperationCount._0_4_ = 1;
    local_5a8.ReadOperationCount._4_4_ = 0;
    if ((LPCVOID)local_5a8.WriteOperationCount != (LPCVOID)0x0) {
      FUN_180111960(&local_5a8.WriteOperationCount);
    }
  }
LAB_1801bc4bf:
  bVar14 = param_2[4];
  bVar3 = param_2[5];
  local_b0.dwLowDateTime._0_1_ = bVar3;
  cVar4 = param_2[6];
  cVar5 = param_2[7];
  bVar31 = true;
  local_b8 = (undefined8 *)param_4;
  if ((((cVar5 == '\0') || ((cVar5 != '\x01' && (puVar23[8] != 0)))) &&
      ((cVar4 == '\0' || ((cVar4 != '\x01' && (puVar23[0xb] != 0)))))) &&
     ((bVar14 == 0 || ((bVar14 != 1 && (!SBORROW8(0,puVar23[0x13]))))))) {
    if (bVar3 == 0) {
      bVar31 = false;
      bVar8 = param_5;
    }
    else {
      if (bVar3 == 1) goto LAB_1801bc561;
      bVar31 = SBORROW8(0,puVar23[0x17]);
      bVar8 = param_5 | bVar31;
    }
    if (bVar8 != 1) goto LAB_1801bce12;
  }
LAB_1801bc561:
  if (puVar23[0x1f] == 0) goto LAB_1801bce12;
  local_98.dwLowDateTime = (uint)bVar14;
  local_a8.dwLowDateTime = (uint)bVar3;
  local_80 = *(_FILETIME *)(puVar23[0x1f] + 0x10);
  local_61 = bVar14;
  iVar10 = NtQueryInformationProcess(local_80,0x1a,&local_88,8,0);
  _Var20 = local_88;
  if (-1 < iVar10) {
    if ((~param_5 & local_88 != (_FILETIME)0x0) == 0) {
      iVar10 = NtQueryInformationProcess(local_80,0,&local_5a8,0x30,0);
      _Var30 = local_80;
      if (-1 < iVar10) {
        *local_70 = (ulonglong)(local_5a8.OtherTransferCount != 0);
        local_70[1] = local_5a8.OtherTransferCount;
        if (bVar31) {
          if (_Var20 == (_FILETIME)0x0) {
            pvVar19 = (LPCVOID)local_5a8.WriteOperationCount;
            BVar9 = ReadProcessMemory((HANDLE)local_80,(LPCVOID)local_5a8.WriteOperationCount,
                                      &local_870,0x2c8,(SIZE_T *)0x0);
            uVar16 = SUB84(pvVar19,0);
            if (BVar9 == 0) {
              local_5a8.WriteOperationCount = FUN_1801c9650();
              local_5a8.OtherOperationCount = CONCAT44(local_5a8.OtherOperationCount._4_4_,uVar16);
              local_5a8.ReadOperationCount._0_4_ = 1;
              local_5a8.ReadOperationCount._4_4_ = 0;
              if ((LPCVOID)local_5a8.WriteOperationCount != (LPCVOID)0x0) {
                FUN_180111960(&local_5a8.WriteOperationCount);
              }
            }
            else {
              pvVar19 = (LPCVOID)CONCAT26(uStack_84a,CONCAT24(uStack_84c,local_850));
              BVar9 = ReadProcessMemory((HANDLE)_Var30,pvVar19,&local_5a8,0x410,(SIZE_T *)0x0);
              puVar23 = local_70;
              DVar17 = (DWORD)pvVar19;
              if (BVar9 != 0) {
                local_128 = CONCAT62(local_128._2_6_,local_570);
                local_120 = local_568;
                local_78 = local_528;
                FUN_1801bd560(local_538,local_530,_Var30,cVar5,local_70 + 6);
                FUN_1801bd780(local_78,_Var30,cVar4,puVar23 + 9);
                FUN_1801bdc50(local_128 & 0xffff,local_120,_Var30,local_61,
                              (ulonglong)local_b0.dwLowDateTime,puVar23 + 0x13,puVar23 + 0x17);
                goto LAB_1801bc73f;
              }
LAB_1801bc886:
              local_100.AllocationBase = (PVOID)FUN_1801c9650();
              local_100.BaseAddress = (PVOID)0x1;
              local_100.AllocationProtect = DVar17;
              if ((_FILETIME)local_100.AllocationBase != (_FILETIME)0x0) {
                FUN_180111960(&local_100.AllocationBase);
              }
            }
          }
          else {
LAB_1801bc73f:
            _Var30 = local_80;
            BVar9 = ReadProcessMemory((HANDLE)local_80,(LPCVOID)_Var20,&local_5a8,0x470,
                                      (SIZE_T *)0x0);
            DVar17 = _Var20.dwLowDateTime;
            if (BVar9 == 0) {
              pvStack_868 = (LPCVOID)FUN_1801c9650();
              local_870.dwLowDateTime = 1;
              local_870.dwHighDateTime = 0;
              local_860 = DVar17;
              if (pvStack_868 != (LPCVOID)0x0) {
                FUN_180111960(&pvStack_868);
              }
            }
            else {
              DVar17 = (DWORD)local_5a8.OtherOperationCount;
              BVar9 = ReadProcessMemory((HANDLE)_Var30,
                                        (LPCVOID)(local_5a8.OtherOperationCount & 0xffffffff),
                                        &local_870,0x2a4,(SIZE_T *)0x0);
              if (BVar9 == 0) goto LAB_1801bc886;
              local_128 = (ulonglong)uStack_84c;
              local_120 = (ulonglong)local_848;
              pvVar19 = (LPCVOID)(ulonglong)local_828;
              puVar23 = local_70;
              if ((cVar5 != '\0') && ((cVar5 == '\x01' || (local_70[8] == 0)))) {
                if (DAT_1802fd548 != 0) {
                  FUN_1801fcfb2(&DAT_1802fd548);
                  _Var30 = local_80;
                }
                p_Var29 = (_FILETIME *)(local_70 + 6);
                local_78 = p_Var29;
                if (DAT_1802fd54c == '\0') {
                  FUN_1801bded0(&local_100,_Var30,local_82c,local_830);
                  if (SBORROW8(0,(longlong)local_100.BaseAddress)) {
                    local_d0.dwLowDateTime = 0;
                    local_d0.dwHighDateTime = 0;
                    _Stack_c8.dwLowDateTime = 8;
                    _Stack_c8.dwHighDateTime = 0;
                    local_c0.dwLowDateTime = 0;
                    local_c0.dwHighDateTime = 0;
                  }
                  else {
                    local_90 = (_FILETIME)local_100.BaseAddress;
                    local_a0 = (_FILETIME)local_100.AllocationBase;
                    FUN_1801be060(&local_d0);
                    if (local_90 != (_FILETIME)0x0) {
                      thunk_FUN_1801d3330(local_a0,(longlong)local_90 * 2,2);
                    }
                  }
                  FUN_1801bb120(p_Var29);
                  puVar23 = local_70;
                  p_Var29 = local_78;
                  if (*local_78 != (_FILETIME)0x0) {
                    thunk_FUN_1801d3330(local_70[7],(longlong)*local_78 << 5,8);
                  }
                  p_Var29[2] = local_c0;
                  _Var20 = local_d0;
                  _Var28 = _Stack_c8;
                }
                else {
                  FUN_1801bdab0();
                  FUN_1801bb120(p_Var29);
                  puVar23 = local_70;
                  p_Var29 = local_78;
                  if (*local_78 != (_FILETIME)0x0) {
                    thunk_FUN_1801d3330(local_70[7],(longlong)*local_78 << 5,8);
                  }
                  _Var7.dwHighDateTime = local_100._20_4_;
                  _Var7.dwLowDateTime = local_100.AllocationProtect;
                  p_Var29[2] = _Var7;
                  _Var20 = (_FILETIME)local_100.BaseAddress;
                  _Var28 = (_FILETIME)local_100.AllocationBase;
                }
                *p_Var29 = _Var20;
                p_Var29[1] = _Var28;
              }
              if ((cVar4 != '\0') && ((cVar4 == '\x01' || (puVar23[0xb] == 0)))) {
                p_Var29 = (_FILETIME *)(puVar23 + 9);
                SVar13 = VirtualQueryEx((HANDLE)_Var30,pvVar19,&local_100,0x30);
                local_78 = p_Var29;
                if ((SVar13 == 0) ||
                   (FUN_1801bded0(&local_d0,_Var30,pvVar19,
                                  ((longlong)local_100.BaseAddress - (longlong)pvVar19) +
                                  local_100.RegionSize), _Var20 = local_c0,
                   SBORROW8(0,(longlong)local_d0))) {
                  FUN_1801bb120(p_Var29);
                  puVar23 = local_70;
                  if (*local_78 != (_FILETIME)0x0) {
                    thunk_FUN_1801d3330(local_70[10],(longlong)*local_78 << 5,8);
                  }
                  puVar23[9] = 0;
                  puVar23[10] = 8;
                  puVar23[0xb] = 0;
                }
                else {
                  local_a0 = local_d0;
                  local_90 = _Stack_c8;
                  uVar21 = puVar23[0xb];
                  puVar23[0xb] = 0;
                  if (uVar21 != 0) {
                    puVar12 = (undefined8 *)(puVar23[10] + 8);
                    do {
                      if (puVar12[-1] != 0) {
                        thunk_FUN_1801d3330(*puVar12,puVar12[-1],1);
                      }
                      puVar12 = puVar12 + 4;
                      uVar21 = uVar21 - 1;
                    } while (uVar21 != 0);
                  }
                  _Var22.dwLowDateTime = 0;
                  _Var22.dwHighDateTime = 0;
                  while( true ) {
                    puVar23 = local_70;
                    _Var30 = local_80;
                    if ((longlong)_Var22 * 2 == (longlong)_Var20 * 2) break;
                    pvVar11 = (HANDLE)((longlong)local_90 + (longlong)_Var22 * 2);
                    lVar15 = 0;
                    uVar21 = 0;
                    while (*(short *)((longlong)pvVar11 + uVar21 * 2) != 0) {
                      uVar21 = uVar21 + 1;
                      lVar15 = lVar15 + -2;
                      if ((longlong)_Var22 * 2 + (longlong)_Var20 * -2 == lVar15)
                      goto LAB_1801bcbeb;
                    }
                    if ((CARRY8((ulonglong)_Var22,uVar21)) ||
                       ((ulonglong)_Var20 < (longlong)_Var22 + uVar21)) {
                    /* WARNING: Subroutine does not return */
                      FUN_180201a30(_Var22,(longlong)_Var22 + uVar21,_Var20,
                                    &PTR_s_C__Users_burne__cargo_registry_s_180286b90);
                    }
                    lVar27 = 0;
                    do {
                      if (lVar15 + lVar27 == 0) goto LAB_1801bcbeb;
                      psVar1 = (short *)((longlong)pvVar11 + lVar27);
                      lVar27 = lVar27 + 2;
                    } while (*psVar1 != 0x3d);
                    FUN_1801e5470(&local_100,pvVar11,uVar21);
                    uVar18 = local_70[0xb];
                    if (uVar18 == local_70[9]) {
                      FUN_180200d10(local_78);
                    }
                    uVar6 = local_70[10];
                    puVar12 = (undefined8 *)(uVar6 + 0x10 + uVar18 * 0x20);
                    *puVar12 = CONCAT44(local_100._20_4_,local_100.AllocationProtect);
                    puVar12[1] = local_100.RegionSize;
                    p_Var29 = (_FILETIME *)(uVar6 + uVar18 * 0x20);
                    *p_Var29 = (_FILETIME)local_100.BaseAddress;
                    p_Var29[1] = (_FILETIME)local_100.AllocationBase;
                    local_70[0xb] = uVar18 + 1;
                    _Var22 = (_FILETIME)((longlong)_Var22 + uVar21 + 1);
                    if ((ulonglong)_Var20 < (ulonglong)_Var22) {
                    /* WARNING: Subroutine does not return */
                      FUN_180201a30(_Var22,_Var20,_Var20,
                                    &PTR_s_C__Users_burne__cargo_registry_s_180286ba8);
                    }
                  }
LAB_1801bcbeb:
                  if (local_a0 != (_FILETIME)0x0) {
                    thunk_FUN_1801d3330(local_90,(longlong)local_a0 * 2,2);
                  }
                }
              }
              DVar17 = local_b0.dwLowDateTime;
              if (local_61 == 0) {
                bVar31 = false;
              }
              else if (local_98.dwLowDateTime == 1) {
                bVar31 = true;
              }
              else {
                bVar31 = SBORROW8(0,puVar23[0x13]);
              }
              if ((byte)local_b0.dwLowDateTime == '\0') {
                bVar32 = false;
LAB_1801bcc6d:
                if (!(bool)(bVar32 | bVar31)) goto LAB_1801bce0b;
              }
              else if (local_a8.dwLowDateTime != 1) {
                bVar32 = SBORROW8(0,puVar23[0x17]);
                goto LAB_1801bcc6d;
              }
              FUN_1801bded0(&local_d0,_Var30,local_120,local_128);
              puVar24 = local_70;
              if (SBORROW8(0,(longlong)local_d0)) {
                uVar21 = local_70[0x13];
                if ((!SBORROW8(0,uVar21)) && (uVar21 != 0)) {
                  thunk_FUN_1801d3330(local_70[0x14],uVar21,1);
                }
                puVar24[0x13] = 0x8000000000000000;
              }
              else {
                local_80 = local_d0;
                if (local_c0 == (_FILETIME)0x0) {
                  _Var26.dwLowDateTime = 0;
                  _Var26.dwHighDateTime = 0;
                }
                else {
                  lVar15 = (longlong)local_c0 * 2;
                  _Var26.dwLowDateTime = 0;
                  _Var26.dwHighDateTime = 0;
                  do {
                    if (*(short *)((longlong)_Stack_c8 + (longlong)_Var26 * 2) == 0)
                    goto LAB_1801bcd1d;
                    _Var26 = (_FILETIME)((longlong)_Var26 + 1);
                    lVar15 = lVar15 + -2;
                  } while (lVar15 != 0);
                  _Var26 = local_c0;
                }
LAB_1801bcd1d:
                local_a8 = _Stack_c8;
                FUN_1801e5470(&local_100,_Stack_c8,_Var26);
                local_98 = (_FILETIME)local_100.BaseAddress;
                uVar21 = CONCAT44(local_100._20_4_,local_100.AllocationProtect);
                local_b0 = (_FILETIME)local_100.AllocationBase;
                FUN_1801bbae0((ulonglong)DVar17,local_100.AllocationBase,
                              CONCAT44(local_100._20_4_,local_100.AllocationProtect),puVar23 + 0x17)
                ;
                puVar23 = local_70;
                _Var30 = local_80;
                _Var20 = local_a8;
                if (bVar31) {
                  uVar18 = local_70[0x13];
                  if ((!SBORROW8(0,uVar18)) && (uVar18 != 0)) {
                    thunk_FUN_1801d3330(local_70[0x14],uVar18,1);
                  }
                  *(_FILETIME *)(puVar23 + 0x13) = local_98;
                  *(_FILETIME *)(puVar23 + 0x14) = local_b0;
                  puVar23[0x15] = uVar21;
                  puVar23[0x16] = local_100.RegionSize;
                  _Var20 = local_a8;
                }
                else if (local_98 != (_FILETIME)0x0) {
                  thunk_FUN_1801d3330(local_b0,local_98,1);
                }
                if (_Var30 != (_FILETIME)0x0) {
                  thunk_FUN_1801d3330(_Var20,(longlong)_Var30 * 2,2);
                }
              }
            }
          }
        }
      }
    }
    else if (bVar31) goto LAB_1801bc73f;
  }
LAB_1801bce0b:
  puVar23 = local_70;
LAB_1801bce12:
  puVar12 = local_b8;
  puVar24 = puVar23;
  if ((param_2[8] != '\0') &&
     ((p_Var29 = (_FILETIME *)(puVar23 + 0xc), param_2[8] == '\x01' ||
      (SBORROW8(0,(longlong)*p_Var29))))) {
    if (puVar23[0x1f] == 0) {
      local_870.dwLowDateTime = 0;
      local_870.dwHighDateTime = 0x80000000;
      _Var20 = *p_Var29;
    }
    else {
      pvVar11 = *(HANDLE *)(puVar23[0x1f] + 0x10);
      memset(&local_5a8,0,0x20a);
      GetModuleFileNameExW(pvVar11,(HMODULE)0x0,(LPWSTR)&local_5a8,0x105);
      puVar24 = local_70;
      lVar15 = -8;
      do {
        auVar2 = *(undefined1 (*) [16])((longlong)&local_5a8.OtherOperationCount + lVar15 * 2);
        auVar34._0_2_ = -(ushort)(auVar2._0_2_ == 0);
        auVar34._2_2_ = -(ushort)(auVar2._2_2_ == 0);
        auVar34._4_2_ = -(ushort)(auVar2._4_2_ == 0);
        auVar34._6_2_ = -(ushort)(auVar2._6_2_ == 0);
        auVar34._8_2_ = -(ushort)(auVar2._8_2_ == 0);
        auVar34._10_2_ = -(ushort)(auVar2._10_2_ == 0);
        auVar34._12_2_ = -(ushort)(auVar2._12_2_ == 0);
        auVar34._14_2_ = -(ushort)(auVar2._14_2_ == 0);
        lVar27 = lVar15 + 8;
        if ((((((((((((((((SUB161(auVar34 >> 7,0) & 1) != 0 || (SUB161(auVar34 >> 0xf,0) & 1) != 0)
                        || (SUB161(auVar34 >> 0x17,0) & 1) != 0) ||
                       (SUB161(auVar34 >> 0x1f,0) & 1) != 0) || (SUB161(auVar34 >> 0x27,0) & 1) != 0
                      ) || (SUB161(auVar34 >> 0x2f,0) & 1) != 0) ||
                    (SUB161(auVar34 >> 0x37,0) & 1) != 0) || (SUB161(auVar34 >> 0x3f,0) & 1) != 0)
                  || (SUB161(auVar34 >> 0x47,0) & 1) != 0) || (SUB161(auVar34 >> 0x4f,0) & 1) != 0)
                || (SUB161(auVar34 >> 0x57,0) & 1) != 0) || (SUB161(auVar34 >> 0x5f,0) & 1) != 0) ||
              (SUB161(auVar34 >> 0x67,0) & 1) != 0) || (SUB161(auVar34 >> 0x6f,0) & 1) != 0) ||
            (auVar34._14_2_ >> 7 & 1) != 0) || (auVar34._14_2_ & 0x8000) != 0) break;
        bVar31 = lVar15 != 0xf0;
        lVar15 = lVar27;
      } while (bVar31);
      auVar34 = packsswb(auVar34,auVar34);
      if ((((((((SUB161(auVar34 >> 7,0) & 1) == 0 && (SUB161(auVar34 >> 0xf,0) & 1) == 0) &&
              (SUB161(auVar34 >> 0x17,0) & 1) == 0) && (SUB161(auVar34 >> 0x1f,0) & 1) == 0) &&
            (SUB161(auVar34 >> 0x27,0) & 1) == 0) && (SUB161(auVar34 >> 0x2f,0) & 1) == 0) &&
          (SUB161(auVar34 >> 0x37,0) & 1) == 0) && (SUB161(auVar34 >> 0x3f,0) & 1) == 0) {
        if (local_3a8 == 0) {
          lVar27 = 0x100;
        }
        else if (local_3a6 == 0) {
          lVar27 = 0x101;
        }
        else if (local_3a4 == 0) {
          lVar27 = 0x102;
        }
        else if (local_3a2 == 0) {
          lVar27 = 0x103;
        }
        else {
          lVar27 = 0x105;
          if (local_3a0 == 0) {
            lVar27 = 0x104;
          }
        }
      }
      else {
        auVar33._0_2_ = -(ushort)(auVar2._0_2_ == 0);
        auVar33._2_2_ = -(ushort)(auVar2._2_2_ == 0);
        auVar33._4_2_ = -(ushort)(auVar2._4_2_ == 0);
        auVar33._6_2_ = -(ushort)(auVar2._6_2_ == 0);
        auVar33._8_2_ = -(ushort)(auVar2._8_2_ == 0);
        auVar33._10_2_ = -(ushort)(auVar2._10_2_ == 0);
        auVar33._12_2_ = -(ushort)(auVar2._12_2_ == 0);
        auVar33._14_2_ = -(ushort)(auVar2._14_2_ == 0);
        local_118 = packsswb(auVar33,auVar33);
        local_118 = local_118 & _DAT_180238a30;
        bVar14 = local_118[1];
        if (local_118[1] < local_118[0]) {
          bVar14 = local_118[0];
        }
        if (bVar14 <= local_118[2]) {
          bVar14 = local_118[2];
        }
        if (bVar14 <= local_118[3]) {
          bVar14 = local_118[3];
        }
        if (bVar14 <= local_118[4]) {
          bVar14 = local_118[4];
        }
        if (bVar14 <= local_118[5]) {
          bVar14 = local_118[5];
        }
        if (bVar14 <= local_118[6]) {
          bVar14 = local_118[6];
        }
        if (bVar14 <= local_118[7]) {
          bVar14 = local_118[7];
        }
        lVar27 = (ulonglong)(byte)(8 - bVar14) + lVar27;
      }
      FUN_1801e5470(&local_870,&local_5a8,lVar27);
      _Var20 = *p_Var29;
    }
    if ((!SBORROW8(0,(longlong)_Var20)) && (_Var20 != (_FILETIME)0x0)) {
      thunk_FUN_1801d3330(puVar24[0xd],_Var20,1);
    }
    puVar23[0xe] = CONCAT44(uStack_85c,local_860);
    puVar23[0xf] = uStack_858;
    *p_Var29 = local_870;
    puVar23[0xd] = (ulonglong)pvStack_868;
  }
  uVar21 = 0;
  if (puVar24[0x24] <= puVar12) {
    uVar21 = (longlong)puVar12 - puVar24[0x24];
  }
  puVar24[0x25] = uVar21;
  *(undefined1 *)((longlong)puVar24 + 0x154) = 1;
  return;
}


