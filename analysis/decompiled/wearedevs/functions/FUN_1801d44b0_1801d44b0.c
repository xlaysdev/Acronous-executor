/* FUN_1801d44b0 @ 1801d44b0 */

void FUN_1801d44b0(ulonglong param_1,undefined4 *param_2,undefined8 param_3,longlong param_4)

{
  uint uVar1;
  DWORD DVar2;
  FARPROC pFVar3;
  INT_PTR IVar4;
  HANDLE pvVar5;
  ulonglong uVar6;
  LPCWSTR lpString;
  longlong lVar7;
  byte bVar8;
  char cVar9;
  ulonglong uVar10;
  bool bVar11;
  ulonglong local_b8;
  LPCWSTR pWStack_b0;
  ulonglong local_a8;
  char acStack_9b [3];
  ulonglong local_98;
  LPCWSTR pWStack_90;
  ulonglong local_88;
  char acStack_80 [16];
  HANDLE local_70;
  ulonglong local_68;
  LPCWSTR pWStack_60;
  ulonglong local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_70 = DAT_1802fd778;
  if (DAT_1802fd778 == (HANDLE)0x0) {
    local_88._0_1_ = 'a';
    local_88._1_1_ = 'c';
    local_88._2_1_ = 'e';
    local_88._3_1_ = 'M';
    local_88._4_1_ = 'u';
    local_88._5_1_ = 't';
    local_88._6_1_ = 'e';
    local_88._7_1_ = 'x';
    builtin_strncpy(acStack_80,"00000000",9);
    local_98._0_1_ = 'L';
    local_98._1_1_ = 'o';
    local_98._2_1_ = 'c';
    local_98._3_1_ = 'a';
    local_98._4_1_ = 'l';
    local_98._5_1_ = '\\';
    local_98._6_1_ = 'R';
    local_98._7_1_ = 'u';
    pWStack_90 = (LPCWSTR)0x72746b6361427473;
    DVar2 = GetCurrentProcessId();
    if (DVar2 != 0) {
      uVar10 = 0x1f;
      do {
        if (0x20 < uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(0xffffffffffffffff,0x21,&PTR_s_library_std_src_______backtrace__18028eba0);
        }
        bVar8 = (byte)DVar2 & 0xf;
        cVar9 = bVar8 + 0x37;
        if (bVar8 < 10) {
          cVar9 = bVar8 + 0x30;
        }
        acStack_9b[uVar10 + 3] = cVar9;
        if (DVar2 < 0x10) break;
        bVar8 = (byte)(DVar2 >> 4) & 0xf;
        cVar9 = bVar8 + 0x37;
        if (bVar8 < 10) {
          cVar9 = bVar8 + 0x30;
        }
        acStack_9b[uVar10 + 2] = cVar9;
        uVar10 = uVar10 - 2;
        bVar11 = 0xff < DVar2;
        DVar2 = DVar2 >> 8;
      } while (bVar11);
    }
    local_70 = CreateMutexA((LPSECURITY_ATTRIBUTES)0x0,0,(LPCSTR)&local_98);
    if (local_70 == (HANDLE)0x0) {
      return;
    }
    pvVar5 = (HANDLE)0x0;
    LOCK();
    bVar11 = DAT_1802fd778 == (HANDLE)0x0;
    if (bVar11) {
      DAT_1802fd778 = local_70;
    }
    else {
      pvVar5 = DAT_1802fd778;
    }
    UNLOCK();
    if (!bVar11) {
      CloseHandle(local_70);
      local_70 = pvVar5;
    }
  }
  WaitForSingleObjectEx(local_70,0xffffffff,0);
  if ((DAT_1802fd780 == (HMODULE)0x0) &&
     (DAT_1802fd780 = LoadLibraryA("dbghelp.dll"), DAT_1802fd780 == (HMODULE)0x0))
  goto LAB_1801d492b;
  if (DAT_1802fd770 == '\0') {
    if (DAT_1802fd788 == (FARPROC)0x0) {
      pFVar3 = GetProcAddress(DAT_1802fd780,"SymGetOptions");
      if (pFVar3 != (FARPROC)0x0) {
        DAT_1802fd788 = pFVar3;
        goto LAB_1801d4566;
      }
    }
    else {
LAB_1801d4566:
      IVar4 = (*DAT_1802fd788)();
      if (DAT_1802fd790 == (FARPROC)0x0) {
        pFVar3 = GetProcAddress(DAT_1802fd780,"SymSetOptions");
        if (pFVar3 == (FARPROC)0x0) goto LAB_1801d48e3;
        DAT_1802fd790 = pFVar3;
      }
      (*DAT_1802fd790)((ulonglong)((uint)IVar4 | 4));
      if (DAT_1802fd798 == (FARPROC)0x0) {
        pFVar3 = GetProcAddress(DAT_1802fd780,"SymInitializeW");
        if (pFVar3 == (FARPROC)0x0) goto LAB_1801d48e3;
        DAT_1802fd798 = pFVar3;
      }
      pFVar3 = DAT_1802fd798;
      pvVar5 = GetCurrentProcess();
      (*pFVar3)(pvVar5,0,1);
      local_68 = 0;
      pWStack_60 = (LPCWSTR)0x2;
      local_58 = 0;
      local_49 = 1;
      FUN_180200f70(&local_68,0,0x400,2,2);
      uVar10 = local_58;
      lpString = pWStack_60;
      memset(pWStack_60 + local_58,0,0x7fe);
      lpString[uVar10 + 0x3ff] = L'\0';
      uVar10 = uVar10 + 0x400;
      local_58 = uVar10;
      if (DAT_1802fd7a0 == (FARPROC)0x0) {
        pFVar3 = GetProcAddress(DAT_1802fd780,"SymGetSearchPathW");
        if (pFVar3 != (FARPROC)0x0) {
          DAT_1802fd7a0 = pFVar3;
          goto LAB_1801d4689;
        }
        if (local_68 == 0) goto LAB_1801d48e3;
        uVar6 = local_68;
      }
      else {
LAB_1801d4689:
        pFVar3 = DAT_1802fd7a0;
        pvVar5 = GetCurrentProcess();
        IVar4 = (*pFVar3)(pvVar5,lpString,uVar10 & 0xffffffff);
        if ((int)IVar4 == 1) {
          uVar1 = lstrlenW(lpString);
          if ((int)uVar1 < 0) {
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ec0("assertion failed: len >= 0",0x1a,
                          &PTR_s_library_std_src_______backtrace__18028eb48);
          }
          uVar6 = (ulonglong)uVar1;
          if (uVar6 <= uVar10) goto LAB_1801d47fd;
        }
        else {
          local_58 = 0;
          if (local_68 == 0) {
            local_49 = 1;
            FUN_180200ca0(&local_68);
            *pWStack_60 = L'.';
            lpString = pWStack_60;
          }
          else {
            *lpString = L'.';
          }
          if (local_68 == 1) {
            local_58 = 1;
            local_49 = 1;
            FUN_180200ca0(&local_68);
            lpString = pWStack_60;
          }
          lpString[1] = L';';
          uVar6 = 2;
LAB_1801d47fd:
          local_58 = uVar6;
        }
        local_a8 = local_58;
        local_b8 = local_68;
        pWStack_b0 = pWStack_60;
        if (DAT_1802fd7b0 == (FARPROC)0x0) {
          pFVar3 = GetProcAddress(DAT_1802fd780,"EnumerateLoadedModulesW64");
          if (pFVar3 != (FARPROC)0x0) {
            DAT_1802fd7b0 = pFVar3;
            goto LAB_1801d4844;
          }
          if (local_b8 == 0) goto LAB_1801d48e3;
          lpString = pWStack_b0;
          uVar6 = local_b8;
        }
        else {
LAB_1801d4844:
          pFVar3 = DAT_1802fd7b0;
          pvVar5 = GetCurrentProcess();
          (*pFVar3)(pvVar5,FUN_1801d3e70,&local_b8);
          uVar10 = local_a8;
          local_98 = local_b8;
          pWStack_90 = pWStack_b0;
          local_88 = local_a8;
          if (local_a8 == local_b8) {
            FUN_180200ca0(&local_98);
          }
          lpString = pWStack_90;
          uVar6 = local_98;
          pWStack_90[uVar10] = L'\0';
          if (DAT_1802fd7a8 == (FARPROC)0x0) {
            pFVar3 = GetProcAddress(DAT_1802fd780,"SymSetSearchPathW");
            if (pFVar3 != (FARPROC)0x0) {
              DAT_1802fd7a8 = pFVar3;
              goto LAB_1801d48bb;
            }
          }
          else {
LAB_1801d48bb:
            pFVar3 = DAT_1802fd7a8;
            pvVar5 = GetCurrentProcess();
            (*pFVar3)(pvVar5,lpString);
          }
          if (uVar6 == 0) goto LAB_1801d48e3;
        }
      }
      thunk_FUN_1801d3330(lpString,uVar6 * 2,2);
    }
LAB_1801d48e3:
    DAT_1802fd770 = '\x01';
  }
  if ((param_1 & 1) == 0) {
    lVar7 = (longlong)param_2 + -1;
    if (param_2 == (undefined4 *)0x0) {
      lVar7 = 0;
    }
    FUN_1801d4080(lVar7,0);
  }
  else {
    FUN_1801d4080(*(undefined8 *)(param_2 + 4),*param_2,param_2[1],param_3,
                  *(undefined8 *)(param_4 + 0x20));
  }
LAB_1801d492b:
  ReleaseMutex(local_70);
  return;
}


