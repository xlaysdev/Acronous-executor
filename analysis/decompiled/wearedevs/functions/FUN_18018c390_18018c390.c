/* FUN_18018c390 @ 18018c390 */

ulonglong FUN_18018c390(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  longlong *plVar4;
  code *pcVar5;
  undefined *puVar6;
  char cVar7;
  DWORD DVar8;
  ulonglong uVar9;
  HANDLE pvVar10;
  ULONG_PTR CompletionKey;
  bool bVar11;
  char *local_60;
  undefined1 local_58;
  undefined8 local_50;
  undefined8 *local_48;
  char *local_40;
  uint local_38;
  undefined1 local_31;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar2 = *param_1;
  local_40 = (char *)(lVar2 + 0xc0);
  LOCK();
  bVar11 = *(char *)(lVar2 + 0xc0) == '\0';
  if (bVar11) {
    *(char *)(lVar2 + 0xc0) = '\x01';
  }
  UNLOCK();
  if (!bVar11) {
    FUN_180200390();
  }
  puVar6 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_38 = 0;
    cVar7 = *(char *)(lVar2 + 0xc1);
    local_60 = local_40;
  }
  else {
    local_38 = FUN_180200a50();
    local_38 = local_38 ^ 1;
    cVar7 = *(char *)(lVar2 + 0xc1);
    local_60 = local_40;
  }
  local_40 = local_60;
  if (cVar7 != '\0') {
    local_58 = (undefined1)local_38;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_60,&PTR_FUN_180266128,
                  &PTR_s_C__Users_burne__cargo_registry_s_1802661d8);
  }
  lVar3 = *param_2;
  if (*(longlong *)(lVar2 + 0x128) == 0) {
    if (*(longlong *)(lVar2 + 200) == 0) {
      plVar4 = *(longlong **)(lVar3 + 0x10);
      LOCK();
      lVar1 = *plVar4;
      *plVar4 = *plVar4 + 1;
      UNLOCK();
      if (*plVar4 == 0 || SCARRY8(lVar1,1) != *plVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)invalidInstructionException();
        (*pcVar5)();
      }
      local_48 = (undefined8 *)(lVar2 + 0x128);
      local_50 = *(undefined8 *)(lVar3 + 0x10);
      plVar4 = (longlong *)*local_48;
      if (plVar4 != (longlong *)0x0) {
        LOCK();
        *plVar4 = *plVar4 + -1;
        UNLOCK();
        if (*plVar4 == 0) {
          FUN_180187680(local_48);
        }
      }
      *(undefined8 *)(lVar2 + 0x128) = local_50;
      LOCK();
      UNLOCK();
      CompletionKey = DAT_1802fd500 + 2;
      DAT_1802fd500 = DAT_1802fd500 + 2;
      pvVar10 = CreateIoCompletionPort
                          (*(HANDLE *)(lVar2 + 0xb0),*(HANDLE *)(*(longlong *)(lVar3 + 0x10) + 0x10)
                           ,CompletionKey,0);
      if (pvVar10 != (HANDLE)0x0) goto LAB_18018c52d;
      local_31 = 1;
      DVar8 = GetLastError();
      uVar9 = (ulonglong)DVar8 << 0x20 | 2;
      goto joined_r0x00018018c4fb;
    }
LAB_18018c510:
    local_31 = 1;
    uVar9 = FUN_1801d6710(0xc,"I/O source already registered with a `Registry`",0x2f);
  }
  else {
    if (*(longlong *)(lVar3 + 0x10) == *(longlong *)(lVar2 + 0x128)) {
      if (*(longlong *)(lVar2 + 200) == 0) {
LAB_18018c52d:
        *(undefined8 *)(lVar2 + 200) = 1;
        *(undefined8 *)(lVar2 + 0xd0) = param_3;
        if (((char)local_38 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) {
          local_31 = 0;
          cVar7 = FUN_180200a50();
          if (cVar7 == '\0') {
            *(undefined1 *)(lVar2 + 0xc1) = 1;
          }
        }
        LOCK();
        cVar7 = *local_40;
        *local_40 = '\0';
        UNLOCK();
        if (cVar7 == '\x02') {
          local_31 = 0;
          WakeByAddressSingle(local_40);
        }
        local_31 = 0;
        FUN_180189f80(lVar2,0);
        return 0;
      }
      goto LAB_18018c510;
    }
    local_31 = 1;
    uVar9 = FUN_1801d6710(0xc,"I/O source already registered with a different `Registry`",0x39);
  }
joined_r0x00018018c4fb:
  if ((((char)local_38 == '\0') && ((*(ulonglong *)puVar6 & 0x7fffffffffffffff) != 0)) &&
     (cVar7 = FUN_180200a50(), cVar7 == '\0')) {
    *(undefined1 *)(lVar2 + 0xc1) = 1;
  }
  LOCK();
  cVar7 = *local_40;
  *local_40 = '\0';
  UNLOCK();
  if (cVar7 == '\x02') {
    WakeByAddressSingle();
  }
  return uVar9;
}


