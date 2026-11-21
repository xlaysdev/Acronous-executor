/* FUN_1801e5aa0 @ 1801e5aa0 */

undefined8 * FUN_1801e5aa0(undefined8 *param_1,int *param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  HANDLE hFindFile;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int iVar9;
  DWORD DVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  _WIN32_FIND_DATAW local_288;
  
  if (*param_2 == 1) {
    sVar2 = (short)param_2[0x12];
    sVar3 = *(short *)((longlong)param_2 + 0x4a);
    iVar9 = param_2[0x13];
    bVar1 = *(byte *)(param_2 + 6);
    param_2[6] = 0;
    plVar13 = *(longlong **)(param_2 + 4);
    if ((((bVar1 & 1) == 0) || (sVar2 == 0x2e && sVar3 == 0)) ||
       ((sVar3 == 0x2e && sVar2 == 0x2e) && (short)iVar9 == 0)) {
      memset(&local_288,0,0x250);
      hFindFile = *(HANDLE *)(param_2 + 2);
      iVar9 = FindNextFileW(hFindFile,&local_288);
      while (iVar9 != 0) {
        if ((local_288.cFileName[0] != L'.' || local_288.cFileName[1] != L'\0') &&
           (((local_288.cFileName[0] != L'.' || (local_288.cFileName[1] != L'.')) ||
            (local_288.cFileName[2] != L'\0')))) {
          LOCK();
          lVar11 = *plVar13;
          *plVar13 = *plVar13 + 1;
          UNLOCK();
          if (*plVar13 == 0 || SCARRY8(lVar11,1) != *plVar13 < 0) goto LAB_1801e5c48;
          memcpy(param_1 + 2,&local_288,0x250);
          lVar11 = 8;
          goto LAB_1801e5bd4;
        }
        iVar9 = FindNextFileW(hFindFile,&local_288);
      }
      FindClose(hFindFile);
      param_2[0] = 0;
      param_2[1] = 0;
      DVar10 = GetLastError();
      if (DVar10 == 0x12) {
        uVar12 = 0;
      }
      else {
        plVar13 = (longlong *)((ulonglong)DVar10 << 0x20 | 2);
        param_1[1] = 0;
        lVar11 = 0x10;
LAB_1801e5bd4:
        *(longlong **)((longlong)param_1 + lVar11) = plVar13;
        uVar12 = 1;
      }
      *param_1 = uVar12;
    }
    else {
      LOCK();
      lVar11 = *plVar13;
      *plVar13 = *plVar13 + 1;
      UNLOCK();
      if (*plVar13 == 0 || SCARRY8(lVar11,1) != *plVar13 < 0) {
LAB_1801e5c48:
                    /* WARNING: Does not return */
        pcVar4 = (code *)invalidInstructionException();
        (*pcVar4)();
      }
      uVar12 = *(undefined8 *)(param_2 + 7);
      uVar5 = *(undefined8 *)(param_2 + 9);
      uVar6 = *(undefined8 *)(param_2 + 0xb);
      uVar7 = *(undefined8 *)(param_2 + 0xd);
      uVar8 = *(undefined8 *)(param_2 + 0x10);
      *(undefined8 *)((longlong)param_1 + 0x2c) = *(undefined8 *)(param_2 + 0xe);
      *(undefined8 *)((longlong)param_1 + 0x34) = uVar8;
      param_1[4] = uVar6;
      param_1[5] = uVar7;
      param_1[2] = uVar12;
      param_1[3] = uVar5;
      memcpy((void *)((longlong)param_1 + 0x42),(void *)((longlong)param_2 + 0x4e),0x21e);
      param_1[1] = plVar13;
      *(short *)((longlong)param_1 + 0x3c) = sVar2;
      *(short *)((longlong)param_1 + 0x3e) = sVar3;
      *(short *)(param_1 + 8) = (short)iVar9;
      *param_1 = 1;
    }
  }
  else {
    *param_1 = 0;
  }
  return param_1;
}


