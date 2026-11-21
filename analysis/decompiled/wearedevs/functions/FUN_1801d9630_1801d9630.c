/* FUN_1801d9630 @ 1801d9630 */

void FUN_1801d9630(undefined8 *param_1,undefined8 param_2)

{
  int local_f8;
  undefined4 uStack_f4;
  ulonglong uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  int local_a0;
  undefined4 uStack_9c;
  longlong lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 uStack_5c;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  ulonglong local_48;
  longlong local_40;
  undefined8 local_38;
  undefined8 *local_30;
  undefined8 local_28;
  
  local_28 = 0xfffffffffffffffe;
  FUN_1801d9d70(&local_f8,param_2,0);
  if ((local_f8 == 2) && ((uStack_f0 & 0xffffffff00000003) == 0x78000000002)) {
    local_48 = uStack_f0;
    FUN_1801d9d70(&local_a0,param_2,0x200000);
    if (local_a0 == 2) {
      if (((uint)lStack_98 & 3) == 1) {
        local_40 = lStack_98 + -1;
        local_38 = *(undefined8 *)(lStack_98 + -1);
        local_30 = *(undefined8 **)(lStack_98 + 7);
        if ((code *)*local_30 != (code *)0x0) {
          (*(code *)*local_30)(local_38);
        }
        if (local_30[1] != 0) {
          thunk_FUN_1801d3330(local_38,local_30[1],local_30[2]);
        }
        thunk_FUN_1801d3330(local_40,0x18,8);
      }
    }
    else if ((local_50 & 0x20000000) == 0 || (local_54 & 0x400) == 0) {
      *(ulonglong *)((longlong)param_1 + 0x3c) = CONCAT44(uStack_60,local_64);
      *(undefined8 *)((longlong)param_1 + 0x44) = uStack_5c;
      param_1[6] = uStack_70;
      param_1[7] = CONCAT44(local_64,uStack_68);
      param_1[4] = local_80;
      param_1[5] = uStack_78;
      param_1[2] = local_90;
      param_1[3] = uStack_88;
      *param_1 = CONCAT44(uStack_9c,local_a0);
      param_1[1] = lStack_98;
      *(uint *)((longlong)param_1 + 0x4c) = local_54;
      *(uint *)(param_1 + 10) = local_50;
      *(undefined4 *)((longlong)param_1 + 0x54) = local_4c;
      return;
    }
    param_1[1] = uStack_f0;
    *param_1 = 2;
  }
  else {
    param_1[10] = local_a8;
    param_1[8] = local_b8;
    param_1[9] = uStack_b0;
    param_1[6] = local_c8;
    param_1[7] = uStack_c0;
    param_1[4] = local_d8;
    param_1[5] = uStack_d0;
    param_1[2] = local_e8;
    param_1[3] = uStack_e0;
    *param_1 = CONCAT44(uStack_f4,local_f8);
    param_1[1] = uStack_f0;
  }
  return;
}


