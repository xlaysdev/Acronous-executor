/* FUN_180193e10 @ 180193e10 */

void FUN_180193e10(longlong *param_1,void *param_2,ulonglong param_3,longlong param_4,char param_5,
                  char param_6)

{
  void *pvVar1;
  longlong lVar2;
  void *local_68;
  ulonglong local_60;
  undefined *local_58;
  void *local_50;
  ulonglong local_48;
  undefined *local_40;
  void *local_38;
  ulonglong local_30;
  undefined *local_28;
  
  local_60 = param_3 - param_4;
  if (local_60 != 0) {
    if (local_60 < param_3) {
      if (*(char *)((longlong)param_2 + local_60) < -0x40) {
LAB_180193e3d:
                    /* WARNING: Subroutine does not return */
        FUN_1802018d0(param_2,param_3,0,local_60,&PTR_s_C__Users_burne__cargo_registry_s_180266f80);
      }
    }
    else if (param_4 != 0) goto LAB_180193e3d;
    if (param_5 == '\x02') {
      if (param_6 == '\x02') {
        local_40 = &DAT_180266fa8;
        local_50 = param_2;
        local_48 = local_60;
        pvVar1 = (void *)FUN_1801aac60(&local_50);
        if (pvVar1 != (void *)0x0) {
          lVar2 = param_1[2];
          do {
            if ((void *)(*param_1 - lVar2) < param_2) {
              FUN_1801f6a80(param_1,lVar2,param_2,1,1);
              lVar2 = param_1[2];
            }
            memcpy((void *)(param_1[1] + lVar2),pvVar1,(size_t)param_2);
            lVar2 = lVar2 + (longlong)param_2;
            param_1[2] = lVar2;
            param_2 = pvVar1;
            pvVar1 = (void *)FUN_1801aac60(&local_50);
          } while (pvVar1 != (void *)0x0);
        }
      }
      else {
        local_58 = &DAT_180266fb8;
        local_68 = param_2;
        pvVar1 = (void *)FUN_1801aac60(&local_68);
        if (pvVar1 != (void *)0x0) {
          lVar2 = param_1[2];
          do {
            if ((void *)(*param_1 - lVar2) < param_2) {
              FUN_1801f6a80(param_1,lVar2,param_2,1,1);
              lVar2 = param_1[2];
            }
            memcpy((void *)(param_1[1] + lVar2),pvVar1,(size_t)param_2);
            lVar2 = lVar2 + (longlong)param_2;
            param_1[2] = lVar2;
            param_2 = pvVar1;
            pvVar1 = (void *)FUN_1801aac60(&local_68);
          } while (pvVar1 != (void *)0x0);
        }
      }
    }
    else {
      local_28 = &DAT_180266f98;
      local_38 = param_2;
      local_30 = local_60;
      pvVar1 = (void *)FUN_1801aac60(&local_38);
      if (pvVar1 != (void *)0x0) {
        lVar2 = param_1[2];
        do {
          if ((void *)(*param_1 - lVar2) < param_2) {
            FUN_1801f6a80(param_1,lVar2,param_2,1,1);
            lVar2 = param_1[2];
          }
          memcpy((void *)(param_1[1] + lVar2),pvVar1,(size_t)param_2);
          lVar2 = lVar2 + (longlong)param_2;
          param_1[2] = lVar2;
          param_2 = pvVar1;
          pvVar1 = (void *)FUN_1801aac60(&local_38);
        } while (pvVar1 != (void *)0x0);
      }
    }
  }
  return;
}


