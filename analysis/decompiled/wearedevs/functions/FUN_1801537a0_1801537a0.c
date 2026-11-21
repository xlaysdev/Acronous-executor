/* FUN_1801537a0 @ 1801537a0 */

void FUN_1801537a0(longlong param_1,longlong *param_2,char param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  longlong lVar10;
  longlong lVar11;
  ulonglong uVar12;
  undefined1 *puVar13;
  longlong lVar14;
  undefined1 local_fa;
  byte local_f9;
  undefined8 local_f8;
  undefined ***local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined **local_d8;
  undefined *local_d0;
  undefined *local_c8;
  longlong *local_c0;
  longlong local_b8;
  undefined ***pppuStack_b0;
  longlong local_a8;
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  byte *local_88;
  undefined *local_80;
  longlong local_78;
  code *local_70;
  longlong local_68;
  code *local_60;
  longlong local_58;
  code *local_50;
  
  puVar4 = PTR_DAT_1802fd448;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar9 = (uint)DAT_1802fd008, uVar9 - 1 < 2 ||
       ((uVar9 != 0 && (uVar9 = FUN_1801faaf0(&PTR_DAT_1802fcff8), (char)uVar9 != '\0')))) &&
      (cVar5 = FUN_1801601d0(PTR_DAT_1802fcff8,uVar9), cVar5 != '\0')))) {
    uVar6 = (ulonglong)*(uint *)(param_2 + 1);
    local_f8 = param_2[1];
    if (*(ulonglong *)(*param_2 + 0x10) <= uVar6) goto LAB_180153c6c;
    lVar10 = *(longlong *)(*param_2 + 8);
    lVar11 = uVar6 * 0x148;
    lVar3 = *(longlong *)(lVar10 + lVar11);
    if ((lVar3 == 2) ||
       (lVar10 = lVar10 + lVar11, *(int *)(lVar10 + 300) != *(int *)((longlong)param_2 + 0xc)))
    goto LAB_180153c6c;
    local_e0 = PTR_DAT_1802fcff8 + 0x30;
    local_b8 = lVar10 + 300;
    local_a8 = lVar10 + 0x40;
    if (lVar3 == 0 && *(uint *)(lVar10 + 0x40) < 4) {
      local_fa = *(longlong *)(lVar10 + 0x90) == 0;
    }
    else {
      local_fa = false;
    }
    local_f9 = (byte)lVar3 ^ 1;
    local_78 = lVar10 + 0x90;
    local_68 = param_1 + 0x28;
    local_58 = param_1 + 0x18;
    pppuStack_b0 = (undefined ***)FUN_180154700;
    local_a0 = &LAB_1801394b0;
    local_98 = &local_fa;
    local_90 = &DAT_180039950;
    local_88 = &local_f9;
    local_80 = &DAT_180039950;
    local_70 = FUN_1801ee720;
    local_60 = FUN_1801ee720;
    local_50 = FUN_1801ee720;
    local_c8 = &DAT_180258160;
    local_c0 = &local_b8;
    local_d8 = &local_c8;
    local_d0 = &DAT_180257d08;
    local_f8 = 1;
    local_f0 = &local_d8;
    local_e8 = 1;
    FUN_180160ae0(PTR_DAT_1802fcff8,&local_f8);
  }
  lVar10 = *param_2;
  puVar1 = (uint *)(param_2 + 1);
  uVar12 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  lVar11 = *(longlong *)puVar1;
  lVar3 = *(longlong *)puVar1;
  local_f8 = *(longlong *)puVar1;
  uVar6 = *(ulonglong *)(lVar10 + 0x10);
  if (uVar12 < uVar6) {
    lVar14 = uVar12 * 0x148;
    lVar8 = *(longlong *)(*(longlong *)(lVar10 + 8) + lVar14);
    if ((lVar8 != 2) && (lVar7 = *(longlong *)(lVar10 + 8) + lVar14, *(int *)(lVar7 + 300) == iVar2)
       ) {
      if ((*(uint *)(lVar7 + 0x40) < 4 && lVar8 == 0) && (*(longlong *)(lVar7 + 0x90) == 0)) {
        if (*(int *)(lVar7 + 0x78) == 1000000000) {
          local_b8 = CONCAT44(local_b8._4_4_,iVar2);
          FUN_18015dfe0(lVar10 + 0x28,&local_b8);
          if (param_3 != '\0') {
            if (*(longlong *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201ec0("assertion failed: self.num_local_reset_streams > 0",0x32,
                            &PTR_s_C__Users_burne__cargo_registry_s_180258320);
            }
            *(longlong *)(param_1 + 0x38) = *(longlong *)(param_1 + 0x38) + -1;
          }
        }
        uVar6 = *(ulonglong *)(lVar10 + 0x10);
        if (((uVar6 <= uVar12) || (*(int *)(*(longlong *)(lVar10 + 8) + lVar14) == 2)) ||
           (lVar8 = *(longlong *)(lVar10 + 8) + lVar14, *(int *)(lVar8 + 300) != iVar2))
        goto LAB_180153c67;
        if ((*(int *)(lVar8 + 0x40) != 3) && (*(char *)(lVar8 + 0x138) == '\x01')) {
          local_f8 = lVar3;
          if (((*(longlong *)puVar4 == 0) &&
              ((uVar9 = (uint)DAT_1802fd020, uVar9 - 1 < 2 ||
               ((uVar9 != 0 && (uVar9 = FUN_1801faaf0(&PTR_DAT_1802fd010), (char)uVar9 != '\0'))))))
             && (cVar5 = FUN_1801601d0(PTR_DAT_1802fd010,uVar9), cVar5 != '\0')) {
            puVar13 = PTR_DAT_1802fd010 + 0x30;
            local_f8 = FUN_180152e90(param_2);
            local_f8 = local_f8 + 300;
            local_f0 = (undefined ***)FUN_180154700;
            local_c8 = &DAT_1802581dc;
            local_c0 = &local_f8;
            local_d8 = &local_c8;
            local_d0 = &DAT_180257d08;
            local_b8 = 1;
            pppuStack_b0 = &local_d8;
            local_a8 = 1;
            local_a0 = puVar13;
            FUN_180160ae0(PTR_DAT_1802fd010,&local_b8);
          }
          FUN_180153670(param_1,param_2);
          uVar6 = *(ulonglong *)(lVar10 + 0x10);
        }
      }
      if (uVar12 < uVar6) {
        lVar3 = *(longlong *)(*(longlong *)(lVar10 + 8) + lVar14);
        if ((lVar3 != 2) &&
           (lVar14 = *(longlong *)(lVar10 + 8) + lVar14, *(int *)(lVar14 + 300) == iVar2)) {
          if ((((lVar3 == 0 && *(uint *)(lVar14 + 0x40) < 4) &&
               ((((*(longlong *)(lVar14 + 0x90) == 0 && (*(longlong *)(lVar14 + 0x80) == 0)) &&
                 (*(char *)(lVar14 + 0x139) == '\0')) &&
                ((*(char *)(lVar14 + 0x13a) == '\0' && (*(char *)(lVar14 + 0x13e) == '\0')))))) &&
              (*(char *)(lVar14 + 0x13f) == '\0')) &&
             ((*(char *)(lVar14 + 0x13c) == '\0' && (*(int *)(lVar14 + 0x78) == 1000000000)))) {
            local_b8 = *param_2;
            pppuStack_b0 = (undefined ***)param_2[1];
            local_f8 = lVar11;
            FUN_180152420(&local_b8);
          }
          return;
        }
      }
    }
  }
LAB_180153c67:
  local_f8 = *(longlong *)puVar1;
LAB_180153c6c:
  local_b8 = (longlong)&local_f8 + 4;
  pppuStack_b0 = (undefined ***)FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_b8,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


