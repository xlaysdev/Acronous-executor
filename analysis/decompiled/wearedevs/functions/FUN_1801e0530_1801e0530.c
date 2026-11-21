/* FUN_1801e0530 @ 1801e0530 */

longlong * FUN_1801e0530(void)

{
  char *pcVar1;
  byte *pbVar2;
  char cVar3;
  byte bVar4;
  longlong lVar5;
  ulonglong uVar6;
  code *pcVar7;
  int iVar8;
  longlong *plVar9;
  longlong *plVar10;
  longlong *local_50;
  undefined1 local_41;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  plVar9 = *(longlong **)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  uVar6 = plVar9[0x26];
  if (uVar6 < 3) {
    plVar9 = (longlong *)FUN_180200920(uVar6);
    LOCK();
    plVar10 = plVar9 + 5;
    *(char *)plVar10 = (char)*plVar10 + -1;
    cVar3 = (char)*plVar10;
    UNLOCK();
    plVar10 = plVar9;
  }
  else {
    LOCK();
    plVar10 = (longlong *)(uVar6 - 0x10);
    lVar5 = *plVar10;
    *plVar10 = *plVar10 + 1;
    UNLOCK();
    if (*plVar10 == 0 || SCARRY8(lVar5,1) != *plVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)invalidInstructionException();
      (*pcVar7)();
    }
    plVar10 = (longlong *)(uVar6 - 0x10);
    LOCK();
    pcVar1 = (char *)(uVar6 + 0x18);
    *pcVar1 = *pcVar1 + -1;
    cVar3 = *pcVar1;
    UNLOCK();
  }
  local_50 = plVar10;
  if (cVar3 != '\0') {
    pbVar2 = (byte *)(plVar10 + 5);
    do {
      local_41 = 0xff;
      iVar8 = WaitOnAddress(pbVar2,&local_41,1,0xffffffff);
      if (iVar8 != 1) {
        GetLastError();
      }
      plVar9 = (longlong *)0x1;
      LOCK();
      bVar4 = *pbVar2;
      if (bVar4 == 1) {
        *pbVar2 = 0;
      }
      else {
        plVar9 = (longlong *)(ulonglong)bVar4;
      }
      UNLOCK();
    } while (bVar4 != 1);
  }
  LOCK();
  *plVar10 = *plVar10 + -1;
  UNLOCK();
  if (*plVar10 == 0) {
    plVar9 = (longlong *)FUN_1801e3970(&local_50);
  }
  return plVar9;
}


