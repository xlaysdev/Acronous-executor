/* FUN_1801ad590 @ 1801ad590 */

undefined8 * FUN_1801ad590(undefined8 *param_1,char *param_2)

{
  char local_b8;
  char local_b7;
  char local_b6;
  undefined4 local_b5;
  undefined4 uStack_b1;
  undefined4 uStack_ad;
  undefined4 uStack_a9;
  undefined4 local_a5;
  undefined4 uStack_a1;
  undefined4 uStack_9d;
  undefined4 uStack_99;
  undefined4 local_95;
  undefined4 uStack_91;
  undefined4 uStack_8d;
  undefined4 uStack_89;
  undefined4 local_85;
  undefined4 uStack_81;
  undefined4 uStack_7d;
  undefined4 uStack_79;
  undefined8 local_75;
  undefined5 uStack_6d;
  undefined3 uStack_68;
  undefined5 uStack_65;
  char local_60;
  undefined1 uStack_5f;
  undefined6 uStack_5e;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  undefined8 uStack_18;
  undefined8 local_10;
  
  local_b8 = *param_2;
  local_b7 = param_2[1];
  local_b6 = param_2[2];
  if (local_b8 == '\x04') {
    *(char *)((longlong)param_1 + 1) = local_b7;
    *(char *)((longlong)param_1 + 2) = local_b6;
    *(undefined1 *)param_1 = 3;
    return param_1;
  }
  uStack_65 = (undefined5)((ulonglong)*(undefined8 *)(param_2 + 0x50) >> 0x18);
  local_75 = *(undefined8 *)(param_2 + 0x43);
  uStack_6d = (undefined5)*(undefined8 *)(param_2 + 0x4b);
  uStack_68 = (undefined3)((ulonglong)*(undefined8 *)(param_2 + 0x4b) >> 0x28);
  local_b5 = *(undefined4 *)(param_2 + 3);
  uStack_b1 = *(undefined4 *)(param_2 + 7);
  uStack_ad = *(undefined4 *)(param_2 + 0xb);
  uStack_a9 = *(undefined4 *)(param_2 + 0xf);
  local_a5 = *(undefined4 *)(param_2 + 0x13);
  uStack_a1 = *(undefined4 *)(param_2 + 0x17);
  uStack_9d = *(undefined4 *)(param_2 + 0x1b);
  uStack_99 = *(undefined4 *)(param_2 + 0x1f);
  local_95 = *(undefined4 *)(param_2 + 0x23);
  uStack_91 = *(undefined4 *)(param_2 + 0x27);
  uStack_8d = *(undefined4 *)(param_2 + 0x2b);
  uStack_89 = *(undefined4 *)(param_2 + 0x2f);
  local_85 = *(undefined4 *)(param_2 + 0x33);
  uStack_81 = *(undefined4 *)(param_2 + 0x37);
  uStack_7d = *(undefined4 *)(param_2 + 0x3b);
  uStack_79 = *(undefined4 *)(param_2 + 0x3f);
  FUN_1801ab8a0(&local_60,&local_b8);
  if (local_60 == '\x03') {
    *(undefined1 *)((longlong)param_1 + 2) = uStack_5f;
    *(undefined2 *)param_1 = 0x303;
    return param_1;
  }
  param_1[10] = local_10;
  param_1[8] = local_20;
  param_1[9] = uStack_18;
  param_1[6] = local_30;
  param_1[7] = uStack_28;
  param_1[4] = local_40;
  param_1[5] = uStack_38;
  param_1[2] = local_50;
  param_1[3] = uStack_48;
  *param_1 = CONCAT62(uStack_5e,CONCAT11(uStack_5f,local_60));
  param_1[1] = uStack_58;
  return param_1;
}


