/* FUN_1800ec8c0 @ 1800ec8c0 */

void FUN_1800ec8c0(undefined2 *param_1,longlong param_2,undefined4 *param_3,int *param_4)

{
  undefined8 uVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  int iVar9;
  longlong lVar10;
  undefined4 uVar11;
  longlong *plVar12;
  ulonglong uVar13;
  int iVar14;
  ulonglong uVar15;
  undefined **local_f0;
  undefined *local_e8;
  undefined *local_e0;
  longlong *local_d8;
  undefined4 *local_d0;
  undefined4 local_c8;
  int local_c4;
  longlong local_c0;
  undefined ***local_b8;
  longlong local_b0;
  code *local_a8;
  undefined2 *local_a0;
  int *local_98;
  longlong local_90;
  undefined ***local_88;
  undefined4 *local_80;
  code *local_78;
  int *local_70;
  code *local_68;
  longlong local_60;
  code *local_58;
  longlong local_50;
  undefined8 local_48;
  
  puVar4 = PTR_DAT_1802fd448;
  puVar3 = PTR_PTR_1802fc5d0;
  uVar13 = *(ulonglong *)(param_2 + 0x58);
  local_a0 = param_1;
  if (uVar13 != 0) {
    iVar14 = *param_4;
    local_c8 = *param_3;
    uVar15 = 0;
    local_d0 = param_3;
    local_98 = param_4;
    do {
      if (*(ulonglong *)(param_2 + 0x38) <= uVar15) {
                    /* WARNING: Subroutine does not return */
        FUN_180201ba0(&PTR_s_C__Users_burne__cargo_registry_s_180216588);
      }
      uVar1 = *(undefined8 *)(*(longlong *)(param_2 + 0x30) + 8 + uVar15 * 0x10);
      local_48 = CONCAT44((int)uVar1,(int)((ulonglong)uVar1 >> 0x20));
      local_50 = param_2;
      lVar7 = FUN_180152f00(&local_50);
      uVar6 = *(uint *)(lVar7 + 0x40) - 4;
      if (*(uint *)(lVar7 + 0x40) < 4) {
        uVar6 = 6;
      }
      if (((uVar6 < 7) && ((0x54U >> (uVar6 & 0x1f) & 1) != 0)) &&
         (*(longlong *)(lVar7 + 0x90) == 0)) {
        if (*(longlong *)puVar4 == 0) {
          bVar2 = puVar3[0x10];
          uVar6 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar6 = FUN_1801faaf0(puVar3), (char)uVar6 != '\0')))) &&
             (cVar5 = FUN_1801601d0(*(undefined8 *)puVar3,uVar6), cVar5 != '\0')) {
            lVar10 = *(longlong *)puVar3;
            local_78 = (code *)(lVar10 + 0x30);
            local_c0 = lVar7 + 300;
            local_b0 = lVar7 + 0x88;
            local_b8 = (undefined ***)FUN_1800f03c0;
            local_a8 = FUN_1800f1790;
            local_e0 = &DAT_1802163a0;
            local_d8 = &local_c0;
            local_90 = 1;
            local_88 = &local_f0;
            local_80 = (undefined4 *)0x1;
            plVar12 = &local_90;
LAB_1800ecc1a:
            local_e8 = &DAT_180216218;
            local_f0 = &local_e0;
            FUN_180160ae0(lVar10,plVar12);
          }
        }
      }
      else {
        if (*(longlong *)puVar4 == 0) {
          bVar2 = PTR_DAT_1802fc5d8[0x10];
          uVar6 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar6 = FUN_1801faaf0(PTR_DAT_1802fc5d8), (char)uVar6 != '\0')))) &&
             (cVar5 = FUN_1801601d0(*(undefined8 *)PTR_DAT_1802fc5d8,uVar6), cVar5 != '\0')) {
            local_a8 = (code *)(*(longlong *)PTR_DAT_1802fc5d8 + 0x30);
            local_90 = lVar7 + 300;
            local_70 = (int *)(lVar7 + 0x88);
            local_88 = (undefined ***)FUN_1800f03c0;
            local_80 = local_d0;
            local_78 = FUN_1801ee6c0;
            local_68 = FUN_1800f1790;
            local_e0 = &DAT_1802163cc;
            local_d8 = &local_90;
            local_f0 = &local_e0;
            local_e8 = &DAT_180216218;
            local_c0 = 1;
            local_b8 = &local_f0;
            local_b0 = 1;
            FUN_180160ae0(*(longlong *)PTR_DAT_1802fc5d8,&local_c0);
          }
        }
        uVar11 = local_c8;
        uVar8 = FUN_180131e40(lVar7 + 0x88);
        if ((uVar8 & 1) != 0) {
          *(undefined1 (*) [16])(local_a0 + 0xc) = (undefined1  [16])0x0;
          *local_a0 = 0x101;
          *(undefined4 *)(local_a0 + 2) = uVar11;
          *(undefined ***)(local_a0 + 4) = &PTR_LAB_180216400;
          *(undefined8 *)(local_a0 + 8) = 1;
          return;
        }
        iVar9 = *(int *)(lVar7 + 0x88);
        if (iVar9 < 1) {
          iVar9 = 0;
        }
        local_c4 = *(int *)(lVar7 + 0x8c) - iVar9;
        if (local_c4 == 0 || *(int *)(lVar7 + 0x8c) < iVar9) {
          local_c4 = 0;
          lVar10 = *(longlong *)puVar4;
        }
        else {
          *(int *)(lVar7 + 0x8c) = iVar9;
          iVar14 = iVar14 + local_c4;
          *local_98 = iVar14;
          lVar10 = *(longlong *)puVar4;
        }
        if (lVar10 == 0) {
          bVar2 = PTR_PTR_1802fc5c8[0x10];
          uVar6 = (uint)bVar2;
          if (((bVar2 - 1 < 2) ||
              ((bVar2 != 0 && (uVar6 = FUN_1801faaf0(PTR_PTR_1802fc5c8), (char)uVar6 != '\0')))) &&
             (cVar5 = FUN_1801601d0(*(undefined8 *)PTR_PTR_1802fc5c8,uVar6), cVar5 != '\0')) {
            lVar10 = *(longlong *)PTR_PTR_1802fc5c8;
            local_a8 = (code *)(lVar10 + 0x30);
            local_90 = lVar7 + 300;
            local_88 = (undefined ***)FUN_1800f03c0;
            local_80 = local_d0;
            local_78 = FUN_1801ee6c0;
            local_70 = &local_c4;
            local_68 = FUN_1801ee6c0;
            local_58 = FUN_1800f1790;
            local_e0 = &DAT_180216428;
            local_d8 = &local_90;
            local_c0 = 1;
            local_b8 = &local_f0;
            local_b0 = 1;
            plVar12 = &local_c0;
            local_60 = lVar7 + 0x88;
            goto LAB_1800ecc1a;
          }
        }
      }
      uVar15 = (uVar15 + 1) - (ulonglong)(*(ulonglong *)(param_2 + 0x58) < uVar13);
      uVar13 = uVar13 - (*(ulonglong *)(param_2 + 0x58) < uVar13);
    } while (uVar15 < uVar13);
  }
  *(undefined1 *)local_a0 = 3;
  return;
}


