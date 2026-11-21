/* FUN_1801312a0 @ 1801312a0 */

undefined4 * FUN_1801312a0(undefined4 *param_1,ulonglong param_2,ushort *param_3,ulonglong param_4)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  char cVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint unaff_R12D;
  uint unaff_R13D;
  ulonglong uVar12;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  ulonglong local_98;
  undefined **local_90;
  undefined *local_88;
  undefined *local_80;
  ulonglong **local_78;
  ulonglong *local_70;
  undefined1 *local_68;
  undefined8 local_60;
  undefined ***local_58;
  undefined8 local_50;
  undefined *local_48;
  
  if ((int)param_2 == 0) {
    if ((param_2 >> 0x20 & 1) == 0) {
      if ((param_4 * -0x5555555555555555 >> 1 |
          (ulonglong)((param_4 * -0x5555555555555555 & 1) != 0) << 0x3f) < 0x2aaaaaaaaaaaaaab) {
        if (param_4 == 0) {
          uVar9 = 0;
          uVar10 = 0;
          local_b4 = 0;
          local_b8 = 0;
          local_bc = 0;
          local_b0 = 0;
          uVar6 = 0;
        }
        else {
          uVar6 = 0;
          local_b0 = 0;
          local_bc = 0;
          local_b8 = 0;
          local_b4 = 0;
          uVar10 = 0;
          uVar9 = 0;
          do {
            uVar12 = 6;
            if (param_4 < 6) {
              uVar12 = param_4;
            }
            if (param_4 == 1) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(1,1,&PTR_s_C__Users_burne__cargo_registry_s_1802476f8);
            }
            if (param_4 < 3) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(2,2,&PTR_s_C__Users_burne__cargo_registry_s_180247710);
            }
            if (param_4 == 3) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(3,3,&PTR_s_C__Users_burne__cargo_registry_s_180247710);
            }
            if (param_4 < 5) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(4,4,&PTR_s_C__Users_burne__cargo_registry_s_180247710);
            }
            if (param_4 == 5) {
                    /* WARNING: Subroutine does not return */
              FUN_180201d02(5,5,&PTR_s_C__Users_burne__cargo_registry_s_180247710);
            }
            uVar7 = (uint)(ushort)(*param_3 << 8 | *param_3 >> 8);
            if (7 < uVar7 - 1) goto switchD_1801314dc_caseD_7;
            bVar1 = (byte)param_3[1];
            bVar2 = *(byte *)((longlong)param_3 + 3);
            bVar3 = (byte)param_3[2];
            bVar4 = *(byte *)((longlong)param_3 + 5);
            uVar8 = (uint)bVar4;
            switch(uVar7) {
            case 1:
              local_a4 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | uVar8;
              uVar9 = 1;
              break;
            case 2:
              unaff_R13D = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 |
                           (uint)bVar4;
              uVar10 = 1;
              uVar7 = unaff_R13D;
              goto joined_r0x000180131544;
            case 3:
              local_a0 = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | (uint)bVar4;
              local_b4 = 1;
              break;
            case 4:
              uVar7 = (uint)bVar1 << 0x18;
              if (-1 < (int)uVar7) {
                local_a8 = (uint)bVar2 << 0x10 | uVar8 | (uint)bVar3 << 8 | uVar7;
                local_b8 = 1;
                break;
              }
              goto LAB_18013169e;
            case 5:
              uVar11 = (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18;
              uVar7 = (uint)bVar3 * 0x100;
              if (0xffbfff < (uVar11 + uVar7) - 0x4000) goto LAB_18013169e;
              local_ac = uVar11 | uVar7 | uVar8;
              local_bc = 1;
              break;
            case 6:
              local_9c = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | uVar8;
              local_b0 = 1;
              break;
            case 8:
              unaff_R12D = (uint)bVar3 << 8 | (uint)bVar2 << 0x10 | (uint)bVar1 << 0x18 | uVar8;
              uVar6 = 1;
              uVar7 = unaff_R12D;
joined_r0x000180131544:
              if (1 < uVar7) {
LAB_18013169e:
                *(undefined1 *)(param_1 + 1) = 0xe;
                goto LAB_1801312bb;
              }
            }
switchD_1801314dc_caseD_7:
            param_3 = (ushort *)((longlong)param_3 + uVar12);
            param_4 = param_4 - uVar12;
          } while (param_4 != 0);
        }
        *param_1 = uVar9;
        param_1[1] = local_a4;
        param_1[2] = uVar10;
        param_1[3] = unaff_R13D;
        param_1[4] = local_b4;
        param_1[5] = local_a0;
        param_1[6] = local_b8;
        param_1[7] = local_a8;
        param_1[8] = local_bc;
        param_1[9] = local_ac;
        param_1[10] = local_b0;
        param_1[0xb] = local_9c;
        param_1[0xc] = uVar6;
        param_1[0xd] = unaff_R12D;
        *(undefined1 *)(param_1 + 0xe) = 0;
        return param_1;
      }
      if ((*(ulonglong *)PTR_DAT_1802fd448 < 2) &&
         (((uVar7 = (uint)DAT_1802fbc70, uVar7 - 1 < 2 ||
           ((uVar7 != 0 && (uVar7 = FUN_1801faaf0(&PTR_DAT_1802fbc60), (char)uVar7 != '\0')))) &&
          (cVar5 = FUN_1801601d0(PTR_DAT_1802fbc60,uVar7), cVar5 != '\0')))) {
        local_48 = PTR_DAT_1802fbc60 + 0x30;
        local_70 = &local_98;
        local_68 = &LAB_1800273d0;
        local_80 = &DAT_180247938;
        local_78 = &local_70;
        local_90 = &local_80;
        local_88 = &DAT_180247960;
        local_60 = 1;
        local_58 = &local_90;
        local_50 = 1;
        local_98 = param_4;
        FUN_180160ae0(PTR_DAT_1802fbc60,&local_60);
        *(undefined1 *)(param_1 + 1) = 0x11;
      }
      else {
        *(undefined1 *)(param_1 + 1) = 0x11;
      }
    }
    else {
      if (param_4 == 0) {
        *param_1 = 0;
        param_1[2] = 0;
        param_1[4] = 0;
        param_1[6] = 0;
        param_1[8] = 0;
        param_1[10] = 0;
        param_1[0xc] = 0;
        *(undefined1 *)(param_1 + 0xe) = 1;
        return param_1;
      }
      *(undefined1 *)(param_1 + 1) = 0x10;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0x12;
  }
LAB_1801312bb:
  *param_1 = 2;
  return param_1;
}


