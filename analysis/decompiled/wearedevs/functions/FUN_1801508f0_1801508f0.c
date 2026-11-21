/* FUN_1801508f0 @ 1801508f0 */

byte FUN_1801508f0(char *param_1,longlong *param_2)

{
  byte bVar1;
  int iVar2;
  longlong lVar3;
  undefined *puVar4;
  char cVar5;
  longlong lVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  undefined8 local_78;
  undefined8 local_70;
  longlong local_68;
  undefined8 **local_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 *local_48;
  char *local_40;
  
  puVar4 = PTR_DAT_1802fd448;
  if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
     (((uVar7 = (uint)DAT_1802fcf98, uVar7 - 1 < 2 ||
       ((uVar7 != 0 && (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fcf88), (char)uVar7 != '\0')))) &&
      (cVar5 = FUN_1801601d0(PTR_DAT_1802fcf88,uVar7), cVar5 != '\0')))) {
    local_50 = PTR_DAT_1802fcf88 + 0x30;
    local_78 = "Queue::push_back";
    local_70 = 0x21;
    local_48 = &local_78;
    local_40 = "";
    local_68 = 1;
    local_60 = &local_48;
    local_58 = 1;
    FUN_180160ae0(PTR_DAT_1802fcf88,&local_68);
  }
  lVar3 = *param_2;
  uVar7 = *(uint *)(param_2 + 1);
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  local_78 = (char *)param_2[1];
  if ((ulonglong)uVar7 < *(ulonglong *)(lVar3 + 0x10)) {
    lVar6 = (ulonglong)uVar7 * 0x148;
    if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar6) != 2) &&
       (lVar6 = *(longlong *)(lVar3 + 8) + lVar6, *(int *)(lVar6 + 300) == iVar2)) {
      bVar1 = *(byte *)(lVar6 + 0x13f);
      if (bVar1 == 0) {
        *(undefined1 *)(lVar6 + 0x13f) = 1;
        lVar6 = *(longlong *)puVar4;
        if (*param_1 == '\0') {
          if (((lVar6 == 0) &&
              ((uVar8 = (uint)DAT_1802fcf68, uVar8 - 1 < 2 ||
               ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fcf58), (char)uVar8 != '\0'))))))
             && (cVar5 = FUN_1801601d0(PTR_DAT_1802fcf58,uVar8), cVar5 != '\0')) {
            local_50 = PTR_DAT_1802fcf58 + 0x30;
            local_78 = " -> first entry";
            local_70 = 0x1f;
            local_48 = &local_78;
            local_40 = "";
            local_68 = 1;
            local_60 = &local_48;
            local_58 = 1;
            FUN_180160ae0(PTR_DAT_1802fcf58,&local_68);
          }
          param_1[0] = '\x01';
          param_1[1] = '\0';
          param_1[2] = '\0';
          param_1[3] = '\0';
          *(uint *)(param_1 + 4) = uVar7;
          *(int *)(param_1 + 8) = iVar2;
        }
        else {
          if ((lVar6 == 0) &&
             (((uVar8 = (uint)DAT_1802fcfb0, uVar8 - 1 < 2 ||
               ((uVar8 != 0 && (uVar8 = FUN_1801faaf0(&PTR_DAT_1802fcfa0), (char)uVar8 != '\0'))))
              && (cVar5 = FUN_1801601d0(PTR_DAT_1802fcfa0,uVar8), cVar5 != '\0')))) {
            local_50 = PTR_DAT_1802fcfa0 + 0x30;
            local_78 = " -> existing entries";
            local_70 = 0x29;
            local_48 = &local_78;
            local_40 = "";
            local_68 = 1;
            local_60 = &local_48;
            local_58 = 1;
            FUN_180160ae0(PTR_DAT_1802fcfa0,&local_68);
          }
          uVar9 = (ulonglong)*(uint *)(param_1 + 0xc);
          local_78 = *(char **)(param_1 + 0xc);
          if (*(ulonglong *)(lVar3 + 0x10) <= uVar9) {
LAB_180150d1b:
            local_60 = (undefined8 **)FUN_180152d10;
            local_68 = (longlong)&local_78 + 4;
                    /* WARNING: Subroutine does not return */
            FUN_180201ee0(&DAT_180256fac,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_180257058
                         );
          }
          lVar6 = uVar9 * 0x148;
          if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar6) == 2) ||
             (lVar6 = *(longlong *)(lVar3 + 8) + lVar6,
             *(int *)(lVar6 + 300) != *(int *)(param_1 + 0x10))) goto LAB_180150d1b;
          *(undefined4 *)(lVar6 + 0x100) = 1;
          *(uint *)(lVar6 + 0x104) = uVar7;
          *(int *)(lVar6 + 0x108) = iVar2;
        }
        *(uint *)(param_1 + 0xc) = uVar7;
        *(int *)(param_1 + 0x10) = iVar2;
      }
      else if (((*(longlong *)puVar4 == 0) &&
               ((uVar7 = (uint)DAT_1802fcf80, uVar7 - 1 < 2 ||
                ((uVar7 != 0 && (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fcf70), (char)uVar7 != '\0')))))
               ) && (cVar5 = FUN_1801601d0(PTR_DAT_1802fcf70,uVar7), cVar5 != '\0')) {
        local_50 = PTR_DAT_1802fcf70 + 0x30;
        local_78 = " -> already queued";
        local_70 = 0x25;
        local_48 = &local_78;
        local_40 = "";
        local_68 = 1;
        local_60 = &local_48;
        local_58 = 1;
        FUN_180160ae0(PTR_DAT_1802fcf70,&local_68);
      }
      return bVar1 ^ 1;
    }
  }
  local_60 = (undefined8 **)FUN_180152d10;
  local_68 = (longlong)&local_78 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_68,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


