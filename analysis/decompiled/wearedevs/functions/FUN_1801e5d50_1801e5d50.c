/* FUN_1801e5d50 @ 1801e5d50 */

byte * FUN_1801e5d50(byte *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte bVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  longlong lVar9;
  ulonglong uVar10;
  ulonglong local_90;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined8 local_58;
  char *local_50;
  byte local_41;
  
  bVar1 = *(byte *)(param_2 + 7);
  if (bVar1 != 3) {
    bVar2 = *(byte *)(param_2 + 2);
    local_50 = (char *)*param_2;
    bVar6 = *(byte *)((longlong)param_2 + 0x39);
    uVar10 = param_2[1];
    local_41 = bVar2;
    if ((*(byte *)((longlong)param_2 + 0x3a) & 1) == 0) {
      if (bVar1 <= bVar6 && bVar6 != 3) {
        uVar7 = uVar10;
        do {
          if (bVar6 == 1) {
            *(undefined1 *)((longlong)param_2 + 0x39) = 0;
            bVar6 = 0;
            if ((2 < bVar2) && (bVar2 != 5)) {
              if (bVar2 != 6) {
                *param_1 = 6;
                return param_1;
              }
              if (uVar7 != 0) {
                if (uVar7 == 1) {
                  if (*local_50 == '.') {
LAB_1801e5ff8:
                    if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_180201a30(0,0xffffffffffffffff,0,&PTR_s_library_std_src_path_rs_1802913b0)
                      ;
                    }
                    param_2[1] = uVar10 - 1;
                    *param_1 = 7;
                    return param_1;
                  }
                  uVar7 = 1;
                }
                else if ((*local_50 == '.') && ((local_50[1] == '/' || (local_50[1] == '\\'))))
                goto LAB_1801e5ff8;
              }
              bVar6 = 0;
            }
          }
          else {
            if (bVar6 != 2) goto LAB_1801e5f5c;
            uVar8 = FUN_1801dd4d0();
            if (uVar8 < uVar7) {
              FUN_1801dd610(&local_90,param_2);
              *(undefined8 *)(param_1 + 0x30) = local_58;
              *(undefined4 *)(param_1 + 0x20) = local_68;
              *(undefined4 *)(param_1 + 0x24) = uStack_64;
              *(undefined4 *)(param_1 + 0x28) = uStack_60;
              *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
              *(undefined4 *)(param_1 + 0x10) = local_78;
              *(undefined4 *)(param_1 + 0x14) = uStack_74;
              *(undefined4 *)(param_1 + 0x18) = uStack_70;
              *(undefined4 *)(param_1 + 0x1c) = uStack_6c;
              *(undefined4 *)param_1 = local_88;
              *(undefined4 *)(param_1 + 4) = uStack_84;
              *(undefined4 *)(param_1 + 8) = uStack_80;
              *(undefined4 *)(param_1 + 0xc) = uStack_7c;
              uVar10 = uVar7 - local_90;
              if (uVar7 < local_90) {
                    /* WARNING: Subroutine does not return */
                FUN_180201a30(0,uVar10,uVar7,&PTR_s_library_std_src_path_rs_1802913e0);
              }
              param_2[1] = uVar10;
              bVar6 = 2;
              uVar7 = uVar10;
              if (*param_1 != 10) {
                return param_1;
              }
            }
            else {
              *(undefined1 *)((longlong)param_2 + 0x39) = 1;
              bVar6 = 1;
            }
          }
        } while (bVar1 <= bVar6);
      }
    }
    else if (bVar1 <= bVar6 && bVar6 != 3) {
      do {
        if (bVar6 != 2) {
          if (bVar6 == 1) {
            *(undefined1 *)((longlong)param_2 + 0x39) = 0;
            if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_180201a30(0,0xffffffffffffffff,0,&PTR_s_library_std_src_path_rs_1802913c8);
            }
            param_2[1] = uVar10 - 1;
            *param_1 = 6;
            return param_1;
          }
          goto LAB_1801e5f5c;
        }
        uVar7 = FUN_1801dd4d0();
        if (uVar7 < uVar10) {
          FUN_1801dd610(&local_90,param_2);
          *(undefined8 *)(param_1 + 0x30) = local_58;
          *(undefined4 *)(param_1 + 0x20) = local_68;
          *(undefined4 *)(param_1 + 0x24) = uStack_64;
          *(undefined4 *)(param_1 + 0x28) = uStack_60;
          *(undefined4 *)(param_1 + 0x2c) = uStack_5c;
          *(undefined4 *)(param_1 + 0x10) = local_78;
          *(undefined4 *)(param_1 + 0x14) = uStack_74;
          *(undefined4 *)(param_1 + 0x18) = uStack_70;
          *(undefined4 *)(param_1 + 0x1c) = uStack_6c;
          *(undefined4 *)param_1 = local_88;
          *(undefined4 *)(param_1 + 4) = uStack_84;
          *(undefined4 *)(param_1 + 8) = uStack_80;
          *(undefined4 *)(param_1 + 0xc) = uStack_7c;
          uVar7 = uVar10 - local_90;
          if (uVar10 < local_90) {
                    /* WARNING: Subroutine does not return */
            FUN_180201a30(0,uVar7,uVar10,&PTR_s_library_std_src_path_rs_1802913e0);
          }
          param_2[1] = uVar7;
          bVar6 = 2;
          uVar10 = uVar7;
          if (*param_1 != 10) {
            return param_1;
          }
        }
        else {
          *(undefined1 *)((longlong)param_2 + 0x39) = 1;
          bVar6 = 1;
        }
      } while (bVar1 <= bVar6);
    }
  }
  goto LAB_1801e5d73;
LAB_1801e5f5c:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  default:
    lVar9 = param_2[4] + 4;
    break;
  case 1:
    lVar9 = param_2[6] + 1;
    if (param_2[6] == 0) {
      lVar9 = 0;
    }
    lVar9 = param_2[4] + lVar9 + 8;
    break;
  case 2:
  case 5:
    goto switchD_1801e5f6d_caseD_2;
  case 4:
    lVar9 = param_2[6] + 1;
    if (param_2[6] == 0) {
      lVar9 = 0;
    }
    lVar9 = param_2[4] + lVar9 + 2;
    break;
  case 6:
    goto switchD_1801e5f6d_caseD_6;
  }
  if (lVar9 != 0) {
switchD_1801e5f6d_caseD_2:
    *(undefined1 *)((longlong)param_2 + 0x39) = 3;
    *(undefined8 *)(param_1 + 0x20) = param_2[6];
    uVar3 = *(undefined8 *)((longlong)param_2 + 0x11);
    uVar4 = *(undefined8 *)((longlong)param_2 + 0x19);
    uVar5 = *(undefined8 *)((longlong)param_2 + 0x29);
    *(undefined8 *)(param_1 + 0x11) = *(undefined8 *)((longlong)param_2 + 0x21);
    *(undefined8 *)(param_1 + 0x19) = uVar5;
    *(undefined8 *)(param_1 + 1) = uVar3;
    *(undefined8 *)(param_1 + 9) = uVar4;
    *param_1 = local_41;
    *(char **)(param_1 + 0x28) = local_50;
    *(ulonglong *)(param_1 + 0x30) = uVar10;
    return param_1;
  }
switchD_1801e5f6d_caseD_6:
  *(undefined1 *)((longlong)param_2 + 0x39) = 3;
LAB_1801e5d73:
  *param_1 = 10;
  return param_1;
}


