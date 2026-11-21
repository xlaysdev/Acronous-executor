/* FUN_180148430 @ 180148430 */

void FUN_180148430(byte *param_1,longlong param_2,longlong *param_3)

{
  ulonglong uVar1;
  uint3 uVar2;
  uint uVar3;
  uint5 uVar4;
  uint6 uVar5;
  ushort uVar6;
  ulonglong uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  int iVar14;
  longlong lVar15;
  bool bVar16;
  undefined8 local_58;
  longlong local_50 [2];
  
  if (param_2 == 0) {
    local_50[0] = (ulonglong)local_50[0]._1_7_ << 8;
    FUN_1801b2af0(param_3,local_50,1);
  }
  else {
    uVar1 = param_3[1];
    local_50[0] = (ulonglong)local_50[0]._1_7_ << 8;
    FUN_1801b2af0(param_3,local_50,1);
    pbVar9 = param_1 + param_2;
    uVar12 = 0x28;
    uVar13 = 0;
    do {
      uVar12 = uVar12 - *(longlong *)(&DAT_18025dff8 + (ulonglong)*param_1 * 0x10);
      uVar13 = uVar13 | *(longlong *)(&DAT_18025e000 + (ulonglong)*param_1 * 0x10) <<
                        ((byte)uVar12 & 0x3f);
      if (uVar12 < 0x21) {
        do {
          local_50[0] = CONCAT71(local_50[0]._1_7_,(char)(uVar13 >> 0x20));
          FUN_1801b2af0(param_3,local_50,1);
          uVar13 = uVar13 << 8;
          bVar16 = uVar12 < 0x19;
          uVar12 = uVar12 + 8;
        } while (bVar16);
      }
      param_1 = param_1 + 1;
    } while (param_1 != pbVar9);
    if (uVar12 != 0x28) {
      local_50[0] = CONCAT71(local_50[0]._1_7_,
                             (byte)(uVar13 >> 0x20) |
                             ~(byte)((ulonglong)(-1L << ((byte)uVar12 & 0x3f)) >> 0x20));
      FUN_1801b2af0(param_3,local_50,1);
    }
    uVar12 = param_3[1];
    uVar13 = ~uVar1 + uVar12;
    if (0x7e < uVar13) {
      local_58 = 0xff;
      uVar8 = uVar13 - 0x7f;
      lVar15 = 7;
      if (uVar8 < 0x80) {
        puVar10 = (undefined1 *)((longlong)&local_58 + 1);
      }
      else {
        local_58._0_2_ = CONCAT11((byte)uVar8 | 0x80,0xff);
        uVar6 = (ushort)local_58;
        local_58 = (ulonglong)(ushort)local_58;
        uVar7 = uVar8 >> 7;
        if (uVar8 < 0x4000) {
          puVar10 = (undefined1 *)((longlong)&local_58 + 2);
          lVar15 = 6;
        }
        else {
          uVar2 = CONCAT12((char)uVar7,uVar6);
          local_58 = (ulonglong)(uVar2 | 0x800000);
          uVar7 = uVar8 >> 0xe;
          if (uVar8 < 0x200000) {
            puVar10 = (undefined1 *)((longlong)&local_58 + 3);
            lVar15 = 5;
          }
          else {
            uVar3 = CONCAT13((char)uVar7,uVar2);
            local_58 = (ulonglong)(uVar3 | 0x80800000);
            uVar7 = uVar8 >> 0x15;
            if (uVar8 < 0x10000000) {
              puVar10 = (undefined1 *)((longlong)&local_58 + 4);
              lVar15 = 4;
            }
            else {
              uVar4 = CONCAT14((char)uVar7,uVar3);
              local_58 = (ulonglong)(uVar4 | 0x8080800000);
              uVar7 = uVar8 >> 0x1c;
              uVar11 = uVar8 >> 0x23;
              if (uVar11 == 0) {
                puVar10 = (undefined1 *)((longlong)&local_58 + 5);
                lVar15 = 3;
              }
              else {
                uVar5 = CONCAT15((char)uVar7,uVar4);
                local_58 = (ulonglong)(uVar5 | 0x808080800000);
                if (uVar8 >> 0x2a == 0) {
                  puVar10 = (undefined1 *)((longlong)&local_58 + 6);
                  lVar15 = 2;
                  uVar7 = uVar11;
                }
                else {
                  local_58 = (ulonglong)(CONCAT16((char)uVar11,uVar5) | 0x80808080800000);
                  if (uVar8 >> 0x31 != 0) {
                    local_50[0] = 1;
                    local_50[1] = 0;
                    /* WARNING: Subroutine does not return */
                    FUN_1801fc980(local_50);
                  }
                  puVar10 = (undefined1 *)((longlong)&local_58 + 7);
                  lVar15 = 1;
                  uVar7 = uVar8 >> 0x2a;
                }
              }
            }
          }
        }
        uVar8 = uVar7 & 0xffffffff;
      }
      *puVar10 = (char)uVar8;
      FUN_1801b2af0(param_3,(undefined1 *)((longlong)&local_58 + 1),8 - lVar15);
      uVar8 = (uVar12 - lVar15) + 7;
      do {
        uVar12 = uVar12 - 1;
        uVar7 = param_3[1];
        if (uVar7 <= uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar12,uVar7,&PTR_s_C__Users_burne__cargo_registry_s_1802548f0);
        }
        if (uVar7 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar8,uVar7,&PTR_s_C__Users_burne__cargo_registry_s_180254908);
        }
        *(undefined1 *)(*param_3 + uVar8) = *(undefined1 *)(*param_3 + uVar12);
        uVar8 = uVar8 - 1;
        uVar13 = uVar13 - 1;
      } while (uVar13 != 0);
      uVar13 = param_3[1];
      uVar12 = uVar1;
      if (uVar1 < uVar13) {
        *(undefined1 *)(*param_3 + uVar1) = (undefined1)local_58;
        uVar13 = param_3[1];
        uVar12 = uVar1 + 1;
        if (uVar12 < uVar13) {
          *(undefined1 *)(*param_3 + uVar12) = local_58._1_1_;
          iVar14 = (int)lVar15;
          if (iVar14 == 7) {
            return;
          }
          uVar13 = param_3[1];
          uVar12 = uVar1 + 2;
          if (uVar12 < uVar13) {
            *(undefined1 *)(*param_3 + uVar12) = local_58._2_1_;
            if (iVar14 == 6) {
              return;
            }
            uVar13 = param_3[1];
            uVar12 = uVar1 + 3;
            if (uVar12 < uVar13) {
              *(undefined1 *)(*param_3 + uVar12) = local_58._3_1_;
              if (iVar14 == 5) {
                return;
              }
              uVar13 = param_3[1];
              uVar12 = uVar1 + 4;
              if (uVar12 < uVar13) {
                *(undefined1 *)(*param_3 + uVar12) = local_58._4_1_;
                if (iVar14 == 4) {
                  return;
                }
                uVar13 = param_3[1];
                uVar12 = uVar1 + 5;
                if (uVar12 < uVar13) {
                  *(undefined1 *)(*param_3 + uVar12) = local_58._5_1_;
                  if (iVar14 == 3) {
                    return;
                  }
                  uVar13 = param_3[1];
                  uVar12 = uVar1 + 6;
                  if (uVar12 < uVar13) {
                    *(undefined1 *)(*param_3 + uVar12) = local_58._6_1_;
                    if (iVar14 == 2) {
                      return;
                    }
                    uVar13 = param_3[1];
                    uVar12 = uVar1 + 7;
                    if (uVar12 < uVar13) {
                      *(undefined1 *)(*param_3 + uVar12) = local_58._7_1_;
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar12,uVar13,&PTR_s_C__Users_burne__cargo_registry_s_1802548d8);
    }
    if (uVar12 <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_180201d02(uVar1,uVar12,&PTR_s_C__Users_burne__cargo_registry_s_180254920);
    }
    *(byte *)(*param_3 + uVar1) = (byte)uVar13 | 0x80;
  }
  return;
}


