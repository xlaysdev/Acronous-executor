/* FUN_180165680 @ 180165680 */

void FUN_180165680(ulonglong *param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong ****pppplVar3;
  longlong ****pppplVar4;
  longlong ***ppplVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined *puVar11;
  ulonglong uVar12;
  char cVar13;
  uint uVar14;
  longlong lVar15;
  undefined8 *puVar16;
  undefined1 uVar17;
  longlong *plVar18;
  bool bVar19;
  undefined8 local_2e0;
  undefined8 local_2d8;
  ulonglong local_e0;
  longlong ****local_d8;
  longlong *local_d0;
  undefined1 local_c8;
  longlong *local_c0;
  longlong ****local_b8;
  longlong ****pppplStack_b0;
  longlong local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  longlong *local_90;
  undefined8 *local_88;
  longlong *local_80;
  longlong local_78;
  uint local_6c;
  undefined1 local_68;
  undefined1 local_67;
  undefined1 local_64;
  byte local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_d0 = (longlong *)param_1[1];
  plVar18 = (longlong *)param_1[2];
  local_63 = (byte)param_1[3];
  uVar14 = (uint)local_63;
  if ((*param_1 & 1) == 0) {
    LOCK();
    *local_d0 = *local_d0 + 4;
    UNLOCK();
    if (((local_63 == 0) && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0)) &&
       (cVar13 = FUN_180200a50(), cVar13 == '\0')) {
      *(char *)((longlong)plVar18 + 1) = '\x01';
    }
    LOCK();
    lVar15 = *plVar18;
    *(char *)plVar18 = '\0';
    UNLOCK();
    if ((char)lVar15 == '\x02') {
      WakeByAddressSingle(plVar18);
      return;
    }
  }
  else {
    LOCK();
    *local_d0 = (*param_1 & 0xfffffffffffffffc) + 4;
    UNLOCK();
    local_98 = 0;
    local_b8 = (longlong ****)0x0;
    local_a8 = 0;
    pppplStack_b0 = (longlong ****)plVar18[1];
    pppplVar3 = (longlong ****)plVar18[2];
    plVar18[1] = 0;
    plVar18[2] = 0;
    if (pppplStack_b0 == (longlong ****)0x0) {
      local_b8 = (longlong ****)&local_b8;
      pppplStack_b0 = (longlong ****)&local_b8;
    }
    else {
      *pppplStack_b0 = (longlong ***)&local_b8;
      if (pppplVar3 == (longlong ****)0x0) {
        local_64 = 1;
        local_90 = plVar18;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180260818);
      }
      pppplVar3[1] = (longlong ***)&local_b8;
      local_b8 = pppplVar3;
    }
    puVar11 = PTR_DAT_1802fd600;
    local_d8 = (longlong ****)&local_b8;
    local_c8 = 0;
    local_e0 = 0;
    plVar1 = local_d0 + 1;
    while( true ) {
      while (pppplVar3 = local_b8, uVar12 = local_e0, uVar17 = (undefined1)uVar14, 0x1f < local_e0)
      {
        local_80 = plVar18;
        if (((uVar14 & 1) == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
          local_61 = 0;
          local_62 = 0;
          cVar13 = FUN_180200a50();
          if (cVar13 == '\0') {
            *(char *)((longlong)local_80 + 1) = '\x01';
          }
        }
        LOCK();
        lVar15 = *local_80;
        *(char *)local_80 = '\0';
        UNLOCK();
        if ((char)lVar15 == '\x02') {
          local_62 = 0;
          local_61 = uVar17;
          WakeByAddressSingle(local_80);
        }
        uVar12 = local_e0;
        local_6c = uVar14;
        local_88 = &local_2e0 + local_e0 * 2;
        local_e0 = 0;
        local_78 = 0;
        plVar18 = &local_2e0;
        while (uVar12 * -0x10 != local_78) {
          lVar15 = *plVar18;
          plVar2 = plVar18 + 1;
          plVar18 = plVar18 + 2;
          local_78 = local_78 + -0x10;
          (**(code **)(lVar15 + 8))(*plVar2);
        }
        LOCK();
        bVar19 = (char)*plVar1 == '\0';
        if (bVar19) {
          *(char *)plVar1 = '\x01';
        }
        UNLOCK();
        uVar17 = (undefined1)local_6c;
        if (!bVar19) {
          local_62 = 0;
          local_61 = uVar17;
          FUN_180200390(plVar1);
        }
        plVar18 = plVar1;
        if ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) == 0) {
          uVar14 = 0;
        }
        else {
          local_62 = 0;
          local_61 = uVar17;
          uVar14 = FUN_180200a50();
          uVar14 = uVar14 ^ 1;
        }
      }
      local_80 = plVar18;
      if (local_b8 == (longlong ****)0x0) {
        local_62 = 1;
        local_61 = uVar17;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180260830);
      }
      if ((longlong *****)local_b8 == &local_b8) break;
      pppplVar4 = (longlong ****)*local_b8;
      if (pppplVar4 == (longlong ****)0x0) {
        local_62 = 1;
        local_61 = uVar17;
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180260848);
      }
      local_b8 = pppplVar4;
      pppplVar4[1] = (longlong ***)&local_b8;
      *pppplVar3 = (longlong ***)0x0;
      pppplVar3[1] = (longlong ***)0x0;
      uVar7 = *(undefined4 *)(pppplVar3 + 2);
      uVar8 = *(undefined4 *)((longlong)pppplVar3 + 0x14);
      uVar9 = *(undefined4 *)(pppplVar3 + 3);
      uVar10 = *(undefined4 *)((longlong)pppplVar3 + 0x1c);
      ppplVar5 = pppplVar3[2];
      pppplVar3[2] = (longlong ***)0x0;
      if (ppplVar5 != (longlong ***)0x0) {
        if (0x1f < local_e0) {
          local_62 = 1;
          local_61 = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(local_e0,0x20,&PTR_s_C__Users_burne__cargo_registry_s_1802612c0);
        }
        lVar15 = local_e0 * 0x10;
        *(undefined4 *)(&local_2e0 + local_e0 * 2) = uVar7;
        *(undefined4 *)((longlong)&local_2e0 + lVar15 + 4) = uVar8;
        *(undefined4 *)(&local_2d8 + uVar12 * 2) = uVar9;
        *(undefined4 *)((longlong)&local_2d8 + lVar15 + 4) = uVar10;
        local_e0 = local_e0 + 1;
      }
      pppplVar3[4] = (longlong ***)0x2;
    }
    local_c8 = 1;
    if (((uVar14 & 1) == 0) && ((*(ulonglong *)puVar11 & 0x7fffffffffffffff) != 0)) {
      local_61 = 0;
      local_62 = 0;
      cVar13 = FUN_180200a50();
      if (cVar13 == '\0') {
        *(char *)((longlong)local_80 + 1) = '\x01';
      }
    }
    LOCK();
    lVar15 = *local_80;
    *(char *)local_80 = '\0';
    UNLOCK();
    if ((char)lVar15 == '\x02') {
      local_62 = 0;
      local_61 = uVar17;
      WakeByAddressSingle(local_80);
    }
    uVar12 = local_e0;
    local_6c = uVar14;
    local_88 = &local_2e0 + local_e0 * 2;
    local_e0 = 0;
    plVar18 = &local_2e0;
    local_78 = 0;
    while (uVar12 * -0x10 != local_78) {
      lVar15 = *plVar18;
      plVar1 = plVar18 + 1;
      plVar18 = plVar18 + 2;
      local_78 = local_78 + -0x10;
      (**(code **)(lVar15 + 8))(*plVar1);
    }
    local_88 = (undefined8 *)local_e0;
    puVar16 = &local_2d8;
    local_78 = 0;
    while (plVar18 = local_80, local_88 != (undefined8 *)local_78) {
      local_78 = local_78 + 1;
      plVar18 = puVar16 + -1;
      uVar6 = *puVar16;
      puVar16 = puVar16 + 2;
      (**(code **)(*plVar18 + 0x18))(uVar6);
    }
    uVar17 = (undefined1)local_6c;
    local_90 = local_80;
    local_64 = 0;
    local_63 = uVar17;
    FUN_180167570(&local_d8);
    if (local_a8 != 0) {
      local_c0 = plVar18;
      local_68 = 0;
      local_67 = uVar17;
      (**(code **)(local_a8 + 0x18))(local_a0);
    }
  }
  return;
}


