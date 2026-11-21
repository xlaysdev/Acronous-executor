/* FUN_180144530 @ 180144530 */

void FUN_180144530(undefined2 *param_1,longlong param_2,longlong *param_3)

{
  longlong *plVar1;
  ulonglong uVar2;
  char cVar3;
  ulonglong uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  ulonglong uVar8;
  ulonglong in_R10;
  char **ppcVar9;
  undefined *puVar10;
  char *pcVar11;
  longlong local_110 [3];
  char **local_f8;
  char **local_f0;
  ulonglong local_e8 [2];
  ulonglong local_d8;
  char *local_d0;
  char *local_c8;
  ulonglong local_c0;
  ulonglong local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  char ***local_98;
  undefined *local_90;
  longlong *local_88;
  undefined *local_80;
  undefined *local_78;
  undefined8 *local_70;
  char **local_68;
  undefined *local_60;
  char *local_58;
  char **local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  pcVar11 = (char *)param_3[1];
  if (pcVar11 < (char *)((longlong *)*param_3)[1]) {
    cVar3 = pcVar11[*(longlong *)*param_3];
    FUN_180143720(&local_a8,param_3,7);
    if ((char)local_a8 == '\0') {
      local_e8[0] = (ulonglong)local_a0;
      plVar1 = (longlong *)*param_3;
      uVar2 = param_3[1];
      uVar8 = plVar1[1];
      uVar4 = 0;
      if (uVar2 <= uVar8) {
        uVar4 = uVar8 - uVar2;
      }
      if (local_a0 <= uVar4) {
        local_50 = (char **)(uVar2 - (longlong)pcVar11);
        if (-1 < cVar3) {
          param_3[1] = uVar2 + (longlong)local_a0;
          *(undefined8 *)(param_1 + 4) = 0;
          *(char ***)(param_1 + 0x14) = local_50;
          *(undefined **)(param_1 + 0x18) = local_a0;
          *(undefined1 *)param_1 = 0;
          return;
        }
        uVar4 = uVar2;
        if (uVar8 < uVar2) {
          uVar4 = uVar8;
        }
        if (uVar8 - uVar4 < local_a0) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(0,local_a0,uVar8 - uVar4,&DAT_180252810);
        }
        puVar10 = (undefined *)(param_2 + 0x40);
        ppcVar9 = &local_c8;
        puVar7 = local_a0;
        FUN_18015e970(ppcVar9,uVar4 + *plVar1);
        if (local_c8 == (char *)0x0) {
          uVar6 = 1;
          local_b0 = in_R10;
        }
        else {
          if ((local_b0 & 1) == 0) {
            local_68 = ppcVar9;
            puVar10 = PTR_PTR_1802fd530;
            pcVar11 = local_c8;
          }
          else {
            ppcVar9 = (char **)(local_b0 >> 5);
            local_58 = local_c8;
            FUN_1801b1ef0(local_110);
            FUN_1801b3d40(&local_78,local_110);
            local_c0 = (longlong)local_68 - (longlong)ppcVar9;
            local_f0 = ppcVar9;
            if (local_68 < ppcVar9) {
              local_50 = local_68;
              local_f8 = local_68;
              local_a8 = &local_f0;
              local_a0 = &LAB_1800273d0;
              local_98 = &local_f8;
              local_90 = &LAB_1800273d0;
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0(&DAT_1802535c3,&local_a8,
                            &PTR_s_C__Users_burne__cargo_registry_s_180253650);
            }
            pcVar11 = (char *)((longlong)ppcVar9 + (longlong)local_70);
            local_c8 = local_58;
            local_b0 = (ulonglong)local_60;
            puVar10 = local_78;
          }
          uVar6 = 0;
          puVar7 = (undefined *)local_c0;
          local_c0._0_1_ = (char)local_68;
        }
        uVar8 = 0;
        if (uVar2 <= (ulonglong)plVar1[1]) {
          uVar8 = plVar1[1] - uVar2;
        }
        if (uVar8 < local_a0) {
          local_a8 = (char ***)local_a0;
          local_d8 = (ulonglong)puVar7;
          local_d0 = pcVar11;
          local_a0 = (undefined *)uVar8;
          local_58 = local_c8;
          local_50 = (char **)puVar10;
                    /* WARNING: Subroutine does not return */
          FUN_1801fc980(&local_a8);
        }
        param_3[1] = uVar2 + (longlong)local_a0;
        *(undefined1 *)param_1 = uVar6;
        *(undefined1 *)((longlong)param_1 + 1) = (undefined1)local_c0;
        *(undefined **)(param_1 + 4) = puVar10;
        *(char **)(param_1 + 8) = pcVar11;
        *(undefined **)(param_1 + 0xc) = puVar7;
        *(ulonglong *)(param_1 + 0x10) = local_b0;
        *(char ***)(param_1 + 0x14) = local_50;
        *(undefined **)(param_1 + 0x18) = local_a0;
        return;
      }
      uVar6 = 2;
      if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
         (((uVar5 = (uint)DAT_1802fcc68, uVar5 - 1 < 2 ||
           ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fcc58), (char)uVar5 != '\0')))) &&
          (cVar3 = FUN_1801601d0(PTR_DAT_1802fcc58,uVar5), cVar3 != '\0')))) {
        local_60 = PTR_DAT_1802fcc58 + 0x30;
        local_c8 = "decode_string underflow";
        local_c0 = 0x2f;
        local_110[0] = 0;
        if (uVar2 <= (ulonglong)plVar1[1]) {
          local_110[0] = plVar1[1] - uVar2;
        }
        local_a8 = (char ***)&local_c8;
        local_a0 = &DAT_180252448;
        local_98 = (char ***)local_e8;
        local_90 = &DAT_180252840;
        local_88 = local_110;
        local_80 = &DAT_180252840;
        local_78 = (undefined *)0x1;
        local_70 = &local_a8;
        local_68 = (char **)0x3;
        FUN_180160ae0(PTR_DAT_1802fcc58,&local_78);
      }
    }
    else {
      uVar6 = local_a8._1_1_;
    }
    *(undefined1 *)((longlong)param_1 + 1) = uVar6;
    *(undefined1 *)param_1 = 1;
  }
  else {
    *param_1 = 1;
  }
  return;
}


