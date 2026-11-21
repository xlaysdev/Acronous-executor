/* FUN_180170050 @ 180170050 */

void FUN_180170050(char *param_1,ulonglong param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined *puVar9;
  ulonglong uVar10;
  char cVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined1 uVar17;
  bool bVar18;
  undefined8 local_298;
  undefined8 local_290;
  ulonglong local_98;
  char local_90 [24];
  longlong local_78;
  undefined8 *local_70;
  uint local_64;
  longlong local_60;
  char *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  local_98 = 0;
  LOCK();
  cVar11 = *param_1;
  if (cVar11 == '\0') {
    *param_1 = '\x01';
  }
  UNLOCK();
  if (cVar11 != '\0') {
    FUN_180200390(param_1);
  }
  puVar9 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = FUN_180200a50();
    uVar12 = uVar12 ^ 1;
  }
  uVar15 = *(ulonglong *)(param_1 + 0x10);
  if (*(ulonglong *)(param_1 + 0x10) < param_2) {
    uVar15 = param_2;
  }
  local_58 = param_1;
  do {
    local_64 = uVar12;
    do {
      do {
        do {
          do {
            uVar17 = (undefined1)uVar12;
            local_4a = 1;
            local_49 = uVar17;
            lVar13 = FUN_180164040(param_1 + 8,uVar15);
            uVar10 = local_98;
            if (lVar13 == 0) {
              local_4a = 1;
              local_49 = uVar17;
              FUN_180163f50(local_90,param_1 + 8);
              lVar13 = 0;
              if (local_90[0] != '\0') {
                lVar13 = local_78 + (ulonglong)(local_78 == 0);
              }
              *(longlong *)(local_58 + 0x28) = lVar13;
              if (((uVar12 & 1) == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
                local_49 = 0;
                local_4a = 0;
                cVar11 = FUN_180200a50();
                if (cVar11 == '\0') {
                  local_58[1] = '\x01';
                }
              }
              LOCK();
              cVar11 = *local_58;
              *local_58 = '\0';
              UNLOCK();
              if (cVar11 == '\x02') {
                local_4a = 0;
                local_49 = uVar17;
                WakeByAddressSingle(local_58);
              }
              uVar15 = local_98;
              local_70 = &local_298 + local_98 * 2;
              local_98 = 0;
              plVar16 = &local_298;
              local_60 = 0;
              while (uVar15 * -0x10 != local_60) {
                lVar13 = *plVar16;
                plVar1 = plVar16 + 1;
                plVar16 = plVar16 + 2;
                local_60 = local_60 + -0x10;
                (**(code **)(lVar13 + 8))(*plVar1);
              }
              local_60 = local_98;
              local_58 = (char *)&local_290;
              while (bVar18 = local_60 != 0, local_60 = local_60 + -1, bVar18) {
                plVar16 = (longlong *)((longlong)local_58 + -8);
                uVar4 = *(undefined8 *)local_58;
                local_58 = (char *)((longlong)local_58 + 0x10);
                (**(code **)(*plVar16 + 0x18))(uVar4);
              }
              return;
            }
          } while (*(longlong *)(lVar13 + 0x18) == -1);
          *(undefined1 *)(lVar13 + 0x38) = 0;
          *(undefined8 *)(lVar13 + 0x18) = 0xffffffffffffffff;
          uVar14 = *(ulonglong *)(lVar13 + 0x30);
          do {
            LOCK();
            uVar2 = *(ulonglong *)(lVar13 + 0x30);
            bVar18 = uVar14 == uVar2;
            if (bVar18) {
              *(ulonglong *)(lVar13 + 0x30) = uVar14 | 2;
            }
            else {
              uVar14 = uVar2;
            }
            UNLOCK();
          } while (!bVar18);
        } while (uVar14 != 0);
        uVar5 = *(undefined4 *)(lVar13 + 0x20);
        uVar6 = *(undefined4 *)(lVar13 + 0x24);
        uVar7 = *(undefined4 *)(lVar13 + 0x28);
        uVar8 = *(undefined4 *)(lVar13 + 0x2c);
        lVar3 = *(longlong *)(lVar13 + 0x20);
        *(undefined8 *)(lVar13 + 0x20) = 0;
        LOCK();
        *(undefined8 *)(lVar13 + 0x30) = 0;
        UNLOCK();
      } while (lVar3 == 0);
      if (0x1f < local_98) {
        local_4a = 1;
        local_49 = uVar17;
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_98,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802612c0);
      }
      lVar13 = local_98 * 0x10;
      *(undefined4 *)(&local_298 + local_98 * 2) = uVar5;
      *(undefined4 *)((longlong)&local_298 + lVar13 + 4) = uVar6;
      *(undefined4 *)(&local_290 + uVar10 * 2) = uVar7;
      *(undefined4 *)((longlong)&local_290 + lVar13 + 4) = uVar8;
      local_98 = local_98 + 1;
    } while (local_98 < 0x20);
    if (((uVar12 & 1) == 0) && ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) != 0)) {
      local_49 = 0;
      local_4a = 0;
      cVar11 = FUN_180200a50();
      if (cVar11 == '\0') {
        local_58[1] = '\x01';
      }
    }
    LOCK();
    cVar11 = *local_58;
    *local_58 = '\0';
    UNLOCK();
    if (cVar11 == '\x02') {
      local_4a = 0;
      local_49 = uVar17;
      WakeByAddressSingle(local_58);
    }
    uVar10 = local_98;
    local_70 = &local_298 + local_98 * 2;
    local_98 = 0;
    local_60 = 0;
    plVar16 = &local_298;
    while (uVar10 * -0x10 != local_60) {
      lVar13 = *plVar16;
      plVar1 = plVar16 + 1;
      plVar16 = plVar16 + 2;
      local_60 = local_60 + -0x10;
      (**(code **)(lVar13 + 8))(*plVar1);
    }
    LOCK();
    cVar11 = *local_58;
    if (cVar11 == '\0') {
      *local_58 = '\x01';
    }
    UNLOCK();
    uVar17 = (undefined1)local_64;
    if (cVar11 != '\0') {
      local_4a = 0;
      local_49 = uVar17;
      FUN_180200390(local_58);
    }
    if ((*(ulonglong *)puVar9 & 0x7fffffffffffffff) == 0) {
      uVar12 = 0;
    }
    else {
      local_4a = 0;
      local_49 = uVar17;
      uVar12 = FUN_180200a50();
      uVar12 = uVar12 ^ 1;
    }
  } while( true );
}


