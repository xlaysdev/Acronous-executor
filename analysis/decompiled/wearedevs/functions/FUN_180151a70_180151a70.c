/* FUN_180151a70 @ 180151a70 */

bool FUN_180151a70(char *param_1,longlong *param_2)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  ulonglong uVar11;
  longlong *plVar12;
  undefined8 local_80;
  undefined8 local_78;
  longlong local_70;
  undefined8 **local_68;
  undefined8 local_60;
  undefined *local_58;
  undefined8 *local_50;
  char *local_48;
  
  puVar4 = PTR_DAT_1802fd448;
  plVar12 = param_2;
  if (*(longlong *)PTR_DAT_1802fd448 == 0) {
    uVar9 = (uint)DAT_1802fcf98;
    plVar12 = (longlong *)(ulonglong)uVar9;
    if (uVar9 - 1 < 2) {
LAB_180151c1d:
      cVar5 = FUN_1801601d0(PTR_DAT_1802fcf88);
      if (cVar5 != '\0') {
        local_58 = PTR_DAT_1802fcf88 + 0x30;
        local_80 = "Queue::push_back";
        local_78 = 0x21;
        local_50 = &local_80;
        local_48 = "";
        local_70 = 1;
        local_68 = &local_50;
        local_60 = 1;
        plVar12 = &local_70;
        FUN_180160ae0();
      }
    }
    else if (uVar9 != 0) {
      uVar9 = FUN_1801faaf0(&PTR_DAT_1802fcf88);
      plVar12 = (longlong *)(ulonglong)uVar9;
      if ((char)uVar9 != '\0') goto LAB_180151c1d;
    }
  }
  uVar8 = SUB84(plVar12,0);
  lVar3 = *param_2;
  uVar9 = *(uint *)(param_2 + 1);
  iVar1 = *(int *)((longlong)param_2 + 0xc);
  local_80 = (char *)param_2[1];
  if (*(ulonglong *)(lVar3 + 0x10) <= (ulonglong)uVar9) {
LAB_180151e7a:
    local_68 = (undefined8 **)FUN_180152d10;
    local_70 = (longlong)&local_80 + 4;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180256fac,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
  }
  lVar6 = (ulonglong)uVar9 * 0x148;
  if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar6) == 2) ||
     (lVar6 = *(longlong *)(lVar3 + 8) + lVar6, *(int *)(lVar6 + 300) != iVar1)) goto LAB_180151e7a;
  iVar2 = *(int *)(lVar6 + 0x78);
  if (iVar2 != 1000000000) {
    if (*(longlong *)puVar4 != 0) goto LAB_180151cb4;
    uVar9 = (uint)DAT_1802fcf80;
    if (1 < uVar9 - 1) {
      if (uVar9 == 0) goto LAB_180151cb4;
      uVar9 = FUN_1801faaf0(&PTR_DAT_1802fcf70);
      if ((char)uVar9 == '\0') goto LAB_180151cb4;
    }
    cVar5 = FUN_1801601d0(PTR_DAT_1802fcf70,uVar9);
    if (cVar5 != '\0') {
      local_58 = PTR_DAT_1802fcf70 + 0x30;
      local_80 = " -> already queued";
      local_78 = 0x25;
      local_50 = &local_80;
      local_48 = "";
      local_70 = 1;
      local_68 = &local_50;
      local_60 = 1;
      FUN_180160ae0(PTR_DAT_1802fcf70,&local_70);
    }
    goto LAB_180151cb4;
  }
  uVar7 = FUN_1801df8c0();
  *(undefined8 *)(lVar6 + 0x70) = uVar7;
  *(undefined4 *)(lVar6 + 0x78) = uVar8;
  lVar6 = *(longlong *)puVar4;
  if (*param_1 == '\0') {
    if (lVar6 == 0) {
      uVar10 = (uint)DAT_1802fcf68;
      if (uVar10 - 1 < 2) {
LAB_180151d97:
        cVar5 = FUN_1801601d0(PTR_DAT_1802fcf58,uVar10);
        if (cVar5 != '\0') {
          local_58 = PTR_DAT_1802fcf58 + 0x30;
          local_80 = " -> first entry";
          local_78 = 0x1f;
          local_50 = &local_80;
          local_48 = "";
          local_70 = 1;
          local_68 = &local_50;
          local_60 = 1;
          FUN_180160ae0(PTR_DAT_1802fcf58,&local_70);
        }
      }
      else if (uVar10 != 0) {
        uVar10 = FUN_1801faaf0(&PTR_DAT_1802fcf58);
        if ((char)uVar10 != '\0') goto LAB_180151d97;
      }
    }
    param_1[0] = '\x01';
    param_1[1] = '\0';
    param_1[2] = '\0';
    param_1[3] = '\0';
    *(uint *)(param_1 + 4) = uVar9;
    *(int *)(param_1 + 8) = iVar1;
  }
  else {
    if ((lVar6 == 0) &&
       (((uVar10 = (uint)DAT_1802fcfb0, uVar10 - 1 < 2 ||
         ((uVar10 != 0 && (uVar10 = FUN_1801faaf0(&PTR_DAT_1802fcfa0), (char)uVar10 != '\0')))) &&
        (cVar5 = FUN_1801601d0(PTR_DAT_1802fcfa0,uVar10), cVar5 != '\0')))) {
      local_58 = PTR_DAT_1802fcfa0 + 0x30;
      local_80 = " -> existing entries";
      local_78 = 0x29;
      local_50 = &local_80;
      local_48 = "";
      local_70 = 1;
      local_68 = &local_50;
      local_60 = 1;
      FUN_180160ae0(PTR_DAT_1802fcfa0,&local_70);
    }
    uVar11 = (ulonglong)*(uint *)(param_1 + 0xc);
    local_80 = *(char **)(param_1 + 0xc);
    if (*(ulonglong *)(lVar3 + 0x10) <= uVar11) {
LAB_180151ea3:
      local_68 = (undefined8 **)FUN_180152d10;
      local_70 = (longlong)&local_80 + 4;
                    /* WARNING: Subroutine does not return */
      FUN_180201ee0(&DAT_180256fac,&local_70,&PTR_s_C__Users_burne__cargo_registry_s_180257058);
    }
    lVar6 = uVar11 * 0x148;
    if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar6) == 2) ||
       (lVar6 = *(longlong *)(lVar3 + 8) + lVar6, *(int *)(lVar6 + 300) != *(int *)(param_1 + 0x10))
       ) goto LAB_180151ea3;
    *(undefined4 *)(lVar6 + 0x10c) = 1;
    *(uint *)(lVar6 + 0x110) = uVar9;
    *(int *)(lVar6 + 0x114) = iVar1;
  }
  *(uint *)(param_1 + 0xc) = uVar9;
  *(int *)(param_1 + 0x10) = iVar1;
LAB_180151cb4:
  return iVar2 == 1000000000;
}


