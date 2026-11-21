/* FUN_180156df0 @ 180156df0 */

/* WARNING: Removing unreachable block (ram,0x00018015718b) */

undefined8 *
FUN_180156df0(undefined8 *param_1,undefined8 param_2,longlong *param_3,longlong *param_4)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  char cVar10;
  uint uVar11;
  longlong lVar12;
  undefined8 *puVar13;
  longlong lVar14;
  ulonglong uVar15;
  longlong local_1b0;
  int local_1a8 [2];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  longlong local_c8;
  undefined8 *local_c0;
  undefined *local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  undefined8 local_98;
  longlong *local_90;
  char local_88;
  byte bStack_87;
  undefined6 uStack_86;
  undefined2 uStack_80;
  undefined6 uStack_7e;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined6 uStack_6e;
  undefined2 local_68;
  undefined6 uStack_66;
  undefined8 local_60;
  code *local_58;
  undefined1 local_49;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  lVar3 = *param_4;
  puVar1 = (uint *)(param_4 + 1);
  uVar15 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_4 + 0xc);
  uVar9 = *(undefined8 *)puVar1;
  uVar8 = *(undefined8 *)puVar1;
  uVar7 = *(undefined8 *)puVar1;
  puVar6 = *(undefined **)puVar1;
  uVar5 = *(undefined8 *)puVar1;
  lVar14 = uVar15 * 0x148;
  uVar4 = *(ulonglong *)(lVar3 + 0x10);
  local_90 = param_3;
  while (uVar15 < uVar4) {
    local_60 = *(longlong *)puVar1;
    if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2) ||
       (lVar12 = *(longlong *)(lVar3 + 8) + lVar14, *(int *)(lVar12 + 300) != iVar2)) break;
    FUN_18014a500(&local_1b0,lVar12 + 0x18,param_2);
    local_c8 = local_1b0;
    if (local_1b0 == 4) {
      local_a8 = puVar6;
      if (((*(ulonglong *)(lVar3 + 0x10) <= uVar15) ||
          (*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2)) ||
         (lVar12 = *(longlong *)(lVar3 + 8) + lVar14, *(int *)(lVar12 + 300) != iVar2)) {
        local_60 = (longlong)&local_a8 + 4;
        local_58 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      FUN_1801385e0(&local_88,lVar12 + 0x40);
      if (local_88 == '\x03') {
        if ((bStack_87 & 1) == 0) {
          if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
             (((uVar11 = (uint)DAT_1802fd190, uVar11 - 1 < 2 ||
               ((uVar11 != 0 && (uVar11 = FUN_1801faaf0(&PTR_DAT_1802fd180), (char)uVar11 != '\0')))
               ) && (cVar10 = FUN_1801601d0(PTR_DAT_1802fd180,uVar11), cVar10 != '\0')))) {
            if (((*(ulonglong *)(lVar3 + 0x10) <= uVar15) ||
                (*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2)) ||
               (local_60 = *(longlong *)(lVar3 + 8) + lVar14, *(int *)(local_60 + 300) != iVar2)) {
              lVar3 = (longlong)&local_60 + 4;
              local_88 = (char)lVar3;
              bStack_87 = (byte)((ulonglong)lVar3 >> 8);
              uStack_86 = (undefined6)((ulonglong)lVar3 >> 0x10);
              uStack_80 = 0x2d10;
              uStack_7e = 0x18015;
              local_60 = uVar8;
                    /* WARNING: Subroutine does not return */
              FUN_180201ee0(&DAT_180256fac,&local_88,
                            &PTR_s_C__Users_burne__cargo_registry_s_180257040);
            }
            local_60 = local_60 + 300;
            local_58 = FUN_18015bcd0;
            local_a8 = &DAT_180259938;
            local_a0 = &local_60;
            local_c0 = &local_a8;
            local_b8 = &DAT_180258dd0;
            local_88 = '\x01';
            bStack_87 = 0;
            uStack_86 = 0;
            uStack_80 = SUB82(&local_c0,0);
            uStack_7e = (undefined6)((ulonglong)&local_c0 >> 0x10);
            uStack_78 = 1;
            uStack_76 = 0;
            uStack_70 = SUB82(PTR_DAT_1802fd180 + 0x30,0);
            uStack_6e = (undefined6)((ulonglong)(PTR_DAT_1802fd180 + 0x30) >> 0x10);
            FUN_180160ae0(PTR_DAT_1802fd180,&local_88);
          }
          if (((*(ulonglong *)(lVar3 + 0x10) <= uVar15) ||
              (*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2)) ||
             (*(int *)(*(longlong *)(lVar3 + 8) + lVar14 + 300) != iVar2)) {
            lVar3 = (longlong)&local_60 + 4;
            local_88 = (char)lVar3;
            bStack_87 = (byte)((ulonglong)lVar3 >> 8);
            uStack_86 = (undefined6)((ulonglong)lVar3 >> 0x10);
            uStack_80 = 0x2d10;
            uStack_7e = 0x18015;
            local_60 = uVar9;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257040
                         );
          }
          *param_1 = 3;
          *(undefined2 *)(param_1 + 1) = 0x100;
          *(int *)((longlong)param_1 + 0xc) = iVar2;
          *(undefined4 *)(param_1 + 2) = 1;
        }
        else {
          puVar13 = *(undefined8 **)*local_90;
          local_98 = (*(code *)*puVar13)(((undefined8 *)*local_90)[1]);
          local_b0 = puVar13;
          local_60 = uVar7;
          if (((*(ulonglong *)(lVar3 + 0x10) <= uVar15) ||
              (*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2)) ||
             (lVar14 = *(longlong *)(lVar3 + 8) + lVar14, *(int *)(lVar14 + 300) != iVar2)) {
            lVar3 = (longlong)&local_60 + 4;
            local_88 = (char)lVar3;
            bStack_87 = (byte)((ulonglong)lVar3 >> 8);
            uStack_86 = (undefined6)((ulonglong)lVar3 >> 0x10);
            uStack_80 = 0x2d10;
            uStack_7e = 0x18015;
            local_49 = 1;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257058
                         );
          }
          local_90 = (longlong *)lVar14;
          if (*(longlong *)(lVar14 + 0xb0) != 0) {
            (**(code **)(*(longlong *)(lVar14 + 0xb0) + 0x18))(*(undefined8 *)(lVar14 + 0xb8));
          }
          *(undefined8 *)((longlong)local_90 + 0xb0) = local_98;
          *(undefined8 **)((longlong)local_90 + 0xb8) = local_b0;
          *param_1 = 4;
        }
      }
      else {
        param_1[5] = CONCAT62(uStack_66,local_68);
        *(ulonglong *)((longlong)param_1 + 0x1a) = CONCAT26(uStack_70,uStack_76);
        *(ulonglong *)((longlong)param_1 + 0x22) = CONCAT26(local_68,uStack_6e);
        *(ulonglong *)((longlong)param_1 + 10) = CONCAT26(uStack_80,uStack_86);
        *(ulonglong *)((longlong)param_1 + 0x12) = CONCAT26(uStack_78,uStack_7e);
        *param_1 = 3;
        *(char *)(param_1 + 1) = local_88;
        *(byte *)((longlong)param_1 + 9) = bStack_87;
      }
      return param_1;
    }
    if (local_1b0 == 0) {
      if (local_1a8[0] == 3) {
        param_1[0xc] = local_140;
        param_1[0xd] = uStack_138;
        param_1[10] = local_150;
        param_1[0xb] = uStack_148;
        param_1[8] = local_160;
        param_1[9] = uStack_158;
        *(undefined4 *)(param_1 + 6) = local_170;
        *(undefined4 *)((longlong)param_1 + 0x34) = uStack_16c;
        *(undefined4 *)(param_1 + 7) = uStack_168;
        *(undefined4 *)((longlong)param_1 + 0x3c) = uStack_164;
        *(undefined4 *)(param_1 + 4) = local_180;
        *(undefined4 *)((longlong)param_1 + 0x24) = uStack_17c;
        *(undefined4 *)(param_1 + 5) = uStack_178;
        *(undefined4 *)((longlong)param_1 + 0x2c) = uStack_174;
        *(undefined4 *)(param_1 + 2) = local_190;
        *(undefined4 *)((longlong)param_1 + 0x14) = uStack_18c;
        *(undefined4 *)(param_1 + 3) = uStack_188;
        *(undefined4 *)((longlong)param_1 + 0x1c) = uStack_184;
        *(undefined4 *)param_1 = local_1a0;
        *(undefined4 *)((longlong)param_1 + 4) = uStack_19c;
        *(undefined4 *)(param_1 + 1) = uStack_198;
        *(undefined4 *)((longlong)param_1 + 0xc) = uStack_194;
        return param_1;
      }
LAB_18015730f:
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_1802599ec,0x59,&PTR_s_C__Users_burne__cargo_registry_s_180259a18);
    }
    if ((int)local_1b0 != 3) goto LAB_18015730f;
    if (((*(longlong *)PTR_DAT_1802fd448 == 0) &&
        ((uVar11 = (uint)DAT_1802fd1a8, uVar11 - 1 < 2 ||
         ((uVar11 != 0 && (uVar11 = FUN_1801faaf0(&PTR_DAT_1802fd198), (char)uVar11 != '\0')))))) &&
       (cVar10 = FUN_1801601d0(PTR_DAT_1802fd198,uVar11), cVar10 != '\0')) {
      if (((*(ulonglong *)(lVar3 + 0x10) <= uVar15) ||
          (*(int *)(*(longlong *)(lVar3 + 8) + lVar14) == 2)) ||
         (local_60 = *(longlong *)(lVar3 + 8) + lVar14, *(int *)(local_60 + 300) != iVar2)) {
        lVar3 = (longlong)&local_60 + 4;
        local_88 = (char)lVar3;
        bStack_87 = (byte)((ulonglong)lVar3 >> 8);
        uStack_86 = (undefined6)((ulonglong)lVar3 >> 0x10);
        uStack_80 = 0x2d10;
        uStack_7e = 0x18015;
        local_60 = uVar5;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
      }
      local_60 = local_60 + 300;
      local_58 = FUN_18015bcd0;
      local_a8 = &DAT_180259981;
      local_a0 = &local_60;
      local_c0 = &local_a8;
      local_b8 = &DAT_180258dd0;
      local_88 = '\x01';
      bStack_87 = 0;
      uStack_86 = 0;
      uStack_80 = SUB82(&local_c0,0);
      uStack_7e = (undefined6)((ulonglong)&local_c0 >> 0x10);
      uStack_78 = 1;
      uStack_76 = 0;
      uStack_70 = SUB82(PTR_DAT_1802fd198 + 0x30,0);
      uStack_6e = (undefined6)((ulonglong)(PTR_DAT_1802fd198 + 0x30) >> 0x10);
      FUN_180160ae0(PTR_DAT_1802fd198,&local_88);
    }
    FUN_18015b980(local_1a8);
    uVar4 = *(ulonglong *)(lVar3 + 0x10);
  }
  local_60 = *(longlong *)puVar1;
  lVar3 = (longlong)&local_60 + 4;
  local_88 = (char)lVar3;
  bStack_87 = (byte)((ulonglong)lVar3 >> 8);
  uStack_86 = (undefined6)((ulonglong)lVar3 >> 0x10);
  uStack_80 = 0x2d10;
  uStack_7e = 0x18015;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_88,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
}


