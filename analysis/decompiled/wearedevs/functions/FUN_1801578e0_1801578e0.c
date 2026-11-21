/* FUN_1801578e0 @ 1801578e0 */

undefined4 *
FUN_1801578e0(undefined4 *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  longlong lVar10;
  undefined8 *puVar11;
  uint uVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong lVar15;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined *puStack_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined8 *local_90;
  undefined *local_88;
  undefined4 *local_80;
  undefined8 local_78;
  undefined8 *local_70;
  undefined8 *local_68;
  undefined8 local_60;
  code *local_58;
  undefined1 local_4a;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *param_4;
  puVar1 = (uint *)(param_4 + 1);
  uVar14 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_4 + 0xc);
  uVar8 = *(undefined8 *)puVar1;
  uVar7 = *(undefined8 *)puVar1;
  uVar6 = *(undefined8 *)puVar1;
  uVar5 = *(undefined8 *)puVar1;
  uVar4 = *(undefined8 *)puVar1;
  local_78 = *(undefined **)puVar1;
  local_68 = param_3;
  if (*(ulonglong *)(lVar3 + 0x10) <= uVar14) {
LAB_180157d37:
    local_60 = (longlong)&local_78 + 4;
    local_58 = FUN_180152d10;
    local_49 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
  }
  lVar15 = uVar14 * 0x148;
  if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2) ||
     (lVar13 = *(longlong *)(lVar3 + 8) + lVar15, *(int *)(lVar13 + 300) != iVar2))
  goto LAB_180157d37;
  local_49 = 1;
  FUN_1801379f0(&local_188,lVar13 + 0x40);
  if ((char)local_188 != '\x03') {
    *(undefined8 *)(param_1 + 8) = uStack_168;
    *(undefined8 *)(param_1 + 4) = local_178;
    *(undefined **)(param_1 + 6) = puStack_170;
    *param_1 = (undefined4)local_188;
    param_1[1] = local_188._4_4_;
    param_1[2] = (undefined4)uStack_180;
    param_1[3] = uStack_180._4_4_;
    goto LAB_180157cbe;
  }
  lVar13 = (longlong)&local_60 + 4;
  local_60 = uVar4;
  if (((*(ulonglong *)(lVar3 + 0x10) <= uVar14) ||
      (*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2)) ||
     (lVar10 = *(longlong *)(lVar3 + 8) + lVar15, *(int *)(lVar10 + 300) != iVar2)) {
    uStack_180 = FUN_180152d10;
    local_49 = 1;
    local_188 = lVar13;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_188,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  if ((*(int *)(lVar10 + 0x30) != 2) || (*(longlong *)(lVar10 + 0x38) == 0)) {
    local_49 = 0;
    FUN_1800663c0(local_68 + 0xc);
    local_80 = param_1;
    local_60 = uVar6;
    if ((*(ulonglong *)(lVar3 + 0x10) <= uVar14) ||
       ((*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2 ||
        (lVar13 = *(longlong *)(lVar3 + 8) + lVar15, *(int *)(lVar13 + 300) != iVar2)))) {
      local_188 = (longlong)&local_60 + 4;
      uStack_180 = FUN_180152d10;
      local_4a = 1;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_188,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
    }
    local_178 = 2;
    puStack_170 = (undefined *)*local_68;
    uStack_168 = local_68[1];
    local_160 = *(undefined4 *)(local_68 + 2);
    uStack_15c = *(undefined4 *)((longlong)local_68 + 0x14);
    uStack_158 = *(undefined4 *)(local_68 + 3);
    uStack_154 = *(undefined4 *)((longlong)local_68 + 0x1c);
    local_150 = *(undefined4 *)(local_68 + 4);
    uStack_14c = *(undefined4 *)((longlong)local_68 + 0x24);
    uStack_148 = *(undefined4 *)(local_68 + 5);
    uStack_144 = *(undefined4 *)((longlong)local_68 + 0x2c);
    local_140 = *(undefined4 *)(local_68 + 6);
    uStack_13c = *(undefined4 *)((longlong)local_68 + 0x34);
    uStack_138 = *(undefined4 *)(local_68 + 7);
    uStack_134 = *(undefined4 *)((longlong)local_68 + 0x3c);
    local_130 = local_68[8];
    uStack_128 = local_68[9];
    local_120 = *(undefined4 *)(local_68 + 10);
    uStack_11c = *(undefined4 *)((longlong)local_68 + 0x54);
    uStack_118 = *(undefined4 *)(local_68 + 0xb);
    uStack_114 = *(undefined4 *)((longlong)local_68 + 0x5c);
    local_188 = 0;
    uVar4 = *(undefined8 *)(param_2 + 0x20);
    local_4a = 0;
    FUN_18015fbf0(param_2,uVar4,&local_188);
    if (*(int *)(lVar13 + 0x18) == 1) {
      if (*(ulonglong *)(lVar13 + 0x28) < *(ulonglong *)(param_2 + 0x10)) {
        lVar10 = *(ulonglong *)(lVar13 + 0x28) * 0xf8;
        if (*(int *)(*(longlong *)(param_2 + 8) + lVar10) != 2) {
          puVar11 = (undefined8 *)(*(longlong *)(param_2 + 8) + lVar10);
          *puVar11 = 1;
          puVar11[1] = uVar4;
          goto LAB_180157bf9;
        }
      }
      local_4a = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ec0("invalid key",0xb,&PTR_s_C__Users_burne__cargo_registry_s_180254fe8);
    }
    *(undefined8 *)(lVar13 + 0x18) = 1;
    *(undefined8 *)(lVar13 + 0x20) = uVar4;
LAB_180157bf9:
    *(undefined8 *)(lVar13 + 0x28) = uVar4;
    local_60 = uVar7;
    if (((*(ulonglong *)(lVar3 + 0x10) <= uVar14) ||
        (*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2)) ||
       (lVar15 = *(longlong *)(lVar3 + 8) + lVar15, *(int *)(lVar15 + 300) != iVar2)) {
      local_188 = (longlong)&local_60 + 4;
      uStack_180 = FUN_180152d10;
      local_4a = 0;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_188,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
    }
    lVar3 = *(longlong *)(lVar15 + 0xb0);
    *(undefined8 *)(lVar15 + 0xb0) = 0;
    if (lVar3 != 0) {
      local_4a = 0;
      (**(code **)(lVar3 + 8))(*(undefined8 *)(lVar15 + 0xb8));
    }
    *(undefined1 *)local_80 = 3;
    return local_80;
  }
  if (*(ulonglong *)PTR_DAT_1802fd448 < 2) {
    uVar12 = (uint)DAT_1802fd1c0;
    if (uVar12 - 1 < 2) {
LAB_1801579fb:
      local_49 = 1;
      cVar9 = FUN_1801601d0(PTR_DAT_1802fd1b0,uVar12);
      if (cVar9 != '\0') {
        if (((*(ulonglong *)(lVar3 + 0x10) <= uVar14) ||
            (*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2)) ||
           (local_60 = *(longlong *)(lVar3 + 8) + lVar15, *(int *)(local_60 + 300) != iVar2)) {
          uStack_180 = FUN_180152d10;
          local_49 = 1;
          local_188 = lVar13;
          local_60 = uVar5;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_180256fac,&local_188,&PTR_s_C__Users_burne__cargo_registry_s_180257040)
          ;
        }
        local_60 = local_60 + 300;
        puStack_170 = PTR_DAT_1802fd1b0 + 0x30;
        local_58 = FUN_18015bcd0;
        local_78 = &DAT_180259b20;
        local_70 = &local_60;
        local_90 = &local_78;
        local_88 = &DAT_180258dd0;
        local_188 = 1;
        uStack_180 = (code *)&local_90;
        local_178 = 1;
        local_49 = 1;
        FUN_180160ae0(PTR_DAT_1802fd1b0,&local_188);
      }
    }
    else if (uVar12 != 0) {
      local_49 = 1;
      uVar12 = FUN_1801faaf0(&PTR_DAT_1802fd1b0);
      if ((char)uVar12 != '\0') goto LAB_1801579fb;
    }
  }
  local_60 = uVar8;
  if (((*(ulonglong *)(lVar3 + 0x10) <= uVar14) ||
      (*(int *)(*(longlong *)(lVar3 + 8) + lVar15) == 2)) ||
     (*(int *)(*(longlong *)(lVar3 + 8) + lVar15 + 300) != iVar2)) {
    uStack_180 = FUN_180152d10;
    local_49 = 1;
    local_188 = lVar13;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_188,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  *(undefined2 *)param_1 = 0x100;
  param_1[1] = iVar2;
  param_1[2] = 1;
LAB_180157cbe:
  FUN_1800430f0(local_68);
  FUN_1800663c0(local_68 + 0xc);
  return param_1;
}


