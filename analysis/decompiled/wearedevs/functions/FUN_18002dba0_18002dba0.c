/* FUN_18002dba0 @ 18002dba0 */

void FUN_18002dba0(ulonglong *param_1,void **param_2)

{
  void **ppvVar1;
  longlong lVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  longlong lVar11;
  void *pvVar12;
  longlong *plVar13;
  void **_Size;
  ulonglong *puVar14;
  ulonglong uVar15;
  ulonglong *puVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  void **ppvVar19;
  void **ppvVar20;
  ulonglong *puVar21;
  void **unaff_R14;
  char *pcVar22;
  undefined1 local_138 [24];
  void *local_120;
  void *local_118;
  longlong local_110;
  void **local_108;
  char *local_100;
  ulonglong *local_f8;
  void *local_f0;
  ulonglong local_e8;
  void **local_e0;
  void **local_d8;
  ulonglong *puStack_d0;
  void *local_c8;
  void **ppvStack_c0;
  void **local_b8;
  void **ppvStack_b0;
  void *local_a8;
  void **local_a0;
  void **local_98;
  void **ppvStack_90;
  void **local_88;
  void **ppvStack_80;
  char *local_78;
  void **local_70;
  char *local_68;
  void **local_60;
  ulonglong *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  _Size = param_2[3];
  puVar21 = *param_2;
  pcVar22 = param_2[2];
  if (_Size == (void **)0x0) {
    lVar9 = 0;
    puVar14 = (ulonglong *)0x0;
  }
  else {
    puVar14 = (ulonglong *)0;
    if (puVar21 <= pcVar22) {
      puVar14 = puVar21;
    }
    lVar9 = (longlong)pcVar22 - (longlong)puVar14;
    lVar3 = (longlong)_Size - ((longlong)puVar21 - lVar9);
    if ((void **)((longlong)puVar21 - lVar9) <= _Size && lVar3 != 0) {
      puVar14 = puVar21;
      goto LAB_18002dc0a;
    }
    puVar14 = (ulonglong *)((longlong)_Size + lVar9);
  }
  lVar3 = 0;
LAB_18002dc0a:
  uVar8 = (ulonglong)param_2[1];
  lVar5 = uVar8 + lVar9 * 0x20;
  lVar9 = (longlong)puVar14 * 0x20 + lVar9 * -0x20;
  while (lVar9 != 0) {
    lVar9 = lVar9 + -0x20;
    plVar13 = (longlong *)(lVar5 + 0x10);
    lVar5 = lVar5 + 0x20;
    if (*plVar13 != 0) goto LAB_18002dc58;
  }
  lVar3 = lVar3 << 5;
  uVar10 = uVar8;
  do {
    if (lVar3 == 0) {
      return;
    }
    lVar3 = lVar3 + -0x20;
    plVar13 = (longlong *)(uVar10 + 0x10);
    uVar10 = uVar10 + 0x20;
  } while (*plVar13 == 0);
LAB_18002dc58:
  local_58 = puVar21;
  if (param_1[2] != 0) {
    if (_Size == (void **)0x0) {
      local_60 = (void **)(param_1 + 1);
    }
    else {
      uVar10 = 0;
      puVar14 = puVar21;
      if (pcVar22 < puVar21) {
        puVar14 = (ulonglong *)0x0;
      }
      lVar9 = (longlong)pcVar22 - (longlong)puVar14;
      ppvVar20 = (void **)((longlong)puVar21 - lVar9);
      uVar6 = ((longlong)_Size - (longlong)ppvVar20) * 0x20;
      if (_Size <= ppvVar20) {
        uVar6 = 0;
      }
      puVar16 = (ulonglong *)((longlong)_Size + lVar9);
      if (ppvVar20 < _Size) {
        puVar16 = puVar21;
      }
      uVar17 = (longlong)puVar16 - lVar9;
      if (uVar17 != 0) {
        if (uVar17 < 4) {
          uVar18 = 0;
          uVar10 = 0;
        }
        else {
          plVar13 = (longlong *)
                    ((longlong)pcVar22 * 0x20 + (longlong)puVar14 * -0x20 + uVar8 + 0x70);
          uVar18 = 0;
          uVar10 = 0;
          do {
            uVar10 = uVar10 + plVar13[-0xc] + plVar13[-8] + plVar13[-4] + *plVar13;
            uVar18 = uVar18 + 4;
            plVar13 = plVar13 + 0x10;
          } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
        }
        if ((uVar17 & 3) != 0) {
          puVar14 = (ulonglong *)
                    (uVar8 + (longlong)pcVar22 * 0x20 + uVar18 * 0x20 + (longlong)puVar14 * -0x20 +
                    0x10);
          uVar18 = 0;
          do {
            uVar10 = uVar10 + *(longlong *)((longlong)puVar14 + uVar18);
            uVar18 = uVar18 + 0x20;
          } while (((uint)uVar17 & 3) << 5 != uVar18);
        }
      }
      if (uVar6 != 0) {
        uVar17 = uVar6 >> 5;
        if (uVar6 < 0x80) {
          uVar6 = 0;
        }
        else {
          plVar13 = (longlong *)(uVar8 + 0x70);
          uVar6 = 0;
          do {
            uVar10 = uVar10 + plVar13[-0xc] + plVar13[-8] + plVar13[-4] + *plVar13;
            uVar6 = uVar6 + 4;
            plVar13 = plVar13 + 0x10;
          } while ((uVar17 & 0xfffffffffffffffc) != uVar6);
        }
        puVar14 = (ulonglong *)0x0;
        if ((uVar17 & 3) != 0) {
          puVar14 = (ulonglong *)(ulonglong)(((uint)uVar17 & 3) << 5);
          uVar17 = 0;
          do {
            uVar10 = uVar10 + *(longlong *)(uVar6 * 0x20 + uVar8 + 0x10 + uVar17);
            uVar17 = uVar17 + 0x20;
          } while (puVar14 != (ulonglong *)uVar17);
        }
      }
      local_60 = (void **)(param_1 + 1);
      if (param_1[2] - param_1[1] < uVar10) {
        FUN_1801b2210(param_1,uVar10,CONCAT71((int7)((ulonglong)puVar14 >> 8),1));
      }
      puVar21 = local_58;
    }
    do {
      pcVar4 = (char *)puVar21;
      if (pcVar22 < puVar21) {
        pcVar4 = (char *)0x0;
      }
      lVar3 = (longlong)pcVar22 - (longlong)pcVar4;
      local_70 = (void **)((longlong)puVar21 + -lVar3);
      local_68 = (char *)((longlong)_Size + lVar3);
      local_110 = (longlong)_Size - (longlong)local_70;
      lVar9 = lVar3 * 0x20 + uVar8;
      local_108 = _Size;
      do {
        pcVar4 = local_68;
        if (local_70 < local_108) {
          pcVar4 = (char *)puVar21;
        }
        lVar5 = 0;
        if (local_70 < local_108) {
          lVar5 = local_110;
        }
        lVar2 = lVar3;
        if (local_108 == (void **)0x0) {
          lVar5 = 0;
          pcVar4 = (char *)0x0;
          lVar2 = 0;
        }
        lVar11 = uVar8 + lVar2 * 0x20;
        lVar7 = (longlong)pcVar4 * 0x20 + lVar2 * -0x20;
        while (lVar7 != 0) {
          lVar7 = lVar7 + -0x20;
          plVar13 = (longlong *)(lVar11 + 0x10);
          lVar11 = lVar11 + 0x20;
          if (*plVar13 != 0) goto LAB_18002dfc8;
        }
        lVar5 = lVar5 << 5;
        uVar10 = uVar8;
        do {
          if (lVar5 == 0) {
            return;
          }
          lVar5 = lVar5 + -0x20;
          plVar13 = (longlong *)(uVar10 + 0x10);
          uVar10 = uVar10 + 0x20;
        } while (*plVar13 == 0);
LAB_18002dfc8:
        if (local_108 == (void **)0x0) {
          pvVar12 = (void *)0x1;
          ppvVar20 = (void **)0x0;
LAB_18002e027:
          uVar10 = (ulonglong)*local_60;
        }
        else {
          pvVar12 = *(void **)(lVar9 + 8);
          ppvVar20 = *(void ***)(lVar9 + 0x10);
          uVar10 = param_1[1];
          if ((void **)(param_1[2] - uVar10) < ppvVar20) {
            local_100 = pcVar22;
            FUN_1801b2210(param_1,ppvVar20,CONCAT71((int7)((ulonglong)(lVar2 * 0x20) >> 8),1));
            pcVar22 = local_100;
            goto LAB_18002e027;
          }
        }
        memcpy((void *)(uVar10 + *param_1),pvVar12,(size_t)ppvVar20);
        ppvStack_90 = (void **)(param_1[2] - param_1[1]);
        if (ppvStack_90 < ppvVar20) {
          local_98 = ppvVar20;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_98);
        }
        *local_60 = (void *)(param_1[1] + (longlong)ppvVar20);
        puVar21 = local_58;
      } while (ppvVar20 == (void **)0x0);
      _Size = local_108;
      do {
        ppvVar19 = (void **)((longlong)_Size - 1);
        if (_Size == (void **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201b60("Out of bounds access",0x14,
                        &PTR_s_C__Users_burne__cargo_registry_s_1802060b0);
        }
        pcVar4 = (char *)0x0;
        if (puVar21 <= pcVar22) {
          pcVar4 = (char *)puVar21;
        }
        lVar3 = ((longlong)pcVar22 - (longlong)pcVar4) * 0x20;
        lVar9 = uVar8 + lVar3;
        ppvVar1 = *(void ***)(uVar8 + 0x10 + lVar3);
        if (ppvVar20 <= ppvVar1 && (longlong)ppvVar1 - (longlong)ppvVar20 != 0) {
          *(longlong *)(lVar9 + 0x10) = (longlong)ppvVar1 - (longlong)ppvVar20;
          *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + (longlong)ppvVar20;
          break;
        }
        *(undefined8 *)(lVar9 + 0x10) = 0;
        *(longlong *)(lVar9 + 8) = *(longlong *)(lVar9 + 8) + (longlong)ppvVar1;
        pcVar4 = (char *)0x0;
        if (puVar21 <= pcVar22 + 1) {
          pcVar4 = (char *)puVar21;
        }
        pcVar4 = pcVar22 + (1 - (longlong)pcVar4);
        param_2[2] = pcVar4;
        param_2[3] = ppvVar19;
        lVar9 = *(longlong *)(uVar8 + (longlong)pcVar22 * 0x20);
        if (lVar9 != 0) {
          lVar3 = (longlong)pcVar22 * 0x20 + uVar8;
          (**(code **)(lVar9 + 0x20))
                    (*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 8),
                     *(undefined8 *)(lVar3 + 0x10));
          puVar21 = local_58;
        }
        ppvVar20 = (void **)((longlong)ppvVar20 - (longlong)ppvVar1);
        pcVar22 = pcVar4;
        _Size = ppvVar19;
      } while (ppvVar20 != (void **)0x0);
    } while( true );
  }
  if (_Size == (void **)0x0) {
    uVar10 = 0;
LAB_18002dd58:
    local_f8 = (ulonglong *)0x1;
    uVar6 = 0;
LAB_18002dd5b:
    uVar8 = 0x3f;
    if (uVar6 >> 10 != 0) {
      for (; (uVar6 >> 10) >> uVar8 == 0; uVar8 = uVar8 - 1) {
      }
    }
    uVar17 = (uVar8 ^ 0xffffffffffffffc0) + 0x41;
    uVar8 = 7;
    if (uVar17 < 7) {
      uVar8 = uVar17;
    }
    local_e0 = (void **)((uVar8 & 0xffffffff) * 4 + 1);
    local_f0 = (void *)0x0;
    local_e8 = uVar6;
    if (uVar10 == uVar6) {
      local_49 = 1;
      FUN_18002dba0(&local_f8,param_2);
    }
    else {
      local_49 = 1;
      FUN_18002e880(&local_f8,param_2);
    }
    if (((ulonglong)local_e0 & 1) == 0) {
      puStack_d0 = local_f8;
      local_c8 = local_f0;
      ppvStack_c0 = local_e0;
      local_d8 = (void **)PTR_PTR_1802fd530;
    }
    else {
      pvVar12 = (void *)((ulonglong)local_e0 >> 5);
      local_49 = 0;
      FUN_1801b1ef0(local_138,local_f8,local_f0,local_e8,pvVar12);
      local_49 = 0;
      FUN_1801b3d40(&local_b8,local_138);
      local_c8 = (void *)((longlong)local_a8 - (longlong)pvVar12);
      local_118 = pvVar12;
      if (local_a8 < pvVar12) {
        local_58 = local_a8;
        local_120 = local_a8;
        local_98 = &local_118;
        ppvStack_90 = (void **)&LAB_1800273d0;
        local_88 = &local_120;
        ppvStack_80 = (void **)&LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180205f58,&local_98,&PTR_s_C__Users_burne__cargo_registry_s_180205fe0);
      }
      puStack_d0 = (ulonglong *)((longlong)ppvStack_b0 + (longlong)pvVar12);
      local_d8 = local_b8;
      ppvStack_c0 = local_a0;
    }
  }
  else {
    uVar6 = 0;
    puVar14 = puVar21;
    if (pcVar22 < puVar21) {
      puVar14 = (ulonglong *)0x0;
    }
    lVar9 = (longlong)pcVar22 - (longlong)puVar14;
    ppvVar20 = (void **)((longlong)puVar21 - lVar9);
    uVar10 = ((longlong)_Size - (longlong)ppvVar20) * 0x20;
    if (_Size <= ppvVar20) {
      uVar10 = 0;
    }
    puVar16 = (ulonglong *)((longlong)_Size + lVar9);
    if (ppvVar20 < _Size) {
      puVar16 = puVar21;
    }
    uVar17 = (longlong)puVar16 - lVar9;
    if (uVar17 != 0) {
      if (uVar17 < 4) {
        uVar18 = 0;
        uVar6 = 0;
      }
      else {
        plVar13 = (longlong *)((longlong)pcVar22 * 0x20 + (longlong)puVar14 * -0x20 + uVar8 + 0x70);
        uVar18 = 0;
        uVar6 = 0;
        do {
          uVar6 = uVar6 + *plVar13 + plVar13[-4] + plVar13[-8] + plVar13[-0xc];
          uVar18 = uVar18 + 4;
          plVar13 = plVar13 + 0x10;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar18);
      }
      if ((uVar17 & 3) != 0) {
        uVar15 = 0;
        do {
          uVar6 = uVar6 + *(longlong *)
                           (uVar8 + (longlong)pcVar22 * 0x20 + uVar18 * 0x20 +
                                    (longlong)puVar14 * -0x20 + 0x10 + uVar15);
          uVar15 = uVar15 + 0x20;
        } while (((uint)uVar17 & 3) << 5 != uVar15);
      }
    }
    if (uVar10 != 0) {
      uVar17 = uVar10 >> 5;
      if (uVar10 < 0x80) {
        uVar10 = 0;
      }
      else {
        plVar13 = (longlong *)(uVar8 + 0x70);
        uVar10 = 0;
        do {
          uVar6 = uVar6 + *plVar13 + plVar13[-4] + plVar13[-8] + plVar13[-0xc];
          uVar10 = uVar10 + 4;
          plVar13 = plVar13 + 0x10;
        } while ((uVar17 & 0xfffffffffffffffc) != uVar10);
      }
      if ((uVar17 & 3) != 0) {
        uVar18 = 0;
        do {
          uVar6 = uVar6 + *(longlong *)(uVar10 * 0x20 + uVar8 + 0x10 + uVar18);
          uVar18 = uVar18 + 0x20;
        } while (((uint)uVar17 & 3) << 5 != uVar18);
      }
    }
    puVar14 = (ulonglong *)0;
    if (puVar21 <= pcVar22) {
      puVar14 = puVar21;
    }
    lVar3 = ((longlong)pcVar22 - (longlong)puVar14) * 0x20;
    lVar9 = uVar8 + lVar3;
    uVar10 = *(ulonglong *)(uVar8 + 0x10 + lVar3);
    if (uVar10 == uVar6) {
      FUN_1801b3b40(&local_98,lVar9);
      puVar14 = (ulonglong *)0;
      if (puVar21 <= pcVar22 + 1) {
        puVar14 = puVar21;
      }
      param_2[2] = pcVar22 + (1 - (longlong)puVar14);
      param_2[3] = (char *)((longlong)_Size - 1);
      lVar9 = *(longlong *)(uVar8 + (longlong)pcVar22 * 0x20);
      if (lVar9 != 0) {
        lVar3 = uVar8 + (longlong)pcVar22 * 0x20;
        (**(code **)(lVar9 + 0x20))
                  (*(undefined8 *)(lVar3 + 0x18),*(undefined8 *)(lVar3 + 8),
                   *(undefined8 *)(lVar3 + 0x10));
      }
      local_c8 = local_88;
      ppvStack_c0 = ppvStack_80;
      local_d8 = local_98;
      puStack_d0 = (ulonglong *)ppvStack_90;
    }
    else {
      if (uVar10 <= uVar6) {
        uVar10 = 0;
        puVar14 = puVar21;
        if (pcVar22 < puVar21) {
          puVar14 = (ulonglong *)0x0;
        }
        lVar9 = (longlong)pcVar22 - (longlong)puVar14;
        ppvVar20 = (void **)((longlong)puVar21 - lVar9);
        uVar17 = ((longlong)_Size - (longlong)ppvVar20) * 0x20;
        if (_Size <= ppvVar20) {
          uVar17 = 0;
        }
        puVar16 = (ulonglong *)((longlong)_Size + lVar9);
        if (ppvVar20 < _Size) {
          puVar16 = puVar21;
        }
        uVar18 = (longlong)puVar16 - lVar9;
        if (uVar18 != 0) {
          if (uVar18 < 4) {
            uVar15 = 0;
            uVar10 = 0;
          }
          else {
            plVar13 = (longlong *)
                      ((longlong)pcVar22 * 0x20 + (longlong)puVar14 * -0x20 + uVar8 + 0x70);
            uVar15 = 0;
            uVar10 = 0;
            do {
              uVar10 = uVar10 + *plVar13 + plVar13[-4] + plVar13[-8] + plVar13[-0xc];
              uVar15 = uVar15 + 4;
              plVar13 = plVar13 + 0x10;
            } while ((uVar18 & 0xfffffffffffffffc) != uVar15);
          }
          if ((uVar18 & 3) != 0) {
            pcVar22 = (char *)((longlong)pcVar22 * 0x20 + uVar15 * 0x20 + (longlong)puVar14 * -0x20)
            ;
            uVar15 = 0;
            do {
              uVar10 = uVar10 + *(longlong *)(pcVar22 + uVar15 + uVar8 + 0x10);
              uVar15 = uVar15 + 0x20;
            } while (((uint)uVar18 & 3) << 5 != uVar15);
          }
        }
        if (uVar17 != 0) {
          uVar18 = uVar17 >> 5;
          if (uVar17 < 0x80) {
            uVar17 = 0;
          }
          else {
            plVar13 = (longlong *)(uVar8 + 0x70);
            uVar17 = 0;
            do {
              uVar10 = uVar10 + *plVar13 + plVar13[-4] + plVar13[-8] + plVar13[-0xc];
              uVar17 = uVar17 + 4;
              plVar13 = plVar13 + 0x10;
            } while ((uVar18 & 0xfffffffffffffffc) != uVar17);
          }
          if ((uVar18 & 3) != 0) {
            uVar15 = 0;
            do {
              uVar10 = uVar10 + *(longlong *)(uVar17 * 0x20 + uVar8 + 0x10 + uVar15);
              uVar15 = uVar15 + 0x20;
            } while (((uint)uVar18 & 3) << 5 != uVar15);
          }
        }
        if (uVar10 < uVar6) {
          pcVar4 = "`len` greater than remaining";
          FUN_180200a26("`len` greater than remaining",0x1c,
                        &PTR_s_C__Users_burne__cargo_registry_s_180206080);
          goto LAB_18002e646;
        }
        if ((longlong)uVar6 < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(0,uVar6);
        }
        if (uVar6 == 0) goto LAB_18002dd58;
        FUN_180027490();
        local_f8 = (ulonglong *)thunk_FUN_1801d32d0(uVar6,1);
        if (local_f8 == (ulonglong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_18020171e(1,uVar6);
        }
        goto LAB_18002dd5b;
      }
      FUN_1801b3b40(&local_d8,lVar9);
    }
  }
  local_a8 = local_c8;
  local_a0 = ppvStack_c0;
  local_b8 = local_d8;
  ppvStack_b0 = (void **)puStack_d0;
  FUN_1801b39f0(&local_98,&local_b8);
  if ((char)local_98 == '\0') {
    local_58 = param_1;
    FUN_1801b2a70(param_1);
    local_58[2] = (ulonglong)ppvStack_80;
    local_58[3] = (ulonglong)local_78;
    *local_58 = (ulonglong)ppvStack_90;
    local_58[1] = (ulonglong)local_88;
  }
  else {
    uVar8 = param_1[1];
    param_2 = ppvStack_90;
    _Size = ppvStack_80;
    unaff_R14 = local_88;
    pcVar22 = local_78;
    if ((void **)(param_1[2] - uVar8) < ppvStack_80) {
      local_68 = local_78;
      local_70 = local_88;
      local_58 = (ulonglong *)ppvStack_90;
      local_60 = ppvStack_80;
      FUN_1801b2210(param_1,ppvStack_80,1);
      uVar8 = param_1[1];
      param_2 = (void **)local_58;
      _Size = local_60;
      unaff_R14 = local_70;
      pcVar22 = local_68;
    }
    memcpy((void *)(uVar8 + *param_1),unaff_R14,(size_t)_Size);
    pcVar4 = (char *)(param_1[2] - param_1[1]);
    if (pcVar4 < _Size) {
LAB_18002e646:
      local_b8 = _Size;
      ppvStack_b0 = (void **)pcVar4;
      local_70 = unaff_R14;
      local_68 = pcVar22;
      local_60 = _Size;
      local_58 = (ulonglong *)param_2;
                    /* WARNING: Subroutine does not return */
      FUN_1801fc980(&local_b8);
    }
    param_1[1] = (ulonglong)((longlong)_Size + param_1[1]);
    (*param_2[4])(pcVar22,unaff_R14,_Size);
  }
  return;
}


