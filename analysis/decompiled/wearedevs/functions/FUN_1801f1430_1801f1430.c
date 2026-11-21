/* FUN_1801f1430 @ 1801f1430 */

ulonglong FUN_1801f1430(longlong *param_1,undefined2 *param_2,ulonglong param_3)

{
  char cVar1;
  longlong lVar2;
  char *pcVar3;
  ushort uVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  longlong *plVar8;
  longlong lVar9;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  undefined1 local_44;
  
  if (param_3 == 0) {
LAB_1801f1500:
    param_3 = 0;
  }
  else {
    lVar9 = *param_1;
    lVar2 = param_1[1];
    if (param_3 != 1) {
      uVar6 = FUN_1801f1060(param_1);
      if ((uVar6 & 1) != 0) {
        uVar5 = (undefined4)(uVar6 >> 8);
        uVar6 = 0;
        if (param_3 != 0) {
LAB_1801f1481:
          param_2[uVar6] = (ushort)uVar5 << 8 | (ushort)uVar5 >> 8;
          if (param_3 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar6 + 1,param_3,&PTR_s_library_core_src_net_parser_rs_180293738);
          }
          uVar4 = (ushort)((uint)uVar5 >> 0x10);
          param_2[uVar6 + 1] = uVar4 << 8 | uVar4 >> 8;
          return uVar6 + 2;
        }
LAB_1801f1610:
                    /* WARNING: Subroutine does not return */
        FUN_180201d02(uVar6,param_3,&PTR_s_library_core_src_net_parser_rs_180293720);
      }
      *param_1 = lVar9;
      param_1[1] = lVar2;
    }
    local_58 = 1;
    local_50 = 4;
    local_48 = 0x10;
    local_44 = 1;
    plVar8 = param_1;
    uVar4 = FUN_1801f0df0(&local_58);
    if (uVar4 != 1) {
      *param_1 = lVar9;
      param_1[1] = lVar2;
      if ((uVar4 & 1) == 0) goto LAB_1801f1500;
    }
    *param_2 = (short)plVar8;
    if (param_3 == 1) {
      param_3 = 1;
    }
    else {
      lVar9 = param_3 * 2 + -2;
      uVar6 = 1;
      do {
        pcVar3 = (char *)*param_1;
        lVar2 = param_1[1];
        if ((uVar6 < param_3 - 1) && (lVar2 != 0)) {
          cVar1 = *pcVar3;
          *param_1 = (longlong)(pcVar3 + 1);
          param_1[1] = lVar2 + -1;
          if ((cVar1 == ':') && (uVar7 = FUN_1801f1060(param_1), (uVar7 & 1) != 0)) {
            uVar5 = (undefined4)(uVar7 >> 8);
            if (uVar6 < param_3) goto LAB_1801f1481;
            goto LAB_1801f1610;
          }
        }
        if (lVar2 == 0) {
LAB_1801f15e3:
          *param_1 = (longlong)pcVar3;
          param_1[1] = lVar2;
          return uVar6;
        }
        cVar1 = *pcVar3;
        *param_1 = (longlong)(pcVar3 + 1);
        param_1[1] = lVar2 + -1;
        if (cVar1 != ':') goto LAB_1801f15e3;
        local_58 = 1;
        local_50 = 4;
        local_48 = 0x10;
        local_44 = 1;
        plVar8 = param_1;
        uVar4 = FUN_1801f0df0(&local_58);
        if (uVar4 != 1) {
          *param_1 = (longlong)pcVar3;
          param_1[1] = lVar2;
          if ((uVar4 & 1) == 0) {
            return uVar6;
          }
        }
        param_2[uVar6] = (short)plVar8;
        uVar6 = uVar6 + 1;
        lVar9 = lVar9 + -2;
      } while (lVar9 != 0);
    }
  }
  return param_3;
}


