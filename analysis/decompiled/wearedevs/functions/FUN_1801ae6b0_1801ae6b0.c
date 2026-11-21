/* FUN_1801ae6b0 @ 1801ae6b0 */

undefined8 * FUN_1801ae6b0(undefined8 *param_1,byte *param_2,ulonglong param_3)

{
  char cVar1;
  ulonglong uVar2;
  longlong lVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  undefined1 local_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  ulonglong local_e8;
  ulonglong local_e0;
  undefined *local_d8;
  longlong local_d0;
  ulonglong local_c8;
  ulonglong local_c0;
  undefined8 local_b8;
  undefined1 *local_b0;
  ulonglong *local_a8;
  undefined1 *local_a0;
  ulonglong local_78;
  longlong local_70;
  longlong local_68;
  ulonglong local_60;
  ulonglong local_58;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  
  local_40 = 0xfffffffffffffffe;
  if (param_3 != 0) {
    if (param_3 < 0x41) {
      uVar2 = (ulonglong)((uint)param_3 & 3);
      if (param_3 < 4) {
        uVar5 = 0;
      }
      else {
        uVar4 = 0;
        do {
          *(undefined1 *)((longlong)&local_b8 + uVar4) =
               *(undefined1 *)((longlong)&UINT_180284adc + (ulonglong)param_2[uVar4]);
          *(undefined1 *)((longlong)&local_b8 + uVar4 + 1) =
               *(undefined1 *)((longlong)&UINT_180284adc + (ulonglong)param_2[uVar4 + 1]);
          *(undefined1 *)((longlong)&local_b8 + uVar4 + 2) =
               *(undefined1 *)((longlong)&UINT_180284adc + (ulonglong)param_2[uVar4 + 2]);
          uVar5 = uVar4 + 4;
          *(undefined1 *)((longlong)&local_b8 + uVar4 + 3) =
               *(undefined1 *)((longlong)&UINT_180284adc + (ulonglong)param_2[uVar4 + 3]);
          uVar4 = uVar5;
        } while (((uint)param_3 & 0x7c) != uVar5);
      }
      if (uVar2 != 0) {
        uVar4 = 0;
        do {
          *(undefined1 *)((longlong)&local_b8 + uVar4 + uVar5) =
               *(undefined1 *)((longlong)&UINT_180284adc + (ulonglong)param_2[uVar4 + uVar5]);
          uVar4 = uVar4 + 1;
        } while (uVar2 != uVar4);
      }
      cVar1 = FUN_1801aec10(&local_b8,param_3);
      if (cVar1 != 'Q') {
        *(char *)(param_1 + 2) = cVar1;
        *param_1 = 0;
        param_1[1] = 0;
        return param_1;
      }
      if (param_3 < 0x10) {
        uVar2 = 0;
        do {
          if (*(char *)((longlong)&local_b8 + uVar2) == '\0') goto LAB_1801ae8c0;
          uVar2 = uVar2 + 1;
        } while (param_3 != uVar2);
      }
      else {
        lVar3 = FUN_1801f2f70(0,&local_b8,param_3);
        if (lVar3 == 1) goto LAB_1801ae8c0;
      }
      FUN_1801b3ac0(&local_108,&local_b8,param_3);
      param_1[3] = local_f8;
      param_1[4] = uStack_f0;
      param_1[1] = local_108;
      param_1[2] = uStack_100;
      *param_1 = 0;
      return param_1;
    }
    if (param_3 < 0x10000) {
      FUN_180027490();
      local_70 = thunk_FUN_1801d32d0(param_3,1);
      if (local_70 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_18020171e(1,param_3);
      }
      lVar3 = 0x3f;
      if (param_3 >> 10 != 0) {
        for (; (param_3 >> 10) >> lVar3 == 0; lVar3 = lVar3 + -1) {
        }
      }
      local_58 = 0x101 - (ulonglong)(((uint)lVar3 ^ 0x3f) << 2);
      local_68 = 0;
      local_48 = param_2 + param_3;
      local_60 = param_3;
      local_50 = param_2;
      if (param_2 != local_48) {
        do {
          if (*(char *)((longlong)&UINT_180284adc + (ulonglong)*local_50) == '\0') {
            *param_1 = 1;
            FUN_1801b2a70(&local_70);
            return param_1;
          }
          local_b8 = (ulonglong *)
                     CONCAT71(local_b8._1_7_,
                              *(char *)((longlong)&UINT_180284adc + (ulonglong)*local_50));
          FUN_1801b2af0(&local_70,&local_b8,1);
          local_50 = local_50 + 1;
        } while (local_50 != local_48);
      }
      if ((local_58 & 1) == 0) {
        local_d8 = PTR_PTR_1802fd530;
        lVar3 = local_68;
      }
      else {
        uVar2 = local_58 >> 5;
        FUN_1801b1ef0(local_120,local_70,local_68,local_60,uVar2);
        FUN_1801b3d40(&local_d8,local_120);
        lVar3 = local_c8 - uVar2;
        if (local_c8 < uVar2) {
          local_78 = local_c8;
          local_e8 = local_c8;
          local_b8 = &local_e0;
          local_b0 = &LAB_1800273d0;
          local_a8 = &local_e8;
          local_a0 = &LAB_1800273d0;
          local_e0 = uVar2;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_18028514b,&local_b8,&PTR_s_C__Users_burne__cargo_registry_s_1802851d8);
        }
        local_70 = uVar2 + local_d0;
        local_58 = local_c0;
      }
      param_1[1] = local_d8;
      param_1[2] = local_70;
      param_1[3] = lVar3;
      param_1[4] = local_58;
      *param_1 = 0;
      return param_1;
    }
  }
LAB_1801ae8c0:
  *param_1 = 1;
  return param_1;
}


