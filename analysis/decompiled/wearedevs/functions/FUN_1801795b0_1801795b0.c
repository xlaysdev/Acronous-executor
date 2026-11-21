/* FUN_1801795b0 @ 1801795b0 */

ulonglong FUN_1801795b0(undefined8 param_1,undefined8 param_2)

{
  longlong *plVar1;
  longlong lVar2;
  byte bVar3;
  longlong lVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  uint uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  uint uVar13;
  uint uVar14;
  undefined8 unaff_R13;
  ulonglong uVar15;
  undefined1 uVar16;
  uint unaff_R15D;
  undefined ***local_88;
  undefined ***local_80;
  undefined8 local_78;
  undefined8 local_68;
  undefined **local_60;
  longlong *local_58;
  uint local_50;
  byte local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  plVar1 = (longlong *)(lVar4 + 0x60);
  local_58 = plVar1;
  if ((*(char *)(lVar4 + 0x68) != '\x01') &&
     (local_58 = (longlong *)FUN_1801fb130(plVar1,0), local_58 == (longlong *)0x0)) {
    uVar15 = CONCAT71((int7)((ulonglong)unaff_R13 >> 8),2);
LAB_1801797b7:
    return uVar15 & 0xffffffff;
  }
  local_58 = (longlong *)*local_58;
  LOCK();
  lVar2 = *local_58;
  *local_58 = *local_58 + 1;
  UNLOCK();
  if (*local_58 == 0 || SCARRY8(lVar2,1) != *local_58 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  local_58 = local_58 + 2;
  local_60 = &PTR_LAB_180260cb0;
  local_88 = &local_60;
  local_78 = 0;
  local_80 = local_88;
  local_68 = param_2;
  uVar9 = FUN_1801df8c0();
  uVar13 = (uint)param_2;
  uVar10 = FUN_1801e5a10(uVar9);
  lVar2 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
  do {
    uVar16 = (undefined1)unaff_R15D;
    bVar3 = *(byte *)(lVar2 + 0xb8);
    if (bVar3 == 1) {
LAB_1801796a0:
      bVar3 = *(byte *)(lVar2 + 0xb4);
      uVar16 = *(undefined1 *)(lVar2 + 0xb5);
      *(undefined2 *)(lVar2 + 0xb4) = 0x8001;
    }
    else if (bVar3 != 2) {
      FUN_1801d8880(lVar2 + 0x70,FUN_18016d130);
      *(undefined1 *)(lVar2 + 0xb8) = 1;
      goto LAB_1801796a0;
    }
    local_50 = (uint)bVar3;
    uVar14 = (uint)&local_88;
    local_4a = bVar3;
    local_49 = uVar16;
    uVar8 = FUN_180178140(&local_68);
    uVar15 = (ulonglong)uVar8;
    cVar7 = (char)local_50;
    if (cVar7 != '\x02') {
      if (*(char *)(lVar2 + 0xb8) != '\x01') {
        if (*(char *)(lVar2 + 0xb8) == '\x02') goto LAB_1801796e4;
        uVar14 = 0x8016d130;
        FUN_1801d8880(lVar2 + 0x70);
        *(undefined1 *)(lVar2 + 0xb8) = 1;
      }
      *(char *)(lVar2 + 0xb4) = cVar7;
      *(undefined1 *)(lVar2 + 0xb5) = uVar16;
      if ((char)uVar8 == '\x02') goto LAB_180179722;
LAB_1801797ac:
      (*(code *)local_60[3])(local_58);
      goto LAB_1801797b7;
    }
LAB_1801796e4:
    if ((char)uVar8 != '\x02') goto LAB_1801797ac;
LAB_180179722:
    uVar11 = FUN_1801df8c0();
    bVar6 = uVar13 <= uVar14;
    if (uVar11 != uVar10) {
      bVar6 = uVar10 <= uVar11;
    }
    if (bVar6) goto LAB_1801797ac;
    unaff_R15D = uVar13;
    uVar9 = FUN_1801e3e00(uVar10,uVar13,uVar11,uVar14);
    plVar12 = plVar1;
    if ((*(char *)(lVar4 + 0x68) != '\x01') &&
       (plVar12 = (longlong *)FUN_1801fb130(plVar1,0), plVar12 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_4a,&DAT_180260b88,
                    &PTR_s_C__Users_burne__cargo_registry_s_180260c80);
    }
    FUN_180168c40(*plVar12 + 0x10,uVar9,unaff_R15D);
  } while( true );
}


