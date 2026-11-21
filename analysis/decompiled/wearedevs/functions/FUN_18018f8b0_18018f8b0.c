/* FUN_18018f8b0 @ 18018f8b0 */

void FUN_18018f8b0(ulonglong *param_1)

{
  longlong lVar1;
  char *pcVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong *plVar7;
  ulonglong *puVar8;
  undefined *puVar9;
  char cVar10;
  ulonglong uVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  bool bVar18;
  char *local_78;
  byte local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong *local_58;
  ulonglong local_50;
  undefined8 local_48;
  
  puVar9 = PTR_DAT_1802fd600;
  local_48 = 0xfffffffffffffffe;
  uVar4 = param_1[3];
  if (uVar4 != 0) {
    uVar14 = 0;
    do {
      if (param_1[3] <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("Out of bounds accessC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\collections\\vec_deque\\mod.rs"
                      ,0x14,&DAT_180266990);
      }
      uVar11 = 0;
      if (*param_1 <= uVar14 + param_1[2]) {
        uVar11 = *param_1;
      }
      lVar12 = *(longlong *)(param_1[1] + ((param_1[2] - uVar11) + uVar14) * 8);
      pcVar2 = (char *)(lVar12 + 0x10);
      LOCK();
      bVar18 = *(char *)(lVar12 + 0x10) == '\0';
      if (bVar18) {
        *(char *)(lVar12 + 0x10) = '\x01';
      }
      UNLOCK();
      if (bVar18) {
        if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0) goto LAB_18018f999;
LAB_18018f93a:
        local_70 = 0;
        cVar10 = *(char *)(lVar12 + 0x11);
      }
      else {
        FUN_180200390(pcVar2);
        if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) goto LAB_18018f93a;
LAB_18018f999:
        local_70 = FUN_180200a50();
        local_70 = local_70 ^ 1;
        cVar10 = *(char *)(lVar12 + 0x11);
      }
      if (cVar10 != '\0') {
        local_78 = pcVar2;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,
                      &PTR_FUN_1802668a8,&DAT_180266890);
      }
      iVar3 = *(int *)(lVar12 + 0x18);
      if ((local_70 == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
        local_58 = param_1;
        cVar10 = FUN_180200a50();
        param_1 = local_58;
        if (cVar10 == '\0') {
          *(undefined1 *)(lVar12 + 0x11) = 1;
        }
      }
      LOCK();
      cVar10 = *pcVar2;
      *pcVar2 = '\0';
      UNLOCK();
      puVar8 = (ulonglong *)PTR_DAT_1802fd600;
      if (cVar10 == '\x02') {
        WakeByAddressSingle(pcVar2);
        puVar8 = (ulonglong *)PTR_DAT_1802fd600;
      }
      PTR_DAT_1802fd600 = (undefined *)puVar8;
      if (iVar3 == 0) {
        uVar11 = uVar14 + 1;
        if (uVar11 < uVar4) goto LAB_18018fa13;
        goto LAB_18018f9ef;
      }
      uVar14 = uVar14 + 1;
      if (uVar4 == uVar14) {
        return;
      }
    } while( true );
  }
  uVar14 = 0;
  uVar11 = 0;
LAB_18018f9ef:
  if (uVar11 == uVar14) {
    return;
  }
LAB_18018fba6:
  uVar4 = param_1[3];
  if (uVar14 < uVar4) {
    uVar11 = *param_1;
    uVar16 = uVar11;
    if (param_1[2] < uVar11) {
      uVar16 = 0;
    }
    local_68 = param_1[1];
    lVar12 = param_1[2] - uVar16;
    uVar16 = uVar11 - lVar12;
    local_58 = (ulonglong *)(uVar4 - uVar16);
    bVar18 = local_58 != (ulonglong *)0x0;
    if (uVar4 < uVar16) {
      local_58 = (ulonglong *)0x0;
    }
    uVar15 = lVar12 + uVar4;
    if (uVar4 >= uVar16 && bVar18) {
      uVar15 = uVar11;
    }
    uVar15 = uVar15 - lVar12;
    param_1[3] = uVar14;
    lVar13 = uVar14 - uVar15;
    if (uVar14 < uVar15 || lVar13 == 0) {
      if (uVar15 != uVar14) {
        lVar12 = local_68 + lVar12 * 8 + uVar14 * 8;
        local_60 = 1;
        local_50 = lVar12;
        do {
          plVar7 = *(longlong **)(local_50 + -8 + local_60 * 8);
          LOCK();
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            FUN_180187b30(lVar12);
          }
          lVar1 = lVar13 + local_60;
          local_60 = local_60 + 1;
          lVar12 = lVar12 + 8;
        } while (lVar1 != 0);
      }
      uVar14 = local_68;
      if (uVar16 < uVar4) {
        local_60 = 0;
        local_50 = local_68;
        do {
          plVar7 = *(longlong **)(uVar14 + local_60 * 8);
          LOCK();
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            FUN_180187b30(local_50);
          }
          local_60 = local_60 + 1;
          local_50 = local_50 + 8;
        } while (local_58 != (ulonglong *)local_60);
      }
    }
    else {
      local_58 = (ulonglong *)((longlong)local_58 - lVar13);
      if (local_58 != (ulonglong *)0x0) {
        lVar12 = local_68 + lVar13 * 8;
        local_60 = 0;
        local_50 = lVar12;
        do {
          plVar7 = *(longlong **)(lVar12 + local_60 * 8);
          LOCK();
          *plVar7 = *plVar7 + -1;
          UNLOCK();
          if (*plVar7 == 0) {
            FUN_180187b30(local_50);
          }
          local_60 = local_60 + 1;
          local_50 = local_50 + 8;
        } while (local_58 != (ulonglong *)local_60);
      }
    }
  }
  return;
LAB_18018fa13:
  do {
    uVar16 = uVar11;
    if (param_1[3] <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_180201b60("Out of bounds accessC:\\Users\\burne\\.rustup\\toolchains\\stable-x86_64-pc-windows-msvc\\lib/rustlib/src/rust\\library\\alloc\\src\\collections\\vec_deque\\mod.rs"
                    ,0x14,&DAT_1802669a8);
    }
    uVar11 = 0;
    if (*param_1 <= uVar16 + param_1[2]) {
      uVar11 = *param_1;
    }
    lVar12 = *(longlong *)(param_1[1] + ((param_1[2] - uVar11) + uVar16) * 8);
    pcVar2 = (char *)(lVar12 + 0x10);
    LOCK();
    bVar18 = *(char *)(lVar12 + 0x10) == '\0';
    if (bVar18) {
      *(char *)(lVar12 + 0x10) = '\x01';
    }
    UNLOCK();
    if (bVar18) {
      if ((*puVar8 & 0x7fffffffffffffff) != 0) goto LAB_18018face;
LAB_18018fa69:
      local_70 = 0;
      cVar10 = *(char *)(lVar12 + 0x11);
    }
    else {
      FUN_180200390(pcVar2);
      if ((*puVar8 & 0x7fffffffffffffff) == 0) goto LAB_18018fa69;
LAB_18018face:
      local_70 = FUN_180200a50();
      local_70 = local_70 ^ 1;
      cVar10 = *(char *)(lVar12 + 0x11);
    }
    if (cVar10 != '\0') {
      local_78 = pcVar2;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_78,&PTR_FUN_1802668a8,
                    &DAT_180266890);
    }
    iVar3 = *(int *)(lVar12 + 0x18);
    if ((local_70 == 0) && ((*puVar8 & 0x7fffffffffffffff) != 0)) {
      local_58 = param_1;
      cVar10 = FUN_180200a50();
      param_1 = local_58;
      if (cVar10 == '\0') {
        *(undefined1 *)(lVar12 + 0x11) = 1;
      }
    }
    LOCK();
    cVar10 = *pcVar2;
    *pcVar2 = '\0';
    UNLOCK();
    if (cVar10 == '\x02') {
      WakeByAddressSingle(pcVar2);
    }
    if (iVar3 != 0) break;
    uVar11 = uVar16 + 1;
    if (uVar4 <= uVar16 + 1) goto LAB_18018fb9a;
  } while( true );
  if (param_1[3] <= uVar14) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_1802669c0,0x20,&DAT_1802669e0);
  }
  if (param_1[3] <= uVar16) {
                    /* WARNING: Subroutine does not return */
    FUN_180201ec0(&DAT_1802669f8,0x20,&DAT_180266a18);
  }
  uVar11 = param_1[2];
  uVar15 = *param_1;
  uVar5 = param_1[1];
  uVar17 = uVar15;
  if (uVar11 + uVar14 < uVar15) {
    uVar17 = 0;
  }
  lVar12 = (uVar11 + uVar14) - uVar17;
  if (uVar11 + uVar16 < uVar15) {
    uVar15 = 0;
  }
  lVar13 = (uVar11 - uVar15) + uVar16;
  uVar6 = *(undefined8 *)(uVar5 + lVar12 * 8);
  *(undefined8 *)(uVar5 + lVar12 * 8) = *(undefined8 *)(uVar5 + lVar13 * 8);
  *(undefined8 *)(uVar5 + lVar13 * 8) = uVar6;
  uVar11 = uVar16 + 1;
  uVar14 = uVar14 + 1;
  if (uVar4 <= uVar11) goto LAB_18018fb9a;
  goto LAB_18018fa13;
LAB_18018fb9a:
  if (uVar16 + 1 == uVar14) {
    return;
  }
  goto LAB_18018fba6;
}


