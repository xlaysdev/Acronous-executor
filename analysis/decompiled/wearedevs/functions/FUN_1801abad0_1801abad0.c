/* FUN_1801abad0 @ 1801abad0 */

undefined2 * FUN_1801abad0(undefined2 *param_1,longlong *param_2)

{
  longlong lVar1;
  bool bVar2;
  uint *puVar3;
  longlong lVar4;
  bool bVar5;
  longlong lVar6;
  bool bVar7;
  uint uVar8;
  undefined1 uVar9;
  longlong local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  ulonglong local_128;
  longlong *local_120;
  ulonglong local_118;
  longlong lStack_110;
  longlong local_108;
  longlong lStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  longlong local_d0;
  longlong local_c8;
  longlong lStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  byte local_a0;
  byte bStack_9f;
  undefined6 uStack_9e;
  undefined1 local_98;
  undefined4 uStack_97;
  undefined2 uStack_93;
  undefined1 uStack_91;
  undefined1 uStack_90;
  undefined7 uStack_8f;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined2 uStack_80;
  undefined4 uStack_7e;
  undefined2 uStack_7a;
  uint local_78;
  undefined4 uStack_74;
  longlong *local_70;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined8 local_60;
  
  local_60 = 0xfffffffffffffffe;
  local_128 = param_2[2];
  if (local_128 < 0xffff) {
    if ((short)local_128 == 0) {
      *param_1 = 0xa03;
    }
    else {
      local_120 = param_2;
      if ((int)local_128 != 1) {
        if (local_128 == 0) {
          local_62 = 1;
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(0,0,&PTR_s_C__Users_burne__cargo_registry_s_180283310);
        }
        if (*(char *)param_2[1] == '/') {
          local_108 = *param_2;
          lStack_100 = param_2[1];
          local_f8 = (undefined4)param_2[2];
          uStack_f4 = *(undefined4 *)((longlong)param_2 + 0x14);
          uStack_f0 = (undefined4)param_2[3];
          uStack_ec = *(undefined4 *)((longlong)param_2 + 0x1c);
          local_62 = 0;
          FUN_1801aadd0(&local_a0,&local_108);
          lVar1 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,local_a0));
          if (lVar1 == 0) {
            *(undefined1 *)((longlong)param_1 + 1) = local_98;
            *(undefined1 *)param_1 = 3;
            return param_1;
          }
          *(ulonglong *)(param_1 + 0x24) = CONCAT71(uStack_87,uStack_88);
          *(ulonglong *)(param_1 + 0x28) = CONCAT26(uStack_7a,CONCAT42(uStack_7e,uStack_80));
          *(ulonglong *)((longlong)param_1 + 0x39) =
               CONCAT17(uStack_90,CONCAT16(uStack_91,CONCAT24(uStack_93,uStack_97)));
          *(ulonglong *)((longlong)param_1 + 0x41) = CONCAT17(uStack_88,uStack_8f);
          *(undefined ***)(param_1 + 8) = &PTR_LAB_180283288;
          *(undefined8 *)(param_1 + 0xc) = 1;
          *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
          *(longlong *)(param_1 + 0x18) = lVar1;
          *(undefined1 *)(param_1 + 0x1c) = local_98;
          *(undefined1 *)param_1 = 0;
          return param_1;
        }
        local_c8 = *param_2;
        lStack_c0 = param_2[1];
        local_b8 = (undefined4)param_2[2];
        uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
        uStack_b0 = (undefined4)param_2[3];
        uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
        local_61 = 1;
        FUN_1801ad370(&local_a0);
        if (local_a0 == 3) {
          *(byte *)((longlong)param_1 + 1) = bStack_9f;
          *(undefined1 *)param_1 = 3;
        }
        else {
          _local_78 = CONCAT44(uStack_74,(uint)local_a0);
          if (local_a0 != 0) {
            if (local_a0 == 1) {
              local_118._0_1_ = bStack_9f;
              local_61 = 1;
              FUN_1801b3b40(&local_a0,&local_c8,(ulonglong)bStack_9f + 7);
              local_61 = 1;
              (**(code **)(CONCAT62(uStack_9e,CONCAT11(bStack_9f,local_a0)) + 0x20))
                        (CONCAT71(uStack_87,uStack_88));
              local_118 = CONCAT71(local_118._1_7_,(byte)local_118) & 0xffffffffffffff01;
            }
            else {
              lVar1 = CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT41(uStack_97,local_98)));
              local_61 = 1;
              FUN_1801b3b40(&local_108,&local_c8,lVar1 + 3);
              local_63 = 1;
              FUN_1801b3c20(&local_a0,&local_108,lVar1);
              local_63 = 1;
              (**(code **)(CONCAT62(uStack_9e,CONCAT11(bStack_9f,local_a0)) + 0x20))
                        (CONCAT71(uStack_87,uStack_88),
                         CONCAT17(uStack_91,CONCAT25(uStack_93,CONCAT41(uStack_97,local_98))));
              FUN_180027490();
              local_70 = (longlong *)thunk_FUN_1801d32d0(0x20);
              if (local_70 == (longlong *)0x0) {
                local_118 = local_108;
                lStack_110 = lStack_100;
                    /* WARNING: Subroutine does not return */
                FUN_180201705(8,0x20);
              }
              *local_70 = local_108;
              local_70[1] = lStack_100;
              local_70[2] = CONCAT44(uStack_f4,local_f8);
              local_70[3] = CONCAT44(uStack_ec,uStack_f0);
            }
          }
          lVar1 = CONCAT44(uStack_b4,local_b8);
          if (lVar1 == 0) {
            uVar9 = 10;
          }
          else {
            uVar8 = 0;
            bVar5 = false;
            bVar7 = false;
            bVar2 = false;
            lVar6 = 0;
            lVar4 = lVar1;
            do {
              switch((&DAT_1802837f8)[*(byte *)(lStack_c0 + lVar6)]) {
              case 0x23:
              case 0x2f:
              case 0x3f:
                goto switchD_1801abe78_caseD_23;
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
              case 0x2d:
              case 0x2e:
              case 0x30:
              case 0x31:
              case 0x32:
              case 0x33:
              case 0x34:
              case 0x35:
              case 0x36:
              case 0x37:
              case 0x38:
              case 0x39:
              case 0x3b:
              case 0x3c:
              case 0x3d:
              case 0x3e:
              case 0x41:
              case 0x42:
              case 0x43:
              case 0x44:
              case 0x45:
              case 0x46:
              case 0x47:
              case 0x48:
              case 0x49:
              case 0x4a:
              case 0x4b:
              case 0x4c:
              case 0x4d:
              case 0x4e:
              case 0x4f:
              case 0x50:
              case 0x51:
              case 0x52:
              case 0x53:
              case 0x54:
              case 0x55:
              case 0x56:
              case 0x57:
              case 0x58:
              case 0x59:
              case 0x5a:
              case 0x5c:
                break;
              case 0x3a:
                if (7 < uVar8) {
                  uVar9 = 2;
                  goto LAB_1801ac058;
                }
                uVar8 = uVar8 + 1;
                break;
              case 0x40:
                lVar4 = lVar6;
                goto LAB_1801abe4f;
              case 0x5b:
                uVar9 = 2;
                if ((bVar2) || (bVar5 != false)) goto LAB_1801ac058;
                bVar5 = true;
                bVar2 = false;
                break;
              case 0x5d:
                uVar9 = 2;
                if ((!bVar5) || (bVar7)) goto LAB_1801ac058;
                bVar7 = true;
                bVar5 = true;
LAB_1801abe4f:
                bVar2 = false;
                uVar8 = 0;
                break;
              default:
                if (((&DAT_1802837f8)[*(byte *)(lStack_c0 + lVar6)] == '\0') &&
                   (bVar2 = true, *(byte *)(lStack_c0 + lVar6) != 0x25)) {
                  uVar9 = 0;
                  goto LAB_1801ac058;
                }
              }
              lVar6 = lVar6 + 1;
            } while (lVar1 != lVar6);
            lVar6 = lVar1;
switchD_1801abe78_caseD_23:
            uVar9 = 2;
            if ((uVar8 < 2 && bVar5 == bVar7) &&
               (!(bool)((lVar4 == lVar6 + -1 && lVar6 != 0) | bVar2))) {
              if ((byte)local_78 == 0) {
                if (lVar6 == lVar1) {
                  *(ulonglong *)(param_1 + 0x10) = CONCAT44(uStack_b4,local_b8);
                  *(ulonglong *)(param_1 + 0x14) = CONCAT44(uStack_ac,uStack_b0);
                  *(longlong *)(param_1 + 8) = local_c8;
                  *(longlong *)(param_1 + 0xc) = lStack_c0;
                  *(undefined1 *)param_1 = 0;
                  *(byte *)((longlong)param_1 + 1) = (byte)local_118;
                  *(longlong **)(param_1 + 4) = local_70;
                  goto LAB_1801abcfd;
                }
                *param_1 = 0x403;
                goto LAB_1801ac093;
              }
              if (lVar6 != 0) {
                local_64 = 1;
                FUN_1801b3b40(&local_148,&local_c8);
                if (CONCAT44(uStack_b4,local_b8) == 0) {
                  *(char *)param_1 = (char)_local_78;
                  *(byte *)((longlong)param_1 + 1) = (byte)local_118;
                  *(longlong **)(param_1 + 4) = local_70;
                  *(longlong *)(param_1 + 8) = local_148;
                  *(undefined8 *)(param_1 + 0xc) = local_140;
                  *(undefined8 *)(param_1 + 0x10) = local_138;
                  *(undefined8 *)(param_1 + 0x14) = local_130;
                  *(undefined ***)(param_1 + 0x18) = &PTR_LAB_180283288;
                  *(undefined1 *)(param_1 + 0x1c) = 0x80;
                  *(undefined1 *)((longlong)param_1 + 0x3f) = 0;
                  *(undefined2 *)((longlong)param_1 + 0x3d) = 0;
                  *(undefined4 *)((longlong)param_1 + 0x39) = 0x1802832;
                  *(undefined8 *)(param_1 + 0x20) = 1;
                  *(undefined8 *)(param_1 + 0x24) = 0;
                  param_1[0x28] = 0xffff;
                  local_62 = 0;
                  (**(code **)(local_c8 + 0x20))(CONCAT44(uStack_ac,uStack_b0),lStack_c0,0);
                  return param_1;
                }
                local_d0 = local_148;
                local_d8 = local_130;
                local_e0 = local_140;
                local_e8 = local_138;
                local_f8 = local_b8;
                uStack_f4 = uStack_b4;
                uStack_f0 = uStack_b0;
                uStack_ec = uStack_ac;
                local_108 = local_c8;
                lStack_100 = lStack_c0;
                FUN_1801aadd0(&local_a0,&local_108);
                lVar1 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,local_a0));
                if (lVar1 != 0) {
                  *(undefined4 *)(param_1 + 0x29) = uStack_7e;
                  param_1[0x2b] = uStack_7a;
                  *(char *)param_1 = (char)_local_78;
                  *(byte *)((longlong)param_1 + 1) = (byte)local_118;
                  *(longlong **)(param_1 + 4) = local_70;
                  *(longlong *)(param_1 + 8) = local_d0;
                  *(undefined8 *)(param_1 + 0xc) = local_e0;
                  *(undefined8 *)(param_1 + 0x10) = local_e8;
                  *(undefined8 *)(param_1 + 0x14) = local_d8;
                  *(longlong *)(param_1 + 0x18) = lVar1;
                  *(undefined1 *)(param_1 + 0x1c) = local_98;
                  *(undefined1 *)((longlong)param_1 + 0x3f) = uStack_91;
                  *(undefined2 *)((longlong)param_1 + 0x3d) = uStack_93;
                  *(undefined4 *)((longlong)param_1 + 0x39) = uStack_97;
                  *(ulonglong *)(param_1 + 0x20) = CONCAT71(uStack_8f,uStack_90);
                  *(ulonglong *)(param_1 + 0x24) = CONCAT71(uStack_87,uStack_88);
                  param_1[0x28] = uStack_80;
                  return param_1;
                }
                *(undefined1 *)((longlong)param_1 + 1) = local_98;
                *(undefined1 *)param_1 = 3;
                local_64 = 0;
                (**(code **)(local_d0 + 0x20))(local_d8,local_e0,local_e8);
                if ((byte)local_78 == '\x01') {
                  return param_1;
                }
                (**(code **)(*local_70 + 0x20))(local_70[3],local_70[1],local_70[2]);
                thunk_FUN_1801d3330(local_70,0x20,8);
                return param_1;
              }
              uVar9 = 4;
            }
          }
LAB_1801ac058:
          *(undefined1 *)((longlong)param_1 + 1) = uVar9;
          *(undefined1 *)param_1 = 3;
          if (1 < (byte)local_78) {
            (**(code **)(*local_70 + 0x20))(local_70[3],local_70[1],local_70[2]);
            thunk_FUN_1801d3330(local_70,0x20,8);
          }
        }
LAB_1801ac093:
        local_62 = 0;
        (**(code **)(local_c8 + 0x20))
                  (CONCAT44(uStack_ac,uStack_b0),lStack_c0,CONCAT44(uStack_b4,local_b8));
        return param_1;
      }
      if (*(char *)param_2[1] == '*') {
        *(undefined1 *)param_1 = 0;
        *(undefined ***)(param_1 + 8) = &PTR_LAB_180283288;
        *(undefined8 *)(param_1 + 0xc) = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
        *(undefined ***)(param_1 + 0x18) = &PTR_LAB_180283288;
        puVar3 = (uint *)&DAT_18028330e;
      }
      else {
        if (*(char *)param_2[1] != '/') {
          local_62 = 0;
          FUN_1801acb70(&local_a0);
          lVar1 = CONCAT62(uStack_9e,CONCAT11(bStack_9f,local_a0));
          if (lVar1 == 0) {
            *(undefined1 *)((longlong)param_1 + 1) = local_98;
            *(undefined1 *)param_1 = 3;
            return param_1;
          }
          *(ulonglong *)(param_1 + 0x14) = CONCAT71(uStack_87,uStack_88);
          *(ulonglong *)((longlong)param_1 + 0x19) =
               CONCAT17(uStack_90,CONCAT16(uStack_91,CONCAT24(uStack_93,uStack_97)));
          *(ulonglong *)((longlong)param_1 + 0x21) = CONCAT17(uStack_88,uStack_8f);
          *(undefined1 *)param_1 = 0;
          *(longlong *)(param_1 + 8) = lVar1;
          *(undefined1 *)(param_1 + 0xc) = local_98;
LAB_1801abcfd:
          *(undefined ***)(param_1 + 0x18) = &PTR_LAB_180283288;
          *(undefined8 *)(param_1 + 0x1c) = 1;
          *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
          param_1[0x28] = 0xffff;
          return param_1;
        }
        *(undefined1 *)param_1 = 0;
        *(undefined ***)(param_1 + 8) = &PTR_LAB_180283288;
        *(undefined8 *)(param_1 + 0xc) = 1;
        *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
        *(undefined ***)(param_1 + 0x18) = &PTR_LAB_180283288;
        puVar3 = &UINT_180283280;
      }
      *(uint **)(param_1 + 0x1c) = puVar3;
      *(undefined8 *)(param_1 + 0x20) = 1;
      *(undefined8 *)(param_1 + 0x24) = 0;
      param_1[0x28] = 0xffff;
    }
  }
  else {
    *param_1 = 0x903;
  }
  (**(code **)(*param_2 + 0x20))(param_2[3],param_2[1]);
  return param_1;
}


