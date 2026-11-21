/* FUN_18010d6d0 @ 18010d6d0 */

void FUN_18010d6d0(longlong *param_1)

{
  longlong *plVar1;
  longlong lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  uint uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  longlong *local_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  longlong *local_98;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined1 local_68;
  longlong *local_60;
  longlong *local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar16 = *param_1;
  if (lVar16 != 0) {
    if (*(longlong *)(lVar16 + 0x38) < 0) {
      LOCK();
      *(ulonglong *)(lVar16 + 0x38) = *(ulonglong *)(lVar16 + 0x38) & 0x7fffffffffffffff;
      UNLOCK();
    }
    puVar4 = PTR_DAT_1802fd600;
    while (plVar15 = (longlong *)FUN_18010a580(lVar16 + 0x20), plVar15 != (longlong *)0x0) {
      plVar1 = plVar15 + 2;
      LOCK();
      bVar17 = (char)plVar15[2] == '\0';
      if (bVar17) {
        *(char *)(plVar15 + 2) = '\x01';
      }
      UNLOCK();
      local_98 = plVar15;
      if (!bVar17) {
        FUN_180200390(plVar1);
      }
      if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) {
        uVar14 = 0;
        cVar13 = *(char *)((longlong)plVar15 + 0x11);
      }
      else {
        uVar14 = FUN_180200a50();
        uVar14 = uVar14 ^ 1;
        cVar13 = *(char *)((longlong)plVar15 + 0x11);
      }
      if (cVar13 != '\0') {
        uVar3 = (uint)local_b8 >> 8;
        local_b8 = CONCAT31((int3)uVar3,(char)uVar14);
        local_c0 = plVar1;
                    /* WARNING: Subroutine does not return */
        FUN_180201bc0("called `Result::unwrap()` on an `Err` valueInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingPathDoesNotStartWithSlashTooLongEmptySchemeTooLong"
                      ,0x2b,&local_c0,&PTR_FUN_18023e1b0,
                      &PTR_s_C__Users_burne__cargo_registry_s_18023e198);
      }
      local_58 = plVar1;
      local_4c = uVar14;
      FUN_1801621f0(plVar15 + 3);
      plVar1 = local_58;
      if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
         (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
        *(undefined1 *)((longlong)plVar15 + 0x11) = 1;
      }
      LOCK();
      lVar2 = *plVar1;
      *(char *)plVar1 = '\0';
      UNLOCK();
      if ((char)lVar2 == '\x02') {
        WakeByAddressSingle(plVar1);
      }
      LOCK();
      *local_98 = *local_98 + -1;
      UNLOCK();
      if (*local_98 == 0) {
        FUN_18003cd00(&local_98);
      }
    }
    lVar16 = *param_1;
    if (lVar16 != 0) {
      while (lVar16 != 0) {
        while( true ) {
          FUN_18010a6a0(&local_c0,lVar16 + 0x10);
          uVar12 = uStack_9c;
          uVar11 = uStack_a0;
          uVar10 = uStack_a4;
          uVar9 = local_a8;
          uVar8 = uStack_ac;
          uVar7 = uStack_b0;
          uVar6 = uStack_b4;
          uVar5 = local_b8;
          if ((int)local_c0 != 1) break;
          plVar15 = (longlong *)FUN_18010a580(lVar16 + 0x20);
          if (plVar15 == (longlong *)0x0) {
LAB_18010d829:
            LOCK();
            *(longlong *)(lVar16 + 0x38) = *(longlong *)(lVar16 + 0x38) + -1;
            UNLOCK();
          }
          else {
            plVar1 = plVar15 + 2;
            LOCK();
            bVar17 = (char)plVar15[2] == '\0';
            if (bVar17) {
              *(char *)(plVar15 + 2) = '\x01';
            }
            UNLOCK();
            local_60 = plVar15;
            if (!bVar17) {
              FUN_180200390(plVar1);
            }
            if ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) == 0) {
              uVar14 = 0;
              cVar13 = *(char *)((longlong)plVar15 + 0x11);
            }
            else {
              uVar14 = FUN_180200a50();
              uVar14 = uVar14 ^ 1;
              cVar13 = *(char *)((longlong)plVar15 + 0x11);
            }
            if (cVar13 != '\0') {
              local_68 = (undefined1)uVar14;
              local_70 = plVar1;
                    /* WARNING: Subroutine does not return */
              FUN_180201bc0("called `Result::unwrap()` on an `Err` valueInvalidUriCharInvalidSchemeInvalidAuthorityInvalidPortInvalidFormatSchemeMissingAuthorityMissingPathAndQueryMissingPathDoesNotStartWithSlashTooLongEmptySchemeTooLong"
                            ,0x2b,&local_70,&PTR_FUN_18023e1b0,
                            &PTR_s_C__Users_burne__cargo_registry_s_18023e180);
            }
            local_58 = plVar1;
            local_4c = uVar14;
            FUN_1801621f0(plVar15 + 3);
            plVar1 = local_58;
            if ((((char)local_4c == '\0') && ((*(ulonglong *)puVar4 & 0x7fffffffffffffff) != 0)) &&
               (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
              *(undefined1 *)((longlong)plVar15 + 0x11) = 1;
            }
            LOCK();
            lVar16 = *plVar1;
            *(char *)plVar1 = '\0';
            UNLOCK();
            if ((char)lVar16 == '\x02') {
              WakeByAddressSingle(plVar1);
            }
            LOCK();
            *local_60 = *local_60 + -1;
            UNLOCK();
            if (*local_60 == 0) {
              FUN_18003cd00(&local_60);
            }
            lVar16 = *param_1;
            if (lVar16 != 0) goto LAB_18010d829;
          }
          local_80 = uVar9;
          uStack_7c = uVar10;
          uStack_78 = uVar11;
          uStack_74 = uVar12;
          local_90 = uVar5;
          uStack_8c = uVar6;
          uStack_88 = uVar7;
          uStack_84 = uVar8;
          local_98 = (longlong *)0x1;
          FUN_180044a30(&local_90);
          lVar16 = *param_1;
          if (lVar16 == 0) {
            return;
          }
        }
        if (*(longlong *)(lVar16 + 0x38) == 0) {
          plVar15 = (longlong *)*param_1;
          local_58 = param_1;
          if (plVar15 != (longlong *)0x0) {
            LOCK();
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
              FUN_180114080(param_1);
            }
          }
          *local_58 = 0;
          return;
        }
        local_98 = (longlong *)0x2;
        if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_18023e310);
        }
        if (*(longlong *)(*param_1 + 0x38) == 0) {
          return;
        }
        SwitchToThread();
        lVar16 = *param_1;
      }
    }
  }
  return;
}


