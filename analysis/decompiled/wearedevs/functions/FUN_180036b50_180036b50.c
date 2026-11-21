/* FUN_180036b50 @ 180036b50 */

undefined8 * FUN_180036b50(char *param_1,longlong *param_2,ulonglong param_3)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  longlong lVar6;
  longlong lVar7;
  longlong *plVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  ulonglong uVar15;
  char *pcVar16;
  ulonglong uVar17;
  undefined1 local_e0 [24];
  char *local_c8;
  char *local_c0;
  undefined8 local_b8;
  longlong lStack_b0;
  char *local_a8;
  undefined8 local_a0;
  longlong local_98;
  undefined8 local_90;
  ulonglong local_88;
  ulonglong local_80;
  char **local_78;
  undefined1 *puStack_70;
  char **local_68;
  undefined1 *puStack_60;
  char *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  puVar1 = (ulonglong *)*param_2;
  uVar9 = puVar1[3];
  if (uVar9 == 0) {
    if (param_3 != 0) goto LAB_180037051;
    uVar14 = param_2[1];
    local_98 = 1;
    uVar5 = 0;
  }
  else {
    uVar11 = *puVar1;
    uVar14 = puVar1[2];
    uVar5 = 0;
    uVar12 = uVar11;
    if (uVar14 < uVar11) {
      uVar12 = 0;
    }
    lVar6 = uVar14 - uVar12;
    uVar17 = uVar11 - lVar6;
    uVar10 = (uVar9 - uVar17) * 0x20;
    if (uVar9 <= uVar17) {
      uVar10 = 0;
    }
    uVar2 = puVar1[1];
    uVar15 = lVar6 + uVar9;
    if (uVar17 < uVar9) {
      uVar15 = uVar11;
    }
    uVar15 = uVar15 - lVar6;
    if (uVar15 != 0) {
      if (uVar15 < 4) {
        uVar17 = 0;
        uVar5 = 0;
      }
      else {
        plVar8 = (longlong *)(uVar14 * 0x20 + uVar12 * -0x20 + uVar2 + 0x70);
        uVar17 = 0;
        uVar5 = 0;
        do {
          uVar5 = uVar5 + plVar8[-0xc] + plVar8[-8] + plVar8[-4] + *plVar8;
          uVar17 = uVar17 + 4;
          plVar8 = plVar8 + 0x10;
        } while ((uVar15 & 0xfffffffffffffffc) != uVar17);
      }
      if ((uVar15 & 3) != 0) {
        uVar13 = 0;
        do {
          uVar5 = uVar5 + *(longlong *)
                           (uVar14 * 0x20 + uVar17 * 0x20 + uVar12 * -0x20 + uVar2 + 0x10 + uVar13);
          uVar13 = uVar13 + 0x20;
        } while (((uint)uVar15 & 3) << 5 != uVar13);
      }
    }
    if (uVar10 != 0) {
      uVar14 = uVar10 >> 5;
      if (uVar10 < 0x80) {
        uVar12 = 0;
      }
      else {
        plVar8 = (longlong *)(uVar2 + 0x70);
        uVar12 = 0;
        do {
          uVar5 = uVar5 + plVar8[-0xc] + plVar8[-8] + plVar8[-4] + *plVar8;
          uVar12 = uVar12 + 4;
          plVar8 = plVar8 + 0x10;
        } while ((uVar14 & 0xfffffffffffffffc) != uVar12);
      }
      if ((uVar14 & 3) != 0) {
        uVar10 = 0;
        do {
          uVar5 = uVar5 + *(longlong *)(uVar12 * 0x20 + uVar2 + 0x10 + uVar10);
          uVar10 = uVar10 + 0x20;
        } while (((uint)uVar14 & 3) << 5 != uVar10);
      }
    }
    uVar14 = param_2[1];
    if (uVar14 < uVar5) {
      uVar5 = uVar14;
    }
    local_58 = param_1;
    if (uVar5 < param_3) {
LAB_180037051:
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0("`len` greater than remainingC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\take.rs"
                    ,0x39,&DAT_180206bd0);
    }
    uVar12 = puVar1[2];
    uVar10 = 0;
    if (uVar11 <= uVar12) {
      uVar10 = uVar11;
    }
    lVar7 = uVar12 - uVar10;
    lVar6 = uVar2 + lVar7 * 0x20;
    uVar5 = *(ulonglong *)(uVar2 + 0x10 + lVar7 * 0x20);
    if (uVar5 == param_3) {
      FUN_1801b3b40(&local_78,lVar6,param_3);
      if (puVar1[3] != 0) {
        uVar9 = puVar1[2];
        uVar5 = 0;
        if (*puVar1 <= uVar9 + 1) {
          uVar5 = *puVar1;
        }
        puVar1[2] = (uVar9 - uVar5) + 1;
        puVar1[3] = puVar1[3] - 1;
        lVar6 = *(longlong *)(puVar1[1] + uVar9 * 0x20);
        if (lVar6 != 0) {
          lVar7 = puVar1[1] + uVar9 * 0x20;
          (**(code **)(lVar6 + 0x20))
                    (*(undefined8 *)(lVar7 + 0x18),*(undefined8 *)(lVar7 + 8),
                     *(undefined8 *)(lVar7 + 0x10));
        }
      }
      *(char ***)((longlong)param_1 + 0x10) = local_68;
      *(undefined1 **)((longlong)param_1 + 0x18) = puStack_60;
      *(char ***)param_1 = local_78;
      *(undefined1 **)((longlong)param_1 + 8) = puStack_70;
      goto LAB_180036ecf;
    }
    if (param_3 < uVar5) {
      FUN_1801b3b40(param_1,lVar6,param_3);
      goto LAB_180036ecf;
    }
    uVar15 = uVar11 - lVar7;
    uVar17 = (uVar9 - uVar15) * 0x20;
    uVar5 = 0;
    if (uVar9 <= uVar15) {
      uVar17 = 0;
    }
    uVar13 = lVar7 + uVar9;
    if (uVar15 < uVar9) {
      uVar13 = uVar11;
    }
    uVar13 = uVar13 - lVar7;
    if (uVar13 != 0) {
      if (uVar13 < 4) {
        uVar9 = 0;
        uVar5 = 0;
      }
      else {
        plVar8 = (longlong *)(uVar12 * 0x20 + uVar10 * -0x20 + uVar2 + 0x70);
        uVar9 = 0;
        uVar5 = 0;
        do {
          uVar5 = uVar5 + plVar8[-0xc] + plVar8[-8] + plVar8[-4] + *plVar8;
          uVar9 = uVar9 + 4;
          plVar8 = plVar8 + 0x10;
        } while ((uVar13 & 0xfffffffffffffffc) != uVar9);
      }
      if ((uVar13 & 3) != 0) {
        uVar11 = 0;
        do {
          uVar5 = uVar5 + *(longlong *)
                           (uVar2 + uVar12 * 0x20 + uVar9 * 0x20 + uVar10 * -0x20 + 0x10 + uVar11);
          uVar11 = uVar11 + 0x20;
        } while (((uint)uVar13 & 3) << 5 != uVar11);
      }
    }
    if (uVar17 != 0) {
      uVar9 = uVar17 >> 5;
      if (uVar17 < 0x80) {
        uVar11 = 0;
      }
      else {
        plVar8 = (longlong *)(uVar2 + 0x70);
        uVar11 = 0;
        do {
          uVar5 = uVar5 + plVar8[-0xc] + plVar8[-8] + plVar8[-4] + *plVar8;
          uVar11 = uVar11 + 4;
          plVar8 = plVar8 + 0x10;
        } while ((uVar9 & 0xfffffffffffffffc) != uVar11);
      }
      if ((uVar9 & 3) != 0) {
        uVar12 = 0;
        do {
          uVar5 = uVar5 + *(longlong *)(uVar2 + uVar11 * 0x20 + 0x10 + uVar12);
          uVar12 = uVar12 + 0x20;
        } while (((uint)uVar9 & 3) << 5 != uVar12);
      }
    }
    if (uVar5 < param_3) {
      pcVar3 = 
      "`len` greater than remainingC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\take.rs"
      ;
      FUN_180200a26("`len` greater than remainingC:\\Users\\burne\\.cargo\\registry\\src\\index.crates.io-1949cf8c6b5b557f\\bytes-1.12.1\\src\\buf\\take.rs"
                    ,0x1c,&PTR_s_C__Users_burne__cargo_registry_s_180206ca8);
      goto LAB_180037081;
    }
    if ((longlong)param_3 < 0) {
      uVar4 = 0;
LAB_180037049:
                    /* WARNING: Subroutine does not return */
      FUN_18020171e(uVar4,param_3);
    }
    if (param_3 == 0) {
      local_98 = 1;
    }
    else {
      FUN_180027490();
      local_98 = thunk_FUN_1801d32d0(param_3,1);
      uVar4 = 1;
      if (local_98 == 0) goto LAB_180037049;
    }
    param_1 = local_58;
  }
  uVar9 = 0x3f;
  if (param_3 >> 10 != 0) {
    for (; (param_3 >> 10) >> uVar9 == 0; uVar9 = uVar9 - 1) {
    }
  }
  uVar11 = (uVar9 ^ 0xffffffffffffffc0) + 0x41;
  uVar9 = 7;
  if (uVar11 < 7) {
    uVar9 = uVar11;
  }
  local_80 = (uVar9 & 0xffffffff) * 4 + 1;
  local_90 = 0;
  local_88 = param_3;
  if (uVar5 == param_3) {
    local_49 = 1;
    FUN_18002dba0(&local_98,puVar1);
  }
  else {
    local_49 = 1;
    FUN_18002e880(&local_98,puVar1,param_3);
  }
  if ((local_80 & 1) == 0) {
    *(longlong *)((longlong)param_1 + 8) = local_98;
    *(undefined8 *)((longlong)param_1 + 0x10) = local_90;
    *(ulonglong *)((longlong)param_1 + 0x18) = local_80;
    *(undefined **)param_1 = PTR_PTR_1802fd530;
  }
  else {
    pcVar16 = (char *)(local_80 >> 5);
    local_49 = 0;
    FUN_1801b1ef0(local_e0,local_98,local_90,local_88,pcVar16);
    local_49 = 0;
    FUN_1801b3d40(&local_b8,local_e0);
    pcVar3 = local_a8;
    local_c0 = pcVar16;
    if (local_a8 < pcVar16) {
LAB_180037081:
      local_78 = &local_c0;
      puStack_70 = &LAB_1800273d0;
      local_68 = &local_c8;
      puStack_60 = &LAB_1800273d0;
      local_c8 = pcVar3;
      local_58 = pcVar3;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180206ab0,&local_78,&PTR_s_C__Users_burne__cargo_registry_s_180206b38);
    }
    *(longlong *)((longlong)param_1 + 0x10) = (longlong)local_a8 - (longlong)pcVar16;
    *(undefined8 *)((longlong)param_1 + 0x18) = local_a0;
    *(undefined8 *)param_1 = local_b8;
    *(char **)((longlong)param_1 + 8) = pcVar16 + lStack_b0;
  }
LAB_180036ecf:
  param_2[1] = uVar14 - param_3;
  return (undefined8 *)param_1;
}


