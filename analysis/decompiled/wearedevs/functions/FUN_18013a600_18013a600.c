/* FUN_18013a600 @ 18013a600 */

/* WARNING: Type propagation algorithm not settling */

undefined1 * FUN_18013a600(undefined1 *param_1,longlong *******param_2,undefined8 param_3)

{
  longlong ******pppppplVar1;
  undefined *puVar2;
  char cVar3;
  uint uVar4;
  longlong *******ppppppplVar5;
  ulonglong uVar6;
  undefined1 uVar7;
  uint uVar8;
  longlong *****ppppplVar9;
  longlong *******ppppppplVar10;
  longlong *******ppppppplVar11;
  longlong *******in_R10;
  ulonglong uVar12;
  longlong *******unaff_R14;
  undefined4 uVar13;
  bool bVar14;
  int local_94;
  longlong *******local_90;
  longlong *******local_88;
  longlong *******local_80;
  longlong *******local_78;
  longlong *******local_70;
  longlong *******local_68;
  longlong ******local_60;
  undefined8 local_58;
  uint local_4c;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pppppplVar1 = *param_2;
  LOCK();
  bVar14 = *(char *)(pppppplVar1 + 2) == '\0';
  if (bVar14) {
    *(char *)(pppppplVar1 + 2) = '\x01';
  }
  UNLOCK();
  if (!bVar14) {
    FUN_180200390();
    unaff_R14 = param_2;
  }
  puVar2 = PTR_DAT_1802fd600;
  if ((*(ulonglong *)PTR_DAT_1802fd600 & 0x7fffffffffffffff) == 0) {
    uVar4 = 0;
    cVar3 = *(char *)((longlong)pppppplVar1 + 0x11);
    ppppppplVar11 = local_90;
    local_90 = (longlong *******)(pppppplVar1 + 2);
  }
  else {
    local_60 = pppppplVar1 + 2;
    uVar4 = FUN_180200a50();
    uVar4 = uVar4 ^ 1;
    cVar3 = *(char *)((longlong)pppppplVar1 + 0x11);
    unaff_R14 = param_2;
    ppppppplVar11 = local_90;
    local_90 = (longlong *******)local_60;
  }
  local_60 = (longlong ******)local_90;
  if (cVar3 != '\0') {
    uVar12 = (ulonglong)local_88 >> 8;
    local_88 = (longlong *******)CONCAT71((int7)uVar12,(char)uVar4);
                    /* WARNING: Subroutine does not return */
    FUN_180201bc0("called `Result::unwrap()` on an `Err` value",0x2b,&local_90,&PTR_FUN_18024fab8,
                  &PTR_s_C__Users_burne__cargo_registry_s_18024e410);
  }
  local_58 = (longlong *******)CONCAT44(local_58._4_4_,uVar4);
  ppppplVar9 = (longlong *****)(ulonglong)*(uint *)(param_2 + 1);
  local_94 = *(int *)((longlong)param_2 + 0xc);
  if (pppppplVar1[0x3d] <= ppppplVar9) {
LAB_18013a922:
    local_88 = (longlong *******)FUN_180152d10;
    local_90 = (longlong *******)&local_94;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_90,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
  }
  if ((*(int *)(pppppplVar1[0x3c] + (longlong)ppppplVar9 * 0x29) == 2) ||
     (*(int *)((longlong)pppppplVar1[0x3c] + (longlong)ppppplVar9 * 0x148 + 300) != local_94))
  goto LAB_18013a922;
  ppppppplVar10 = (longlong *******)&local_90;
  ppppppplVar5 = (longlong *******)FUN_18015a250(ppppppplVar10,pppppplVar1 + 0x11,param_3);
  local_90 = ppppppplVar11;
  if (local_90 == (longlong *******)0x3) {
    uVar4 = 5;
    uVar12 = 0;
    uVar6 = 0;
    local_4c = (uint)ppppppplVar10;
    uVar13 = 0;
    goto joined_r0x00018013a78c;
  }
  uVar13 = 0;
  if ((int)local_90 == 2) {
    uVar4 = 4;
    local_88 = ppppppplVar5;
    local_70 = in_R10;
    local_78 = unaff_R14;
LAB_18013a775:
    local_4c = (uint)ppppppplVar10;
    in_R10 = local_70;
  }
  else {
    if (((ulonglong)local_90 & 1) == 0) {
      uVar4 = 3;
      if ((local_78 < (longlong *******)0x100 & (byte)local_68) == 1) {
        ppppplVar9 = (longlong *****)0xffffffffffffffff;
        if (!CARRY8(0x100U - (longlong)local_78,(ulonglong)pppppplVar1[0xe])) {
          ppppplVar9 = (longlong *****)((0x100U - (longlong)local_78) + (longlong)pppppplVar1[0xe]);
        }
        if (pppppplVar1[0xf] < ppppplVar9) {
          ppppplVar9 = pppppplVar1[0xf];
        }
        pppppplVar1[0xe] = ppppplVar9;
      }
      ppppppplVar10 = local_88;
      local_90 = local_80;
      goto LAB_18013a775;
    }
    local_4c = (uint)((ulonglong)local_88 >> 8) & 0xffffff;
    uVar13 = (undefined4)((ulonglong)local_88 >> 0x20);
    uVar4 = (uint)local_88;
    local_88 = local_80;
    local_90 = local_78;
    in_R10 = local_68;
    local_78 = local_70;
  }
  uVar12 = (ulonglong)local_88 & 0xffffffff00000000;
  uVar6 = (ulonglong)local_88 & 0xffffffff;
  unaff_R14 = local_78;
joined_r0x00018013a78c:
  if ((((char)local_58 == '\0') && ((*(ulonglong *)puVar2 & 0x7fffffffffffffff) != 0)) &&
     (local_58 = local_90, cVar3 = FUN_180200a50(), local_90 = local_58, cVar3 == '\0')) {
    *(undefined1 *)((longlong)pppppplVar1 + 0x11) = 1;
  }
  LOCK();
  cVar3 = *(char *)local_60;
  *(char *)local_60 = '\0';
  UNLOCK();
  ppppppplVar11 = local_90;
  if (cVar3 == '\x02') {
    local_58 = local_90;
    WakeByAddressSingle();
    ppppppplVar11 = local_58;
  }
  if ((char)uVar4 == '\x03') {
    uVar6 = uVar6 | uVar12;
    *param_1 = 5;
  }
  else {
    uVar8 = uVar4 & 0xff;
    if (uVar8 == 4) {
      *param_1 = 6;
      return param_1;
    }
    if (uVar8 == 5) {
      *param_1 = 7;
      return param_1;
    }
    if ((char)uVar4 == '\0') {
      uVar7 = 0;
      ppppppplVar10 = (longlong *******)(ulonglong)local_4c;
    }
    else {
      ppppppplVar5 = (longlong *******)(ulonglong)local_4c;
      ppppppplVar10 = ppppppplVar5;
      if (uVar8 == 1) {
        uVar6 = uVar6 | uVar12;
        uVar7 = 1;
      }
      else {
        local_90 = (longlong *******)(uVar6 | uVar12);
        if (SBORROW8(0,(longlong)local_90)) {
          uVar6 = ((ulonglong)ppppppplVar5 & 0xff) << 0x20 | 3;
        }
        else {
          ppppppplVar10 = (longlong *******)&local_90;
          local_80 = unaff_R14;
          uVar6 = FUN_18018c8e0(ppppppplVar5);
        }
        uVar7 = 4;
      }
    }
    *param_1 = uVar7;
    param_1[1] = (char)ppppppplVar10;
    *(undefined4 *)(param_1 + 4) = uVar13;
  }
  *(ulonglong *)(param_1 + 8) = uVar6;
  *(longlong ********)(param_1 + 0x10) = ppppppplVar11;
  *(longlong ********)(param_1 + 0x18) = unaff_R14;
  *(longlong ********)(param_1 + 0x20) = in_R10;
  return param_1;
}


