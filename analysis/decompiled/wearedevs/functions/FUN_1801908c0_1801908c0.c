/* FUN_1801908c0 @ 1801908c0 */

ulonglong FUN_1801908c0(ulonglong *param_1,longlong param_2,longlong param_3)

{
  uint uVar1;
  int iVar2;
  void *pvVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  void *pvVar6;
  uint uVar7;
  int *piVar8;
  size_t sVar9;
  void *pvVar10;
  undefined8 unaff_R15;
  undefined8 uVar11;
  void *pvVar12;
  ulonglong uVar13;
  longlong local_a8;
  longlong local_a0;
  undefined *local_98;
  longlong local_90;
  longlong local_88;
  ulonglong *local_80;
  void *local_78;
  void *local_70;
  void *local_68;
  size_t local_60;
  void *local_58;
  void *local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar13 = CONCAT71((int7)((ulonglong)unaff_R15 >> 8),1);
  if ((char)param_1[8] == '\0') goto LAB_180190cd3;
  if ((char)param_1[8] == '\x01') {
    uVar7 = *(uint *)((longlong)param_1 + 0x34);
    pvVar10 = (void *)(ulonglong)uVar7;
    uVar1 = (uint)param_1[7];
    pvVar6 = (void *)(ulonglong)uVar1;
    piVar8 = (int *)param_1[1];
    local_50 = (void *)param_1[2];
    if (uVar1 < uVar7) goto LAB_18019093e;
    if (uVar7 != 0) {
      if (pvVar10 < local_50) {
        if (*(char *)((longlong)piVar8 + (longlong)pvVar10) < -0x40) goto LAB_18019093e;
      }
      else if (local_50 != pvVar10) goto LAB_18019093e;
    }
    if (uVar1 != 0) {
      if (pvVar6 < local_50) {
        if (*(char *)((longlong)piVar8 + (longlong)pvVar6) < -0x40) goto LAB_18019093e;
      }
      else if (local_50 != pvVar6) {
LAB_18019093e:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar8,local_50,pvVar10,pvVar6,
                      &PTR_s_C__Users_burne__cargo_registry_s_180266cf0);
      }
    }
    if (uVar1 != uVar7) goto LAB_180190989;
    iVar2 = memcmp((void *)((longlong)piVar8 + (longlong)pvVar10),(void *)0x1,
                   (longlong)pvVar6 - (longlong)pvVar10);
    if (iVar2 == 0) goto LAB_180190cd3;
    uVar7 = *(uint *)((longlong)param_1 + 0x2c);
  }
  else {
LAB_180190989:
    piVar8 = (int *)param_1[1];
    local_50 = (void *)param_1[2];
    uVar7 = *(uint *)((longlong)param_1 + 0x2c);
  }
  pvVar10 = (void *)(ulonglong)uVar7;
  if (pvVar10 != (void *)0x0) {
    if (pvVar10 < local_50) {
      if (*(char *)((longlong)piVar8 + (longlong)pvVar10) < -0x40) goto LAB_1801909a6;
    }
    else if (local_50 != pvVar10) {
LAB_1801909a6:
                    /* WARNING: Subroutine does not return */
      FUN_1802018d0(piVar8,local_50,0,pvVar10,&PTR_s_C__Users_burne__cargo_registry_s_180266d08);
    }
    if ((uVar7 == 4) && (*piVar8 == 0x656c6966)) goto LAB_180190cd3;
  }
  if (param_3 == 0 || param_2 == 0) {
    uVar1 = (uint)param_1[6];
    local_78 = (void *)(ulonglong)uVar1;
    if (local_50 <= local_78) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(local_78,local_50,&PTR_s_C__Users_burne__cargo_registry_s_180266b30);
    }
    if (*(char *)((longlong)piVar8 + (longlong)local_78) == ':') {
      local_70 = (void *)(ulonglong)(*(uint *)((longlong)param_1 + 0x34) - 1);
      if (local_50 <= local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(local_70,local_50,&PTR_s_C__Users_burne__cargo_registry_s_180266b30);
      }
      if (uVar7 + 3 == uVar1) {
        local_70 = (void *)(ulonglong)*(uint *)((longlong)param_1 + 0x34);
      }
      if (local_50 < local_70) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(0,local_70,local_50,&PTR_s_C__Users_burne__cargo_registry_s_180266b48);
      }
      uVar7 = (uint)local_70;
      if (uVar7 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_180201a30(local_78,local_70,local_50,&PTR_s_C__Users_burne__cargo_registry_s_180266b48);
      }
      if ((local_70 < local_50 && uVar7 != 0) &&
         (*(char *)((longlong)piVar8 + (longlong)local_70) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.is_char_boundary(end)",0x2c,
                      &PTR_s_C__Users_burne__cargo_registry_s_180266b48);
      }
      local_90 = (longlong)piVar8 + (longlong)local_78;
      local_88 = (longlong)piVar8 + (longlong)local_70;
      local_80 = param_1;
      FUN_1801ed580(&local_90);
      iVar2 = uVar7 - uVar1;
      *(ulonglong *)((longlong)param_1 + 0x34) =
           CONCAT44((int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x34) >> 0x20) - iVar2,
                    (int)*(undefined8 *)((longlong)param_1 + 0x34) - iVar2);
      *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) - iVar2;
      if ((char)param_1[3] != '\0') {
        *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) - iVar2;
      }
      if ((int)param_1[4] == 1) {
        *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) - iVar2;
      }
    }
  }
  else {
    local_68 = (void *)(ulonglong)*(uint *)((longlong)param_1 + 0x34);
    if (local_68 != (void *)0x0) {
      if (local_68 < local_50) {
        if (*(char *)((longlong)piVar8 + (longlong)local_68) < -0x40) goto LAB_180190ac4;
      }
      else if (local_50 != local_68) {
LAB_180190ac4:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar8,local_50,local_68,local_50,
                      &PTR_s_C__Users_burne__cargo_registry_s_180266d20);
      }
    }
    sVar9 = (longlong)local_50 - (longlong)local_68;
    if ((longlong)sVar9 < 0) {
      uVar11 = 0;
LAB_180190ae8:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar11,sVar9);
    }
    pvVar10 = (void *)0x1;
    if (sVar9 != 0) {
      FUN_180027490();
      uVar11 = 1;
      pvVar10 = (void *)thunk_FUN_1801d32d0(sVar9,1);
      if (pvVar10 == (void *)0x0) goto LAB_180190ae8;
    }
    pvVar6 = (void *)((longlong)piVar8 + (longlong)local_68);
    memcpy(pvVar10,pvVar6,sVar9);
    uVar7 = (uint)param_1[6];
    pvVar3 = (void *)(ulonglong)uVar7;
    pvVar12 = local_50;
    local_60 = sVar9;
    local_58 = pvVar10;
    if (pvVar3 <= local_50) {
      pvVar6 = (void *)CONCAT71((int7)((ulonglong)pvVar6 >> 8),pvVar3 < local_50 && uVar7 != 0);
      if ((pvVar3 < local_50 && uVar7 != 0) &&
         (*(char *)((longlong)piVar8 + (longlong)pvVar3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ec0("assertion failed: self.is_char_boundary(new_len)EmptyHostIdnaErrorInvalidPortInvalidIpv4AddressInvalidIpv6AddressInvalidDomainCharacterRelativeUrlWithoutBaseRelativeUrlWithCannotBeABaseBaseSetHostOnCannotBeABaseUrlOverflow"
                      ,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180266af0);
      }
      param_1[2] = (ulonglong)pvVar3;
      pvVar12 = pvVar3;
    }
    pvVar10 = pvVar12;
    if ((void *)*param_1 == pvVar12) {
      pvVar6 = pvVar12;
      FUN_1801f6a80(param_1,pvVar12,1,1,1);
      piVar8 = (int *)param_1[1];
      pvVar10 = (void *)param_1[2];
    }
    *(undefined1 *)((longlong)piVar8 + (longlong)pvVar10) = 0x3a;
    uVar13 = (longlong)pvVar12 + 1;
    param_1[2] = uVar13;
    local_98 = &DAT_180266b08;
    local_a8 = param_2;
    local_a0 = param_3;
    while (pvVar10 = (void *)FUN_1801aac60(&local_a8), pvVar10 != (void *)0x0) {
      if ((void *)(*param_1 - uVar13) < pvVar6) {
        FUN_1801f6a80(param_1,uVar13,pvVar6,1,1);
        piVar8 = (int *)param_1[1];
        uVar13 = param_1[2];
      }
      memcpy((void *)((longlong)piVar8 + uVar13),pvVar10,(size_t)pvVar6);
      uVar13 = uVar13 + (longlong)pvVar6;
      param_1[2] = uVar13;
      pvVar6 = pvVar10;
    }
    uVar4 = uVar13;
    if (*param_1 == uVar13) {
      FUN_1801f6a80(param_1,uVar13,1,1,1);
      uVar4 = param_1[2];
    }
    uVar5 = param_1[1];
    *(undefined1 *)(uVar5 + uVar4) = 0x40;
    uVar4 = uVar13 + 1;
    param_1[2] = uVar4;
    if (0xfffffffe < uVar13) {
      local_90 = CONCAT71(local_90._1_7_,9);
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&DAT_180266bc0,
                    &PTR_s_C__Users_burne__cargo_registry_s_180266b18);
    }
    iVar2 = (int)uVar4 - *(int *)((longlong)param_1 + 0x34);
    *(int *)((longlong)param_1 + 0x34) = (int)uVar4;
    param_1[7] = CONCAT44(iVar2 + (int)(param_1[7] >> 0x20),iVar2 + (int)param_1[7]);
    if ((int)param_1[3] == 1) {
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + iVar2;
      if ((int)param_1[4] == 1) goto LAB_180190c8e;
LAB_180190c71:
      uVar13 = *param_1 - uVar4;
    }
    else {
      if ((int)param_1[4] != 1) goto LAB_180190c71;
LAB_180190c8e:
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + iVar2;
      uVar13 = *param_1 - uVar4;
    }
    if (uVar13 < local_60) {
      FUN_1801f6a80(param_1,uVar4,local_60,1,1);
      uVar5 = param_1[1];
      uVar4 = param_1[2];
    }
    pvVar10 = local_58;
    sVar9 = local_60;
    memcpy((void *)(uVar5 + uVar4),local_58,local_60);
    param_1[2] = uVar4 + sVar9;
    if (local_50 != local_68) {
      thunk_FUN_1801d3330(pvVar10,sVar9,1);
    }
  }
  uVar13 = 0;
LAB_180190cd3:
  return uVar13 & 0xffffffff;
}


