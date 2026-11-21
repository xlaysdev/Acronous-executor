/* FUN_1801375c0 @ 1801375c0 */

longlong FUN_1801375c0(longlong param_1,longlong *param_2,longlong *param_3)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined8 *puVar4;
  longlong lVar5;
  int iVar6;
  longlong lVar7;
  int *local_60;
  code *local_58;
  uint local_50;
  int local_4c;
  undefined8 *local_48;
  undefined8 local_40;
  longlong local_38;
  undefined8 local_30;
  
  local_30 = 0xfffffffffffffffe;
  lVar1 = *param_3;
  local_50 = *(uint *)(param_3 + 1);
  uVar3 = (ulonglong)local_50;
  local_4c = *(int *)((longlong)param_3 + 0xc);
  local_60 = &local_4c;
  if (uVar3 < *(ulonglong *)(lVar1 + 0x10)) {
    lVar5 = uVar3 * 0x148;
    if ((*(int *)(*(longlong *)(lVar1 + 8) + lVar5) != 2) &&
       (lVar7 = *(longlong *)(lVar1 + 8) + lVar5, *(int *)(lVar7 + 300) == local_4c)) {
      iVar6 = 6;
      if (3 < *(uint *)(lVar7 + 0x40)) {
        iVar6 = *(uint *)(lVar7 + 0x40) - 4;
      }
      lVar2 = 2;
      if (((iVar6 == 5) || (iVar6 == 3)) && (*(char *)(lVar7 + 0x44) == '\x01')) {
        if (*(char *)(lVar7 + 0x13b) == '\0') {
          puVar4 = *(undefined8 **)*param_2;
          local_40 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
          local_48 = puVar4;
          local_38 = lVar7;
          if (*(longlong *)(lVar7 + 0x98) != 0) {
            (**(code **)(*(longlong *)(lVar7 + 0x98) + 0x18))(*(undefined8 *)(lVar7 + 0xa0));
          }
          *(undefined8 *)(local_38 + 0x98) = local_40;
          *(undefined8 **)(local_38 + 0xa0) = local_48;
        }
        else {
          *(undefined1 *)(lVar7 + 0x13b) = 0;
          if (((*(ulonglong *)(lVar1 + 0x10) <= uVar3) ||
              (*(int *)(*(longlong *)(lVar1 + 8) + lVar5) == 2)) ||
             (lVar5 = *(longlong *)(lVar1 + 8) + lVar5, *(int *)(lVar5 + 300) != local_4c))
          goto LAB_180137769;
          uVar3 = 0;
          if (0 < (int)*(uint *)(lVar5 + 0x8c)) {
            uVar3 = (ulonglong)*(uint *)(lVar5 + 0x8c);
          }
          if (*(ulonglong *)(param_1 + 0x10) < uVar3) {
            uVar3 = *(ulonglong *)(param_1 + 0x10);
          }
          if (*(ulonglong *)(lVar5 + 0x90) < uVar3) {
            return (ulonglong)(uint)((int)uVar3 - (int)*(ulonglong *)(lVar5 + 0x90)) << 0x20;
          }
          puVar4 = *(undefined8 **)*param_2;
          local_40 = (*(code *)*puVar4)(((undefined8 *)*param_2)[1]);
          local_48 = puVar4;
          local_38 = lVar5;
          if (*(longlong *)(lVar5 + 0x98) != 0) {
            (**(code **)(*(longlong *)(lVar5 + 0x98) + 0x18))(*(undefined8 *)(lVar5 + 0xa0));
          }
          *(undefined8 *)(local_38 + 0x98) = local_40;
          *(undefined8 **)(local_38 + 0xa0) = local_48;
        }
        lVar2 = 3;
      }
      return lVar2;
    }
  }
LAB_180137769:
  local_58 = FUN_180152d10;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_60,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


