/* FUN_1801f1b60 @ 1801f1b60 */

void FUN_1801f1b60(longlong param_1,ulonglong param_2,ulonglong param_3,ulonglong param_4,
                  undefined8 param_5)

{
  byte bVar1;
  uint uVar2;
  ulonglong local_a8;
  ulonglong local_a0;
  ulonglong local_98;
  ulonglong local_90;
  longlong local_88;
  undefined *local_80;
  longlong local_78;
  ulonglong *local_70;
  code *local_68;
  ulonglong *local_60;
  code *local_58;
  undefined **local_50;
  code *local_48;
  undefined **local_40;
  undefined1 *local_38;
  undefined **local_30;
  undefined1 *local_28;
  longlong local_20;
  ulonglong local_18;
  uint local_c;
  
  if (param_2 < 0x101) {
    local_80 = (undefined *)0x1;
    local_78 = 0;
    local_18 = param_2;
  }
  else {
    local_18 = 0x100;
    do {
      if (-0x41 < *(char *)(param_1 + local_18)) goto LAB_1801f1bd4;
      if (-0x41 < *(char *)(param_1 + -1 + local_18)) {
        local_18 = local_18 - 1;
        goto LAB_1801f1bd4;
      }
      if (-0x41 < *(char *)(param_1 + -2 + local_18)) {
        local_18 = local_18 - 2;
        goto LAB_1801f1bd4;
      }
      if (-0x41 < *(char *)(param_1 + -3 + local_18)) {
        local_18 = local_18 - 3;
        goto LAB_1801f1bd4;
      }
      local_18 = local_18 - 4;
    } while (local_18 != 0);
    local_18 = 0;
LAB_1801f1bd4:
    local_80 = (undefined *)0x1;
    if (local_18 < param_2) {
      local_80 = &DAT_180293898;
    }
    local_78 = (ulonglong)(local_18 < param_2) * 5;
  }
  local_90 = param_3;
  local_a0 = param_4;
  local_98 = param_3;
  local_20 = param_1;
  if (param_3 <= param_2) {
    if (param_4 <= param_2) {
      if (param_4 < param_3) {
        local_70 = &local_98;
        local_68 = FUN_1801ee720;
        local_60 = &local_a0;
        local_58 = FUN_1801ee720;
        local_50 = (undefined **)&local_20;
        local_48 = (code *)&LAB_1801eddf0;
        local_40 = &local_80;
        local_38 = &LAB_1801eddf0;
                    /* WARNING: Subroutine does not return */
        FUN_180201ee0(&DAT_18029389d,&local_70,param_5);
      }
      if ((param_2 <= param_3 || param_3 == 0) ||
         (local_a8 = param_3, -0x41 < *(char *)(param_1 + param_3))) {
        local_a8 = param_4;
      }
      local_90 = local_a8;
      if (local_a8 < param_2) {
        for (; local_90 != 0; local_90 = local_90 - 1) {
          if (-0x41 < *(char *)(param_1 + local_90)) goto LAB_1801f1c5f;
        }
        local_90 = 0;
LAB_1801f1c5f:
        if (local_90 != param_2) {
          bVar1 = *(byte *)(param_1 + local_90);
          local_c = (uint)bVar1;
          if ((char)bVar1 < '\0') {
            uVar2 = *(byte *)(param_1 + 1 + local_90) & 0x3f;
            if (bVar1 < 0xe0) {
              local_c = (local_c & 0x1f) << 6 | uVar2;
            }
            else {
              uVar2 = *(byte *)(param_1 + 2 + local_90) & 0x3f | uVar2 << 6;
              if (bVar1 < 0xf0) {
                local_c = uVar2 | (local_c & 0x1f) << 0xc;
              }
              else {
                local_c = *(byte *)(param_1 + 3 + local_90) & 0x3f | uVar2 << 6 |
                          (local_c & 7) << 0x12;
                if (local_c == 0x110000) goto LAB_1801f1c64;
              }
            }
            local_88 = 1;
            if ((0x7f < local_c) && (local_88 = 2, 0x7ff < local_c)) {
              local_88 = 4 - (ulonglong)(local_c < 0x10000);
            }
          }
          else {
            local_88 = 1;
          }
          local_88 = local_88 + local_90;
          local_70 = &local_a8;
          local_68 = FUN_1801ee720;
          local_60 = (ulonglong *)&local_c;
          local_58 = FUN_1801edc00;
          local_50 = (undefined **)&local_90;
          local_48 = FUN_1801f52d0;
          local_40 = (undefined **)&local_20;
          local_38 = &LAB_1801eddf0;
          local_30 = &local_80;
          local_28 = &LAB_1801eddf0;
                    /* WARNING: Subroutine does not return */
          FUN_180201ee0(&DAT_1802938c9,&local_70,param_5);
        }
      }
LAB_1801f1c64:
                    /* WARNING: Subroutine does not return */
      FUN_180201ba0(param_5);
    }
    local_90 = param_4;
  }
  local_70 = &local_90;
  local_68 = FUN_1801ee720;
  local_60 = (ulonglong *)&local_20;
  local_58 = (code *)&LAB_1801eddf0;
  local_50 = &local_80;
  local_48 = (code *)&LAB_1801eddf0;
                    /* WARNING: Subroutine does not return */
  FUN_180201ee0(&DAT_180293914,&local_70,param_5);
}


