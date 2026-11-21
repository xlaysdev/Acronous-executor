/* FUN_1801ae010 @ 1801ae010 */

void FUN_1801ae010(longlong *param_1,longlong *param_2,undefined1 param_3)

{
  undefined1 uVar1;
  undefined4 local_70;
  undefined1 local_6c;
  longlong local_68;
  longlong lStack_60;
  longlong local_58;
  longlong lStack_50;
  longlong local_48;
  longlong lStack_40;
  longlong local_38;
  longlong lStack_30;
  longlong local_28;
  longlong lStack_20;
  longlong local_18;
  longlong lStack_10;
  undefined2 local_8;
  
  local_8 = (undefined2)param_2[0xd];
  local_18 = param_2[0xb];
  lStack_10 = param_2[0xc];
  local_28 = param_2[9];
  lStack_20 = param_2[10];
  local_38 = param_2[7];
  lStack_30 = param_2[8];
  local_48 = param_2[5];
  lStack_40 = param_2[6];
  local_58 = param_2[3];
  lStack_50 = param_2[4];
  local_68 = param_2[1];
  lStack_60 = param_2[2];
  local_6c = *(undefined1 *)((longlong)param_2 + 0x6f);
  local_70 = *(undefined4 *)((longlong)param_2 + 0x6b);
  uVar1 = *(undefined1 *)((longlong)param_2 + 0x6a);
  if (*param_2 != 3) {
    local_8 = (undefined2)param_2[0xd];
    local_18 = param_2[0xb];
    lStack_10 = param_2[0xc];
    local_28 = param_2[9];
    lStack_20 = param_2[10];
    local_68 = param_2[1];
    lStack_60 = param_2[2];
    local_58 = param_2[3];
    lStack_50 = param_2[4];
    local_48 = param_2[5];
    lStack_40 = param_2[6];
    local_38 = param_2[7];
    lStack_30 = param_2[8];
    local_70 = *(undefined4 *)((longlong)param_2 + 0x6b);
    local_6c = *(undefined1 *)((longlong)param_2 + 0x6f);
    uVar1 = param_3;
  }
  *param_1 = *param_2;
  param_1[1] = local_68;
  param_1[2] = lStack_60;
  param_1[3] = local_58;
  param_1[4] = lStack_50;
  param_1[5] = local_48;
  param_1[6] = lStack_40;
  param_1[7] = local_38;
  param_1[8] = lStack_30;
  param_1[9] = local_28;
  param_1[10] = lStack_20;
  param_1[0xb] = local_18;
  param_1[0xc] = lStack_10;
  *(undefined2 *)(param_1 + 0xd) = local_8;
  *(undefined1 *)((longlong)param_1 + 0x6a) = uVar1;
  *(undefined4 *)((longlong)param_1 + 0x6b) = local_70;
  *(undefined1 *)((longlong)param_1 + 0x6f) = local_6c;
  return;
}


