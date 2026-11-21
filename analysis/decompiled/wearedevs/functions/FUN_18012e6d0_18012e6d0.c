/* FUN_18012e6d0 @ 18012e6d0 */

void FUN_18012e6d0(longlong param_1,longlong *param_2,longlong *param_3)

{
  uint *puVar1;
  int iVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  longlong local_98;
  code *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  longlong *local_68;
  undefined *local_60;
  longlong local_58;
  char *local_50;
  undefined8 local_48;
  
  lVar3 = *param_2;
  puVar1 = (uint *)(param_2 + 1);
  uVar8 = (ulonglong)*puVar1;
  iVar2 = *(int *)((longlong)param_2 + 0xc);
  local_78 = *(char ***)puVar1;
  if (uVar8 < *(ulonglong *)(lVar3 + 0x10)) {
    lVar7 = uVar8 * 0x148;
    if ((*(int *)(*(longlong *)(lVar3 + 8) + lVar7) != 2) &&
       (lVar6 = *(longlong *)(lVar3 + 8) + lVar7, *(int *)(lVar6 + 300) == iVar2)) {
      if ((*(char *)(lVar6 + 0x13c) == '\0') && (*(char *)(lVar6 + 0x13d) != '\x01')) {
        if ((*(longlong *)PTR_DAT_1802fd448 == 0) &&
           (((uVar5 = (uint)DAT_1802fb880, uVar5 - 1 < 2 ||
             ((uVar5 != 0 && (uVar5 = FUN_1801faaf0(&PTR_DAT_1802fb870), (char)uVar5 != '\0')))) &&
            (cVar4 = FUN_1801601d0(PTR_DAT_1802fb870,uVar5), cVar4 != '\0')))) {
          local_50 = "schedule_send";
          local_48 = 0x1b;
          if (((*(ulonglong *)(lVar3 + 0x10) <= uVar8) ||
              (*(int *)(*(longlong *)(lVar3 + 8) + lVar7) == 2)) ||
             (lVar7 = *(longlong *)(lVar3 + 8) + lVar7, *(int *)(lVar7 + 300) != iVar2))
          goto LAB_18012e8a5;
          local_80 = PTR_DAT_1802fb870 + 0x30;
          local_58 = lVar7 + 300;
          local_78 = &local_50;
          local_70 = &DAT_180245120;
          local_68 = &local_58;
          local_60 = &DAT_180245140;
          local_98 = 1;
          local_90 = (code *)&local_78;
          local_88 = 2;
          FUN_180160ae0(PTR_DAT_1802fb870,&local_98);
        }
        FUN_180151610(param_1 + 0x10,param_2);
        lVar3 = *param_3;
        *param_3 = 0;
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 8))(param_3[1]);
        }
      }
      return;
    }
  }
LAB_18012e8a5:
  local_78 = *(char ***)puVar1;
  local_90 = FUN_180152d10;
  local_98 = (longlong)&local_78 + 4;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180256fac,&local_98,&PTR_s_C__Users_burne__cargo_registry_s_180257040);
}


