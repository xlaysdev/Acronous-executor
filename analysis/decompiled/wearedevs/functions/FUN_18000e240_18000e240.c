/* FUN_18000e240 @ 18000e240 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_18000e240(longlong *param_1,longlong *param_2,undefined8 param_3)

{
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  longlong lVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  longlong lVar16;
  undefined1 uVar17;
  longlong lVar18;
  void *pvVar19;
  longlong lVar20;
  longlong lVar21;
  ulonglong uVar22;
  longlong *plVar23;
  longlong local_198;
  longlong lStack_190;
  longlong local_118;
  void *local_110;
  longlong local_108;
  longlong lStack_100;
  longlong local_f8;
  void *pvStack_f0;
  longlong local_e8;
  longlong lStack_e0;
  longlong lStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  longlong lStack_b8;
  longlong local_b0;
  longlong lStack_a8;
  longlong local_a0;
  longlong lStack_98;
  longlong local_90;
  longlong lStack_88;
  longlong local_80;
  void *local_78;
  longlong local_70;
  longlong *local_60;
  longlong *local_58;
  undefined8 local_50;
  
  local_50 = 0xfffffffffffffffe;
  lVar18 = (longlong)&switchD_18000e28b::switchdataD_18020332c +
           (longlong)(int)(&switchD_18000e28b::switchdataD_18020332c)[*(byte *)(param_2 + 0x34)];
  local_58 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 0x34)) {
  case 0:
    memcpy(param_2 + 0x11,param_2,0x88);
    lVar18 = param_2[0xe];
    lVar21 = param_2[0xf];
    lStack_98 = param_2[0xc];
    local_90 = param_2[0xd];
    lStack_a8 = param_2[10];
    local_a0 = param_2[0xb];
    lStack_b8 = param_2[8];
    local_b0 = param_2[9];
    local_f8 = *param_2;
    pvStack_f0 = (void *)param_2[1];
    local_e8 = param_2[2];
    lStack_e0 = param_2[3];
    lStack_d8 = param_2[4];
    local_d0 = (undefined4)param_2[5];
    uStack_cc = *(undefined4 *)((longlong)param_2 + 0x2c);
    uStack_c8 = (undefined4)param_2[6];
    uStack_c4 = *(undefined4 *)((longlong)param_2 + 0x34);
    local_c0 = (undefined4)param_2[7];
    uStack_bc = *(undefined4 *)((longlong)param_2 + 0x3c);
    lStack_88 = lVar18;
    local_80 = lVar21;
    FUN_18000b470(&local_f8);
    if (lStack_98 != 0) {
      local_60 = (longlong *)lStack_98;
      FUN_18002a190();
      thunk_FUN_1801d3330(local_60,0x20,8);
    }
    local_58[0x22] = 3;
    local_58[0x2e] = 0;
    local_58[0x2f] = 8;
    local_58[0x30] = 0;
    local_58[0x31] = 0;
    local_58[0x32] = lVar18;
    local_58[0x33] = lVar21;
    break;
  case 2:
    FUN_180201c80(&PTR_s_C__Users_burne__cargo_registry_s_1802031e8);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_180201c60(&PTR_s_C__Users_burne__cargo_registry_s_1802031e8);
  case 4:
                    /* WARNING: Could not emulate address calculation at 0x00018000e723 */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((longlong)&switchD_18000e28b::switchdataD_18020332c +
              (longlong)(int)(&switchD_18000e28b::switchdataD_18020332c)[lVar18]))();
    return;
  case 5:
    _UINT_180203344 = (longlong *)0xffe0b5a8ffe0b70b;
                    /* WARNING: Read-only address (ram,0x00018020333c) is written */
                    /* WARNING: Read-only address (ram,0x000180203344) is written */
    switchD_18000e731::switchdataD_18020333c = 0xffe0b3f7;
    return;
  case 6:
    switchD_18000e731::switchdataD_18020333c = 0xffe0b3f7;
    _UINT_180203344 = (longlong *)0xffe0b5a8ffe0b70b;
    return;
  case 7:
    uVar22 = (ulonglong)
             ((&switchD_18000e28b::switchdataD_18020332c)[*(byte *)(param_2 + 0x34)] + 0xc820332f);
                    /* WARNING (jumptable): Read-only address (ram,0x00018020333c) is written */
                    /* WARNING: Read-only address (ram,0x00018020333c) is written */
    switchD_18000e731::switchdataD_18020333c = (uint)lVar18;
                    /* WARNING (jumptable): Read-only address (ram,0x000180203344) is written */
                    /* WARNING: Read-only address (ram,0x000180203344) is written */
    _UINT_180203344 = param_2;
    FUN_18004ed00(uVar22 + 0xb0,&switchD_18000e731::switchdataD_18020333c,param_3);
    lVar18 = *(longlong *)(uVar22 + 0xb0);
    if (lVar18 == 4) {
      *param_1 = 4;
      uVar17 = 3;
      lVar20 = *(longlong *)(uVar22 + 0x3a8);
    }
    else {
      lVar21 = *(longlong *)(uVar22 + 0xb8);
      *(undefined8 *)(uVar22 + 0x330) = *(undefined8 *)(uVar22 + 0xc0);
      *(undefined8 *)(uVar22 + 0x338) = *(undefined8 *)(uVar22 + 200);
      *(undefined8 *)(uVar22 + 0x340) = *(undefined8 *)(uVar22 + 0xd0);
      *(undefined8 *)(uVar22 + 0x348) = *(undefined8 *)(uVar22 + 0xd8);
      *(undefined8 *)(uVar22 + 0x350) = *(undefined8 *)(uVar22 + 0xe0);
      *(undefined8 *)(uVar22 + 0x358) = *(undefined8 *)(uVar22 + 0xe8);
      *(undefined8 *)(uVar22 + 0x360) = *(undefined8 *)(uVar22 + 0xf0);
      *(undefined8 *)(uVar22 + 0x368) = *(undefined8 *)(uVar22 + 0xf8);
      *(undefined8 *)(uVar22 + 0x370) = *(undefined8 *)(uVar22 + 0x100);
      *(undefined8 *)(uVar22 + 0x378) = *(undefined8 *)(uVar22 + 0x108);
      *(undefined8 *)(uVar22 + 0x380) = *(undefined8 *)(uVar22 + 0x110);
      *(undefined8 *)(uVar22 + 0x388) = *(undefined8 *)(uVar22 + 0x118);
      *(undefined4 *)(uVar22 + 0x390) = *(undefined4 *)(uVar22 + 0x120);
      *(undefined4 *)(uVar22 + 0x394) = *(undefined4 *)(uVar22 + 0x124);
      *(undefined4 *)(uVar22 + 0x398) = *(undefined4 *)(uVar22 + 0x128);
      *(undefined4 *)(uVar22 + 0x39c) = *(undefined4 *)(uVar22 + 300);
      *(undefined8 *)(uVar22 + 0x3a0) = *(undefined8 *)(uVar22 + 0x130);
      FUN_18000b8f0(*(undefined8 *)(*(longlong *)(uVar22 + 0x3a8) + 0x10),
                    *(undefined8 *)(*(longlong *)(uVar22 + 0x3a8) + 0x18));
      plVar23 = *(longlong **)(*(longlong *)(uVar22 + 0x3a8) + 0x30);
      LOCK();
      *plVar23 = *plVar23 + -1;
      UNLOCK();
      if (*plVar23 == 0) {
        FUN_18003e300(*(longlong *)(uVar22 + 0x3a8) + 0x30);
      }
      lVar20 = *(longlong *)(uVar22 + 0x3a8);
      *(undefined1 *)(lVar20 + 0x38) = 0;
      *param_1 = lVar18;
      param_1[1] = lVar21;
      lVar18 = *(longlong *)(uVar22 + 0x338);
      lVar21 = *(longlong *)(uVar22 + 0x340);
      lVar2 = *(longlong *)(uVar22 + 0x348);
      lVar3 = *(longlong *)(uVar22 + 0x350);
      lVar4 = *(longlong *)(uVar22 + 0x358);
      lVar5 = *(longlong *)(uVar22 + 0x360);
      lVar6 = *(longlong *)(uVar22 + 0x368);
      param_1[2] = *(longlong *)(uVar22 + 0x330);
      param_1[3] = lVar18;
      param_1[4] = lVar21;
      param_1[5] = lVar2;
      param_1[6] = lVar3;
      param_1[7] = lVar4;
      param_1[8] = lVar5;
      param_1[9] = lVar6;
      lVar18 = *(longlong *)(uVar22 + 0x378);
      param_1[10] = *(longlong *)(uVar22 + 0x370);
      param_1[0xb] = lVar18;
      lVar18 = *(longlong *)(uVar22 + 0x388);
      param_1[0xc] = *(longlong *)(uVar22 + 0x380);
      param_1[0xd] = lVar18;
      lVar18 = *(longlong *)(uVar22 + 0x398);
      param_1[0xe] = *(longlong *)(uVar22 + 0x390);
      param_1[0xf] = lVar18;
      param_1[0x10] = *(longlong *)(uVar22 + 0x3a0);
      uVar17 = 1;
    }
    *(undefined1 *)(lVar20 + 0x39) = uVar17;
    return;
                    /* WARNING: Read-only address (ram,0x00018020333c) is written */
                    /* WARNING: Read-only address (ram,0x000180203344) is written */
  }
  local_60 = local_58 + 0x22;
  FUN_180032d00(&local_f8,local_60,param_3);
  lVar16 = local_80;
  lVar15 = lStack_88;
  lVar14 = local_90;
  lVar13 = lStack_98;
  lVar6 = local_a0;
  lVar5 = lStack_a8;
  lVar4 = local_b0;
  lVar3 = lStack_b8;
  uVar12 = uStack_bc;
  uVar11 = local_c0;
  uVar10 = uStack_c4;
  uVar9 = uStack_c8;
  uVar8 = uStack_cc;
  uVar7 = local_d0;
  lVar2 = lStack_d8;
  lVar20 = lStack_e0;
  lVar21 = local_e8;
  pvVar19 = pvStack_f0;
  lVar18 = local_f8;
  if (local_f8 == 5) {
    *param_1 = 1;
    uVar17 = 3;
    plVar23 = local_58;
    goto LAB_18000e53f;
  }
  FUN_18000ac30(local_60);
  if ((int)lVar18 == 4) {
LAB_18000e494:
    plVar23 = local_58;
    local_a0 = CONCAT62(local_a0._2_6_,5);
    local_f8 = -0x8000000000000000;
    local_78 = pvVar19;
    local_70 = lVar21;
    FUN_180027490();
    pvVar19 = (void *)thunk_FUN_1801d32d0(0x90,8);
    if (pvVar19 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_180201705(8,0x90);
    }
    memcpy(pvVar19,&local_f8,0x90);
    plVar1 = (longlong *)plVar23[0x21];
    lVar18 = *plVar1;
    lVar21 = 0;
  }
  else {
    local_f8 = lVar18;
    pvStack_f0 = pvVar19;
    local_e8 = lVar21;
    lStack_e0 = lVar20;
    lStack_d8 = lVar2;
    local_d0 = uVar7;
    uStack_cc = uVar8;
    uStack_c8 = uVar9;
    uStack_c4 = uVar10;
    local_c0 = uVar11;
    uStack_bc = uVar12;
    lStack_b8 = lVar3;
    local_b0 = lVar4;
    lStack_a8 = lVar5;
    local_a0 = lVar6;
    lStack_98 = lVar13;
    local_90 = lVar14;
    lStack_88 = lVar15;
    local_80 = lVar16;
    FUN_180033100(&local_118,&local_f8);
    if (local_118 == 0) {
      lVar21 = local_108;
      pvVar19 = local_110;
      goto LAB_18000e494;
    }
    plVar1 = (longlong *)local_58[0x21];
    lVar18 = *plVar1;
    pvVar19 = local_110;
    lVar21 = local_118;
    plVar23 = local_58;
    lStack_190 = lStack_100;
    local_198 = local_108;
  }
  if (lVar18 != 0) {
    thunk_FUN_1801d3330(plVar1[1],lVar18,1);
  }
  thunk_FUN_1801d3330(plVar1,0x58,8);
  param_1[1] = lVar21;
  param_1[2] = (longlong)pvVar19;
  param_1[3] = local_198;
  param_1[4] = lStack_190;
  *param_1 = 0;
  uVar17 = 1;
LAB_18000e53f:
  *(undefined1 *)(plVar23 + 0x34) = uVar17;
  return;
}


