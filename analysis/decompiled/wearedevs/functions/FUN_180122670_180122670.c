/* FUN_180122670 @ 180122670 */

undefined8 FUN_180122670(ulonglong *param_1,ulonglong param_2)

{
  ulonglong *puVar1;
  ulonglong *puVar2;
  char cVar3;
  uint uVar4;
  undefined8 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  bool bVar13;
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  double dVar16;
  double dVar17;
  char local_d0 [40];
  ulonglong **local_a8;
  undefined1 *local_a0;
  ulonglong *local_98;
  undefined1 local_90;
  int local_84;
  ulonglong *local_80;
  undefined8 local_78;
  uint local_6c;
  ulonglong *local_68;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  puVar2 = (ulonglong *)param_1[0x10];
  puVar1 = puVar2 + 2;
  LOCK();
  bVar13 = (char)puVar2[2] == '\0';
  if (bVar13) {
    *(char *)(puVar2 + 2) = '\x01';
  }
  UNLOCK();
  uVar7 = param_2;
  if (!bVar13) {
    FUN_180200390(puVar1);
  }
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    local_6c = 0;
    cVar3 = *(char *)((longlong)puVar2 + 0x11);
  }
  else {
    local_6c = FUN_180200a50();
    local_6c = local_6c ^ 1;
    cVar3 = *(char *)((longlong)puVar2 + 0x11);
  }
  if (cVar3 != '\0') {
    local_90 = (undefined1)local_6c;
    local_a8 = &local_98;
    local_a0 = &LAB_180118f90;
    local_98 = puVar1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180241e10,&local_a8,&PTR_s_C__Users_burne__cargo_registry_s_180242148);
  }
  local_80 = puVar1;
  local_68 = param_1;
  if (puVar2[0xc] == 0) {
    local_78 = FUN_1801df8c0();
  }
  else {
    uVar7 = puVar2[0xd];
    local_78 = (**(code **)(uVar7 + 0x28))
                         ((*(longlong *)(uVar7 + 0x10) - 1U & 0xfffffffffffffff0) + puVar2[0xc] +
                          0x10);
  }
  iVar10 = (int)uVar7;
  uVar12 = *puVar2;
  puVar1 = local_68 + 5;
  if ((int)local_68[6] != 1000000000) {
    FUN_180123930(puVar1,uVar12 < 3,puVar2 + 3);
    FUN_180123780(puVar1,param_2,uVar12 < 3,puVar2 + 3);
  }
  if ((int)puVar2[6] == 1000000000) {
    uVar5 = 2;
LAB_180122773:
    if ((((char)local_6c == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0))
       && (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
      *(undefined1 *)((longlong)puVar2 + 0x11) = 1;
    }
    LOCK();
    cVar3 = (char)*local_80;
    *(char *)local_80 = '\0';
    UNLOCK();
  }
  else {
    FUN_18013abc0(local_d0,puVar2 + 0xb,param_2);
    if (local_d0[0] == '\x05') {
      if ((int)puVar2[6] == 1000000000) {
                    /* WARNING: Subroutine does not return */
        FUN_180201b60("pong received implies ping_sent_at",0x22,
                      &PTR_s_C__Users_burne__cargo_registry_s_180242188);
      }
      *(undefined4 *)(puVar2 + 6) = 1000000000;
      local_84 = iVar10;
      uVar5 = FUN_1801e3e00(local_78,uVar7 & 0xffffffff,puVar2[5]);
      if ((int)local_68[6] != 1000000000) {
        if ((int)puVar2[10] != 1000000000) {
          if (puVar2[0xc] == 0) {
            iVar9 = local_84;
            uVar6 = FUN_1801df8c0();
          }
          else {
            uVar11 = puVar2[0xd];
            uVar6 = (**(code **)(uVar11 + 0x28))
                              ((*(longlong *)(uVar11 + 0x10) - 1U & 0xfffffffffffffff0) +
                               puVar2[0xc] + 0x10);
            iVar9 = (int)uVar11;
          }
          puVar2[9] = uVar6;
          *(int *)(puVar2 + 10) = iVar9;
        }
        FUN_180123930(puVar1,uVar12 < 3,puVar2 + 3);
        FUN_180123780(puVar1,param_2,uVar12 < 3,puVar2 + 3);
      }
      uVar8 = (uint)local_68[1];
      uVar12 = (ulonglong)uVar8;
      if (uVar8 != 1000000000) {
        if ((char)puVar2[3] == '\0') {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("bdp enabled implies bytes",0x19,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802421c0);
        }
        uVar6 = puVar2[4];
        puVar2[3] = 1;
        puVar2[4] = 0;
        if ((ulonglong)(uint)local_68[4] == 0x1000000) {
LAB_180122a00:
          uVar6 = *local_68;
          if ((uVar6 < 10) &&
             (uVar4 = *(int *)((longlong)local_68 + 0x24) + 1,
             *(uint *)((longlong)local_68 + 0x24) = uVar4, 1 < uVar4)) {
            uVar8 = uVar8 * 4 +
                    (uint)((ulonglong)((uVar8 & 0x3fffffff) >> 7) * 0x44b83 >> 0x27) * -1000000000;
            uVar6 = (uVar12 * 0x44b82fa1 >> 0x3a) + uVar6 * 4;
            *local_68 = uVar6;
            *(uint *)(local_68 + 1) = uVar8;
            *(undefined4 *)((longlong)local_68 + 0x24) = 0;
            bVar13 = false;
            uVar12 = (ulonglong)uVar8;
          }
          else {
            bVar13 = false;
          }
        }
        else {
          auVar14._8_4_ = (int)((ulonglong)uVar5 >> 0x20);
          auVar14._0_8_ = uVar5;
          auVar14._12_4_ = 0x45300000;
          dVar16 = (double)local_84 / 1000000000.0 +
                   (auVar14._8_8_ - 1.9342813113834067e+25) +
                   ((double)CONCAT44(0x43300000,(int)uVar5) - 4503599627370496.0);
          dVar17 = (double)local_68[3];
          dVar17 = (double)(~-(ulonglong)(dVar17 == 0.0) &
                            (ulonglong)((dVar16 - dVar17) * 0.125 + dVar17) |
                           (ulonglong)dVar16 & -(ulonglong)(dVar17 == 0.0));
          local_68[3] = (ulonglong)dVar17;
          auVar15._8_4_ = (int)(uVar6 >> 0x20);
          auVar15._0_8_ = uVar6;
          auVar15._12_4_ = 0x45300000;
          dVar17 = ((auVar15._8_8_ - 1.9342813113834067e+25) +
                   ((double)CONCAT44(0x43300000,(int)uVar6) - 4503599627370496.0)) / (dVar17 * 1.5);
          if ((dVar17 < (double)local_68[2]) ||
             (local_68[2] = (ulonglong)dVar17, uVar6 < ((ulonglong)(uint)local_68[4] * 2) / 3))
          goto LAB_180122a00;
          uVar12 = 0x1000000;
          if (uVar6 * 2 < 0x1000000) {
            uVar12 = uVar6 * 2;
          }
          *(int *)(local_68 + 4) = (int)uVar12;
          *(undefined4 *)((longlong)local_68 + 0x24) = 0;
          uVar6 = *local_68 >> 1;
          uVar4 = (uVar8 >> 1) + 500000000;
          if ((*local_68 & 1) == 0) {
            uVar4 = uVar8 >> 1;
          }
          *local_68 = uVar6;
          *(uint *)(local_68 + 1) = uVar4;
          bVar13 = true;
          uVar12 = (ulonglong)uVar4;
        }
        uVar7 = FUN_1801e5a10(local_78,uVar7 & 0xffffffff,uVar6,uVar12);
        puVar2[7] = uVar7;
        *(int *)(puVar2 + 8) = iVar10;
        uVar5 = 0;
        if (bVar13) goto LAB_180122773;
      }
    }
    else if (local_d0[0] == '\x06') {
      if ((((int)local_68[6] != 1000000000) && (0x3b9aca01 < (uint)local_68[10])) &&
         (cVar3 = (**(code **)(local_68[0xc] + 0x18))(local_68[0xb]), cVar3 == '\0')) {
        FUN_180122540(puVar1);
        *(undefined4 *)(local_68 + 6) = 1000000000;
        *(undefined1 *)(puVar2 + 0xe) = 1;
        uVar5 = 1;
        goto LAB_180122773;
      }
    }
    else {
      FUN_180116070(local_d0);
    }
    if ((((char)local_6c == '\0') && ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) != 0))
       && (cVar3 = FUN_180200a50(), cVar3 == '\0')) {
      *(undefined1 *)((longlong)puVar2 + 0x11) = 1;
    }
    LOCK();
    cVar3 = (char)*local_80;
    *(char *)local_80 = '\0';
    UNLOCK();
    uVar5 = 2;
  }
  if (cVar3 == '\x02') {
    WakeByAddressSingle();
  }
  return uVar5;
}


