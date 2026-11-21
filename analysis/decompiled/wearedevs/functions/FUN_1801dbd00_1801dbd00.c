/* FUN_1801dbd00 @ 1801dbd00 */

void FUN_1801dbd00(ulonglong *param_1,ulonglong *param_2,char param_3)

{
  WCHAR WVar1;
  DWORD DVar2;
  DWORD DVar3;
  WCHAR WVar4;
  undefined *_Src;
  ulonglong uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  ulonglong *puVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  LPCWSTR pWVar11;
  ulonglong uVar12;
  ulonglong *puVar13;
  WCHAR *lpBuffer;
  bool bVar14;
  WCHAR local_4a8 [512];
  LPWSTR local_a8;
  int local_a0 [2];
  LPCWSTR local_98;
  undefined8 local_90;
  ulonglong local_88;
  LPWSTR local_80;
  ulonglong local_78;
  LPCWSTR local_70;
  ulonglong *local_68;
  ulonglong *local_60;
  LPWSTR local_58;
  char local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_70 = (LPCWSTR)param_2[1];
  uVar5 = param_2[2];
  if (3 < uVar5) {
    if ((*(longlong *)local_70 == 0x5c003f005c005c) || (*(longlong *)local_70 == 0x5c003f003f005c))
    goto LAB_1801dbddd;
    if (0xf7 < uVar5) goto LAB_1801dbdf0;
    if (local_70[1] == L':') goto LAB_1801dbd9d;
    goto LAB_1801dbdbc;
  }
  if (uVar5 == 0) goto LAB_1801dbdf0;
  if (uVar5 == 3) {
    if (local_70[1] != L':') goto LAB_1801dbdbc;
    if (((local_70[2] == L'\0') && (*local_70 != L'/')) && (*local_70 != L'\\')) goto LAB_1801dbddd;
LAB_1801dbd9d:
    if ((local_70[2] != L'/') && (local_70[2] != L'\\')) goto LAB_1801dbdbc;
    WVar1 = *local_70;
    if ((WVar1 != L'/') && (WVar1 != L'\\')) goto LAB_1801dbddd;
  }
  else {
    if (uVar5 == 1) {
      if (*local_70 != L'\0') goto LAB_1801dbdf0;
      goto LAB_1801dbddd;
    }
LAB_1801dbdbc:
    WVar1 = *local_70;
  }
  if (((WVar1 != L'\\') && (WVar1 != L'/')) || ((local_70[1] != L'\\' && (local_70[1] != L'/')))) {
LAB_1801dbdf0:
    local_88 = 0;
    local_80 = (LPWSTR)0x2;
    local_78 = 0;
    uVar5 = 0x200;
    local_a8 = (LPWSTR)0x2;
    uVar12 = 0;
    uVar9 = 0;
    uVar10 = 0;
    local_68 = param_2;
    local_60 = param_1;
    local_49 = param_3;
LAB_1801dbe6f:
    uVar7 = 0x200;
    lpBuffer = local_4a8;
    do {
      SetLastError(0);
      local_58 = lpBuffer;
      DVar2 = GetFullPathNameW(local_70,(DWORD)uVar5,lpBuffer,(LPWSTR *)0x0);
      uVar6 = (ulonglong)DVar2;
      if ((DVar2 == 0) && (DVar3 = GetLastError(), DVar3 != 0)) {
        DVar2 = GetLastError();
        uVar5 = (ulonglong)DVar2 << 0x20 | 2;
        puVar13 = local_68;
        if (local_88 == 0) {
          puVar8 = local_60;
          goto LAB_1801dc203;
        }
LAB_1801dc1e2:
        puVar8 = local_60;
        thunk_FUN_1801d3330(local_80,local_88 * 2,2);
        if (uVar5 != 0) {
LAB_1801dc203:
          puVar8[1] = uVar5;
          *puVar8 = 0x8000000000000000;
          if (*puVar13 == 0) {
            return;
          }
          thunk_FUN_1801d3330(puVar13[1],*puVar13 * 2,2);
          return;
        }
LAB_1801dc237:
        puVar8[2] = puVar13[2];
        uVar5 = puVar13[1];
        *puVar8 = *puVar13;
        puVar8[1] = uVar5;
        return;
      }
      puVar13 = local_68;
      bVar14 = uVar6 <= uVar5;
      if (uVar5 == uVar6) {
        DVar2 = GetLastError();
        if (DVar2 != 0x7a) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ec0("internal error: entered unreachable code",0x28,
                        &PTR_s_library_std_src_sys_pal_windows__18028f7c8);
        }
        uVar5 = uVar5 * 2;
        if (0xfffffffe < uVar5) {
          uVar5 = 0xffffffff;
        }
      }
      else {
        uVar5 = uVar6;
        if (bVar14) {
          if (uVar7 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar6,uVar7,&PTR_s_library_std_src_sys_pal_windows__18028f7b0);
          }
          local_68[2] = 0;
          pWVar11 = local_70;
          if ((local_49 == '\0') && (DVar2 < 0xf7)) {
            uVar10 = *local_68;
            if (uVar6 < uVar10) {
              uVar5 = 0;
              uVar9 = uVar10;
            }
            else {
              uVar9 = uVar6 + 1;
              FUN_180200d80(local_a0,uVar10,local_70,uVar9,2,2);
              if (local_a0[0] == 1) {
                    /* WARNING: Subroutine does not return */
                FUN_18020171e(local_98,local_90);
              }
              puVar13[1] = (ulonglong)local_98;
              *puVar13 = uVar9;
              uVar5 = 0;
              pWVar11 = local_98;
            }
          }
          else {
            if (DVar2 < 3) {
              if (DVar2 != 2) goto LAB_1801dc15d;
              WVar4 = *local_58;
              WVar1 = local_58[1];
LAB_1801dc03c:
              uVar5 = 0;
              _Src = (undefined *)0x2;
              if ((WVar1 == L'\\') && (WVar4 == L'\\')) {
                uVar6 = uVar6 - 2;
                local_58 = local_58 + 2;
                _Src = &DAT_18028fb40;
                uVar5 = 8;
              }
            }
            else {
              WVar1 = local_58[1];
              if ((WVar1 != L':') || (local_58[2] != L'\\')) {
                WVar4 = *local_58;
                if (DVar2 != 3) {
                  if ((WVar4 != L'\\') || (WVar1 == L'?')) {
LAB_1801dc15d:
                    _Src = (undefined *)0x2;
                    uVar5 = 0;
                    goto LAB_1801dc160;
                  }
                  WVar4 = L'\\';
                  if (WVar1 == L'\\') {
                    WVar1 = L'\\';
                    if (local_58[2] == L'?') {
                      WVar4 = L'\\';
                      if (local_58[3] == L'\\') goto LAB_1801dc15d;
                    }
                    else if (local_58[2] == L'.') {
                      WVar4 = L'\\';
                      if (local_58[3] == L'\\') {
                        uVar6 = uVar6 - 4;
                        local_58 = local_58 + 4;
                        goto LAB_1801dbffc;
                      }
                    }
                    else {
                      WVar4 = L'\\';
                    }
                  }
                }
                goto LAB_1801dc03c;
              }
LAB_1801dbffc:
              _Src = &DAT_18028fb38;
              uVar5 = 4;
            }
LAB_1801dc160:
            uVar10 = *local_68;
            if (uVar6 + uVar5 < uVar10) {
              uVar9 = uVar10;
            }
            else {
              uVar9 = uVar6 + uVar5 + 1;
              FUN_180200d80(local_a0,uVar10,local_70,uVar9,2,2);
              if ((char)local_a0[0] != '\0') {
                    /* WARNING: Subroutine does not return */
                FUN_18020171e(local_98,local_90);
              }
              puVar13[1] = (ulonglong)local_98;
              *puVar13 = uVar9;
              pWVar11 = local_98;
            }
            memcpy(pWVar11,_Src,(ulonglong)(uint)((int)uVar5 * 2));
            puVar13[2] = uVar5;
          }
          if (uVar9 - uVar5 < uVar6) {
            FUN_180200f70(puVar13,uVar5,uVar6,2,2);
            uVar5 = puVar13[2];
            uVar9 = *puVar13;
            pWVar11 = (LPCWSTR)puVar13[1];
          }
          memcpy(pWVar11 + uVar5,local_58,uVar6 * 2);
          uVar5 = uVar5 + uVar6;
          puVar13[2] = uVar5;
          if (uVar5 == uVar9) {
            FUN_180200ca0(puVar13);
            pWVar11 = (LPCWSTR)puVar13[1];
          }
          pWVar11[uVar5] = L'\0';
          puVar13[2] = uVar5 + 1;
          if (local_88 == 0) {
            puVar8 = local_60;
            goto LAB_1801dc237;
          }
          uVar5 = 0;
          goto LAB_1801dc1e2;
        }
      }
      if (uVar5 < 0x201) goto LAB_1801dbe6f;
      uVar7 = uVar9 - uVar10;
      uVar9 = uVar12;
      if (uVar7 < uVar5 - uVar10) {
        FUN_180200f70(&local_88,uVar10,uVar5 - uVar10,2,2);
        local_a8 = local_80;
        uVar9 = local_88;
      }
      uVar5 = 0xffffffff;
      if (uVar9 < 0xffffffff) {
        uVar5 = uVar9;
      }
      uVar7 = uVar5;
      uVar10 = uVar5;
      uVar12 = uVar9;
      lpBuffer = local_a8;
      local_78 = uVar5;
    } while( true );
  }
LAB_1801dbddd:
  param_1[2] = param_2[2];
  uVar5 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar5;
  return;
}


