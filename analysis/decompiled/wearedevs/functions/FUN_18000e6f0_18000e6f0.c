/* FUN_18000e6f0 @ 18000e6f0 */

void FUN_18000e6f0(longlong *param_1,ulonglong *param_2,undefined8 param_3)

{
  ulonglong uVar1;
  longlong *plVar2;
  code *pcVar3;
  undefined1 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  undefined1 local_448 [272];
  longlong local_338;
  ulonglong *local_330;
  longlong local_328;
  longlong lStack_320;
  longlong local_318;
  longlong lStack_310;
  longlong local_308;
  longlong lStack_300;
  longlong local_2f8;
  longlong lStack_2f0;
  longlong local_2e8;
  longlong lStack_2e0;
  longlong local_2d8;
  longlong lStack_2d0;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined2 local_2b8;
  undefined6 uStack_2b6;
  longlong local_2b0;
  ulonglong *puStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined1 local_258;
  undefined4 local_257;
  undefined3 uStack_253;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined1 local_238;
  longlong local_110;
  ulonglong *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  longlong local_b8;
  longlong lStack_b0;
  longlong local_a8;
  longlong lStack_a0;
  longlong local_98;
  longlong lStack_90;
  longlong local_88;
  longlong lStack_80;
  longlong local_78;
  longlong lStack_70;
  longlong local_68;
  longlong lStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  longlong local_48;
  ulonglong *local_40;
  undefined8 local_38;
  
  local_38 = 0xfffffffffffffffe;
  local_40 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((longlong)param_2 + 0x39)) {
  case 0:
    *(undefined1 *)(param_2 + 7) = 1;
    uVar6 = param_2[4];
    uVar1 = param_2[5];
    FUN_18004e2d0(&local_338);
    uVar5 = FUN_180047810(&local_338);
    *local_40 = uVar5;
    local_40[1] = (ulonglong)param_2;
    if ((uVar5 & 1) == 0) {
      local_40[6] = (ulonglong)param_2;
      *(undefined1 *)(local_40 + 7) = 0;
      FUN_180066c20(&local_110,uVar6,uVar1);
      if (SBORROW8(0,local_110)) {
        local_330 = puStack_108;
        local_338 = 2;
      }
      else {
        local_2e8 = 0;
        lStack_2e0 = 0;
        local_257 = 0;
        uStack_253 = 0;
        local_2b0 = local_110;
        puStack_2a8 = puStack_108;
        local_2a0 = local_100;
        uStack_298 = uStack_f8;
        local_290 = local_f0;
        uStack_288 = uStack_e8;
        local_280 = local_e0;
        uStack_278 = uStack_d8;
        local_270 = local_d0;
        uStack_268 = uStack_c8;
        local_260 = local_c0;
        lStack_310 = 0;
        local_2f8 = 0;
        lStack_2f0 = 8;
        local_2d8 = 8;
        lStack_2d0 = 0;
        local_2c8 = 2;
        uStack_2c0 = 0;
        local_2b8 = 0;
        local_258 = 1;
        local_250 = 0;
        uStack_248 = 0;
        local_240 = 0;
        local_238 = 2;
        local_338 = 0;
      }
      LOCK();
      uVar6 = *param_2;
      *param_2 = *param_2 + 1;
      UNLOCK();
      if (*param_2 == 0 || SCARRY8(uVar6,1) != (longlong)*param_2 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      FUN_18005a910(local_448,param_2,&local_338);
      uVar6 = FUN_18005ac00(local_448);
      local_40[2] = uVar6;
      local_40[3] = (ulonglong)param_2;
      goto switchD_18000e731_caseD_3;
    }
    *(undefined1 *)(local_40 + 7) = 0;
    lVar7 = 3;
    break;
  case 2:
    FUN_180201c80(&PTR_s_C__Users_burne__cargo_registry_s_180203260);
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_180201c60(&PTR_s_C__Users_burne__cargo_registry_s_180203260);
  case 3:
switchD_18000e731_caseD_3:
    FUN_18004ed00(&local_338,local_40 + 2,param_3);
    param_2 = local_330;
    lVar7 = local_338;
    if (local_338 == 4) {
      *param_1 = 4;
      uVar4 = 3;
      goto LAB_18000ea34;
    }
    local_b8 = local_328;
    lStack_b0 = lStack_320;
    local_a8 = local_318;
    lStack_a0 = lStack_310;
    local_98 = local_308;
    lStack_90 = lStack_300;
    local_88 = local_2f8;
    lStack_80 = lStack_2f0;
    local_78 = local_2e8;
    lStack_70 = lStack_2e0;
    local_68 = local_2d8;
    lStack_60 = lStack_2d0;
    local_58 = (undefined4)local_2c8;
    uStack_54 = local_2c8._4_4_;
    uStack_50 = (undefined4)uStack_2c0;
    uStack_4c = uStack_2c0._4_4_;
    local_48 = CONCAT62(uStack_2b6,local_2b8);
    FUN_18000b8f0(local_40[2],local_40[3]);
    plVar2 = (longlong *)local_40[6];
    LOCK();
    *plVar2 = *plVar2 + -1;
    UNLOCK();
    if (*plVar2 == 0) {
      FUN_18003e300(local_40 + 6);
    }
    *(undefined1 *)(local_40 + 7) = 0;
  }
  *param_1 = lVar7;
  param_1[1] = (longlong)param_2;
  param_1[2] = local_b8;
  param_1[3] = lStack_b0;
  param_1[4] = local_a8;
  param_1[5] = lStack_a0;
  param_1[6] = local_98;
  param_1[7] = lStack_90;
  param_1[8] = local_88;
  param_1[9] = lStack_80;
  param_1[10] = local_78;
  param_1[0xb] = lStack_70;
  param_1[0xc] = local_68;
  param_1[0xd] = lStack_60;
  param_1[0xe] = CONCAT44(uStack_54,local_58);
  param_1[0xf] = CONCAT44(uStack_4c,uStack_50);
  param_1[0x10] = local_48;
  uVar4 = 1;
LAB_18000ea34:
  *(undefined1 *)((longlong)local_40 + 0x39) = uVar4;
  return;
}


