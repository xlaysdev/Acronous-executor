/* FUN_1801c26f0 @ 1801c26f0 */

longlong FUN_1801c26f0(int *param_1,undefined8 *param_2)

{
  ulonglong uVar1;
  longlong *plVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  longlong lVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong local_60;
  longlong local_58;
  undefined1 *local_48;
  
  if (*param_1 == 1) {
    uVar1 = *(ulonglong *)(param_1 + 4);
    plVar2 = (longlong *)*param_2;
    uVar3 = param_2[2];
    local_48 = (undefined1 *)param_2[3];
    lVar7 = param_2[1] + *(ulonglong *)(param_1 + 2) * 0x28 + 0x18;
    uVar6 = *(ulonglong *)(param_1 + 2);
    do {
      if (uVar1 <= uVar6) {
        param_1[0] = 0;
        param_1[1] = 0;
        goto LAB_1801c27b2;
      }
      *(ulonglong *)(param_1 + 2) = uVar6 + 1;
      if (uVar6 == *(ulonglong *)(*plVar2 + 0x100)) {
LAB_1801c2750:
        lVar5 = 0;
      }
      else {
        if (uVar3 <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_180201d02(uVar6,uVar3,&PTR_s_C__Users_burne__cargo_registry_s_1802882d8);
        }
        FUN_1801c6e10(&local_60,lVar7);
        if (local_60 == 0) goto LAB_1801c2750;
        if ((int)local_60 != 1) {
          *local_48 = 1;
          goto LAB_1801c2750;
        }
        lVar5 = local_58;
      }
      lVar7 = lVar7 + 0x28;
      uVar6 = uVar6 + 1;
    } while (lVar5 == 0);
  }
  else {
LAB_1801c27b2:
    if ((char)param_1[6] == '\0') {
      lVar5 = 0;
    }
    else {
      plVar2 = (longlong *)*param_2;
      uVar1 = param_2[2];
      puVar4 = (undefined1 *)param_2[3];
      uVar3 = *(ulonglong *)(param_1 + 10);
      lVar7 = param_2[1] + *(ulonglong *)(param_1 + 8) * 0x28 + 0x18;
      uVar6 = *(ulonglong *)(param_1 + 8);
      do {
        if (uVar3 <= uVar6) {
          return 0;
        }
        *(ulonglong *)(param_1 + 8) = uVar6 + 1;
        if (uVar6 == *(ulonglong *)(*plVar2 + 0x100)) {
LAB_1801c27f0:
          lVar5 = 0;
        }
        else {
          if (uVar1 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_180201d02(uVar6,uVar1,&PTR_s_C__Users_burne__cargo_registry_s_180287d48);
          }
          FUN_1801c6e10(&local_60,lVar7);
          if (local_60 == 0) goto LAB_1801c27f0;
          if ((int)local_60 != 1) {
            *puVar4 = 1;
            goto LAB_1801c27f0;
          }
          lVar5 = local_58;
        }
        lVar7 = lVar7 + 0x28;
        uVar6 = uVar6 + 1;
      } while (lVar5 == 0);
    }
  }
  return lVar5;
}


