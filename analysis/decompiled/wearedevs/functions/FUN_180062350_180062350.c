/* FUN_180062350 @ 180062350 */

ulonglong FUN_180062350(longlong param_1,longlong param_2,char **param_3,longlong param_4)

{
  byte bVar1;
  int iVar2;
  char ****ppppcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  char cVar8;
  uint uVar9;
  int *piVar10;
  undefined8 *puVar11;
  longlong lVar12;
  ulonglong uVar13;
  char ***local_338;
  char ***local_330;
  undefined8 *****local_328;
  undefined *local_320;
  longlong *local_318;
  char *local_310;
  char *local_200;
  char ****local_1f8;
  longlong local_1f0;
  ulonglong local_1e8;
  ulonglong local_1e0;
  undefined8 local_1d8;
  undefined4 local_1d0;
  undefined1 local_1cc;
  undefined1 local_1cb;
  byte local_1ca;
  longlong local_d8;
  ulonglong ****local_d0;
  char ****local_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  longlong local_80;
  longlong *local_78 [2];
  undefined8 local_68;
  undefined8 local_60;
  char **local_58;
  undefined *local_50;
  undefined1 local_42;
  undefined1 local_41;
  undefined8 local_40;
  
  puVar7 = PTR_DAT_1802fd448;
  puVar6 = PTR_PTR_1802fbbc8;
  local_40 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar1 = PTR_PTR_1802fbbc8[0x10];
    uVar9 = (uint)bVar1;
    if (((1 < bVar1 - 1) &&
        ((bVar1 == 0 || (uVar9 = FUN_1801faaf0(PTR_PTR_1802fbbc8), (char)uVar9 == '\0')))) ||
       (cVar8 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9), cVar8 == '\0')) goto LAB_180062393;
    lVar12 = *(longlong *)puVar6;
    local_320 = (undefined *)(lVar12 + 0x30);
    local_338 = (char ***)0x1;
    local_330 = (char ***)&DAT_00000008;
    local_328 = (undefined8 *****)0x0;
    FUN_180160410(&local_80,lVar12,&local_338);
    if (local_80 != 2) {
      FUN_180161780(&local_80,&local_68);
    }
  }
  else {
LAB_180062393:
    local_80 = 2;
    local_60 = 0;
  }
  ppppcVar3 = *(char *****)(param_4 + 0xe0);
  *(undefined8 *)(param_4 + 0xe0) = 3;
  puVar6 = PTR_PTR_1802fbbe0;
  if (ppppcVar3 == (char ****)0x3) {
LAB_1800623c1:
  }
  else {
    local_c0 = *(undefined4 *)(param_4 + 0xe8);
    uStack_bc = *(undefined4 *)(param_4 + 0xec);
    uStack_b8 = *(undefined4 *)(param_4 + 0xf0);
    uStack_b4 = *(undefined4 *)(param_4 + 0xf4);
    local_b0 = *(undefined4 *)(param_4 + 0xf8);
    uStack_ac = *(undefined4 *)(param_4 + 0xfc);
    uStack_a8 = *(undefined4 *)(param_4 + 0x100);
    uStack_a4 = *(undefined4 *)(param_4 + 0x104);
    local_a0 = *(undefined4 *)(param_4 + 0x108);
    uStack_9c = *(undefined4 *)(param_4 + 0x10c);
    uStack_98 = *(undefined4 *)(param_4 + 0x110);
    uStack_94 = *(undefined4 *)(param_4 + 0x114);
    local_90 = *(undefined4 *)(param_4 + 0x118);
    uStack_8c = *(undefined4 *)(param_4 + 0x11c);
    uStack_88 = *(undefined4 *)(param_4 + 0x120);
    uStack_84 = *(undefined4 *)(param_4 + 0x124);
    local_c8 = ppppcVar3;
    if (*(longlong *)puVar7 == 0) {
      bVar1 = PTR_PTR_1802fbbe0[0x10];
      uVar9 = (uint)bVar1;
      if (bVar1 - 1 < 2) {
LAB_1800625fc:
        local_41 = 1;
        cVar8 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9);
        if (cVar8 != '\0') {
          lVar12 = *(longlong *)puVar6;
          local_58 = (char **)0x18020a228;
          local_50 = (undefined *)0x13;
          local_d0 = (ulonglong ****)&local_c8;
          if (local_c8 == (char ****)0x0) {
            local_d8 = CONCAT44(uStack_ac,local_b0);
          }
          else if ((int)local_c8 == 1) {
            local_d8 = 0;
            if (CONCAT44(uStack_ac,local_b0) <= CONCAT44(uStack_b4,uStack_b8)) {
              local_d8 = CONCAT44(uStack_b4,uStack_b8) - CONCAT44(uStack_ac,local_b0);
            }
          }
          else {
            local_d8 = 0;
          }
          local_1e8 = lVar12 + 0x30;
          local_338 = &local_58;
          local_330 = (char ***)&DAT_180209b90;
          local_328 = &local_d0;
          local_320 = &DAT_18020a238;
          local_318 = &local_d8;
          local_310 = "";
          local_200 = (char *)0x1;
          local_1f8 = &local_338;
          local_1f0 = 3;
          local_41 = 1;
          FUN_180160ae0(lVar12,&local_200);
        }
      }
      else if (bVar1 != 0) {
        local_41 = 1;
        uVar9 = FUN_1801faaf0(PTR_PTR_1802fbbe0);
        if ((char)uVar9 != '\0') goto LAB_1800625fc;
      }
    }
    iVar2 = *(int *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x4c) = 0;
    puVar6 = PTR_PTR_1802fbbe8;
    if (iVar2 == 1) {
      lVar12 = CONCAT44(uStack_bc,local_c0);
      uVar13 = CONCAT44(uStack_b4,uStack_b8);
      uVar5 = CONCAT44(uStack_ac,local_b0);
      if (local_c8 == (char ****)0x0) {
        if (uVar5 != 0) {
LAB_18006273c:
          local_1ca = uStack_84._2_1_ | (byte)local_90;
          local_1f8 = local_c8;
          local_1d0 = uStack_88;
          local_1cc = (undefined1)uStack_84;
          local_1cb = uStack_84._1_1_;
          local_200 = (char *)((ulonglong)local_200 & 0xffffffffffffff00);
          local_42 = 1;
          local_1f0 = lVar12;
          local_1e8 = uVar13;
          local_1e0 = uVar5;
          local_1d8 = CONCAT44(uStack_a4,uStack_a8);
          local_58 = param_3;
          local_50 = (undefined *)CONCAT44(uStack_94,uStack_98);
          piVar10 = (int *)FUN_180152f00(&local_58);
          memcpy(&local_328,&local_200,0x128);
          local_338 = (char ***)0x0;
          uVar13 = *(ulonglong *)(param_2 + 0x20);
          local_42 = 0;
          FUN_1800920e0(param_2,uVar13,&local_338);
          if (*piVar10 == 1) {
            if (*(ulonglong *)(param_2 + 0x10) <= uVar13) {
LAB_1800629f2:
              local_42 = 0;
                    /* WARNING: Subroutine does not return */
              FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_18020d930);
            }
            if (*(int *)(*(longlong *)(param_2 + 8) + uVar13 * 0x138) == 2) goto LAB_1800629f2;
            uVar4 = *(undefined8 *)(piVar10 + 2);
            puVar11 = (undefined8 *)(*(longlong *)(param_2 + 8) + uVar13 * 0x138);
            *puVar11 = 1;
            puVar11[1] = uVar4;
            *(ulonglong *)(piVar10 + 2) = uVar13;
          }
          else {
            piVar10[0] = 1;
            piVar10[1] = 0;
            *(ulonglong *)(piVar10 + 2) = uVar13;
            *(ulonglong *)(piVar10 + 4) = uVar13;
          }
          local_42 = 0;
          lVar12 = FUN_180152e90(&local_58);
          if (0 < *(int *)(lVar12 + 0x8c)) {
            param_1 = param_1 + 0x10;
            local_42 = 0;
            FUN_1800ec180(param_1,&local_58);
          }
          uVar13 = CONCAT71((int7)((ulonglong)param_1 >> 8),1);
          iVar2 = (int)local_80;
          goto joined_r0x0001800628b2;
        }
        local_41 = 0;
        (**(code **)(lVar12 + 0x20))(CONCAT44(uStack_a4,uStack_a8));
      }
      else if (local_c8 == (char ****)0x1) {
        if (uVar5 < uVar13) goto LAB_18006273c;
        if (uVar13 != 0) goto LAB_1800628f5;
      }
      goto LAB_1800623c1;
    }
    if (iVar2 != 2) {
      local_41 = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("wasn\'t expecting a frame to reclaim",0x47,
                    &PTR_s_C__Users_burne__cargo_registry_s_18020a280);
    }
    if (*(longlong *)puVar7 == 0) {
      bVar1 = PTR_PTR_1802fbbe8[0x10];
      uVar9 = (uint)bVar1;
      if (bVar1 - 1 < 2) {
LAB_1800626ac:
        local_41 = 1;
        cVar8 = FUN_1801601d0(*(undefined8 *)puVar6,uVar9);
        if (cVar8 != '\0') {
          lVar12 = *(longlong *)puVar6;
          local_320 = (undefined *)(lVar12 + 0x30);
          local_200 = "not reclaiming frame for cancelled stream";
          local_1f8 = (char ****)0x53;
          local_58 = &local_200;
          local_50 = &DAT_180209b90;
          local_338 = (char ***)0x1;
          local_330 = &local_58;
          local_328 = (undefined8 *****)0x1;
          local_41 = 1;
          FUN_180160ae0(lVar12,&local_338);
        }
      }
      else if (bVar1 != 0) {
        local_41 = 1;
        uVar9 = FUN_1801faaf0(PTR_PTR_1802fbbe8);
        if ((char)uVar9 != '\0') goto LAB_1800626ac;
      }
    }
    if (local_c8 != (char ****)0x1) {
      if (local_c8 == (char ****)0x0) {
        (**(code **)(CONCAT44(uStack_bc,local_c0) + 0x20))
                  (CONCAT44(uStack_a4,uStack_a8),CONCAT44(uStack_b4,uStack_b8),
                   CONCAT44(uStack_ac,local_b0));
      }
      goto LAB_1800623c1;
    }
    uVar13 = CONCAT44(uStack_b4,uStack_b8);
    if (uVar13 == 0) goto LAB_1800623c1;
    lVar12 = CONCAT44(uStack_bc,local_c0);
LAB_1800628f5:
    thunk_FUN_1801d3330(lVar12,uVar13,1);
  }
  uVar13 = 0;
  iVar2 = (int)local_80;
joined_r0x0001800628b2:
  if (((iVar2 != 2) && (FUN_180161750(&local_80,&local_68), lVar12 = local_80, local_80 != 2)) &&
     (FUN_1801617b0(&local_80,local_68), lVar12 != 0)) {
    LOCK();
    *local_78[0] = *local_78[0] + -1;
    UNLOCK();
    if (*local_78[0] == 0) {
      FUN_18003cc40(local_78);
    }
  }
  return uVar13 & 0xffffffff;
}


