/* FUN_180059120 @ 180059120 */

void FUN_180059120(longlong param_1,undefined8 *param_2)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong *puVar5;
  undefined8 *puVar6;
  int local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 uStack_15c;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined8 local_128;
  undefined8 uStack_120;
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  ulonglong *local_c8;
  code *pcStack_c0;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  ulonglong local_68;
  undefined8 *local_60;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  ulonglong local_40;
  longlong local_38;
  ulonglong *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  puVar5 = (ulonglong *)(param_1 + 0x1a0);
  local_68 = *(ulonglong *)(param_1 + 0x1a0);
  local_60 = param_2;
  if (0x8000000000000001 < local_68) {
    pcStack_c0 = FUN_180114980;
    local_c8 = puVar5;
                    /* WARNING: Subroutine does not return */
    FUN_180201ee0(&DAT_180209410,&local_c8,&PTR_s_C__Users_burne__cargo_registry_s_180209460);
  }
  local_78 = param_2[10];
  uStack_70 = param_2[0xb];
  local_88 = param_2[8];
  uStack_80 = param_2[9];
  local_c8 = (ulonglong *)*param_2;
  pcStack_c0 = (code *)param_2[1];
  local_b8 = *(undefined4 *)(param_2 + 2);
  uStack_b4 = *(undefined4 *)((longlong)param_2 + 0x14);
  uStack_b0 = *(undefined4 *)(param_2 + 3);
  uStack_ac = *(undefined4 *)((longlong)param_2 + 0x1c);
  local_a8 = *(undefined4 *)(param_2 + 4);
  uStack_a4 = *(undefined4 *)((longlong)param_2 + 0x24);
  uStack_a0 = *(undefined4 *)(param_2 + 5);
  uStack_9c = *(undefined4 *)((longlong)param_2 + 0x2c);
  local_98 = *(undefined4 *)(param_2 + 6);
  uStack_94 = *(undefined4 *)((longlong)param_2 + 0x34);
  uStack_90 = *(undefined4 *)(param_2 + 7);
  uStack_8c = *(undefined4 *)((longlong)param_2 + 0x3c);
  FUN_1800ca100(&local_118,puVar5,&local_c8,*(undefined1 *)(param_1 + 0x1f9));
  if (local_118 != 5) {
    local_128 = local_d8;
    uStack_120 = uStack_d0;
    local_138 = local_e8;
    uStack_134 = uStack_e4;
    uStack_130 = uStack_e0;
    uStack_12c = uStack_dc;
    local_148 = local_f8;
    uStack_144 = uStack_f4;
    uStack_140 = uStack_f0;
    uStack_13c = uStack_ec;
    local_158 = local_108;
    uStack_154 = uStack_104;
    uStack_150 = uStack_100;
    uStack_14c = uStack_fc;
    local_168 = local_118;
    uStack_164 = uStack_114;
    uStack_160 = uStack_110;
    uStack_15c = uStack_10c;
    FUN_1800693c0(param_1 + 0x10,&local_168);
    uVar4 = (ulonglong)*(byte *)(param_1 + 0x1b8) | 0x8000000000000004;
    uVar3 = *(ulonglong *)(param_1 + 0x1a0);
    if (-1 < (longlong)uVar3) {
      lVar1 = *(longlong *)(param_1 + 0x1b0);
      if (lVar1 != 0) {
        local_50 = *(longlong *)(param_1 + 0x1a8);
        puVar6 = (undefined8 *)(local_50 + 0x18);
        lVar2 = 1;
        local_58 = lVar1;
        local_40 = uVar4;
        local_38 = param_1;
        local_30 = puVar5;
        do {
          local_48 = lVar2;
          if (puVar6[-3] != 0) {
            (**(code **)(puVar6[-3] + 0x20))(*puVar6,puVar6[-2],puVar6[-1]);
          }
          lVar2 = local_48 + 1;
          puVar6 = puVar6 + 4;
        } while (local_48 != lVar1);
        uVar3 = *local_30;
        uVar4 = local_40;
        puVar5 = local_30;
        param_1 = local_38;
      }
      if (uVar3 != 0) {
        thunk_FUN_1801d3330(*(undefined8 *)(param_1 + 0x1a8),uVar3 << 5,8);
      }
    }
    *puVar5 = uVar4;
  }
  return;
}


