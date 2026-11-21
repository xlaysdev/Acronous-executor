/* FUN_180190e70 @ 180190e70 */

ulonglong FUN_180190e70(ulonglong *param_1,void *param_2,size_t param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  void *_Src;
  ulonglong uVar6;
  uint uVar7;
  ulonglong uVar8;
  void *pvVar9;
  ulonglong uVar10;
  uint uVar11;
  undefined8 unaff_RBX;
  int *piVar12;
  undefined8 uVar13;
  uint uVar14;
  ulonglong uVar15;
  byte *pbVar16;
  void *local_88;
  size_t local_80;
  undefined *local_78;
  ulonglong local_70;
  byte *local_68;
  byte *local_60;
  undefined1 local_51;
  ulonglong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  uVar15 = CONCAT71((int7)((ulonglong)unaff_RBX >> 8),1);
  if ((char)param_1[8] == '\0') goto LAB_1801912ef;
  if ((char)param_1[8] == '\x01') {
    uVar11 = *(uint *)((longlong)param_1 + 0x34);
    uVar6 = (ulonglong)uVar11;
    uVar14 = (uint)param_1[7];
    uVar10 = (ulonglong)uVar14;
    piVar12 = (int *)param_1[1];
    local_50 = param_1[2];
    if (uVar14 < uVar11) goto LAB_180190eed;
    if (uVar11 != 0) {
      if (uVar6 < local_50) {
        if (*(char *)((longlong)piVar12 + uVar6) < -0x40) goto LAB_180190eed;
      }
      else if (local_50 != uVar6) goto LAB_180190eed;
    }
    if (uVar14 != 0) {
      if (uVar10 < local_50) {
        if (*(char *)((longlong)piVar12 + uVar10) < -0x40) {
LAB_180190eed:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(piVar12,local_50,uVar6,uVar10,
                        &PTR_s_C__Users_burne__cargo_registry_s_180266cf0);
        }
      }
      else if (local_50 != uVar10) goto LAB_180190eed;
    }
    if (uVar14 != uVar11) goto LAB_180190f33;
    iVar4 = memcmp((void *)((longlong)piVar12 + uVar6),(void *)0x1,uVar10 - uVar6);
    if (iVar4 == 0) goto LAB_1801912ef;
    uVar11 = *(uint *)((longlong)param_1 + 0x2c);
  }
  else {
LAB_180190f33:
    piVar12 = (int *)param_1[1];
    local_50 = param_1[2];
    uVar11 = *(uint *)((longlong)param_1 + 0x2c);
  }
  uVar6 = (ulonglong)uVar11;
  if (uVar6 != 0) {
    if (uVar6 < local_50) {
      if (*(char *)((longlong)piVar12 + uVar6) < -0x40) {
LAB_180190f55:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar12,local_50,0,uVar6,&PTR_s_C__Users_burne__cargo_registry_s_180266d08);
      }
    }
    else if (local_50 != uVar6) goto LAB_180190f55;
    if ((uVar11 == 4) && (*piVar12 == 0x656c6966)) goto LAB_1801912ef;
  }
  uVar11 = uVar11 + 3;
  uVar15 = (ulonglong)uVar11;
  uVar14 = (uint)param_1[6];
  local_70 = (ulonglong)uVar14;
  if (uVar14 < uVar11) goto LAB_180190fbd;
  if (uVar11 != 0) {
    if (uVar15 < local_50) {
      if (*(char *)((longlong)piVar12 + uVar15) < -0x40) goto LAB_180190fbd;
    }
    else if (local_50 != uVar15) goto LAB_180190fbd;
  }
  if (uVar14 != 0) {
    if (local_70 < local_50) {
      if (*(char *)((longlong)piVar12 + local_70) < -0x40) {
LAB_180190fbd:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(piVar12,local_50,uVar15,local_70,
                      &PTR_s_C__Users_burne__cargo_registry_s_180266cf0);
      }
    }
    else if (local_50 != local_70) goto LAB_180190fbd;
  }
  if ((local_70 - uVar15 != param_3) ||
     (iVar4 = memcmp((void *)((longlong)piVar12 + uVar15),param_2,param_3), iVar4 != 0)) {
    if ((int)local_70 != 0) {
      if (local_70 < local_50) {
        if (*(char *)((longlong)piVar12 + local_70) < -0x40) {
LAB_180191017:
                    /* WARNING: Subroutine does not return */
          FUN_1802018d0(piVar12,local_50,local_70,local_50,
                        &PTR_s_C__Users_burne__cargo_registry_s_180266d20);
        }
      }
      else if (local_50 != local_70) goto LAB_180191017;
    }
    local_68 = (byte *)(local_50 - local_70);
    if ((longlong)local_68 < 0) {
      uVar13 = 0;
LAB_180191044:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar13,local_68);
    }
    local_60 = (byte *)0x1;
    if (local_68 != (byte *)0x0) {
      FUN_180027490();
      uVar13 = 1;
      local_60 = (byte *)thunk_FUN_1801d32d0(local_68,1);
      if (local_60 == (byte *)0x0) goto LAB_180191044;
    }
    pvVar9 = (void *)((longlong)piVar12 + local_70);
    memcpy(local_60,pvVar9,(size_t)local_68);
    if ((uVar15 < local_50 && uVar11 != 0) && (*(char *)((longlong)piVar12 + uVar15) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("assertion failed: self.is_char_boundary(new_len)EmptyHostIdnaErrorInvalidPortInvalidIpv4AddressInvalidIpv6AddressInvalidDomainCharacterRelativeUrlWithoutBaseRelativeUrlWithCannotBeABaseBaseSetHostOnCannotBeABaseUrlOverflow"
                    ,0x30,&PTR_s_C__Users_burne__cargo_registry_s_180266b60);
    }
    param_1[2] = uVar15;
    local_78 = &DAT_180266b08;
    local_88 = param_2;
    local_80 = param_3;
    while (_Src = (void *)FUN_1801aac60(&local_88), pbVar3 = local_60, pbVar16 = local_68,
          _Src != (void *)0x0) {
      if ((void *)(*param_1 - uVar15) < pvVar9) {
        FUN_1801f6a80(param_1,uVar15,pvVar9,1,1);
        piVar12 = (int *)param_1[1];
        uVar15 = param_1[2];
      }
      memcpy((void *)((longlong)piVar12 + uVar15),_Src,(size_t)pvVar9);
      uVar15 = uVar15 + (longlong)pvVar9;
      param_1[2] = uVar15;
      pvVar9 = _Src;
    }
    if (uVar15 >> 0x20 != 0) {
      local_51 = 9;
                    /* WARNING: Subroutine does not return */
      FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_51,&DAT_180266bc0,
                    &PTR_s_C__Users_burne__cargo_registry_s_180266b78);
    }
    iVar4 = (int)param_1[6];
    uVar14 = (uint)uVar15;
    *(uint *)(param_1 + 6) = uVar14;
    if (local_50 == local_70) {
      if (uVar11 == uVar14) goto LAB_180191240;
LAB_18019125b:
      uVar6 = *param_1;
      uVar10 = uVar15;
      if (uVar6 == uVar15) {
        FUN_1801f6a80(param_1,uVar15,1,1,1);
        uVar6 = *param_1;
        uVar10 = param_1[2];
      }
      uVar8 = param_1[1];
      *(undefined1 *)(uVar8 + uVar10) = 0x40;
      uVar15 = uVar15 + 1;
      param_1[2] = uVar15;
      pbVar16 = pbVar3 + ((longlong)pbVar16 - (longlong)local_60);
      if ((byte *)(uVar6 - uVar15) < pbVar16) {
        FUN_1801f6a80(param_1,uVar15,pbVar16,1,1);
        uVar8 = param_1[1];
        uVar15 = param_1[2];
      }
      pvVar9 = (void *)(uVar8 + uVar15);
      uVar11 = uVar14 + 1;
LAB_18019128f:
      memcpy(pvVar9,local_60,(size_t)pbVar16);
      pbVar16 = pbVar16 + uVar15;
    }
    else {
      bVar1 = *local_60;
      uVar5 = (uint)bVar1;
      if ((char)bVar1 < '\0') {
        uVar7 = bVar1 & 0x1f;
        if (bVar1 < 0xe0) {
          uVar5 = uVar7 << 6 | local_60[1] & 0x3f;
        }
        else {
          uVar5 = local_60[2] & 0x3f | (local_60[1] & 0x3f) << 6;
          if (bVar1 < 0xf0) {
            uVar5 = uVar5 | uVar7 << 0xc;
          }
          else {
            uVar5 = local_60[3] & 0x3f | uVar5 << 6 | (bVar1 & 7) << 0x12;
          }
        }
      }
      if (uVar11 != uVar14) {
        if ((uVar5 != 0x3a) && (uVar5 != 0x40)) goto LAB_18019125b;
LAB_180191240:
        if ((byte *)(*param_1 - uVar15) < local_68) {
          FUN_1801f6a80(param_1,uVar15,local_68,1,1);
          piVar12 = (int *)param_1[1];
          uVar15 = param_1[2];
        }
        pvVar9 = (void *)((longlong)piVar12 + uVar15);
        uVar11 = uVar14;
        goto LAB_18019128f;
      }
      if (uVar5 != 0x40) goto LAB_180191240;
      if ((local_68 != (byte *)0x1) && ((char)local_60[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(local_60,local_68,1,local_68,&PTR_s_C__Users_burne__cargo_registry_s_180266b90
                     );
      }
      pbVar16 = local_68 + -1;
      if ((byte *)(*param_1 - uVar15) < pbVar16) {
        FUN_1801f6a80(param_1,uVar15,pbVar16,1,1);
        uVar15 = param_1[2];
      }
      iVar4 = iVar4 + 1;
      memcpy((void *)(param_1[1] + uVar15),local_60 + 1,(size_t)pbVar16);
      pbVar16 = pbVar16 + uVar15;
    }
    iVar4 = uVar11 - iVar4;
    param_1[2] = (ulonglong)pbVar16;
    *(ulonglong *)((longlong)param_1 + 0x34) =
         CONCAT44(iVar4 + (int)((ulonglong)*(undefined8 *)((longlong)param_1 + 0x34) >> 0x20),
                  iVar4 + (int)*(undefined8 *)((longlong)param_1 + 0x34));
    *(int *)((longlong)param_1 + 0x3c) = *(int *)((longlong)param_1 + 0x3c) + iVar4;
    if ((char)param_1[3] == '\0') {
      iVar2 = (int)param_1[4];
    }
    else {
      *(int *)((longlong)param_1 + 0x1c) = *(int *)((longlong)param_1 + 0x1c) + iVar4;
      iVar2 = (int)param_1[4];
    }
    if (iVar2 == 1) {
      *(int *)((longlong)param_1 + 0x24) = *(int *)((longlong)param_1 + 0x24) + iVar4;
    }
    if (local_50 != local_70) {
      thunk_FUN_1801d3330(local_60,local_68,1);
    }
  }
  uVar15 = 0;
LAB_1801912ef:
  return uVar15 & 0xffffffff;
}


