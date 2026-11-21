/* FUN_180107c10 @ 180107c10 */

void FUN_180107c10(undefined8 *param_1)

{
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined8 local_90;
  longlong local_88;
  undefined8 local_80;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  longlong local_20;
  undefined8 local_18;
  
  local_18 = 0xfffffffffffffffe;
  FUN_1801d7ad0(&local_88,&DAT_18023b680,0xe);
  local_20 = local_88;
  FUN_1801053f0(&local_38,&PTR_DAT_18023b6a0);
  FUN_1801053f0(&local_50,&PTR_s_HTTP_PROXYhttp_proxy_18023b6d8);
  FUN_1801053f0(&local_68,&PTR_s_HTTPS_PROXYhttps_proxy_18023b710);
  FUN_1801053f0(&local_a0,&PTR_DAT_18023b740);
  *(bool *)(param_1 + 0xc) = !SBORROW8(0,local_20);
  param_1[2] = local_28;
  *param_1 = local_38;
  param_1[1] = uStack_30;
  param_1[5] = local_40;
  param_1[3] = local_50;
  param_1[4] = uStack_48;
  param_1[8] = local_58;
  param_1[6] = local_68;
  param_1[7] = uStack_60;
  *(undefined4 *)(param_1 + 9) = local_a0;
  *(undefined4 *)((longlong)param_1 + 0x4c) = uStack_9c;
  *(undefined4 *)(param_1 + 10) = uStack_98;
  *(undefined4 *)((longlong)param_1 + 0x54) = uStack_94;
  param_1[0xb] = local_90;
  if ((!SBORROW8(0,local_20)) && (local_20 != 0)) {
    thunk_FUN_1801d3330(local_80,local_20,1);
  }
  return;
}


