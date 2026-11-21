/* FUN_180180a10 @ 180180a10 */

void FUN_180180a10(longlong param_1,uint param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  undefined *puVar9;
  char cVar10;
  longlong *plVar11;
  longlong lVar12;
  uint uVar13;
  longlong *plVar14;
  uint uVar15;
  uint uVar16;
  undefined1 uVar17;
  bool bVar18;
  undefined8 local_268;
  undefined8 local_260;
  ulonglong local_68;
  undefined8 *local_60;
  uint local_54;
  longlong local_50;
  char *local_48;
  undefined1 local_3a;
  undefined1 local_39;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_68 = 0;
  local_48 = (char *)(param_1 + 0x18);
  LOCK();
  bVar18 = *(char *)(param_1 + 0x18) == '\0';
  if (bVar18) {
    *(char *)(param_1 + 0x18) = '\x01';
  }
  UNLOCK();
  if (!bVar18) {
    FUN_180200390((char *)(param_1 + 0x18));
  }
  puVar9 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_54 = 0;
    uVar6 = local_68;
    uVar17 = local_39;
  }
  else {
    local_54 = FUN_180200a50();
    local_54 = local_54 ^ 1;
    uVar6 = local_68;
    uVar17 = local_39;
  }
  local_39 = (undefined1)local_54;
  local_68 = uVar6;
  if ((param_2 & 5) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x30);
    uVar3 = *(undefined4 *)(param_1 + 0x34);
    uVar4 = *(undefined4 *)(param_1 + 0x38);
    uVar5 = *(undefined4 *)(param_1 + 0x3c);
    lVar12 = *(longlong *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x30) = 0;
    if (lVar12 != 0) {
      if (0x1f < uVar6) {
        local_3a = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802612c0);
      }
      *(undefined4 *)(&local_268 + uVar6 * 2) = uVar2;
      *(undefined4 *)((longlong)&local_268 + uVar6 * 0x10 + 4) = uVar3;
      *(undefined4 *)(&local_260 + uVar6 * 2) = uVar4;
      *(undefined4 *)((longlong)&local_260 + uVar6 * 0x10 + 4) = uVar5;
      local_68 = local_68 + 1;
    }
  }
  uVar6 = local_68;
  if ((param_2 & 10) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x40);
    uVar3 = *(undefined4 *)(param_1 + 0x44);
    uVar4 = *(undefined4 *)(param_1 + 0x48);
    uVar5 = *(undefined4 *)(param_1 + 0x4c);
    lVar12 = *(longlong *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x40) = 0;
    if (lVar12 != 0) {
      if (0x1f < local_68) {
        local_3a = 1;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_68,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802612c0);
      }
      lVar12 = local_68 * 0x10;
      *(undefined4 *)(&local_268 + local_68 * 2) = uVar2;
      *(undefined4 *)((longlong)&local_268 + lVar12 + 4) = uVar3;
      *(undefined4 *)(&local_260 + uVar6 * 2) = uVar4;
      *(undefined4 *)((longlong)&local_260 + lVar12 + 4) = uVar5;
      local_68 = local_68 + 1;
    }
  }
  do {
    local_39 = uVar17;
    uVar17 = (undefined1)local_54;
    if (local_68 < 0x20) {
      plVar14 = *(longlong **)(param_1 + 0x20);
LAB_180180b21:
      do {
        do {
          plVar11 = plVar14;
          uVar6 = local_68;
          if (plVar11 == (longlong *)0x0) goto LAB_180180d41;
          plVar14 = (longlong *)plVar11[1];
          uVar13 = (uint)plVar11[4];
          uVar15 = -(uVar13 & 1) & 5;
          uVar16 = uVar15 + 10;
          if ((plVar11[4] & 2U) == 0) {
            uVar16 = uVar15;
          }
        } while (((uVar16 | uVar13 & 0x20) & param_2) == 0);
        if (*plVar11 == 0) {
          if (*(longlong **)(param_1 + 0x20) != plVar11) goto LAB_180180d41;
          *(longlong **)(param_1 + 0x20) = plVar14;
          if (plVar14 == (longlong *)0x0) goto LAB_180180b93;
LAB_180180b6e:
          *plVar14 = *plVar11;
        }
        else {
          *(longlong **)(*plVar11 + 8) = plVar14;
          if (plVar14 != (longlong *)0x0) goto LAB_180180b6e;
LAB_180180b93:
          if (*(longlong **)(param_1 + 0x28) != plVar11) {
LAB_180180d41:
            if (((local_54 & 1) == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
              local_39 = 0;
              local_3a = 0;
              cVar10 = FUN_180200a50();
              if (cVar10 == '\0') {
                *(undefined1 *)(param_1 + 0x19) = 1;
              }
            }
            LOCK();
            cVar10 = *local_48;
            *local_48 = '\0';
            UNLOCK();
            if (cVar10 == '\x02') {
              local_3a = 0;
              local_39 = uVar17;
              WakeByAddressSingle(local_48);
            }
            uVar6 = local_68;
            local_60 = &local_268 + local_68 * 2;
            local_68 = 0;
            plVar14 = &local_268;
            local_50 = 0;
            while (uVar6 * -0x10 != local_50) {
              lVar12 = *plVar14;
              plVar11 = plVar14 + 1;
              plVar14 = plVar14 + 2;
              local_50 = local_50 + -0x10;
              (**(code **)(lVar12 + 8))(*plVar11);
            }
            local_50 = local_68;
            local_48 = (char *)&local_260;
            while (bVar18 = local_50 != 0, local_50 = local_50 + -1, bVar18) {
              plVar14 = (longlong *)((longlong)local_48 + -8);
              uVar1 = *(undefined8 *)local_48;
              local_48 = (char *)((longlong)local_48 + 0x10);
              (**(code **)(*plVar14 + 0x18))(uVar1);
            }
            return;
          }
          *(longlong *)(param_1 + 0x28) = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        lVar7 = plVar11[2];
        uVar2 = *(undefined4 *)((longlong)plVar11 + 0x14);
        lVar8 = plVar11[3];
        uVar3 = *(undefined4 *)((longlong)plVar11 + 0x1c);
        lVar12 = plVar11[2];
        plVar11[2] = 0;
        if (lVar12 != 0) {
          *(undefined1 *)(plVar11 + 5) = 1;
          if (0x1f < local_68) {
            local_3a = 1;
            local_39 = uVar17;
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(local_68,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802612c0);
          }
          lVar12 = local_68 * 0x10;
          *(int *)(&local_268 + local_68 * 2) = (int)lVar7;
          *(undefined4 *)((longlong)&local_268 + lVar12 + 4) = uVar2;
          *(int *)(&local_260 + uVar6 * 2) = (int)lVar8;
          *(undefined4 *)((longlong)&local_260 + lVar12 + 4) = uVar3;
          local_68 = local_68 + 1;
          if (0x1f < local_68) break;
          goto LAB_180180b21;
        }
      } while (local_68 < 0x20);
    }
    if (((local_54 & 1) == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
      local_39 = 0;
      local_3a = 0;
      cVar10 = FUN_180200a50();
      if (cVar10 == '\0') {
        *(undefined1 *)(param_1 + 0x19) = 1;
      }
    }
    LOCK();
    cVar10 = *local_48;
    *local_48 = '\0';
    UNLOCK();
    if (cVar10 == '\x02') {
      local_3a = 0;
      local_39 = uVar17;
      WakeByAddressSingle(local_48);
    }
    uVar6 = local_68;
    local_60 = &local_268 + local_68 * 2;
    local_68 = 0;
    plVar14 = &local_268;
    local_50 = 0;
    while (uVar6 * -0x10 != local_50) {
      lVar12 = *plVar14;
      plVar11 = plVar14 + 1;
      plVar14 = plVar14 + 2;
      local_50 = local_50 + -0x10;
      (**(code **)(lVar12 + 8))(*plVar11);
    }
    LOCK();
    cVar10 = *local_48;
    if (cVar10 == '\0') {
      *local_48 = '\x01';
    }
    UNLOCK();
    uVar17 = (undefined1)local_54;
    if (cVar10 != '\0') {
      local_3a = 0;
      local_39 = uVar17;
      FUN_180200390(local_48);
    }
    if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) {
      local_54 = 0;
      uVar17 = local_39;
    }
    else {
      local_3a = 0;
      local_39 = uVar17;
      local_54 = FUN_180200a50();
      local_54 = local_54 ^ 1;
      uVar17 = local_39;
    }
  } while( true );
}


