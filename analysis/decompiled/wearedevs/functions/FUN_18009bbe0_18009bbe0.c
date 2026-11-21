/* FUN_18009bbe0 @ 18009bbe0 */

undefined8 * FUN_18009bbe0(undefined8 *param_1,uint *param_2,longlong *param_3,longlong param_4)

{
  byte *pbVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  LPCWSTR pWVar5;
  BOOL BVar6;
  byte *pbVar7;
  LPCWSTR pWVar8;
  LPCWSTR lpFileName;
  HANDLE hNamedPipe;
  uint uVar9;
  byte *pbVar10;
  uint uVar11;
  byte *pbVar12;
  WCHAR WVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  undefined8 uVar16;
  longlong *local_90;
  longlong local_88;
  ulonglong local_80;
  LPCWSTR local_78;
  ulonglong local_70;
  LPCWSTR local_68;
  ulonglong local_60;
  LPCWSTR local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pbVar12 = (byte *)((longlong)param_3 + param_4 + 0x10);
  pbVar10 = (byte *)(param_3 + 2);
  uVar14 = 1;
  uVar15 = 2;
  uVar11 = 0;
  pbVar7 = pbVar10;
  do {
    if ((short)uVar11 == 0) {
      if (pbVar7 == pbVar12) break;
      bVar3 = *pbVar7;
      if (-1 < (char)bVar3) {
        pbVar7 = pbVar7 + 1;
        goto LAB_18009bc33;
      }
      if (bVar3 < 0xe0) {
        pbVar7 = pbVar7 + 2;
        goto LAB_18009bc33;
      }
      uVar11 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
      if (bVar3 < 0xf0) {
        pbVar7 = pbVar7 + 3;
        uVar11 = uVar11 | (bVar3 & 0x1f) << 0xc;
      }
      else {
        pbVar1 = pbVar7 + 3;
        pbVar7 = pbVar7 + 4;
        uVar11 = *pbVar1 & 0x3f | uVar11 << 6 | (bVar3 & 7) << 0x12;
      }
      if (uVar11 < 0x10000) goto LAB_18009bc33;
      uVar11 = uVar11 & 0x3ff | 0xdc00;
    }
    else {
LAB_18009bc33:
      uVar11 = 0;
    }
    uVar14 = uVar14 + 1;
    uVar15 = uVar15 + 2;
  } while( true );
  local_90 = param_3;
  local_88 = param_4;
  if (0x7ffffffffffffffe < uVar15 || (longlong)uVar14 < 0) {
    uVar16 = 0;
LAB_18009bd02:
                    /* WARNING: Subroutine does not return */
    FUN_18020171e(uVar16,uVar15);
  }
  local_78 = (LPCWSTR)param_2;
  local_58 = (LPCWSTR)param_1;
  if (uVar15 == 0) {
    pWVar8 = (LPCWSTR)0x2;
    uVar14 = 0;
  }
  else {
    FUN_180027490();
    uVar16 = 2;
    pWVar8 = (LPCWSTR)thunk_FUN_1801d32d0(uVar15,2);
    if (pWVar8 == (LPCWSTR)0x0) goto LAB_18009bd02;
  }
  local_60 = 0;
  uVar11 = 0;
  local_70 = uVar14;
  local_68 = pWVar8;
  do {
    uVar14 = local_60;
    if ((short)uVar11 == 0) {
      if (pbVar10 == pbVar12) break;
      bVar3 = *pbVar10;
      WVar13 = (WCHAR)bVar3;
      if (-1 < (char)bVar3) {
        pbVar10 = pbVar10 + 1;
        goto joined_r0x00018009bdcb;
      }
      uVar9 = bVar3 & 0x1f;
      pbVar7 = pbVar10 + 1;
      if (bVar3 < 0xe0) {
        pbVar10 = pbVar10 + 2;
        WVar13 = (ushort)(uVar9 << 6) | (ushort)(*pbVar7 & 0x3f);
        uVar11 = 0;
      }
      else {
        uVar11 = pbVar10[2] & 0x3f | (*pbVar7 & 0x3f) << 6;
        if (bVar3 < 0xf0) {
          pbVar10 = pbVar10 + 3;
          uVar11 = uVar11 | uVar9 << 0xc;
        }
        else {
          pbVar7 = pbVar10 + 3;
          pbVar10 = pbVar10 + 4;
          uVar11 = *pbVar7 & 0x3f | uVar11 << 6 | (bVar3 & 7) << 0x12;
        }
        if (uVar11 < 0x10000) goto LAB_18009bdc5;
        WVar13 = (ushort)(uVar11 + 0xff0000 >> 10) | 0xd800;
        uVar11 = uVar11 & 0x3ff | 0xdc00;
      }
    }
    else {
LAB_18009bdc5:
      WVar13 = (WCHAR)uVar11;
joined_r0x00018009bdcb:
      uVar11 = 0;
    }
    if (local_60 == local_70) {
      uVar15 = ((longlong)pbVar12 - (longlong)pbVar10) + 3;
      if (0xfffffffffffffffc < (ulonglong)((longlong)pbVar12 - (longlong)pbVar10)) {
        uVar15 = 0xffffffffffffffff;
      }
      local_49 = 1;
      FUN_1801f6a80(&local_70,local_60,((uVar15 >> 2) - (ulonglong)((short)uVar11 == 0)) + 2,2,2);
      pWVar8 = local_68;
    }
    pWVar8[uVar14] = WVar13;
    local_60 = uVar14 + 1;
  } while( true );
  if (local_60 == local_70) {
    local_49 = 1;
    FUN_180200ca0(&local_70);
  }
  pWVar8 = local_68;
  local_68[uVar14] = L'\0';
  local_80 = uVar14 + 1;
  local_60 = local_80;
  if (local_80 < local_70) {
    lVar2 = local_70 * 2;
    lVar4 = local_80 * 2;
    lpFileName = (LPCWSTR)thunk_FUN_1801d3370(local_68,lVar2,2,lVar4);
    if (lpFileName == (LPCWSTR)0x0) {
      local_78 = pWVar8;
      local_58 = (LPCWSTR)lVar2;
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(2,lVar4);
    }
    LOCK();
    *local_90 = *local_90 + -1;
    lVar2 = *local_90;
    UNLOCK();
    pWVar8 = local_78;
    pWVar5 = local_58;
  }
  else {
    LOCK();
    *local_90 = *local_90 + -1;
    lVar2 = *local_90;
    UNLOCK();
    pWVar8 = local_78;
    lpFileName = local_68;
    pWVar5 = local_58;
  }
  local_78 = pWVar8;
  local_58 = pWVar5;
  if (lVar2 == 0) {
    FUN_18003dca0(&local_90);
  }
  hNamedPipe = CreateFileW(lpFileName,
                           (uint)*(byte *)((longlong)pWVar8 + 5) << 0x1e |
                           *(uint *)((longlong)pWVar8 + 4) << 0x1f,0,(LPSECURITY_ATTRIBUTES)0x0,3,
                           *(uint *)pWVar8 | 0x40000000,(HANDLE)0x0);
  local_58 = lpFileName;
  if (hNamedPipe == (HANDLE)0xffffffffffffffff) {
    uVar11 = GetLastError();
LAB_18009bfd8:
    *(ulonglong *)((longlong)pWVar5 + 8) = (ulonglong)uVar11 << 0x20 | 2;
    *(undefined8 *)pWVar5 = 2;
  }
  else {
    if (*(char *)((longlong)pWVar8 + 6) != '\0') {
      local_70 = CONCAT44(local_70._4_4_,2);
      BVar6 = SetNamedPipeHandleState(hNamedPipe,(LPDWORD)&local_70,(LPDWORD)0x0,(LPDWORD)0x0);
      if (BVar6 == 0) {
        uVar11 = GetLastError();
        goto LAB_18009bfd8;
      }
    }
    FUN_180178770(pWVar5,hNamedPipe);
  }
  thunk_FUN_1801d3330(local_58,local_80 * 2,2);
  return (undefined8 *)pWVar5;
}


