/* FUN_1801bd780 @ 1801bd780 */

void FUN_1801bd780(LPCVOID param_1,HANDLE param_2,char param_3,longlong *param_4)

{
  longlong lVar1;
  short *psVar2;
  undefined4 *puVar3;
  SIZE_T SVar4;
  longlong lVar5;
  longlong lVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  _MEMORY_BASIC_INFORMATION local_a8;
  longlong local_78;
  longlong local_70;
  ulonglong local_68;
  longlong local_60;
  ulonglong local_58;
  longlong local_50;
  undefined8 local_48;
  
  local_48 = 0xfffffffffffffffe;
  if ((param_3 != '\0') && ((param_3 == '\x01' || (param_4[2] == 0)))) {
    SVar4 = VirtualQueryEx(param_2,param_1,&local_a8,0x30);
    if ((SVar4 == 0) || (FUN_1801bded0(&local_78,param_2,param_1), SBORROW8(0,local_78))) {
      lVar10 = param_4[1];
      lVar6 = param_4[2];
      if (lVar6 != 0) {
        puVar7 = (undefined8 *)(lVar10 + 8);
        do {
          if (puVar7[-1] != 0) {
            thunk_FUN_1801d3330(*puVar7,puVar7[-1],1);
          }
          puVar7 = puVar7 + 4;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
      }
      if (*param_4 != 0) {
        thunk_FUN_1801d3330(lVar10,*param_4 << 5,8);
      }
      *param_4 = 0;
      param_4[1] = 8;
      param_4[2] = 0;
    }
    else {
      local_50 = local_78;
      local_60 = local_70;
      local_58 = local_68;
      lVar10 = param_4[2];
      param_4[2] = 0;
      if (lVar10 != 0) {
        puVar7 = (undefined8 *)(param_4[1] + 8);
        do {
          if (puVar7[-1] != 0) {
            thunk_FUN_1801d3330(*puVar7,puVar7[-1],1);
          }
          puVar7 = puVar7 + 4;
          lVar10 = lVar10 + -1;
        } while (lVar10 != 0);
      }
      lVar10 = local_58 * 2;
      lVar6 = local_58 * -2;
      uVar8 = 0;
      while (uVar8 * 2 != lVar10) {
        lVar1 = local_60 + uVar8 * 2;
        lVar9 = 0;
        uVar11 = 0;
        while (*(short *)(lVar1 + uVar11 * 2) != 0) {
          uVar11 = uVar11 + 1;
          lVar9 = lVar9 + -2;
          if (uVar8 * 2 + lVar6 == lVar9) goto LAB_1801bd9c3;
        }
        if ((CARRY8(uVar8,uVar11)) || (local_58 < uVar8 + uVar11)) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar8,uVar8 + uVar11,local_58,
                        &PTR_s_C__Users_burne__cargo_registry_s_180286b90);
        }
        lVar5 = 0;
        do {
          if (lVar9 + lVar5 == 0) goto LAB_1801bd9c3;
          psVar2 = (short *)(lVar1 + lVar5);
          lVar5 = lVar5 + 2;
        } while (*psVar2 != 0x3d);
        FUN_1801e5470(&local_a8,lVar1,uVar11);
        lVar1 = param_4[2];
        if (lVar1 == *param_4) {
          FUN_180200d10(param_4);
        }
        lVar9 = param_4[1];
        puVar7 = (undefined8 *)(lVar9 + 0x10 + lVar1 * 0x20);
        *puVar7 = local_a8._16_8_;
        puVar7[1] = local_a8.RegionSize;
        puVar3 = (undefined4 *)(lVar9 + lVar1 * 0x20);
        *puVar3 = local_a8.BaseAddress._0_4_;
        puVar3[1] = local_a8.BaseAddress._4_4_;
        puVar3[2] = local_a8.AllocationBase._0_4_;
        puVar3[3] = local_a8.AllocationBase._4_4_;
        param_4[2] = lVar1 + 1;
        uVar8 = uVar8 + uVar11 + 1;
        if (local_58 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_180201a30(uVar8,local_58,local_58,&PTR_s_C__Users_burne__cargo_registry_s_180286ba8);
        }
      }
LAB_1801bd9c3:
      if (local_50 != 0) {
        thunk_FUN_1801d3330(local_60,local_50 * 2,2);
      }
    }
  }
  return;
}


