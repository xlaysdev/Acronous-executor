/* FUN_18005ccd0 @ 18005ccd0 */

undefined1 FUN_18005ccd0(longlong param_1,longlong param_2)

{
  char **ppcVar1;
  byte bVar2;
  char ***pppcVar3;
  char **ppcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *puVar11;
  char cVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  int iVar16;
  undefined1 uVar17;
  char *local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined4 *local_c8;
  char **local_c0;
  undefined *local_b8;
  longlong local_b0;
  longlong local_a8;
  longlong *local_a0 [2];
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  longlong lStack_68;
  undefined8 local_60;
  undefined8 *local_58;
  char ***local_50;
  undefined8 local_48;
  
  puVar11 = PTR_PTR_1802fbb90;
  local_48 = 0xfffffffffffffffe;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar2 = PTR_PTR_1802fbb90[0x10];
    uVar13 = (uint)bVar2;
    if (((1 < bVar2 - 1) &&
        ((bVar2 == 0 || (uVar13 = FUN_1801faaf0(PTR_PTR_1802fbb90), (char)uVar13 == '\0')))) ||
       (cVar12 = FUN_1801601d0(*(undefined8 *)puVar11,uVar13), cVar12 == '\0')) goto LAB_18005cd0c;
    lVar15 = *(longlong *)puVar11;
    lStack_68 = lVar15 + 0x30;
    local_80 = (char **)0x1;
    uStack_78 = (undefined **)&DAT_00000008;
    local_70 = 0;
    FUN_180160410(&local_a8,lVar15,&local_80);
    if (local_a8 != 2) {
      FUN_180161780(&local_a8,&local_90);
    }
  }
  else {
LAB_18005cd0c:
    local_a8 = 2;
    local_88 = 0;
  }
  local_50 = (char ***)(param_1 + 0xe0);
  ppcVar1 = (char **)(param_1 + 0x128);
  local_58 = (undefined8 *)(param_1 + 0xe8);
  local_c8 = (undefined4 *)(param_1 + 0x110);
  uVar17 = 0;
LAB_18005cd86:
  do {
    pppcVar3 = (char ***)*local_50;
    iVar16 = (int)pppcVar3;
    lVar15 = param_2;
    if ((undefined1 *)((longlong)pppcVar3 + -3) < (undefined1 *)0x2) {
      if (*(ulonglong *)(param_1 + 0x148) < *(ulonglong *)(param_1 + 0x130)) {
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          bVar2 = PTR_PTR_1802fbb80[0x10];
          uVar13 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar13 = FUN_1801faaf0(PTR_PTR_1802fbb80), (char)uVar13 != '\0'))))
             && (cVar12 = FUN_1801601d0(*(undefined8 *)PTR_PTR_1802fbb80,uVar13), cVar12 != '\0')) {
            lStack_68 = *(longlong *)PTR_PTR_1802fbb80 + 0x30;
            local_80 = (char **)0x1;
            uStack_78 = &PTR_DAT_180209cb8;
            local_70 = 1;
            FUN_180160ae0(*(longlong *)PTR_PTR_1802fbb80,&local_80);
          }
        }
        uVar14 = FUN_1800ad150(param_1 + 0x168,param_2,ppcVar1);
        if (uVar14 != 2) {
          if ((uVar14 & 1) == 0) goto LAB_18005ce7d;
          goto LAB_18005d2e8;
        }
      }
      else {
LAB_18005ce90:
        *(undefined8 *)(param_1 + 0x148) = 0;
        *(undefined8 *)(param_1 + 0x130) = 0;
        *(undefined8 *)(param_1 + 0xe0) = 4;
        if (iVar16 == 3) {
          local_d8 = local_58[4];
          local_f8 = (char *)*local_58;
          uStack_f0 = local_58[1];
          local_e8 = *(undefined4 *)(local_58 + 2);
          uStack_e4 = *(undefined4 *)((longlong)local_58 + 0x14);
          uStack_e0 = *(undefined4 *)(local_58 + 3);
          uStack_dc = *(undefined4 *)((longlong)local_58 + 0x1c);
          local_b8 = (undefined *)((ulonglong)*(uint *)(param_1 + 0x160) + 9);
          local_c0 = ppcVar1;
          FUN_1801347b0(&local_80,&local_f8,&local_c0);
          if (local_80 != (char **)0x0) {
            ppcVar4 = *local_50;
            if (ppcVar4 != (char **)0x4) {
              if ((int)ppcVar4 == 3) {
                FUN_1801b2a70(local_58);
              }
              else if ((int)ppcVar4 == 1) {
                if (*(longlong *)(param_1 + 0xf0) != 0) {
                  thunk_FUN_1801d3330(*local_58,*(longlong *)(param_1 + 0xf0),1);
                }
              }
              else if (ppcVar4 == (char **)0x0) {
                (**(code **)(*(longlong *)(param_1 + 0xe8) + 0x20))
                          (*(undefined8 *)(param_1 + 0x100),*(undefined8 *)(param_1 + 0xf0),
                           *(undefined8 *)(param_1 + 0xf8));
              }
            }
            *local_50 = (char **)0x3;
            local_58[4] = local_60;
            local_58[2] = local_70;
            local_58[3] = lStack_68;
            *(undefined4 *)local_58 = (undefined4)local_80;
            *(undefined4 *)((longlong)local_58 + 4) = local_80._4_4_;
            *(undefined4 *)(local_58 + 1) = (undefined4)uStack_78;
            *(undefined4 *)((longlong)local_58 + 0xc) = uStack_78._4_4_;
          }
          goto LAB_18005cd86;
        }
        lVar15 = param_1;
        if (iVar16 != 4) {
          lVar15 = *(longlong *)(param_1 + 0x98);
          local_b0 = param_1;
          local_50 = pppcVar3;
          if (lVar15 != 3) {
            if ((int)lVar15 == 1) {
              if (*(longlong *)(param_1 + 0xa8) != 0) {
                thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0xa0),*(longlong *)(param_1 + 0xa8),1)
                ;
              }
            }
            else if (lVar15 == 0) {
              (**(code **)(*(longlong *)(param_1 + 0xa0) + 0x20))
                        (*(undefined8 *)(param_1 + 0xb8),*(undefined8 *)(param_1 + 0xa8),
                         *(undefined8 *)(param_1 + 0xb0));
            }
          }
          *(char ****)(local_b0 + 0x98) = local_50;
          uVar8 = local_58[1];
          uVar9 = local_58[2];
          uVar10 = local_58[3];
          *(undefined8 *)(local_b0 + 0xa0) = *local_58;
          *(undefined8 *)(local_b0 + 0xa8) = uVar8;
          *(undefined8 *)(local_b0 + 0xb0) = uVar9;
          *(undefined8 *)(local_b0 + 0xb8) = uVar10;
          *(undefined8 *)(local_b0 + 0xc0) = local_58[4];
          uVar5 = local_c8[1];
          uVar6 = local_c8[2];
          uVar7 = local_c8[3];
          *(undefined4 *)(local_b0 + 200) = *local_c8;
          *(undefined4 *)(local_b0 + 0xcc) = uVar5;
          *(undefined4 *)(local_b0 + 0xd0) = uVar6;
          *(undefined4 *)(local_b0 + 0xd4) = uVar7;
          *(undefined8 *)(local_b0 + 0xd8) = *(undefined8 *)(local_c8 + 4);
          lVar15 = local_b0;
        }
        puVar11 = PTR_PTR_1802fbb78;
        if (*(longlong *)PTR_DAT_1802fd448 == 0) {
          bVar2 = PTR_PTR_1802fbb78[0x10];
          uVar13 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 &&
               (uVar13 = FUN_1801faaf0(PTR_PTR_1802fbb78), lVar15 = param_1, (char)uVar13 != '\0')))
              ) && (cVar12 = FUN_1801601d0(*(undefined8 *)puVar11,uVar13), lVar15 = param_1,
                   cVar12 != '\0')) {
            lVar15 = *(longlong *)puVar11;
            lStack_68 = lVar15 + 0x30;
            local_f8 = "flushing buffer";
            uStack_f0 = 0x1f;
            local_c0 = &local_f8;
            local_b8 = &DAT_180209b90;
            local_80 = (char **)0x1;
            uStack_78 = (undefined **)&local_c0;
            local_70 = 1;
            FUN_180160ae0(lVar15,&local_80);
            lVar15 = param_1;
          }
        }
        uVar14 = (**(code **)(*(longlong *)(lVar15 + 0x170) + 0x28))
                           (*(undefined8 *)(lVar15 + 0x168));
        if ((uVar14 & 1) == 0) {
          if (param_2 != 0) goto LAB_18005d2e5;
          if ((int)local_a8 == 2) {
            return 0;
          }
          FUN_180161750(&local_a8,&local_90);
          lVar15 = local_a8;
          if (local_a8 == 2) {
            return 0;
          }
          FUN_1801617b0(&local_a8,local_90);
          if (lVar15 != 0) {
            LOCK();
            *local_a0[0] = *local_a0[0] + -1;
            UNLOCK();
            if (*local_a0[0] == 0) {
              uVar17 = 0;
              goto LAB_18005d333;
            }
          }
          return 0;
        }
      }
LAB_18005d2d1:
      uVar17 = 1;
      goto LAB_18005d2e8;
    }
    if (pppcVar3 == (char ***)0x0) {
      uVar14 = *(ulonglong *)(param_1 + 0xf8);
    }
    else if (iVar16 == 1) {
      uVar14 = 0;
      if (*(ulonglong *)(param_1 + 0xf8) <= *(ulonglong *)(param_1 + 0xf0)) {
        uVar14 = *(ulonglong *)(param_1 + 0xf0) - *(ulonglong *)(param_1 + 0xf8);
      }
    }
    else {
      uVar14 = 0;
    }
    if (*(ulonglong *)(param_1 + 0x108) < uVar14) {
      uVar14 = *(ulonglong *)(param_1 + 0x108);
    }
    if (uVar14 == 0) goto LAB_18005ce90;
    if (*(longlong *)PTR_DAT_1802fd448 == 0) {
      bVar2 = PTR_PTR_1802fbb98[0x10];
      uVar13 = (uint)bVar2;
      if (((bVar2 - 1 < 2) ||
          ((bVar2 != 0 && (uVar13 = FUN_1801faaf0(PTR_PTR_1802fbb98), (char)uVar13 != '\0')))) &&
         (cVar12 = FUN_1801601d0(*(undefined8 *)PTR_PTR_1802fbb98,uVar13), cVar12 != '\0')) {
        lStack_68 = *(longlong *)PTR_PTR_1802fbb98 + 0x30;
        local_80 = (char **)0x1;
        uStack_78 = &PTR_DAT_180209ca0;
        local_70 = 1;
        FUN_180160ae0(*(longlong *)PTR_PTR_1802fbb98,&local_80);
      }
    }
    uStack_78 = (undefined **)local_50;
    local_80 = ppcVar1;
    uVar14 = FUN_1800ad2c0(param_1 + 0x168,param_2,&local_80);
    if (uVar14 == 2) goto LAB_18005d2d1;
    if ((uVar14 & 1) != 0) goto LAB_18005d2e5;
LAB_18005ce7d:
    puVar11 = PTR_PTR_1802fbb88;
  } while (lVar15 != 0);
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    bVar2 = PTR_PTR_1802fbb88[0x10];
    uVar13 = (uint)bVar2;
    if (1 < bVar2 - 1) {
      uVar17 = 0;
      if (bVar2 == 0) goto LAB_18005d2e8;
      uVar13 = FUN_1801faaf0(PTR_PTR_1802fbb88);
      if ((char)uVar13 == '\0') goto LAB_18005d2e5;
    }
    cVar12 = FUN_1801601d0(*(undefined8 *)puVar11,uVar13);
    if (cVar12 != '\0') {
      lVar15 = *(longlong *)puVar11;
      lStack_68 = lVar15 + 0x30;
      local_f8 = "write returned zero, but non-zero bytes remaining";
      uStack_f0 = 99;
      local_c0 = &local_f8;
      local_b8 = &DAT_180209b90;
      local_80 = (char **)0x1;
      uStack_78 = (undefined **)&local_c0;
      local_70 = 1;
      FUN_180160ae0(lVar15,&local_80);
    }
  }
LAB_18005d2e5:
  uVar17 = 0;
LAB_18005d2e8:
  if ((((int)local_a8 != 2) &&
      (FUN_180161750(&local_a8,&local_90), lVar15 = local_a8, local_a8 != 2)) &&
     (FUN_1801617b0(&local_a8,local_90), lVar15 != 0)) {
    LOCK();
    *local_a0[0] = *local_a0[0] + -1;
    UNLOCK();
    if (*local_a0[0] == 0) {
LAB_18005d333:
      FUN_18003cc40(local_a0);
    }
  }
  return uVar17;
}


