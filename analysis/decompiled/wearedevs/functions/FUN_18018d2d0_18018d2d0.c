/* FUN_18018d2d0 @ 18018d2d0 */

ulonglong FUN_18018d2d0(longlong param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  longlong *plVar11;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  longlong *plVar16;
  longlong *plVar17;
  bool bVar18;
  longlong *local_68;
  undefined8 local_60;
  uint local_58;
  uint local_54;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  plVar1 = (longlong *)(param_1 + 0x30);
  LOCK();
  bVar18 = *(char *)(param_1 + 0x30) == '\0';
  if (bVar18) {
    *(char *)(param_1 + 0x30) = '\x01';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_180200390(plVar1);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    cVar4 = *(char *)(param_1 + 0x31);
  }
  else {
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
    cVar4 = *(char *)(param_1 + 0x31);
  }
  if (cVar4 != '\0') {
    local_60._1_7_ = (undefined7)((ulonglong)local_60 >> 8);
    local_60 = CONCAT71(local_60._1_7_,(char)local_54);
    local_68 = plVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_180266740,
                  &DAT_1802665e8);
  }
  uVar10 = *(ulonglong *)(param_1 + 0x50);
  if (uVar10 == 0) {
    lVar7 = 0;
    uVar9 = 0;
    lVar14 = 0;
  }
  else {
    uVar9 = *(ulonglong *)(param_1 + 0x38);
    uVar13 = 0;
    if (uVar9 <= *(ulonglong *)(param_1 + 0x48)) {
      uVar13 = uVar9;
    }
    lVar7 = *(ulonglong *)(param_1 + 0x48) - uVar13;
    lVar14 = uVar10 - (uVar9 - lVar7);
    if (uVar10 < uVar9 - lVar7 || lVar14 == 0) {
      uVar9 = uVar10 + lVar7;
      lVar14 = 0;
    }
  }
  plVar15 = *(longlong **)(param_1 + 0x40);
  plVar17 = plVar15 + lVar7;
  plVar11 = plVar15 + lVar14;
  plVar8 = plVar15 + uVar9;
  do {
    plVar12 = plVar8;
    if (plVar17 == plVar12) {
      plVar8 = plVar11;
      plVar16 = plVar12;
      if (plVar15 == plVar11) {
        FUN_18018f8b0(param_1 + 0x38);
        FUN_18018e110(param_1 + 8);
        if ((((char)local_54 == '\0') &&
            ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
           (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
          *(undefined1 *)(param_1 + 0x31) = 1;
        }
        uVar10 = 0;
        LOCK();
        cVar4 = *(char *)plVar1;
        *(char *)plVar1 = '\0';
        UNLOCK();
        goto joined_r0x00018018d642;
      }
    }
    else {
      plVar8 = plVar12;
      plVar12 = plVar11;
      plVar16 = plVar15;
      plVar15 = plVar17;
    }
    local_50 = *plVar15;
    plVar2 = (longlong *)(local_50 + 0x10);
    LOCK();
    bVar18 = *(char *)(local_50 + 0x10) == '\0';
    if (bVar18) {
      *(char *)(local_50 + 0x10) = '\x01';
    }
    UNLOCK();
    if (!bVar18) {
      FUN_180200390(plVar2);
    }
    if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
      uVar6 = 0;
      cVar4 = *(char *)(local_50 + 0x11);
      lVar7 = local_50;
    }
    else {
      uVar6 = FUN_180200a50();
      uVar6 = uVar6 ^ 1;
      cVar4 = *(char *)(local_50 + 0x11);
      lVar7 = local_50;
    }
    local_50 = lVar7;
    if (cVar4 != '\0') {
      local_60._1_7_ = (undefined7)((ulonglong)local_60 >> 8);
      local_60 = CONCAT71(local_60._1_7_,(char)uVar6);
      local_68 = plVar2;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_68,&PTR_FUN_1802667b0,
                    &DAT_180266600);
    }
    local_58 = uVar6;
    if (*(char *)(lVar7 + 0x70) == '\0') {
      plVar17 = (longlong *)*plVar15;
      *(undefined4 *)(lVar7 + 0x18) = 0;
      if (*(char *)(lVar7 + 0x71) == '\x01') {
        if ((~*(uint *)(lVar7 + 0x6c) & *(uint *)(lVar7 + 0x68) & 0x1bf) != 0) {
          if (*(int *)(lVar7 + 0x28) == 0x103) {
            local_68 = (longlong *)((ulonglong)local_68 & 0xffffffff00000000);
            local_60 = 0;
            iVar5 = NtCancelIoFileEx(*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10),
                                     lVar7 + 0x28,&local_68);
            if ((iVar5 != 0) && (iVar5 != -0x3ffffddb)) {
              uVar6 = RtlNtStatusToDosError(iVar5);
              goto LAB_18018d66f;
            }
          }
          *(undefined1 *)(lVar7 + 0x71) = 2;
          *(undefined4 *)(lVar7 + 0x6c) = 0;
        }
      }
      else if (*(char *)(lVar7 + 0x71) != '\x02') {
        *(undefined8 *)(lVar7 + 0x40) = 1;
        *(undefined8 *)(lVar7 + 0x38) = 0x7fffffffffffffff;
        *(undefined8 *)(lVar7 + 0x48) = *(undefined8 *)(lVar7 + 0x58);
        *(undefined4 *)(lVar7 + 0x54) = 0;
        *(uint *)(lVar7 + 0x50) = *(uint *)(lVar7 + 0x68) | 0x20;
        LOCK();
        lVar14 = *plVar17;
        *plVar17 = *plVar17 + 1;
        UNLOCK();
        if (*plVar17 == 0 || SCARRY8(lVar14,1) != *plVar17 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)invalidInstructionException();
          (*pcVar3)();
        }
        *(undefined4 *)(lVar7 + 0x28) = 0x103;
        iVar5 = NtDeviceIoControlFile
                          (*(undefined8 *)(*(longlong *)(lVar7 + 0x20) + 0x10),0,0,plVar17 + 2,
                           lVar7 + 0x28,0x12024,lVar7 + 0x38,0x20,lVar7 + 0x38,0x20);
        if (((iVar5 == 0) || (iVar5 == 0x103)) ||
           (uVar6 = RtlNtStatusToDosError(iVar5), uVar6 == 0x3e5)) {
          *(undefined1 *)(local_50 + 0x71) = 1;
          *(undefined4 *)(local_50 + 0x6c) = *(undefined4 *)(local_50 + 0x68);
        }
        else {
          LOCK();
          *plVar17 = *plVar17 + -1;
          UNLOCK();
          local_68 = plVar17;
          if (*plVar17 == 0) {
            FUN_180187b30(&local_68);
          }
          if (uVar6 != 6) {
            lVar7 = local_50;
LAB_18018d66f:
            *(undefined4 *)(lVar7 + 0x18) = 1;
            *(uint *)(lVar7 + 0x1c) = uVar6;
            if ((((char)local_58 == '\0') &&
                ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
               (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
              *(undefined1 *)(local_50 + 0x11) = 1;
            }
            LOCK();
            cVar4 = *(char *)plVar2;
            *(char *)plVar2 = '\0';
            UNLOCK();
            if (cVar4 == '\x02') {
              WakeByAddressSingle(plVar2);
            }
            if ((((char)local_54 == '\0') &&
                ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
               (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
              *(undefined1 *)(param_1 + 0x31) = 1;
            }
            uVar10 = (ulonglong)uVar6 << 0x20 | 2;
            LOCK();
            cVar4 = *(char *)plVar1;
            *(char *)plVar1 = '\0';
            UNLOCK();
joined_r0x00018018d642:
            if (cVar4 == '\x02') {
              WakeByAddressSingle();
            }
            return uVar10;
          }
          FUN_18018ec50(local_50 + 0x18);
        }
      }
    }
    if ((((char)local_58 == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0))
       && (cVar4 = FUN_180200a50(), cVar4 == '\0')) {
      *(undefined1 *)(local_50 + 0x11) = 1;
    }
    plVar17 = plVar15 + 1;
    LOCK();
    cVar4 = *(char *)plVar2;
    *(char *)plVar2 = '\0';
    UNLOCK();
    plVar11 = plVar12;
    plVar15 = plVar16;
    if (cVar4 == '\x02') {
      WakeByAddressSingle(plVar2);
    }
  } while( true );
}


